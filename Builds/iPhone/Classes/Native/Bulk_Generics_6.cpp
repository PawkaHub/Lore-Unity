#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3E.h"
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
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3EMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
#include "Parse_Unity_System_Tuple_2_gen_6.h"
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2/<>c__DisplayClass4<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3E_0.h"
// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactory.h"
#include "Parse.Unity_ArrayTypes.h"
// System.Threading.Tasks.Task`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2.h"
// System.Action`1<System.Threading.Tasks.Task[]>
#include "mscorlib_System_Action_1_gen_11.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2/<>c__DisplayClass4<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3E_0MethodDeclarations.h"
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
#include "Parse_Unity_System_Tuple_2_gen_6MethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task[]>
#include "mscorlib_System_Action_1_gen_11MethodDeclarations.h"
// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactoryMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass2__ctor_m38689_gshared (U3CU3Ec__DisplayClass2_t7125 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>::<Invoke>b__0(System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>)
extern TypeInfo* Action_1_t1943_il2cpp_TypeInfo_var;
extern const MethodInfo* Tuple_2_get_Item2_m38560_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m9397_MethodInfo_var;
extern "C" Task_t344 * U3CU3Ec__DisplayClass2_U3CInvokeU3Eb__0_m38690_gshared (U3CU3Ec__DisplayClass2_t7125 * __this, Tuple_2_t2935 * ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4624);
		Tuple_2_get_Item2_m38560_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485578);
		Action_1__ctor_m9397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485108);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass4_t7127 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass4_t7127 * L_0 = (U3CU3Ec__DisplayClass4_t7127 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass4_t7127 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass4_t7127 *)L_0;
		U3CU3Ec__DisplayClass4_t7127 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals3_0 = __this;
		U3CU3Ec__DisplayClass4_t7127 * L_2 = V_0;
		Tuple_2_t2935 * L_3 = ___p;
		NullCheck(L_2);
		L_2->___p_1 = L_3;
		U3CU3Ec__DisplayClass4_t7127 * L_4 = V_0;
		NullCheck(L_4);
		Tuple_2_t2935 * L_5 = (Tuple_2_t2935 *)(L_4->___p_1);
		NullCheck((Tuple_2_t2935 *)L_5);
		TaskFactory_t1946 * L_6 = Tuple_2_get_Item2_m38560((Tuple_2_t2935 *)L_5, /*hidden argument*/Tuple_2_get_Item2_m38560_MethodInfo_var);
		Task_1U5BU5D_t7124* L_7 = (Task_1U5BU5D_t7124*)(__this->___toContinue_0);
		U3CU3Ec__DisplayClass4_t7127 * L_8 = V_0;
		IntPtr_t L_9 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1943 * L_10 = (Action_1_t1943 *)il2cpp_codegen_object_new (Action_1_t1943_il2cpp_TypeInfo_var);
		Action_1__ctor_m9397(L_10, (Object_t *)L_8, (IntPtr_t)L_9, /*hidden argument*/Action_1__ctor_m9397_MethodInfo_var);
		NullCheck((TaskFactory_t1946 *)L_6);
		Task_t344 * L_11 = TaskFactory_ContinueWhenAll_m8859((TaskFactory_t1946 *)L_6, (TaskU5BU5D_t1922*)(TaskU5BU5D_t1922*)L_7, (Action_1_t1943 *)L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2/<>c__DisplayClass4<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4__ctor_m38697_gshared (U3CU3Ec__DisplayClass4_t7127 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2/<>c__DisplayClass4<System.Object>::<Invoke>b__1(System.Threading.Tasks.Task[])
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern const MethodInfo* Tuple_2_get_Item1_m38556_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass4_U3CInvokeU3Eb__1_m38698_gshared (U3CU3Ec__DisplayClass4_t7127 * __this, TaskU5BU5D_t1922* ____, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Tuple_2_get_Item1_m38556_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485571);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		Tuple_2_t2935 * L_0 = (Tuple_2_t2935 *)(__this->___p_1);
		NullCheck((Tuple_2_t2935 *)L_0);
		Delegate_t651 * L_1 = Tuple_2_get_Item1_m38556((Tuple_2_t2935 *)L_0, /*hidden argument*/Tuple_2_get_Item1_m38556_MethodInfo_var);
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		ObjectU5BU5D_t21* L_2 = V_0;
		U3CU3Ec__DisplayClass2_t7125 * L_3 = (U3CU3Ec__DisplayClass2_t7125 *)(__this->___CSU24U3CU3E8__locals3_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)(L_3->___sender_1);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = V_0;
		U3CU3Ec__DisplayClass2_t7125 * L_6 = (U3CU3Ec__DisplayClass2_t7125 *)(__this->___CSU24U3CU3E8__locals3_0);
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)(L_6->___args_2);
		Object_t * L_8 = L_7;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, ((Object_t *)L_8));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)((Object_t *)L_8);
		ObjectU5BU5D_t21* L_9 = V_0;
		NullCheck((Delegate_t651 *)L_1);
		Delegate_DynamicInvoke_m19286((Delegate_t651 *)L_1, (ObjectU5BU5D_t21*)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Progress`1/<>c__DisplayClass6<System.Object>
#include "Parse_Unity_System_Progress_1_U3CU3Ec__DisplayClass6_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Progress`1/<>c__DisplayClass6<System.Object>
#include "Parse_Unity_System_Progress_1_U3CU3Ec__DisplayClass6_genMethodDeclarations.h"

// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25.h"
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"


// System.Void System.Progress`1/<>c__DisplayClass6<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass6__ctor_m38768_gshared (U3CU3Ec__DisplayClass6_t7131 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Progress`1/<>c__DisplayClass6<System.Object>::<.ctor>b__2(System.Object,T)
extern "C" void U3CU3Ec__DisplayClass6_U3C_ctorU3Eb__2_m38769_gshared (U3CU3Ec__DisplayClass6_t7131 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method)
{
	{
		Action_1_t3305 * L_0 = (Action_1_t3305 *)(__this->___handler_1);
		Object_t * L_1 = ___args;
		NullCheck((Action_1_t3305 *)L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<System.Object>::Invoke(!0) */, (Action_1_t3305 *)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Threading.ThreadLocal`1<System.Object>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadLocal`1<System.Object>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_56.h"
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_7.h"
// System.String
#include "mscorlib_System_String.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.List`1<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_gen_117.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_56MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_7MethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Collections.Generic.List`1<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_gen_117MethodDeclarations.h"


// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Object>::get_ThreadLocalData()
extern TypeInfo* WeakReference_t2793_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t10360_il2cpp_TypeInfo_var;
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m38770_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4656);
		ICollection_1_t10360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13985);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t7134_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		Dictionary_2_t7140 * L_1 = (Dictionary_2_t7140 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t7134_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1 = L_1;
		Object_t* L_2 = ((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_3 = (Object_t*)L_2;
		V_0 = (Object_t*)L_3;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_4 = ((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_5 = ((ThreadLocal_1_t7134_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		WeakReference_t2793 * L_6 = (WeakReference_t2793 *)il2cpp_codegen_object_new (WeakReference_t2793_il2cpp_TypeInfo_var);
		WeakReference__ctor_m15369(L_6, (Object_t *)L_5, /*hidden argument*/NULL);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker1< WeakReference_t2793 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.WeakReference>::Add(!0) */, ICollection_1_t10360_il2cpp_TypeInfo_var, (Object_t*)L_4, (WeakReference_t2793 *)L_6);
		IL2CPP_LEAVE(0x3A, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_t* L_7 = V_0;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_8 = ((ThreadLocal_1_t7134_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		return L_8;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Object>::.ctor()
extern "C" void ThreadLocal_1__ctor_m38771_gshared (ThreadLocal_1_t7134 * __this, const MethodInfo* method)
{
	ThreadLocal_1_t7134 * G_B2_0 = {0};
	ThreadLocal_1_t7134 * G_B1_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_1_t1996 * L_0 = ((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
		G_B1_0 = ((ThreadLocal_1_t7134 *)(__this));
		if (L_0)
		{
			G_B2_0 = ((ThreadLocal_1_t7134 *)(__this));
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Func_1_t1996 * L_2 = (Func_1_t1996 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Func_1_t1996 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6 = L_2;
		G_B2_0 = ((ThreadLocal_1_t7134 *)(G_B1_0));
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_1_t1996 * L_3 = ((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
		NullCheck((ThreadLocal_1_t7134 *)G_B2_0);
		(( void (*) (ThreadLocal_1_t7134 *, Func_1_t1996 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ThreadLocal_1_t7134 *)G_B2_0, (Func_1_t1996 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Object>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m38772_gshared (ThreadLocal_1_t7134 * __this, Func_1_t1996 * ___valueFactory, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Func_1_t1996 * L_0 = ___valueFactory;
		__this->___valueFactory_5 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = Interlocked_Increment_m22454(NULL /*static, unused*/, (int64_t*)(&((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0), /*hidden argument*/NULL);
		__this->___id_4 = L_1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Object>::get_Value()
extern TypeInfo* ThreadLocal_1_t7134_il2cpp_TypeInfo_var;
extern "C" Object_t * ThreadLocal_1_get_Value_m38773_gshared (ThreadLocal_1_t7134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t7134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13948);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((ThreadLocal_1_t7134 *)__this);
		(( void (*) (ThreadLocal_1_t7134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t7134 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t7134_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_1 = (int64_t)(__this->___id_4);
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, int64_t, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int64_t)L_1, (Object_t **)(&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_3 = V_0;
		return L_3;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t7134_il2cpp_TypeInfo_var);
		Object_t* L_4 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_5 = (int64_t)(__this->___id_4);
		Func_1_t1996 * L_6 = (Func_1_t1996 *)(__this->___valueFactory_5);
		NullCheck((Func_1_t1996 *)L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* !0 System.Func`1<System.Object>::Invoke() */, (Func_1_t1996 *)L_6);
		Object_t * L_8 = (Object_t *)L_7;
		V_1 = (Object_t *)L_8;
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< int64_t, Object_t * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_4, (int64_t)L_5, (Object_t *)L_8);
		Object_t * L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Object>::set_Value(T)
extern TypeInfo* ThreadLocal_1_t7134_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_set_Value_m38774_gshared (ThreadLocal_1_t7134 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t7134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13948);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ThreadLocal_1_t7134 *)__this);
		(( void (*) (ThreadLocal_1_t7134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t7134 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t7134_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_1 = (int64_t)(__this->___id_4);
		Object_t * L_2 = ___value;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int64_t, Object_t * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int64_t)L_1, (Object_t *)L_2);
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Object>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m38775_gshared (ThreadLocal_1_t7134 * __this, const MethodInfo* method)
{
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
			bool L_0 = (bool)(__this->___disposed_3);
			if (L_0)
			{
				goto IL_000e;
			}
		}

IL_0008:
		{
			NullCheck((ThreadLocal_1_t7134 *)__this);
			(( void (*) (ThreadLocal_1_t7134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((ThreadLocal_1_t7134 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		}

IL_000e:
		{
			IL2CPP_LEAVE(0x17, FINALLY_0010);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Object>::CheckDisposed()
extern TypeInfo* ObjectDisposedException_t3310_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_CheckDisposed_m38776_gshared (ThreadLocal_1_t7134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
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
		ObjectDisposedException_t3310 * L_1 = (ObjectDisposedException_t3310 *)il2cpp_codegen_object_new (ObjectDisposedException_t3310_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m10475(L_1, (String_t*)(String_t*) &_stringLiteral1455, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Object>::Dispose()
extern TypeInfo* IList_1_t7133_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t10360_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_Dispose_m38777_gshared (ThreadLocal_1_t7134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t7133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13969);
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		ICollection_1_t10360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13985);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_1 = (Object_t*)L_0;
		V_2 = (Object_t*)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
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
			Object_t* L_2 = ((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_3 = V_0;
			NullCheck((Object_t*)L_2);
			WeakReference_t2793 * L_4 = (WeakReference_t2793 *)InterfaceFuncInvoker1< WeakReference_t2793 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.WeakReference>::get_Item(System.Int32) */, IList_1_t7133_il2cpp_TypeInfo_var, (Object_t*)L_2, (int32_t)L_3);
			NullCheck((WeakReference_t2793 *)L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t2793 *)L_4);
			V_1 = (Object_t*)((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)));
			Object_t* L_6 = V_1;
			if (L_6)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_7 = ((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_8 = V_0;
			NullCheck((Object_t*)L_7);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.WeakReference>::RemoveAt(System.Int32) */, IList_1_t7133_il2cpp_TypeInfo_var, (Object_t*)L_7, (int32_t)L_8);
			int32_t L_9 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_9-(int32_t)1));
			goto IL_004c;
		}

IL_003a:
		{
			Object_t* L_10 = V_1;
			int64_t L_11 = (int64_t)(__this->___id_4);
			int64_t L_12 = L_11;
			Object_t * L_13 = Box(Int64_t776_il2cpp_TypeInfo_var, &L_12);
			NullCheck((Object_t*)L_10);
			InterfaceFuncInvoker1< bool, Object_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), (Object_t*)L_10, (Object_t *)L_13);
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
			Object_t* L_16 = ((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			NullCheck((Object_t*)L_16);
			int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.WeakReference>::get_Count() */, ICollection_1_t10360_il2cpp_TypeInfo_var, (Object_t*)L_16);
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		Object_t* L_18 = V_2;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0066:
	{
		__this->___disposed_3 = 1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Object>::<.ctor>b__0()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * ThreadLocal_1_U3C_ctorU3Eb__0_m38778_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Object>::.cctor()
extern TypeInfo* List_1_t7154_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m38937_MethodInfo_var;
extern "C" void ThreadLocal_1__cctor_m38779_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t7154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13986);
		List_1__ctor_m38937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485579);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0 = (((int64_t)(-1)));
		List_1_t7154 * L_0 = (List_1_t7154 *)il2cpp_codegen_object_new (List_1_t7154_il2cpp_TypeInfo_var);
		List_1__ctor_m38937(L_0, /*hidden argument*/List_1__ctor_m38937_MethodInfo_var);
		((ThreadLocal_1_t7134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t7135  Array_InternalArray__get_Item_TisKeyValuePair_2_t7135_m74185_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t7135_m74185(__this, p0, method) (( KeyValuePair_2_t7135  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t7135_m74185_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m38780_gshared (InternalEnumerator_1_t7136 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m38781_gshared (InternalEnumerator_1_t7136 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m38782_gshared (InternalEnumerator_1_t7136 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t7135  L_0 = (( KeyValuePair_2_t7135  (*) (InternalEnumerator_1_t7136 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t7136 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t7135  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m38783_gshared (InternalEnumerator_1_t7136 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m38784_gshared (InternalEnumerator_1_t7136 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t7135  InternalEnumerator_1_get_Current_m38785_gshared (InternalEnumerator_1_t7136 * __this, const MethodInfo* method)
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
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4622, /*hidden argument*/NULL);
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
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4623, /*hidden argument*/NULL);
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
		KeyValuePair_2_t7135  L_8 = (( KeyValuePair_2_t7135  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38MethodDeclarations.h"

// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m38786_gshared (KeyValuePair_2_t7135 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t7135 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t7135 *)__this, (int64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t7135 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t7135 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Key()
extern "C" int64_t KeyValuePair_2_get_Key_m38787_gshared (KeyValuePair_2_t7135 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (int64_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m38788_gshared (KeyValuePair_2_t7135 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m38789_gshared (KeyValuePair_2_t7135 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m38790_gshared (KeyValuePair_2_t7135 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::ToString()
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m38791_gshared (KeyValuePair_2_t7135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	Object_t * V_1 = {0};
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
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1016);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1016;
		StringU5BU5D_t20* L_1 = (StringU5BU5D_t20*)L_0;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t7135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		int64_t L_5 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t7135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral259);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral259;
		StringU5BU5D_t20* L_9 = (StringU5BU5D_t20*)L_8;
		Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t7135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_11 = L_10;
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!((Object_t *)L_11))
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		Object_t * L_12 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t7135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_12;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
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
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral565);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral565;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3337(NULL /*static, unused*/, (StringU5BU5D_t20*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current()
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_89.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_89MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" int64_t Array_InternalArray__get_Item_TisInt64_t776_m74196_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt64_t776_m74196(__this, p0, method) (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt64_t776_m74196_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m38792_gshared (InternalEnumerator_1_t7137 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m38793_gshared (InternalEnumerator_1_t7137 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m38794_gshared (InternalEnumerator_1_t7137 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (InternalEnumerator_1_t7137 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t7137 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m38795_gshared (InternalEnumerator_1_t7137 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m38796_gshared (InternalEnumerator_1_t7137 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" int64_t InternalEnumerator_1_get_Current_m38797_gshared (InternalEnumerator_1_t7137 * __this, const MethodInfo* method)
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
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4622, /*hidden argument*/NULL);
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
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4623, /*hidden argument*/NULL);
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
		int64_t L_8 = (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_45.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_7.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_45MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_7MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t7140;
struct DictionaryEntryU5BU5D_t11084;
struct Transform_1_t7139;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t748_TisDictionaryEntry_t748_m74211_gshared (Dictionary_2_t7140 * __this, DictionaryEntryU5BU5D_t11084* p0, int32_t p1, Transform_1_t7139 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t748_TisDictionaryEntry_t748_m74211(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t7140 *, DictionaryEntryU5BU5D_t11084*, int32_t, Transform_1_t7139 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t748_TisDictionaryEntry_t748_m74211_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t7140;
struct Array_t;
struct Transform_1_t7148;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t7135_m74213_gshared (Dictionary_2_t7140 * __this, Array_t * p0, int32_t p1, Transform_1_t7148 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t7135_m74213(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, Transform_1_t7148 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t7135_m74213_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t7140;
struct KeyValuePair_2U5BU5D_t10356;
struct Transform_1_t7148;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t7135_TisKeyValuePair_2_t7135_m74214_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2U5BU5D_t10356* p0, int32_t p1, Transform_1_t7148 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t7135_TisKeyValuePair_2_t7135_m74214(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t10356*, int32_t, Transform_1_t7148 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t7135_TisKeyValuePair_2_t7135_m74214_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m38798_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t7140 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38799_gshared (Dictionary_2_t7140 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t7140 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m38800_gshared (Dictionary_2_t7140 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t7140 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m38801_gshared (Dictionary_2_t7140 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t7140 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m38802_gshared (Dictionary_2_t7140 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
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
	KeyValuePair_2_t7135  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
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
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4730, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t7140 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
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
			KeyValuePair_2_t7135  L_9 = (KeyValuePair_2_t7135 )InterfaceFuncInvoker0< KeyValuePair_2_t7135  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t7135 )L_9;
			int64_t L_10 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t7135 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t7135 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t7140 *)__this);
			VirtActionInvoker2< int64_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t7140 *)__this, (int64_t)L_10, (Object_t *)L_11);
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m38803_gshared (Dictionary_2_t7140 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t3296 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38804_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t7140 *)__this);
		KeyCollection_t7141 * L_0 = (( KeyCollection_t7141 * (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38805_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t7140 *)__this);
		ValueCollection_t7145 * L_0 = (( ValueCollection_t7145 * (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m38806_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t7140 *)__this);
		KeyCollection_t7141 * L_0 = (( KeyCollection_t7141 * (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m38807_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t7140 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t7140 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t7140 *)__this);
		int64_t L_4 = (( int64_t (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t7140 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t7140 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int64_t >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey) */, (Dictionary_2_t7140 *)__this, (int64_t)L_4);
		Object_t * L_6 = L_5;
		return ((Object_t *)L_6);
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m38808_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t7140 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t7140 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t7140 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t7140 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t7140 *)__this);
		VirtActionInvoker2< int64_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t7140 *)__this, (int64_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m38809_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t7140 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t7140 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t7140 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t7140 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t7140 *)__this);
		VirtActionInvoker2< int64_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t7140 *)__this, (int64_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m38810_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
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
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t7140 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t7140 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m38811_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
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
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t7140 *)__this);
		VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey) */, (Dictionary_2_t7140 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38812_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38813_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38814_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38815_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7135  ___keyValuePair, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t7135 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t7135 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t7140 *)__this);
		VirtActionInvoker2< int64_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t7140 *)__this, (int64_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38816_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7135  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t7135  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t7140 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7135 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t7140 *)__this, (KeyValuePair_2_t7135 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38817_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2U5BU5D_t10356* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t10356* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t10356*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t7140 *)__this, (KeyValuePair_2U5BU5D_t10356*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38818_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7135  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t7135  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t7140 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7135 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t7140 *)__this, (KeyValuePair_2_t7135 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t7135 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t7140 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey) */, (Dictionary_2_t7140 *)__this, (int64_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t11084_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m38819_gshared (Dictionary_2_t7140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t11084_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17607);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t10356* V_0 = {0};
	DictionaryEntryU5BU5D_t11084* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t11084* G_B5_1 = {0};
	Dictionary_2_t7140 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t11084* G_B4_1 = {0};
	Dictionary_2_t7140 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t10356*)((KeyValuePair_2U5BU5D_t10356*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t10356* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t10356* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t10356*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t7140 *)__this, (KeyValuePair_2U5BU5D_t10356*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t7140 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t11084*)((DictionaryEntryU5BU5D_t11084*)IsInst(L_6, DictionaryEntryU5BU5D_t11084_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t11084* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t11084* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t7139 * L_10 = ((Dictionary_2_t7140_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t7140 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t7140 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t7139 * L_12 = (Transform_1_t7139 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t7139 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t7140_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t7140 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t7139 * L_13 = ((Dictionary_2_t7140_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t7140 *)G_B5_2);
		(( void (*) (Dictionary_2_t7140 *, DictionaryEntryU5BU5D_t11084*, int32_t, Transform_1_t7139 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t7140 *)G_B5_2, (DictionaryEntryU5BU5D_t11084*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t7139 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t7148 * L_17 = (Transform_1_t7148 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t7148 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, Transform_1_t7148 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t7140 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t7148 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38820_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143  L_0 = {0};
		(( void (*) (Enumerator_t7143 *, Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t7143  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38821_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143  L_0 = {0};
		(( void (*) (Enumerator_t7143 *, Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t7143  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38822_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t7149 * L_0 = (ShimEnumerator_t7149 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t7149 *, Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m38823_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t5246_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_get_Item_m38824_gshared (Dictionary_2_t7140 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		KeyNotFoundException_t5246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10894);
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
		ArgumentNullException_t731 * L_3 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_3, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		LinkU5BU5D_t6220* L_11 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4037* L_16 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
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
		ObjectU5BU5D_t21* L_21 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t6220* L_24 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		KeyNotFoundException_t5246 * L_28 = (KeyNotFoundException_t5246 *)il2cpp_codegen_object_new (KeyNotFoundException_t5246_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m20018(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m38825_gshared (Dictionary_2_t7140 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
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
		ArgumentNullException_t731 * L_3 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_3, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		LinkU5BU5D_t6220* L_13 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4037* L_18 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
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
		LinkU5BU5D_t6220* L_24 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		LinkU5BU5D_t6220* L_40 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t6220* L_43 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t119* L_45 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t119* L_48 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t6220* L_51 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int64U5BU5D_t4037* L_54 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
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
		LinkU5BU5D_t6220* L_58 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t6220* L_60 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t6220* L_63 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t119* L_65 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t119* L_68 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		ObjectU5BU5D_t21* L_71 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_72 = V_2;
		Object_t * L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_71, L_72)) = (Object_t *)L_73;
		int32_t L_74 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t7150_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m38826_gshared (Dictionary_2_t7140 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		EqualityComparer_1_t7150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13982);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t7140 * G_B4_0 = {0};
	Dictionary_2_t7140 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t7140 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_1 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_1, (String_t*)(String_t*) &_stringLiteral2019, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t7140 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t7140 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t7140 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t7150_il2cpp_TypeInfo_var);
		EqualityComparer_1_t7150 * L_5 = (( EqualityComparer_1_t7150 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t7140 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t7140 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t6220_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m38827_gshared (Dictionary_2_t7140 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		LinkU5BU5D_t6220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17608);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t6220*)SZArrayNew(LinkU5BU5D_t6220_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int64U5BU5D_t4037*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m38828_gshared (Dictionary_2_t7140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
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
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral2020, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2021, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t725 * L_7 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_7, (String_t*)(String_t*) &_stringLiteral2022, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m13206((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t7140 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count() */, (Dictionary_2_t7140 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t725 * L_12 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_12, (String_t*)(String_t*) &_stringLiteral2023, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7135  Dictionary_2_make_pair_m38829_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t7135  L_2 = {0};
		(( void (*) (KeyValuePair_2_t7135 *, int64_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (int64_t)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m38830_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m38831_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m38832_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2U5BU5D_t10356* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t10356* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t7140 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t10356* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t7148 * L_5 = (Transform_1_t7148 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t7148 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t10356*, int32_t, Transform_1_t7148 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t7140 *)__this, (KeyValuePair_2U5BU5D_t10356*)L_2, (int32_t)L_3, (Transform_1_t7148 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern TypeInfo* Hashtable_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t6220_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m38833_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4597);
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		LinkU5BU5D_t6220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17608);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t119* V_1 = {0};
	LinkU5BU5D_t6220* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int64U5BU5D_t4037* V_7 = {0};
	ObjectU5BU5D_t21* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1909_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m20217(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t6220*)((LinkU5BU5D_t6220*)SZArrayNew(LinkU5BU5D_t6220_il2cpp_TypeInfo_var, L_3));
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
		LinkU5BU5D_t6220* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4037* L_10 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t6220* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t119* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t119* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t6220* L_26 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_26, L_27))->___Next_1);
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
		LinkU5BU5D_t6220* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (Int64U5BU5D_t4037*)((Int64U5BU5D_t4037*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		Int64U5BU5D_t4037* L_37 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
		Int64U5BU5D_t4037* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_40 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		ObjectU5BU5D_t21* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int64U5BU5D_t4037* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t21* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m38834_gshared (Dictionary_2_t7140 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
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
		ArgumentNullException_t731 * L_3 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_3, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		LinkU5BU5D_t6220* L_12 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4037* L_17 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
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
		ArgumentException_t725 * L_22 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_22, (String_t*)(String_t*) &_stringLiteral4732, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t6220* L_23 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_23, L_24))->___Next_1);
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
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		LinkU5BU5D_t6220* L_38 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t6220* L_41 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t6220* L_44 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t119* L_46 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t119* L_49 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int64U5BU5D_t4037* L_52 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int64_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_52, L_53)) = (int64_t)L_54;
		ObjectU5BU5D_t21* L_55 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_56 = V_2;
		Object_t * L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, L_56)) = (Object_t *)L_57;
		int32_t L_58 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m38835_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int64U5BU5D_t4037* L_2 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
		Int64U5BU5D_t4037* L_3 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_4 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		ObjectU5BU5D_t21* L_5 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t6220* L_6 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		LinkU5BU5D_t6220* L_7 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m38836_gshared (Dictionary_2_t7140 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
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
		ArgumentNullException_t731 * L_3 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_3, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		LinkU5BU5D_t6220* L_11 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4037* L_16 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
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
		LinkU5BU5D_t6220* L_21 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_21, L_22))->___Next_1);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m38837_gshared (Dictionary_2_t7140 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_0 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
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
		ObjectU5BU5D_t21* L_5 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), (Object_t *)L_8);
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
		LinkU5BU5D_t6220* L_10 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_10, L_11))->___Next_1);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m38838_gshared (Dictionary_2_t7140 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t10356* V_0 = {0};
	{
		SerializationInfo_t3296 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral224, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t3296 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t3296 *)L_2);
		SerializationInfo_AddValue_m13280((SerializationInfo_t3296 *)L_2, (String_t*)(String_t*) &_stringLiteral3116, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t3296 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t3296 *)L_4);
		SerializationInfo_AddValue_m13281((SerializationInfo_t3296 *)L_4, (String_t*)(String_t*) &_stringLiteral3118, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t10356*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t10356*)((KeyValuePair_2U5BU5D_t10356*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t10356* L_8 = V_0;
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t10356*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t7140 *)__this, (KeyValuePair_2U5BU5D_t10356*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t3296 * L_9 = ___info;
		Int32U5BU5D_t119* L_10 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t3296 *)L_9);
		SerializationInfo_AddValue_m13280((SerializationInfo_t3296 *)L_9, (String_t*)(String_t*) &_stringLiteral4733, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t3296 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t10356* L_12 = V_0;
		NullCheck((SerializationInfo_t3296 *)L_11);
		SerializationInfo_AddValue_m13281((SerializationInfo_t3296 *)L_11, (String_t*)(String_t*) &_stringLiteral4734, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m38839_gshared (Dictionary_2_t7140 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t10356* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t3296 * L_0 = (SerializationInfo_t3296 *)(__this->___serialization_info_13);
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
		SerializationInfo_t3296 * L_1 = (SerializationInfo_t3296 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t3296 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m13276((SerializationInfo_t3296 *)L_1, (String_t*)(String_t*) &_stringLiteral3116, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t3296 * L_3 = (SerializationInfo_t3296 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t3296 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m13278((SerializationInfo_t3296 *)L_3, (String_t*)(String_t*) &_stringLiteral3118, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t3296 * L_6 = (SerializationInfo_t3296 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t3296 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m13276((SerializationInfo_t3296 *)L_6, (String_t*)(String_t*) &_stringLiteral4733, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t3296 * L_8 = (SerializationInfo_t3296 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t3296 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m13278((SerializationInfo_t3296 *)L_8, (String_t*)(String_t*) &_stringLiteral4734, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t10356*)((KeyValuePair_2U5BU5D_t10356*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t7140 *)__this);
		(( void (*) (Dictionary_2_t7140 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t7140 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t10356* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t10356* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int64_t L_16 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t7135 *)((KeyValuePair_2_t7135 *)(KeyValuePair_2_t7135 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t10356* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t7135 *)((KeyValuePair_2_t7135 *)(KeyValuePair_2_t7135 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t7140 *)__this);
		VirtActionInvoker2< int64_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t7140 *)__this, (int64_t)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t10356* L_22 = V_1;
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
		__this->___serialization_info_13 = (SerializationInfo_t3296 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m38840_gshared (Dictionary_2_t7140 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	Object_t * V_5 = {0};
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
		ArgumentNullException_t731 * L_3 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_3, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		LinkU5BU5D_t6220* L_13 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4037* L_18 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
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
		LinkU5BU5D_t6220* L_24 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		LinkU5BU5D_t6220* L_33 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t6220* L_36 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t6220* L_38 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t6220* L_41 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t6220* L_45 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int64U5BU5D_t4037* L_47 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (Int64_t776_il2cpp_TypeInfo_var, (&V_4));
		int64_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_47, L_48)) = (int64_t)L_49;
		ObjectU5BU5D_t21* L_50 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)) = (Object_t *)L_52;
		int32_t L_53 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m38841_gshared (Dictionary_2_t7140 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
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
		ArgumentNullException_t731 * L_3 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_3, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		LinkU5BU5D_t6220* L_11 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4037* L_16 = (Int64U5BU5D_t4037*)(__this->___keySlots_6);
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
		Object_t ** L_21 = ___value;
		ObjectU5BU5D_t21* L_22 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t6220* L_25 = (LinkU5BU5D_t6220*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_25, L_26))->___Next_1);
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
		Object_t ** L_29 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t7141 * Dictionary_2_get_Keys_m38842_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t7141 * L_0 = (KeyCollection_t7141 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t7141 *, Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t7145 * Dictionary_2_get_Values_m38843_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t7145 * L_0 = (ValueCollection_t7145 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t7145 *, Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_ToTKey_m38844_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
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
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4735, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t725 * L_6 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9205(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1613, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(int64_t*)((int64_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTValue_m38845_gshared (Dictionary_2_t7140 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
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
		Type_t * L_5 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4735, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t725 * L_8 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9205(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1587, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m38846_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7135  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t7135 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t7140 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int64_t, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t7140 *)__this, (int64_t)L_0, (Object_t **)(&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_2 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t7135 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t6207 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t6207 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t7143  Dictionary_2_GetEnumerator_m38847_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143  L_0 = {0};
		(( void (*) (Enumerator_t7143 *, Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t7140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m38848_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		Object_t * L_3 = ___value;
		Object_t * L_4 = L_3;
		DictionaryEntry_t748  L_5 = {0};
		DictionaryEntry__ctor_m15265(&L_5, (Object_t *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_46.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_46MethodDeclarations.h"
struct Dictionary_2_t7140;
struct Array_t;
struct Transform_1_t7144;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t776_m74207_gshared (Dictionary_2_t7140 * __this, Array_t * p0, int32_t p1, Transform_1_t7144 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t776_m74207(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, Transform_1_t7144 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t776_m74207_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t7140;
struct Int64U5BU5D_t4037;
struct Transform_1_t7144;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t776_TisInt64_t776_m74208_gshared (Dictionary_2_t7140 * __this, Int64U5BU5D_t4037* p0, int32_t p1, Transform_1_t7144 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t776_TisInt64_t776_m74208(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t7140 *, Int64U5BU5D_t4037*, int32_t, Transform_1_t7144 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t776_TisInt64_t776_m74208_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m38849_gshared (KeyCollection_t7141 * __this, Dictionary_2_t7140 * ___dictionary, const MethodInfo* method)
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
		Dictionary_2_t7140 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4730, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t7140 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m38850_gshared (KeyCollection_t7141 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10939(L_0, (String_t*)(String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m38851_gshared (KeyCollection_t7141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10939(L_0, (String_t*)(String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m38852_gshared (KeyCollection_t7141 * __this, int64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck((Dictionary_2_t7140 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t7140 *)L_0, (int64_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m38853_gshared (KeyCollection_t7141 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10939(L_0, (String_t*)(String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m38854_gshared (KeyCollection_t7141 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t7141 *)__this);
		Enumerator_t7142  L_0 = (( Enumerator_t7142  (*) (KeyCollection_t7141 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t7141 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t7142  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m38855_gshared (KeyCollection_t7141 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int64U5BU5D_t4037* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int64U5BU5D_t4037*)((Int64U5BU5D_t4037*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t4037* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t4037* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t7141 *)__this);
		VirtActionInvoker2< Int64U5BU5D_t4037*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t7141 *)__this, (Int64U5BU5D_t4037*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t7140 * L_4 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t7140 *)L_4);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t7140 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t7140 * L_7 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t7144 * L_11 = (Transform_1_t7144 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t7144 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t7140 *)L_7);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, Transform_1_t7144 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t7140 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t7144 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m38856_gshared (KeyCollection_t7141 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t7141 *)__this);
		Enumerator_t7142  L_0 = (( Enumerator_t7142  (*) (KeyCollection_t7141 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t7141 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t7142  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m38857_gshared (KeyCollection_t7141 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m38858_gshared (KeyCollection_t7141 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m38859_gshared (KeyCollection_t7141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m38860_gshared (KeyCollection_t7141 * __this, Int64U5BU5D_t4037* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Int64U5BU5D_t4037* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t7140 *)L_0);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t7140 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t7140 * L_3 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Int64U5BU5D_t4037* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t7144 * L_7 = (Transform_1_t7144 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t7144 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t7140 *)L_3);
		(( void (*) (Dictionary_2_t7140 *, Int64U5BU5D_t4037*, int32_t, Transform_1_t7144 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t7140 *)L_3, (Int64U5BU5D_t4037*)L_4, (int32_t)L_5, (Transform_1_t7144 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t7142  KeyCollection_GetEnumerator_m38861_gshared (KeyCollection_t7141 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Enumerator_t7142  L_1 = {0};
		(( void (*) (Enumerator_t7142 *, Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t7140 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m38862_gshared (KeyCollection_t7141 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t7140 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count() */, (Dictionary_2_t7140 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38863_gshared (Enumerator_t7142 * __this, Dictionary_2_t7140 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = ___host;
		NullCheck((Dictionary_2_t7140 *)L_0);
		Enumerator_t7143  L_1 = (( Enumerator_t7143  (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t7140 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38864_gshared (Enumerator_t7142 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38865_gshared (Enumerator_t7142 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m38866_gshared (Enumerator_t7142 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38867_gshared (Enumerator_t7142 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" int64_t Enumerator_get_Current_m38868_gshared (Enumerator_t7142 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t7135 * L_1 = (KeyValuePair_2_t7135 *)&(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t7135 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38869_gshared (Enumerator_t7143 * __this, Dictionary_2_t7140 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t7140 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38870_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t7135  L_0 = (KeyValuePair_2_t7135 )(__this->___current_3);
		KeyValuePair_2_t7135  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38871_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38872_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t7135 * L_0 = (KeyValuePair_2_t7135 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t7135 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		KeyValuePair_2_t7135 * L_4 = (KeyValuePair_2_t7135 *)&(__this->___current_3);
		Object_t * L_5 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t7135 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = L_5;
		DictionaryEntry_t748  L_7 = {0};
		DictionaryEntry__ctor_m15265(&L_7, (Object_t *)L_3, (Object_t *)((Object_t *)L_6), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38873_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38874_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38875_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
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
		Dictionary_2_t7140 * L_4 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t6220* L_5 = (LinkU5BU5D_t6220*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t5245 *)(Link_t5245 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t7140 * L_8 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		NullCheck(L_8);
		Int64U5BU5D_t4037* L_9 = (Int64U5BU5D_t4037*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t7140 * L_12 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t21* L_13 = (ObjectU5BU5D_t21*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t7135  L_16 = {0};
		(( void (*) (KeyValuePair_2_t7135 *, int64_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(&L_16, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_9, L_11)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t7140 * L_18 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t7135  Enumerator_get_Current_m38876_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t7135  L_0 = (KeyValuePair_2_t7135 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m38877_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t7135 * L_0 = (KeyValuePair_2_t7135 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t7135 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m38878_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t7135 * L_0 = (KeyValuePair_2_t7135 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t7135 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m38879_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___next_1 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3310_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m38880_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t3310 * L_1 = (ObjectDisposedException_t3310 *)il2cpp_codegen_object_new (ObjectDisposedException_t3310_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m10475(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t7140 * L_2 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1668 * L_5 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_5, (String_t*)(String_t*) &_stringLiteral4736, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m38881_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t7143 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral2024, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m38882_gshared (Enumerator_t7143 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t7140 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m38883_gshared (Transform_1_t7144 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m38884_gshared (Transform_1_t7144 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m38884((Transform_1_t7144 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m38885_gshared (Transform_1_t7144 * __this, int64_t ___key, Object_t * ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t776_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m38886_gshared (Transform_1_t7144 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_49.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_49MethodDeclarations.h"
struct Dictionary_2_t7140;
struct Array_t;
struct Transform_1_t7147;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m74210_gshared (Dictionary_2_t7140 * __this, Array_t * p0, int32_t p1, Transform_1_t7147 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m74210(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, Transform_1_t7147 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m74210_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t7140;
struct ObjectU5BU5D_t21;
struct Transform_1_t7147;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m74209_gshared (Dictionary_2_t7140 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t7147 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m74209(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t7140 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t7147 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m74209_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m38887_gshared (ValueCollection_t7145 * __this, Dictionary_2_t7140 * ___dictionary, const MethodInfo* method)
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
		Dictionary_2_t7140 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4730, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t7140 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m38888_gshared (ValueCollection_t7145 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10939(L_0, (String_t*)(String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m38889_gshared (ValueCollection_t7145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10939(L_0, (String_t*)(String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m38890_gshared (ValueCollection_t7145 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t7140 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t7140 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m38891_gshared (ValueCollection_t7145 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10939(L_0, (String_t*)(String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m38892_gshared (ValueCollection_t7145 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t7145 *)__this);
		Enumerator_t7146  L_0 = (( Enumerator_t7146  (*) (ValueCollection_t7145 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t7145 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t7146  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m38893_gshared (ValueCollection_t7145 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
		NullCheck((ValueCollection_t7145 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t21*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t7145 *)__this, (ObjectU5BU5D_t21*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t7140 * L_4 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t7140 *)L_4);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t7140 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t7140 * L_7 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t7147 * L_11 = (Transform_1_t7147 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t7147 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t7140 *)L_7);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, Transform_1_t7147 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t7140 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t7147 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m38894_gshared (ValueCollection_t7145 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t7145 *)__this);
		Enumerator_t7146  L_0 = (( Enumerator_t7146  (*) (ValueCollection_t7145 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t7145 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t7146  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m38895_gshared (ValueCollection_t7145 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m38896_gshared (ValueCollection_t7145 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m38897_gshared (ValueCollection_t7145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m38898_gshared (ValueCollection_t7145 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		ObjectU5BU5D_t21* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t7140 *)L_0);
		(( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t7140 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t7140 * L_3 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		ObjectU5BU5D_t21* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t7147 * L_7 = (Transform_1_t7147 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t7147 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t7140 *)L_3);
		(( void (*) (Dictionary_2_t7140 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t7147 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t7140 *)L_3, (ObjectU5BU5D_t21*)L_4, (int32_t)L_5, (Transform_1_t7147 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t7146  ValueCollection_GetEnumerator_m38899_gshared (ValueCollection_t7145 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		Enumerator_t7146  L_1 = {0};
		(( void (*) (Enumerator_t7146 *, Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t7140 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m38900_gshared (ValueCollection_t7145 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = (Dictionary_2_t7140 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t7140 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count() */, (Dictionary_2_t7140 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38901_gshared (Enumerator_t7146 * __this, Dictionary_2_t7140 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t7140 * L_0 = ___host;
		NullCheck((Dictionary_2_t7140 *)L_0);
		Enumerator_t7143  L_1 = (( Enumerator_t7143  (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t7140 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38902_gshared (Enumerator_t7146 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38903_gshared (Enumerator_t7146 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m38904_gshared (Enumerator_t7146 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38905_gshared (Enumerator_t7146 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m38906_gshared (Enumerator_t7146 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t7135 * L_1 = (KeyValuePair_2_t7135 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t7135 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m38907_gshared (Transform_1_t7147 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m38908_gshared (Transform_1_t7147 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m38908((Transform_1_t7147 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m38909_gshared (Transform_1_t7147 * __this, int64_t ___key, Object_t * ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t776_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m38910_gshared (Transform_1_t7147 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m38911_gshared (Transform_1_t7139 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t748  Transform_1_Invoke_m38912_gshared (Transform_1_t7139 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m38912((Transform_1_t7139 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t748  (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t748  (*FunctionPointerType) (Object_t * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m38913_gshared (Transform_1_t7139 * __this, int64_t ___key, Object_t * ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t776_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t748  Transform_1_EndInvoke_m38914_gshared (Transform_1_t7139 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t748 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m38915_gshared (Transform_1_t7148 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t7135  Transform_1_Invoke_m38916_gshared (Transform_1_t7148 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m38916((Transform_1_t7148 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t7135  (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t7135  (*FunctionPointerType) (Object_t * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m38917_gshared (Transform_1_t7148 * __this, int64_t ___key, Object_t * ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t776_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7135  Transform_1_EndInvoke_m38918_gshared (Transform_1_t7148 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t7135 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38919_gshared (ShimEnumerator_t7149 * __this, Dictionary_2_t7140 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t7140 * L_0 = ___host;
		NullCheck((Dictionary_2_t7140 *)L_0);
		Enumerator_t7143  L_1 = (( Enumerator_t7143  (*) (Dictionary_2_t7140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t7140 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38920_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t4200_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m38921_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t4200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7483);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t7143  L_0 = (Enumerator_t7143 )(__this->___host_enumerator_0);
		Enumerator_t7143  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t748  L_3 = (DictionaryEntry_t748 )InterfaceFuncInvoker0< DictionaryEntry_t748  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t4200_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38922_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t7135  V_0 = {0};
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t7135  L_1 = (( KeyValuePair_2_t7135  (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t7135 )L_1;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t7135 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38923_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t7135  V_0 = {0};
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t7135  L_1 = (( KeyValuePair_2_t7135  (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t7135 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t7135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t7135 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t748_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m38924_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t7149 *)__this);
		DictionaryEntry_t748  L_0 = (DictionaryEntry_t748 )VirtFuncInvoker0< DictionaryEntry_t748  >::Invoke(7 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry() */, (ShimEnumerator_t7149 *)__this);
		DictionaryEntry_t748  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t748_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m38925_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7143 * L_0 = (Enumerator_t7143 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t7143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t7143 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_12.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_12MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.ctor()
extern "C" void EqualityComparer_1__ctor_m38926_gshared (EqualityComparer_1_t7150 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t5752_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m38927_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t7150_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t7150 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t7152 * L_8 = (DefaultComparer_t7152 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t7152 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t7150_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m38928_gshared (EqualityComparer_1_t7150 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t7150 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int64_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::GetHashCode(T) */, (EqualityComparer_1_t7150 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m38929_gshared (EqualityComparer_1_t7150 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t7150 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, (EqualityComparer_1_t7150 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int64_t)((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int64>::get_Default()
extern "C" EqualityComparer_1_t7150 * EqualityComparer_1_get_Default_m38930_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t7150 * L_0 = ((EqualityComparer_1_t7150_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::.ctor()
extern TypeInfo* EqualityComparer_1_t7150_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m38931_gshared (GenericEqualityComparer_1_t7151 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t7150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13982);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t7150 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t7150_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t7150 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t7150 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m38932_gshared (GenericEqualityComparer_1_t7151 * __this, int64_t ___obj, const MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m38933_gshared (GenericEqualityComparer_1_t7151 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int64_t >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Int64>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (int64_t)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Int64>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern TypeInfo* EqualityComparer_1_t7150_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m38934_gshared (DefaultComparer_t7152 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t7150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13982);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t7150 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t7150_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t7150 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t7150 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m38935_gshared (DefaultComparer_t7152 * __this, int64_t ___obj, const MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m38936_gshared (DefaultComparer_t7152 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		int64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass4`1<System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_7.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass4`1<System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_7MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
#include "mscorlib_System_Action_1_gen_26.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
#include "mscorlib_System_Action_1_gen_26MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass4`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4_1__ctor_m39076_gshared (U3CU3Ec__DisplayClass4_1_t7160 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Parse.Internal.InternalExtensions/<>c__DisplayClass4`1<System.Object>::<OnSuccess>b__3(System.Threading.Tasks.Task`1<TIn>)
extern "C" Object_t * U3CU3Ec__DisplayClass4_1_U3COnSuccessU3Eb__3_m39077_gshared (U3CU3Ec__DisplayClass4_1_t7160 * __this, Task_1_t808 * ___t, const MethodInfo* method)
{
	{
		Action_1_t810 * L_0 = (Action_1_t810 *)(__this->___continuation_0);
		Task_1_t808 * L_1 = ___t;
		NullCheck((Action_1_t810 *)L_0);
		VirtActionInvoker1< Task_1_t808 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Object>>::Invoke(!0) */, (Action_1_t810 *)L_0, (Task_1_t808 *)L_1);
		return NULL;
	}
}
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"

// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "System_Core_System_Func_2_gen_75.h"
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_119.h"
// Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_U3CGe.h"
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClientMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5MethodDeclarations.h"
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "System_Core_System_Func_2_gen_75MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_119MethodDeclarations.h"
// Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_U3CGeMethodDeclarations.h"
struct Enumerable_t718;
struct IEnumerable_1_t729;
struct Func_2_t1814;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m8985_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1814 * p1, const MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m8985(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1814 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m8985_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t718;
struct List_1_t2;
struct IEnumerable_1_t729;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t2 * Enumerable_ToList_TisObject_t_m8948_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m8948(__this /* static, unused */, p0, method) (( List_1_t2 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m8948_gshared)(__this /* static, unused */, p0, method)
struct ParseClient_t1817;
struct Object_t;
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClient.h"
// Declaration System.Object Parse.ParseClient::ConvertTo<System.Object>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.Object>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisObject_t_m8954_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisObject_t_m8954(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisObject_t_m8954_gshared)(__this /* static, unused */, ___value, method)
struct Enumerable_t718;
struct IEnumerable_1_t2014;
struct Func_2_t7161;
struct Enumerable_t718;
struct IEnumerable_1_t2038;
struct Func_2_t7162;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisKeyValuePair_2_t2037_TisKeyValuePair_2_t2037_m74216_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t7162 * p1, const MethodInfo* method);
#define Enumerable_Select_TisKeyValuePair_2_t2037_TisKeyValuePair_2_t2037_m74216(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7162 *, const MethodInfo*))Enumerable_Select_TisKeyValuePair_2_t2037_TisKeyValuePair_2_t2037_m74216_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisKeyValuePair_2_t1962_TisKeyValuePair_2_t1962_m75769(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7161 *, const MethodInfo*))Enumerable_Select_TisKeyValuePair_2_t2037_TisKeyValuePair_2_t2037_m74216_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t718;
struct List_1_t7177;
struct IEnumerable_1_t2014;
struct Enumerable_t718;
struct List_1_t7166;
struct IEnumerable_1_t2038;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t7166 * Enumerable_ToList_TisKeyValuePair_2_t2037_m74217_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisKeyValuePair_2_t2037_m74217(__this /* static, unused */, p0, method) (( List_1_t7166 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisKeyValuePair_2_t2037_m74217_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisKeyValuePair_2_t1962_m75770(__this /* static, unused */, p0, method) (( List_1_t7177 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisKeyValuePair_2_t2037_m74217_gshared)(__this /* static, unused */, p0, method)


// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m39078_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.String,TOut)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" void FlexibleDictionaryWrapper_2_Add_m39079_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (String_t*)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m39080_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = ___key;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (String_t*)L_1);
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m39081_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m39082_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = ___key;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (String_t*)L_1);
		return L_2;
	}
}
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::TryGetValue(System.String,TOut&)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m39083_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	bool V_1 = false;
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = ___key;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (String_t*)L_1, (Object_t **)(&V_0));
		V_1 = (bool)L_2;
		Object_t ** L_3 = ___value;
		Object_t * L_4 = V_0;
		Object_t * L_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_6 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_5), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		*L_3 = ((Object_t *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m39084_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(7 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		Func_2_t1814 * L_2 = ((FlexibleDictionaryWrapper_2_t2423_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0023;
		}
	}
	{
		IntPtr_t L_3 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Func_2_t1814 * L_4 = (Func_2_t1814 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Func_2_t1814 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_4, (Object_t *)NULL, (IntPtr_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		((FlexibleDictionaryWrapper_2_t2423_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_4;
		G_B2_0 = G_B1_0;
	}

IL_0023:
	{
		Func_2_t1814 * L_5 = ((FlexibleDictionaryWrapper_2_t2423_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_6 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1814 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t1814 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		List_1_t2 * L_7 = (( List_1_t2 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return L_7;
	}
}
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Item(System.String)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m39085_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = ___key;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (String_t*)L_1);
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::set_Item(System.String,TOut)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m39086_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (String_t*)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" void FlexibleDictionaryWrapper_2_Add_m39087_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, KeyValuePair_2_t1962  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = (( String_t* (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1962 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((KeyValuePair_2_t1962 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		KeyValuePair_2_t1962  L_5 = {0};
		(( void (*) (KeyValuePair_2_t1962 *, String_t*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(&L_5, (String_t*)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< KeyValuePair_2_t1962  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), (Object_t*)L_0, (KeyValuePair_2_t1962 )L_5);
		return;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m39088_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m39089_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, KeyValuePair_2_t1962  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = (( String_t* (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1962 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((KeyValuePair_2_t1962 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		KeyValuePair_2_t1962  L_5 = {0};
		(( void (*) (KeyValuePair_2_t1962 *, String_t*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(&L_5, (String_t*)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		NullCheck((Object_t*)L_0);
		bool L_6 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t1962  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), (Object_t*)L_0, (KeyValuePair_2_t1962 )L_5);
		return L_6;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m39090_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, KeyValuePair_2U5BU5D_t1988* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t7161 * L_1 = ((FlexibleDictionaryWrapper_2_t2423_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_2;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16) };
		Func_2_t7161 * L_3 = (Func_2_t7161 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		(( void (*) (Func_2_t7161 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		((FlexibleDictionaryWrapper_2_t2423_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_2 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t7161 * L_4 = ((FlexibleDictionaryWrapper_2_t2423_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_2;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t7161 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		V_0 = (Object_t*)L_5;
		Object_t* L_6 = V_0;
		List_1_t7177 * L_7 = (( List_1_t7177 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(NULL /*static, unused*/, (Object_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		KeyValuePair_2U5BU5D_t1988* L_8 = ___array;
		int32_t L_9 = ___arrayIndex;
		NullCheck((List_1_t7177 *)L_7);
		VirtActionInvoker2< KeyValuePair_2U5BU5D_t1988*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(!0[],System.Int32) */, (List_1_t7177 *)L_7, (KeyValuePair_2U5BU5D_t1988*)L_8, (int32_t)L_9);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m39091_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m39092_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m39093_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, KeyValuePair_2_t1962  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		String_t* L_1 = (( String_t* (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1962 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((KeyValuePair_2_t1962 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		KeyValuePair_2_t1962  L_5 = {0};
		(( void (*) (KeyValuePair_2_t1962 *, String_t*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(&L_5, (String_t*)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		NullCheck((Object_t*)L_0);
		bool L_6 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t1962  >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), (Object_t*)L_0, (KeyValuePair_2_t1962 )L_5);
		return L_6;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m39094_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__4_t7183 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__4_t7183 * L_0 = (U3CGetEnumeratorU3Ed__4_t7183 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (U3CGetEnumeratorU3Ed__4_t7183 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		V_0 = (U3CGetEnumeratorU3Ed__4_t7183 *)L_0;
		U3CGetEnumeratorU3Ed__4_t7183 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__4_t7183 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m39095_gshared (FlexibleDictionaryWrapper_2_t2423 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleDictionaryWrapper_2_t2423 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2423 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((FlexibleDictionaryWrapper_2_t2423 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<get_Values>b__0(TIn)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m39096_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		Object_t * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t1962  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m39097_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t1962  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (( String_t* (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)((KeyValuePair_2_t1962 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((KeyValuePair_2_t1962 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		KeyValuePair_2_t1962  L_4 = {0};
		(( void (*) (KeyValuePair_2_t1962 *, String_t*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_4, (String_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_4;
	}
}
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_76.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_76MethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"


// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m39099_gshared (Func_2_t7162 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" KeyValuePair_2_t2037  Func_2_Invoke_m39101_gshared (Func_2_t7162 * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m39101((Func_2_t7162 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2037  (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2037  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2037_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m39103_gshared (Func_2_t7162 * __this, KeyValuePair_2_t2037  ___arg1, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9679);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t2037_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2037  Func_2_EndInvoke_m39105_gshared (Func_2_t7162 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2037 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_0MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m39106_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" KeyValuePair_2_t2037  U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m39107_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2037  L_0 = (KeyValuePair_2_t2037 )(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m39108_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2037  L_0 = (KeyValuePair_2_t2037 )(__this->___U24current_5);
		KeyValuePair_2_t2037  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m39109_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m39110_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * V_0 = {0};
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
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * L_5 = V_0;
		Func_2_t7162 * L_6 = (Func_2_t7162 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m39111_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * __this, const MethodInfo* method)
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
			KeyValuePair_2_t2037  L_6 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker0< KeyValuePair_2_t2037  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t7162 * L_7 = (Func_2_t7162 *)(__this->___selector_3);
			KeyValuePair_2_t2037  L_8 = (KeyValuePair_2_t2037 )(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t7162 *)L_7);
			KeyValuePair_2_t2037  L_9 = (KeyValuePair_2_t2037 )VirtFuncInvoker1< KeyValuePair_2_t2037 , KeyValuePair_2_t2037  >::Invoke(11 /* TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T) */, (Func_2_t7162 *)L_7, (KeyValuePair_2_t2037 )L_8);
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m39112_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * __this, const MethodInfo* method)
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
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m39113_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7164 * __this, const MethodInfo* method)
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
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_118.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_118MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_95.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_87.h"
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Predicate_1_gen_83.h"
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_11.h"
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Comparison_1_gen_84.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_87MethodDeclarations.h"
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Predicate_1_gen_83MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_95MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_11MethodDeclarations.h"
struct Array_t;
struct KeyValuePair_2U5BU5D_t7165;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisKeyValuePair_2_t2037_m74219_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t7165** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisKeyValuePair_2_t2037_m74219(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165**, int32_t, const MethodInfo*))Array_Resize_TisKeyValuePair_2_t2037_m74219_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct KeyValuePair_2U5BU5D_t7165;
// Declaration System.Int32 System.Array::IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisKeyValuePair_2_t2037_m74220_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t7165* p0, KeyValuePair_2_t2037  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisKeyValuePair_2_t2037_m74220(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165*, KeyValuePair_2_t2037 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisKeyValuePair_2_t2037_m74220_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct KeyValuePair_2U5BU5D_t7165;
struct IComparer_1_t10362;
// Declaration System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisKeyValuePair_2_t2037_m74222_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t7165* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisKeyValuePair_2_t2037_m74222(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisKeyValuePair_2_t2037_m74222_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct KeyValuePair_2U5BU5D_t7165;
struct Comparison_1_t7176;
// Declaration System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisKeyValuePair_2_t2037_m74228_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t7165* p0, int32_t p1, Comparison_1_t7176 * p2, const MethodInfo* method);
#define Array_Sort_TisKeyValuePair_2_t2037_m74228(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165*, int32_t, Comparison_1_t7176 *, const MethodInfo*))Array_Sort_TisKeyValuePair_2_t2037_m74228_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m39114_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t7165* L_0 = ((List_1_t7166_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39115_gshared (List_1_t7166 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t7166 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		KeyValuePair_2U5BU5D_t7165* L_3 = ((List_1_t7166_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t7166 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((KeyValuePair_2U5BU5D_t7165*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t7166 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m39116_gshared (List_1_t7166 * __this, int32_t ___capacity, const MethodInfo* method)
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
		ArgumentOutOfRangeException__ctor_m10469(L_1, (String_t*)(String_t*) &_stringLiteral2019, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((KeyValuePair_2U5BU5D_t7165*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39117_gshared (List_1_t7166 * __this, KeyValuePair_2U5BU5D_t7165* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7165* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m39118_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t7166_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((KeyValuePair_2U5BU5D_t7165*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39119_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t7166 *)__this);
		Enumerator_t7167  L_0 = (( Enumerator_t7167  (*) (List_1_t7166 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t7166 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t7167  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39120_gshared (List_1_t7166 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39121_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t7166 *)__this);
		Enumerator_t7167  L_0 = (( Enumerator_t7167  (*) (List_1_t7166 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t7166 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t7167  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m39122_gshared (List_1_t7166 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t7166 *)__this);
			VirtActionInvoker1< KeyValuePair_2_t2037  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T) */, (List_1_t7166 *)__this, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		ArgumentException__ctor_m3235(L_2, (String_t*)(String_t*) &_stringLiteral4739, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m39123_gshared (List_1_t7166 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t7166 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T) */, (List_1_t7166 *)__this, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39124_gshared (List_1_t7166 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t7166 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T) */, (List_1_t7166 *)__this, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m39125_gshared (List_1_t7166 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
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
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t7166 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t7166 *)__this);
			VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T) */, (List_1_t7166 *)__this, (int32_t)L_1, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		ArgumentException__ctor_m3235(L_3, (String_t*)(String_t*) &_stringLiteral4739, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m39126_gshared (List_1_t7166 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t7166 *)__this);
			VirtFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T) */, (List_1_t7166 *)__this, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39127_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39128_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39129_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39130_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39131_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39132_gshared (List_1_t7166 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t7166 *)__this);
		KeyValuePair_2_t2037  L_1 = (KeyValuePair_2_t2037 )VirtFuncInvoker1< KeyValuePair_2_t2037 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32) */, (List_1_t7166 *)__this, (int32_t)L_0);
		KeyValuePair_2_t2037  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m39133_gshared (List_1_t7166 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
			NullCheck((List_1_t7166 *)__this);
			VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T) */, (List_1_t7166 *)__this, (int32_t)L_0, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		ArgumentException__ctor_m3235(L_2, (String_t*)(String_t*) &_stringLiteral1587, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m39134_gshared (List_1_t7166 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		KeyValuePair_2U5BU5D_t7165* L_1 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t7166 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		KeyValuePair_2U5BU5D_t7165* L_2 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		KeyValuePair_2_t2037  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_2, L_5)) = (KeyValuePair_2_t2037 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39135_gshared (List_1_t7166 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		KeyValuePair_2U5BU5D_t7165* L_3 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t7166 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t7166 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t7166 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m13294(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m13294(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t7166 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckRange_m39136_gshared (List_1_t7166 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method)
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
		ArgumentOutOfRangeException__ctor_m10469(L_1, (String_t*)(String_t*) &_stringLiteral2021, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral1918, /*hidden argument*/NULL);
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
		ArgumentException__ctor_m3235(L_7, (String_t*)(String_t*) &_stringLiteral4740, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39137_gshared (List_1_t7166 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t7166 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		KeyValuePair_2U5BU5D_t7165* L_5 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t7165*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (KeyValuePair_2U5BU5D_t7165*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m39138_gshared (List_1_t7166 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t2037  V_0 = {0};
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			KeyValuePair_2_t2037  L_3 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker0< KeyValuePair_2_t2037  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (KeyValuePair_2_t2037 )L_3;
			KeyValuePair_2_t2037  L_4 = V_0;
			NullCheck((List_1_t7166 *)__this);
			VirtActionInvoker1< KeyValuePair_2_t2037  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T) */, (List_1_t7166 *)__this, (KeyValuePair_2_t2037 )L_4);
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
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39139_gshared (List_1_t7166 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t7166 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t7166 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t7166 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7169 * List_1_AsReadOnly_m39140_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t7169 * L_0 = (ReadOnlyCollection_1_t7169 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t7169 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m39141_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		KeyValuePair_2U5BU5D_t7165* L_1 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m39142_gshared (List_1_t7166 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		KeyValuePair_2_t2037  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165*, KeyValuePair_2_t2037 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t7165*)L_0, (KeyValuePair_2_t2037 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39143_gshared (List_1_t7166 * __this, KeyValuePair_2U5BU5D_t7165* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		KeyValuePair_2U5BU5D_t7165* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern TypeInfo* List_1_t7166_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t2037_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t2037  List_1_Find_m39144_gshared (List_1_t7166 * __this, Predicate_1_t7173 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t7166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13999);
		KeyValuePair_2_t2037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9679);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2037  V_1 = {0};
	KeyValuePair_2_t2037  G_B3_0 = {0};
	{
		Predicate_1_t7173 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t7166_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t7173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t7173 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t7173 * L_2 = ___match;
		NullCheck((List_1_t7166 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t7166 *, int32_t, int32_t, Predicate_1_t7173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t7166 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t7173 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7165* L_5 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (KeyValuePair_2_t2037_il2cpp_TypeInfo_var, (&V_1));
		KeyValuePair_2_t2037  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckMatch_m39145_gshared (Object_t * __this /* static, unused */, Predicate_1_t7173 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t7173 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4619, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t7166_il2cpp_TypeInfo_var;
extern "C" List_1_t7166 * List_1_FindAll_m39146_gshared (List_1_t7166 * __this, Predicate_1_t7173 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t7166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13999);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t7173 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t7166_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t7173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t7173 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)65536))))
		{
			goto IL_001b;
		}
	}
	{
		Predicate_1_t7173 * L_2 = ___match;
		NullCheck((List_1_t7166 *)__this);
		List_1_t7166 * L_3 = (( List_1_t7166 * (*) (List_1_t7166 *, Predicate_1_t7173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((List_1_t7166 *)__this, (Predicate_1_t7173 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		return L_3;
	}

IL_001b:
	{
		Predicate_1_t7173 * L_4 = ___match;
		NullCheck((List_1_t7166 *)__this);
		List_1_t7166 * L_5 = (( List_1_t7166 * (*) (List_1_t7166 *, Predicate_1_t7173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)((List_1_t7166 *)__this, (Predicate_1_t7173 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_5;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t7166 * List_1_FindAllStackBits_m39147_gshared (List_1_t7166 * __this, Predicate_1_t7173 * ___match, const MethodInfo* method)
{
	uint32_t* V_0 = {0};
	uint32_t* V_1 = {0};
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	KeyValuePair_2U5BU5D_t7165* V_5 = {0};
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
		Predicate_1_t7173 * L_3 = ___match;
		KeyValuePair_2U5BU5D_t7165* L_4 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t7173 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(11 /* System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T) */, (Predicate_1_t7173 *)L_3, (KeyValuePair_2_t2037 )(*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_4, L_6)));
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
		V_5 = (KeyValuePair_2U5BU5D_t7165*)((KeyValuePair_2U5BU5D_t7165*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_18));
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
		KeyValuePair_2U5BU5D_t7165* L_23 = V_5;
		int32_t L_24 = V_6;
		int32_t L_25 = (int32_t)L_24;
		V_6 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		KeyValuePair_2U5BU5D_t7165* L_26 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_27 = V_7;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		*((KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_23, L_25)) = (KeyValuePair_2_t2037 )(*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_26, L_28));
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
		KeyValuePair_2U5BU5D_t7165* L_37 = V_5;
		int32_t L_38 = V_2;
		List_1_t7166 * L_39 = (List_1_t7166 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t7166 *, KeyValuePair_2U5BU5D_t7165*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_39, (KeyValuePair_2U5BU5D_t7165*)L_37, (int32_t)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_39;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t7166 * List_1_FindAllList_m39148_gshared (List_1_t7166 * __this, Predicate_1_t7173 * ___match, const MethodInfo* method)
{
	List_1_t7166 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t7166 * L_0 = (List_1_t7166 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t7166 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		V_0 = (List_1_t7166 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0034;
	}

IL_000a:
	{
		Predicate_1_t7173 * L_1 = ___match;
		KeyValuePair_2U5BU5D_t7165* L_2 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t7173 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(11 /* System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T) */, (Predicate_1_t7173 *)L_1, (KeyValuePair_2_t2037 )(*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		List_1_t7166 * L_6 = V_0;
		KeyValuePair_2U5BU5D_t7165* L_7 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((List_1_t7166 *)L_6);
		VirtActionInvoker1< KeyValuePair_2_t2037  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T) */, (List_1_t7166 *)L_6, (KeyValuePair_2_t2037 )(*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_7, L_9)));
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
		List_1_t7166 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Predicate`1<T>)
extern TypeInfo* List_1_t7166_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_FindIndex_m39149_gshared (List_1_t7166 * __this, Predicate_1_t7173 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t7166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13999);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t7173 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t7166_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t7173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t7173 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t7173 * L_2 = ___match;
		NullCheck((List_1_t7166 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t7166 *, int32_t, int32_t, Predicate_1_t7173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t7166 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t7173 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39150_gshared (List_1_t7166 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7173 * ___match, const MethodInfo* method)
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
		Predicate_1_t7173 * L_3 = ___match;
		KeyValuePair_2U5BU5D_t7165* L_4 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t7173 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(11 /* System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T) */, (Predicate_1_t7173 *)L_3, (KeyValuePair_2_t2037 )(*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_4, L_6)));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t7167  List_1_GetEnumerator_m39151_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		Enumerator_t7167  L_0 = {0};
		(( void (*) (Enumerator_t7167 *, List_1_t7166 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(&L_0, (List_1_t7166 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7166 * List_1_GetRange_m39152_gshared (List_1_t7166 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t7165* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t7166 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_2 = ___count;
		V_0 = (KeyValuePair_2U5BU5D_t7165*)((KeyValuePair_2U5BU5D_t7165*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		KeyValuePair_2U5BU5D_t7165* L_3 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_4 = ___index;
		KeyValuePair_2U5BU5D_t7165* L_5 = V_0;
		int32_t L_6 = ___count;
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, (int32_t)L_4, (Array_t *)(Array_t *)L_5, (int32_t)0, (int32_t)L_6, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7165* L_7 = V_0;
		int32_t L_8 = ___count;
		List_1_t7166 * L_9 = (List_1_t7166 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t7166 *, KeyValuePair_2U5BU5D_t7165*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_9, (KeyValuePair_2U5BU5D_t7165*)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_9;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39153_gshared (List_1_t7166 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		KeyValuePair_2_t2037  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165*, KeyValuePair_2_t2037 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t7165*)L_0, (KeyValuePair_2_t2037 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39154_gshared (List_1_t7166 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
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
		KeyValuePair_2U5BU5D_t7165* L_5 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_6 = ___start;
		KeyValuePair_2U5BU5D_t7165* L_7 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
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
		KeyValuePair_2U5BU5D_t7165* L_15 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m39155_gshared (List_1_t7166 * __this, int32_t ___index, const MethodInfo* method)
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
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2021, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39156_gshared (List_1_t7166 * __this, int32_t ___index, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t7166 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		KeyValuePair_2U5BU5D_t7165* L_2 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t7166 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t7166 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		KeyValuePair_2U5BU5D_t7165* L_4 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_5 = ___index;
		KeyValuePair_2_t2037  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_4, L_5)) = (KeyValuePair_2_t2037 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m39157_gshared (List_1_t7166 * __this, Object_t* ___collection, const MethodInfo* method)
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
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral2018, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39158_gshared (List_1_t7166 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t7165* V_0 = {0};
	Object_t* V_1 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t7166 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_1 = ___index;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t7166 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t* L_2 = ___collection;
		if ((!(((Object_t*)(Object_t*)L_2) == ((Object_t*)(List_1_t7166 *)__this))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->____size_2);
		V_0 = (KeyValuePair_2U5BU5D_t7165*)((KeyValuePair_2U5BU5D_t7165*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_3));
		KeyValuePair_2U5BU5D_t7165* L_4 = V_0;
		NullCheck((List_1_t7166 *)__this);
		VirtActionInvoker2< KeyValuePair_2U5BU5D_t7165*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32) */, (List_1_t7166 *)__this, (KeyValuePair_2U5BU5D_t7165*)L_4, (int32_t)0);
		int32_t L_5 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t7166 *)__this, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_6 = ___index;
		KeyValuePair_2U5BU5D_t7165* L_7 = V_0;
		NullCheck(L_7);
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t7166 *)__this, (int32_t)L_6, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		KeyValuePair_2U5BU5D_t7165* L_8 = V_0;
		KeyValuePair_2U5BU5D_t7165* L_9 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_10 = ___index;
		KeyValuePair_2U5BU5D_t7165* L_11 = V_0;
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
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)((List_1_t7166 *)__this, (int32_t)L_14, (Object_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		goto IL_006b;
	}

IL_0063:
	{
		int32_t L_16 = ___index;
		Object_t* L_17 = ___collection;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((List_1_t7166 *)__this, (int32_t)L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
	}

IL_006b:
	{
		int32_t L_18 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39159_gshared (List_1_t7166 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t7166 *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_3 = ___index;
		int32_t L_4 = V_0;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t7166 *)__this, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		Object_t* L_5 = ___collection;
		KeyValuePair_2U5BU5D_t7165* L_6 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_7 = ___index;
		NullCheck((Object_t*)L_5);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t7165*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5, (KeyValuePair_2U5BU5D_t7165*)L_6, (int32_t)L_7);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void List_1_InsertEnumeration_m39160_gshared (List_1_t7166 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t2037  V_0 = {0};
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			KeyValuePair_2_t2037  L_3 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker0< KeyValuePair_2_t2037  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (KeyValuePair_2_t2037 )L_3;
			int32_t L_4 = ___index;
			int32_t L_5 = (int32_t)L_4;
			___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
			KeyValuePair_2_t2037  L_6 = V_0;
			NullCheck((List_1_t7166 *)__this);
			VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T) */, (List_1_t7166 *)__this, (int32_t)L_5, (KeyValuePair_2_t2037 )L_6);
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
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m39161_gshared (List_1_t7166 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		KeyValuePair_2_t2037  L_0 = ___item;
		NullCheck((List_1_t7166 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T) */, (List_1_t7166 *)__this, (KeyValuePair_2_t2037 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t7166 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32) */, (List_1_t7166 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t7166_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m39162_gshared (List_1_t7166 * __this, Predicate_1_t7173 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t7166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13999);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t7173 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t7166_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t7173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t7173 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t7173 * L_1 = ___match;
		KeyValuePair_2U5BU5D_t7165* L_2 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t7173 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(11 /* System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T) */, (Predicate_1_t7173 *)L_1, (KeyValuePair_2_t2037 )(*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_2, L_4)));
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
		Predicate_1_t7173 * L_13 = ___match;
		KeyValuePair_2U5BU5D_t7165* L_14 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t7173 *)L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(11 /* System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T) */, (Predicate_1_t7173 *)L_13, (KeyValuePair_2_t2037 )(*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7165* L_18 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		KeyValuePair_2U5BU5D_t7165* L_21 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_18, L_20)) = (KeyValuePair_2_t2037 )(*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_21, L_23));
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
		KeyValuePair_2U5BU5D_t7165* L_29 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
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
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m39163_gshared (List_1_t7166 * __this, int32_t ___index, const MethodInfo* method)
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
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2021, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t7166 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		KeyValuePair_2U5BU5D_t7165* L_5 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39164_gshared (List_1_t7166 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t7166 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t7166 *)__this, (int32_t)L_3, (int32_t)((-L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		KeyValuePair_2U5BU5D_t7165* L_5 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
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
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m39165_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m16491(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern TypeInfo* Comparer_1_t7174_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m39166_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t7174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14008);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t7174_il2cpp_TypeInfo_var);
		Comparer_1_t7174 * L_2 = (( Comparer_1_t7174 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t7165*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39167_gshared (List_1_t7166 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t7165*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39168_gshared (List_1_t7166 * __this, Comparison_1_t7176 * ___comparison, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t7176 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165*, int32_t, Comparison_1_t7176 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t7165*)L_0, (int32_t)L_1, (Comparison_1_t7176 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7165* List_1_ToArray_m39169_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t7165* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (KeyValuePair_2U5BU5D_t7165*)((KeyValuePair_2U5BU5D_t7165*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		KeyValuePair_2U5BU5D_t7165* L_1 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		KeyValuePair_2U5BU5D_t7165* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7165* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m39170_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t7166 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39171_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7165* L_0 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m39172_gshared (List_1_t7166 * __this, int32_t ___value, const MethodInfo* method)
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
		KeyValuePair_2U5BU5D_t7165** L_3 = (KeyValuePair_2U5BU5D_t7165**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t7165**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t7165**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m39173_gshared (List_1_t7166 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t2037  List_1_get_Item_m39174_gshared (List_1_t7166 * __this, int32_t ___index, const MethodInfo* method)
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
		ArgumentOutOfRangeException__ctor_m10469(L_2, (String_t*)(String_t*) &_stringLiteral2021, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t7165* L_3 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m39175_gshared (List_1_t7166 * __this, int32_t ___index, KeyValuePair_2_t2037  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t7166 *)__this);
		(( void (*) (List_1_t7166 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t7166 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2021, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		KeyValuePair_2U5BU5D_t7165* L_4 = (KeyValuePair_2U5BU5D_t7165*)(__this->____items_1);
		int32_t L_5 = ___index;
		KeyValuePair_2_t2037  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_4, L_5)) = (KeyValuePair_2_t2037 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m39176_gshared (Enumerator_t7167 * __this, List_1_t7166 * ___l, const MethodInfo* method)
{
	{
		List_1_t7166 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t7166 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m39177_gshared (Enumerator_t7167 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t7167 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t7167 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m39178_gshared (Enumerator_t7167 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t7167 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t7167 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		KeyValuePair_2_t2037  L_2 = (KeyValuePair_2_t2037 )(__this->___current_3);
		KeyValuePair_2_t2037  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m39179_gshared (Enumerator_t7167 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t7166 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3310_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m39180_gshared (Enumerator_t7167 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t7166 * L_0 = (List_1_t7166 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t7167  L_1 = (*(Enumerator_t7167 *)__this);
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
		List_1_t7166 * L_7 = (List_1_t7166 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1668 * L_9 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_9, (String_t*)(String_t*) &_stringLiteral4741, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m39181_gshared (Enumerator_t7167 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t7167 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t7167 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t7166 * L_2 = (List_1_t7166 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t7166 * L_4 = (List_1_t7166 *)(__this->___l_0);
		NullCheck(L_4);
		KeyValuePair_2U5BU5D_t7165* L_5 = (KeyValuePair_2U5BU5D_t7165*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(KeyValuePair_2_t2037 *)(KeyValuePair_2_t2037 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2037  Enumerator_get_Current_m39182_gshared (Enumerator_t7167 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2037  L_0 = (KeyValuePair_2_t2037 )(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_11MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m39183_gshared (ReadOnlyCollection_1_t7169 * __this, Object_t* ___list, const MethodInfo* method)
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
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4742, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m39184_gshared (ReadOnlyCollection_1_t7169 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m39185_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m39186_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m39187_gshared (ReadOnlyCollection_1_t7169 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m39188_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" KeyValuePair_2_t2037  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m39189_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t7169 *)__this);
		KeyValuePair_2_t2037  L_1 = (KeyValuePair_2_t2037 )VirtFuncInvoker1< KeyValuePair_2_t2037 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t7169 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m39190_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, KeyValuePair_2_t2037  ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39191_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m39192_gshared (ReadOnlyCollection_1_t7169 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m39193_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
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
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m39194_gshared (ReadOnlyCollection_1_t7169 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m39195_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m39196_gshared (ReadOnlyCollection_1_t7169 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m39197_gshared (ReadOnlyCollection_1_t7169 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m39198_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m39199_gshared (ReadOnlyCollection_1_t7169 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m39200_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m39201_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m39202_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m39203_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m39204_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m39205_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		KeyValuePair_2_t2037  L_2 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker1< KeyValuePair_2_t2037 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		KeyValuePair_2_t2037  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m39206_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m39207_gshared (ReadOnlyCollection_1_t7169 * __this, KeyValuePair_2_t2037  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2_t2037  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (KeyValuePair_2_t2037 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m39208_gshared (ReadOnlyCollection_1_t7169 * __this, KeyValuePair_2U5BU5D_t7165* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2U5BU5D_t7165* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t7165*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (KeyValuePair_2U5BU5D_t7165*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m39209_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m39210_gshared (ReadOnlyCollection_1_t7169 * __this, KeyValuePair_2_t2037  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2_t2037  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (KeyValuePair_2_t2037 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m39211_gshared (ReadOnlyCollection_1_t7169 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t2037  ReadOnlyCollection_1_get_Item_m39212_gshared (ReadOnlyCollection_1_t7169 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		KeyValuePair_2_t2037  L_2 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker1< KeyValuePair_2_t2037 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m39213_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t7166 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t7166 * L_0 = (List_1_t7166 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t7166 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t7166 *)L_0;
		List_1_t7166 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t7166 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39214_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m39215_gshared (Collection_1_t7170 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m39216_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m39217_gshared (Collection_1_t7170 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		KeyValuePair_2_t2037  L_4 = (( KeyValuePair_2_t2037  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertItem(System.Int32,T) */, (Collection_1_t7170 *)__this, (int32_t)L_2, (KeyValuePair_2_t2037 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m39218_gshared (Collection_1_t7170 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m39219_gshared (Collection_1_t7170 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m39220_gshared (Collection_1_t7170 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2037  L_2 = (( KeyValuePair_2_t2037  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertItem(System.Int32,T) */, (Collection_1_t7170 *)__this, (int32_t)L_0, (KeyValuePair_2_t2037 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m39221_gshared (Collection_1_t7170 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2037  L_2 = (( KeyValuePair_2_t2037  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t7170 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T) */, (Collection_1_t7170 *)__this, (KeyValuePair_2_t2037 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveItem(System.Int32) */, (Collection_1_t7170 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m39222_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m39223_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m39224_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m39225_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m39226_gshared (Collection_1_t7170 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		KeyValuePair_2_t2037  L_2 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker1< KeyValuePair_2_t2037 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		KeyValuePair_2_t2037  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m39227_gshared (Collection_1_t7170 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2037  L_2 = (( KeyValuePair_2_t2037  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetItem(System.Int32,T) */, (Collection_1_t7170 *)__this, (int32_t)L_0, (KeyValuePair_2_t2037 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void Collection_1_Add_m39228_gshared (Collection_1_t7170 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		KeyValuePair_2_t2037  L_3 = ___item;
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertItem(System.Int32,T) */, (Collection_1_t7170 *)__this, (int32_t)L_2, (KeyValuePair_2_t2037 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Collection_1_Clear_m39229_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ClearItems() */, (Collection_1_t7170 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ClearItems()
extern "C" void Collection_1_ClearItems_m39230_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool Collection_1_Contains_m39231_gshared (Collection_1_t7170 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2_t2037  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (KeyValuePair_2_t2037 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m39232_gshared (Collection_1_t7170 * __this, KeyValuePair_2U5BU5D_t7165* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2U5BU5D_t7165* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t7165*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (KeyValuePair_2U5BU5D_t7165*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m39233_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m39234_gshared (Collection_1_t7170 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2_t2037  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (KeyValuePair_2_t2037 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m39235_gshared (Collection_1_t7170 * __this, int32_t ___index, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		KeyValuePair_2_t2037  L_1 = ___item;
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertItem(System.Int32,T) */, (Collection_1_t7170 *)__this, (int32_t)L_0, (KeyValuePair_2_t2037 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m39236_gshared (Collection_1_t7170 * __this, int32_t ___index, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		KeyValuePair_2_t2037  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (KeyValuePair_2_t2037 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool Collection_1_Remove_m39237_gshared (Collection_1_t7170 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		KeyValuePair_2_t2037  L_0 = ___item;
		NullCheck((Collection_1_t7170 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T) */, (Collection_1_t7170 *)__this, (KeyValuePair_2_t2037 )L_0);
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
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveItem(System.Int32) */, (Collection_1_t7170 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m39238_gshared (Collection_1_t7170 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveItem(System.Int32) */, (Collection_1_t7170 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m39239_gshared (Collection_1_t7170 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m39240_gshared (Collection_1_t7170 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t2037  Collection_1_get_Item_m39241_gshared (Collection_1_t7170 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		KeyValuePair_2_t2037  L_2 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker1< KeyValuePair_2_t2037 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m39242_gshared (Collection_1_t7170 * __this, int32_t ___index, KeyValuePair_2_t2037  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		KeyValuePair_2_t2037  L_1 = ___value;
		NullCheck((Collection_1_t7170 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetItem(System.Int32,T) */, (Collection_1_t7170 *)__this, (int32_t)L_0, (KeyValuePair_2_t2037 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m39243_gshared (Collection_1_t7170 * __this, int32_t ___index, KeyValuePair_2_t2037  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		KeyValuePair_2_t2037  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t2037  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (KeyValuePair_2_t2037 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m39244_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t2037  Collection_1_ConvertItem_m39245_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
		return ((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		ArgumentException_t725 * L_3 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_3, (String_t*)(String_t*) &_stringLiteral4739, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m39246_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m39247_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t4165_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m39248_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_13.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_13MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_13.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_13MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void EqualityComparer_1__ctor_m39249_gshared (EqualityComparer_1_t7171 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t5752_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m39250_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t7171_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t7171 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t7172 * L_8 = (DefaultComparer_t7172 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t7172 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t7171_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m39251_gshared (EqualityComparer_1_t7171 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t7171 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T) */, (EqualityComparer_1_t7171 *)__this, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m39252_gshared (EqualityComparer_1_t7171 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t7171 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t2037 , KeyValuePair_2_t2037  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (EqualityComparer_1_t7171 *)__this, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Default()
extern "C" EqualityComparer_1_t7171 * EqualityComparer_1_get_Default_m39253_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t7171 * L_0 = ((EqualityComparer_1_t7171_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern TypeInfo* EqualityComparer_1_t7171_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m39254_gshared (DefaultComparer_t7172 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t7171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14003);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t7171 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t7171_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t7171 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t7171 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m39255_gshared (DefaultComparer_t7172 * __this, KeyValuePair_2_t2037  ___obj, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2037  L_0 = ___obj;
		KeyValuePair_2_t2037  L_1 = L_0;
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
extern "C" bool DefaultComparer_Equals_m39256_gshared (DefaultComparer_t7172 * __this, KeyValuePair_2_t2037  ___x, KeyValuePair_2_t2037  ___y, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2037  L_0 = ___x;
		KeyValuePair_2_t2037  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		KeyValuePair_2_t2037  L_3 = ___y;
		KeyValuePair_2_t2037  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		KeyValuePair_2_t2037  L_6 = ___y;
		KeyValuePair_2_t2037  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m39257_gshared (Predicate_1_t7173 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m39258_gshared (Predicate_1_t7173 * __this, KeyValuePair_2_t2037  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m39258((Predicate_1_t7173 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t2037  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2037  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2037_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m39259_gshared (Predicate_1_t7173 * __this, KeyValuePair_2_t2037  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9679);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t2037_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m39260_gshared (Predicate_1_t7173 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_11.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_11MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Comparer_1__ctor_m39261_gshared (Comparer_1_t7174 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern const Il2CppType* GenericComparer_1_t5742_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m39262_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t7174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t7174 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t7175 * L_8 = (DefaultComparer_t7175 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t7175 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t7174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m39263_gshared (Comparer_1_t7174 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t7174 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, KeyValuePair_2_t2037 , KeyValuePair_2_t2037  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Compare(T,T) */, (Comparer_1_t7174 *)__this, (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (KeyValuePair_2_t2037 )((*(KeyValuePair_2_t2037 *)((KeyValuePair_2_t2037 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t725 * L_8 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m10458(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Default()
extern "C" Comparer_1_t7174 * Comparer_1_get_Default_m39264_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t7174 * L_0 = ((Comparer_1_t7174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
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



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern TypeInfo* Comparer_1_t7174_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m39265_gshared (DefaultComparer_t7175 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t7174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14008);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t7174 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t7174_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t7174 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t7174 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Compare(T,T)
extern TypeInfo* IComparable_t43_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m39266_gshared (DefaultComparer_t7175 * __this, KeyValuePair_2_t2037  ___x, KeyValuePair_2_t2037  ___y, const MethodInfo* method)
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
		KeyValuePair_2_t2037  L_0 = ___x;
		KeyValuePair_2_t2037  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		KeyValuePair_2_t2037  L_3 = ___y;
		KeyValuePair_2_t2037  L_4 = L_3;
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
		KeyValuePair_2_t2037  L_6 = ___y;
		KeyValuePair_2_t2037  L_7 = L_6;
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
		KeyValuePair_2_t2037  L_9 = ___x;
		KeyValuePair_2_t2037  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		KeyValuePair_2_t2037  L_12 = ___x;
		KeyValuePair_2_t2037  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		KeyValuePair_2_t2037  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (KeyValuePair_2_t2037 )L_15);
		return L_16;
	}

IL_003e:
	{
		KeyValuePair_2_t2037  L_17 = ___x;
		KeyValuePair_2_t2037  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t43_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		KeyValuePair_2_t2037  L_20 = ___x;
		KeyValuePair_2_t2037  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		KeyValuePair_2_t2037  L_23 = ___y;
		KeyValuePair_2_t2037  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t43_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t43_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t43_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t725 * L_27 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_27, (String_t*)(String_t*) &_stringLiteral4729, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Comparison_1_gen_84MethodDeclarations.h"



// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m39267_gshared (Comparison_1_t7176 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m39268_gshared (Comparison_1_t7176 * __this, KeyValuePair_2_t2037  ___x, KeyValuePair_2_t2037  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m39268((Comparison_1_t7176 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t2037  ___x, KeyValuePair_2_t2037  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2037  ___x, KeyValuePair_2_t2037  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2037_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m39269_gshared (Comparison_1_t7176 * __this, KeyValuePair_2_t2037  ___x, KeyValuePair_2_t2037  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9679);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(KeyValuePair_2_t2037_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(KeyValuePair_2_t2037_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m39270_gshared (Comparison_1_t7176 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::MoveNext()
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__4_MoveNext_m39378_gshared (U3CGetEnumeratorU3Ed__4_t7183 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	KeyValuePair_2_t1962  V_2 = {0};
	KeyValuePair_2_t1962  V_3 = {0};
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
			FlexibleDictionaryWrapper_2_t2423 * L_2 = (FlexibleDictionaryWrapper_2_t2423 *)(__this->___U3CU3E4__this_2);
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
			KeyValuePair_2_t1962  L_6 = (KeyValuePair_2_t1962 )InterfaceFuncInvoker0< KeyValuePair_2_t1962  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (Object_t*)L_5);
			__this->___U3CpairU3E5__5_3 = L_6;
			KeyValuePair_2_t1962  L_7 = (KeyValuePair_2_t1962 )(__this->___U3CpairU3E5__5_3);
			V_2 = (KeyValuePair_2_t1962 )L_7;
			String_t* L_8 = (( String_t* (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1962 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
			KeyValuePair_2_t1962  L_9 = (KeyValuePair_2_t1962 )(__this->___U3CpairU3E5__5_3);
			V_3 = (KeyValuePair_2_t1962 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t1962 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t1962 *)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			Object_t * L_11 = L_10;
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
			Object_t * L_12 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_11), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			KeyValuePair_2_t1962  L_13 = {0};
			(( void (*) (KeyValuePair_2_t1962 *, String_t*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(&L_13, (String_t*)L_8, (Object_t *)((Object_t *)Castclass(L_12, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
			NullCheck((U3CGetEnumeratorU3Ed__4_t7183 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__4_t7183 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((U3CGetEnumeratorU3Ed__4_t7183 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		}

IL_00b0:
		{
			V_0 = (bool)0;
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FAULT_00b4;
	}

FAULT_00b4:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__4_t7183 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__4_t7183 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((U3CGetEnumeratorU3Ed__4_t7183 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		IL2CPP_END_FINALLY(180)
	} // end fault
	IL2CPP_CLEANUP(180)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_00bb:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,TOut>>.get_Current()
extern "C" KeyValuePair_2_t1962  U3CGetEnumeratorU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CTOutU3EU3E_get_Current_m39379_gshared (U3CGetEnumeratorU3Ed__4_t7183 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1962  L_0 = (KeyValuePair_2_t1962 )(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_Reset_m39380_gshared (U3CGetEnumeratorU3Ed__4_t7183 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__4_System_IDisposable_Dispose_m39381_gshared (U3CGetEnumeratorU3Ed__4_t7183 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__4_t7183 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__4_t7183 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((U3CGetEnumeratorU3Ed__4_t7183 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0021:
	{
		return;
	}
}
// System.Object Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_get_Current_m39382_gshared (U3CGetEnumeratorU3Ed__4_t7183 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1962  L_0 = (KeyValuePair_2_t1962 )(__this->___U3CU3E2__current_0);
		KeyValuePair_2_t1962  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return L_2;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__4__ctor_m39383_gshared (U3CGetEnumeratorU3Ed__4_t7183 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
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
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally7_m39384_gshared (U3CGetEnumeratorU3Ed__4_t7183 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
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
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_1);
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

// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnumeMethodDeclarations.h"


// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IList`1<TIn>)
extern "C" void FlexibleListWrapper_2__ctor_m39385_gshared (FlexibleListWrapper_2_t2134 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m39386_gshared (FlexibleListWrapper_2_t2134 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m39387_gshared (FlexibleListWrapper_2_t2134 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m39388_gshared (FlexibleListWrapper_2_t2134 * __this, int32_t ___index, const MethodInfo* method)
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
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m39389_gshared (FlexibleListWrapper_2_t2134 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m39390_gshared (FlexibleListWrapper_2_t2134 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Add(TOut)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m39391_gshared (FlexibleListWrapper_2_t2134 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< Object_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m39392_gshared (FlexibleListWrapper_2_t2134 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Contains(TOut)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m39393_gshared (FlexibleListWrapper_2_t2134 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m39394_gshared (FlexibleListWrapper_2_t2134 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t1814 * L_1 = ((FlexibleListWrapper_2_t2134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t1814 * L_3 = (Func_2_t1814 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t1814 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t2134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t1814 * L_4 = ((FlexibleListWrapper_2_t2134_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1814 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t1814 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t2 * L_6 = (( List_1_t2 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t21* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t2 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t21*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t2 *)L_6, (ObjectU5BU5D_t21*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m39395_gshared (FlexibleListWrapper_2_t2134 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m39396_gshared (FlexibleListWrapper_2_t2134 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Remove(TOut)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m39397_gshared (FlexibleListWrapper_2_t2134 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m39398_gshared (FlexibleListWrapper_2_t2134 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t7184 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t7184 * L_0 = (U3CGetEnumeratorU3Ed__2_t7184 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t7184 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t7184 *)L_0;
		U3CGetEnumeratorU3Ed__2_t7184 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t7184 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m39399_gshared (FlexibleListWrapper_2_t2134 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t2134 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t2134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t2134 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m39400_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		Object_t * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::MoveNext()
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__2_MoveNext_m39401_gshared (U3CGetEnumeratorU3Ed__2_t7184 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
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
			FlexibleListWrapper_2_t2134 * L_2 = (FlexibleListWrapper_2_t2134 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t *)L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t746_il2cpp_TypeInfo_var, (Object_t *)L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
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
			NullCheck((U3CGetEnumeratorU3Ed__2_t7184 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__2_t7184 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t7184 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		}

IL_008d:
		{
			V_0 = (bool)0;
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FAULT_0091;
	}

FAULT_0091:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t7184 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t7184 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((U3CGetEnumeratorU3Ed__2_t7184 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_END_FINALLY(145)
	} // end fault
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0098:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::System.Collections.Generic.IEnumerator<TOut>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CTOutU3E_get_Current_m39402_gshared (U3CGetEnumeratorU3Ed__2_t7184 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m39403_gshared (U3CGetEnumeratorU3Ed__2_t7184 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m39404_gshared (U3CGetEnumeratorU3Ed__2_t7184 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t7184 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t7184 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t7184 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0021:
	{
		return;
	}
}
// System.Object Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m39405_gshared (U3CGetEnumeratorU3Ed__2_t7184 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__2__ctor_m39406_gshared (U3CGetEnumeratorU3Ed__2_t7184 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
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
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally6_m39407_gshared (U3CGetEnumeratorU3Ed__2_t7184 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
		__this->___U3CU3E7__wrap5_5 = ((Object_t *)IsInst(L_0, IDisposable_t646_il2cpp_TypeInfo_var));
		Object_t * L_1 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		NullCheck((Object_t *)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_2);
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
extern "C" bool IdentityEqualityComparer_1_Equals_m39408_gshared (IdentityEqualityComparer_1_t2047 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		bool L_4 = Object_ReferenceEquals_m11423(NULL /*static, unused*/, (Object_t *)((Object_t *)L_1), (Object_t *)((Object_t *)L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Parse.Internal.IdentityEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C" int32_t IdentityEqualityComparer_1_GetHashCode_m39409_gshared (IdentityEqualityComparer_1_t2047 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		int32_t L_2 = RuntimeHelpers_GetHashCode_m19523(NULL /*static, unused*/, (Object_t *)((Object_t *)L_1), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Parse.Internal.IdentityEqualityComparer`1<System.Object>::.ctor()
extern "C" void IdentityEqualityComparer_1__ctor_m9066_gshared (IdentityEqualityComparer_1_t2047 * __this, const MethodInfo* method)
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
extern "C" void PartialAccessor_1__ctor_m39410_gshared (PartialAccessor_1_t7185 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::Invoke(T&)
extern "C" void PartialAccessor_1_Invoke_m39411_gshared (PartialAccessor_1_t7185 * __this, Object_t ** ___arg, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PartialAccessor_1_Invoke_m39411((PartialAccessor_1_t7185 *)__this->___prev_9,___arg, method);
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
extern "C" Object_t * PartialAccessor_1_BeginInvoke_m39412_gshared (PartialAccessor_1_t7185 * __this, Object_t ** ___arg, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = (*___arg);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::EndInvoke(T&,System.IAsyncResult)
extern "C" void PartialAccessor_1_EndInvoke_m39413_gshared (PartialAccessor_1_t7185 * __this, Object_t ** ___arg, Object_t * ___result, const MethodInfo* method)
{
	void* ___out_args[] = {
	___arg,
	};
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, ___out_args);
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Byte,System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_8.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Byte,System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_8MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>
#include "System_Core_System_Func_2_gen_77.h"
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_17.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>
#include "System_Core_System_Func_2_gen_77MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Byte,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m39428_gshared (U3CU3Ec__DisplayClass1_2_t7187 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Byte,System.Object>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" Object_t * U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m39429_gshared (U3CU3Ec__DisplayClass1_2_t7187 * __this, Task_t344 * ___t, const MethodInfo* method)
{
	{
		Func_2_t2005 * L_0 = (Func_2_t2005 *)(__this->___continuation_0);
		Task_t344 * L_1 = ___t;
		NullCheck((Func_2_t2005 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Task_1_t1993 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>::Invoke(!0) */, (Func_2_t2005 *)L_0, (Task_1_t1993 *)((Task_1_t1993 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
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
extern TypeInfo* Comparer_1_t6211_il2cpp_TypeInfo_var;
extern "C" void OrderedSequence_2__ctor_m39455_gshared (OrderedSequence_2_t7192 * __this, Object_t* ___source, Func_2_t1814 * ___key_selector, Object_t* ___comparer, int32_t ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t6211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12260);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* G_B2_0 = {0};
	OrderedSequence_2_t7192 * G_B2_1 = {0};
	Object_t* G_B1_0 = {0};
	OrderedSequence_2_t7192 * G_B1_1 = {0};
	{
		Object_t* L_0 = ___source;
		NullCheck((OrderedEnumerable_1_t7190 *)__this);
		(( void (*) (OrderedEnumerable_1_t7190 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((OrderedEnumerable_1_t7190 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_2_t1814 * L_1 = ___key_selector;
		__this->___selector_2 = L_1;
		Object_t* L_2 = ___comparer;
		Object_t* L_3 = (Object_t*)L_2;
		G_B1_0 = L_3;
		G_B1_1 = ((OrderedSequence_2_t7192 *)(__this));
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = ((OrderedSequence_2_t7192 *)(__this));
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t6211_il2cpp_TypeInfo_var);
		Comparer_1_t6211 * L_4 = (( Comparer_1_t6211 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		G_B2_0 = ((Object_t*)(L_4));
		G_B2_1 = ((OrderedSequence_2_t7192 *)(G_B1_1));
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
extern "C" SortContext_1_t7193 * OrderedSequence_2_CreateContext_m39456_gshared (OrderedSequence_2_t7192 * __this, SortContext_1_t7193 * ___current, const MethodInfo* method)
{
	SortContext_1_t7193 * V_0 = {0};
	{
		Func_2_t1814 * L_0 = (Func_2_t1814 *)(__this->___selector_2);
		Object_t* L_1 = (Object_t*)(__this->___comparer_3);
		int32_t L_2 = (int32_t)(__this->___direction_4);
		SortContext_1_t7193 * L_3 = ___current;
		SortSequenceContext_2_t7194 * L_4 = (SortSequenceContext_2_t7194 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (SortSequenceContext_2_t7194 *, Func_2_t1814 *, Object_t*, int32_t, SortContext_1_t7193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_4, (Func_2_t1814 *)L_0, (Object_t*)L_1, (int32_t)L_2, (SortContext_1_t7193 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (SortContext_1_t7193 *)L_4;
		OrderedEnumerable_1_t7190 * L_5 = (OrderedEnumerable_1_t7190 *)(__this->___parent_1);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		OrderedEnumerable_1_t7190 * L_6 = (OrderedEnumerable_1_t7190 *)(__this->___parent_1);
		SortContext_1_t7193 * L_7 = V_0;
		NullCheck((OrderedEnumerable_1_t7190 *)L_6);
		SortContext_1_t7193 * L_8 = (SortContext_1_t7193 *)VirtFuncInvoker1< SortContext_1_t7193 *, SortContext_1_t7193 * >::Invoke(6 /* System.Linq.SortContext`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::CreateContext(System.Linq.SortContext`1<TElement>) */, (OrderedEnumerable_1_t7190 *)L_6, (SortContext_1_t7193 *)L_7);
		return L_8;
	}

IL_0031:
	{
		SortContext_1_t7193 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" Object_t* OrderedSequence_2_Sort_m39457_gshared (OrderedSequence_2_t7192 * __this, Object_t* ___source, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___source;
		NullCheck((OrderedSequence_2_t7192 *)__this);
		SortContext_1_t7193 * L_1 = (SortContext_1_t7193 *)VirtFuncInvoker1< SortContext_1_t7193 *, SortContext_1_t7193 * >::Invoke(6 /* System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>) */, (OrderedSequence_2_t7192 *)__this, (SortContext_1_t7193 *)NULL);
		Object_t* L_2 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t7193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t*)L_0, (SortContext_1_t7193 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Linq.OrderedEnumerable`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" void OrderedEnumerable_1__ctor_m39458_gshared (OrderedEnumerable_1_t7190 * __this, Object_t* ___source, const MethodInfo* method)
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
extern "C" Object_t * OrderedEnumerable_1_System_Collections_IEnumerable_GetEnumerator_m39459_gshared (OrderedEnumerable_1_t7190 * __this, const MethodInfo* method)
{
	{
		NullCheck((OrderedEnumerable_1_t7190 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::GetEnumerator() */, (OrderedEnumerable_1_t7190 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::GetEnumerator()
extern "C" Object_t* OrderedEnumerable_1_GetEnumerator_m39460_gshared (OrderedEnumerable_1_t7190 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___source_0);
		NullCheck((OrderedEnumerable_1_t7190 *)__this);
		Object_t* L_1 = (Object_t*)VirtFuncInvoker1< Object_t*, Object_t* >::Invoke(7 /* System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>) */, (OrderedEnumerable_1_t7190 *)__this, (Object_t*)L_0);
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
extern "C" void SortContext_1__ctor_m39461_gshared (SortContext_1_t7193 * __this, int32_t ___direction, SortContext_1_t7193 * ___child_context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___direction;
		__this->___direction_0 = L_0;
		SortContext_1_t7193 * L_1 = ___child_context;
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
extern "C" void SortSequenceContext_2__ctor_m39462_gshared (SortSequenceContext_2_t7194 * __this, Func_2_t1814 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t7193 * ___child_context, const MethodInfo* method)
{
	{
		int32_t L_0 = ___direction;
		SortContext_1_t7193 * L_1 = ___child_context;
		NullCheck((SortContext_1_t7193 *)__this);
		(( void (*) (SortContext_1_t7193 *, int32_t, SortContext_1_t7193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((SortContext_1_t7193 *)__this, (int32_t)L_0, (SortContext_1_t7193 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_2_t1814 * L_2 = ___selector;
		__this->___selector_2 = L_2;
		Object_t* L_3 = ___comparer;
		__this->___comparer_3 = L_3;
		return;
	}
}
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m39463_gshared (SortSequenceContext_2_t7194 * __this, ObjectU5BU5D_t21* ___elements, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SortContext_1_t7193 * L_0 = (SortContext_1_t7193 *)(((SortContext_1_t7193 *)__this)->___child_context_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		SortContext_1_t7193 * L_1 = (SortContext_1_t7193 *)(((SortContext_1_t7193 *)__this)->___child_context_1);
		ObjectU5BU5D_t21* L_2 = ___elements;
		NullCheck((SortContext_1_t7193 *)L_1);
		VirtActionInvoker1< ObjectU5BU5D_t21* >::Invoke(4 /* System.Void System.Linq.SortContext`1<System.Object>::Initialize(TElement[]) */, (SortContext_1_t7193 *)L_1, (ObjectU5BU5D_t21*)L_2);
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
		Func_2_t1814 * L_6 = (Func_2_t1814 *)(__this->___selector_2);
		ObjectU5BU5D_t21* L_7 = ___elements;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((Func_2_t1814 *)L_6);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* TResult System.Func`2<System.Object,System.Object>::Invoke(T) */, (Func_2_t1814 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)));
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
extern "C" int32_t SortSequenceContext_2_Compare_m39464_gshared (SortSequenceContext_2_t7194 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method)
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
		SortContext_1_t7193 * L_9 = (SortContext_1_t7193 *)(((SortContext_1_t7193 *)__this)->___child_context_1);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		SortContext_1_t7193 * L_10 = (SortContext_1_t7193 *)(((SortContext_1_t7193 *)__this)->___child_context_1);
		int32_t L_11 = ___first_index;
		int32_t L_12 = ___second_index;
		NullCheck((SortContext_1_t7193 *)L_10);
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Linq.SortContext`1<System.Object>::Compare(System.Int32,System.Int32) */, (SortContext_1_t7193 *)L_10, (int32_t)L_11, (int32_t)L_12);
		return L_13;
	}

IL_0043:
	{
		int32_t L_14 = (int32_t)(((SortContext_1_t7193 *)__this)->___direction_0);
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
		int32_t L_19 = (int32_t)(((SortContext_1_t7193 *)__this)->___direction_0);
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
struct Enumerable_t718;
struct ObjectU5BU5D_t21;
struct IEnumerable_1_t729;
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t21* Enumerable_ToArray_TisObject_t_m8905_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m8905(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m8905_gshared)(__this /* static, unused */, p0, method)


// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m39465_gshared (QuickSort_1_t7195 * __this, Object_t* ___source, SortContext_1_t7193 * ___context, const MethodInfo* method)
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
		SortContext_1_t7193 * L_4 = ___context;
		__this->___context_2 = L_4;
		return;
	}
}
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern "C" Int32U5BU5D_t119* QuickSort_1_CreateIndexes_m39466_gshared (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method)
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
extern "C" void QuickSort_1_PerformSort_m39467_gshared (QuickSort_1_t7195 * __this, const MethodInfo* method)
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
		SortContext_1_t7193 * L_1 = (SortContext_1_t7193 *)(__this->___context_2);
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)(__this->___elements_0);
		NullCheck((SortContext_1_t7193 *)L_1);
		VirtActionInvoker1< ObjectU5BU5D_t21* >::Invoke(4 /* System.Void System.Linq.SortContext`1<System.Object>::Initialize(TElement[]) */, (SortContext_1_t7193 *)L_1, (ObjectU5BU5D_t21*)L_2);
		Int32U5BU5D_t119* L_3 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		NullCheck(L_3);
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((QuickSort_1_t7195 *)__this, (int32_t)0, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m39468_gshared (QuickSort_1_t7195 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method)
{
	{
		SortContext_1_t7193 * L_0 = (SortContext_1_t7193 *)(__this->___context_2);
		int32_t L_1 = ___first_index;
		int32_t L_2 = ___second_index;
		NullCheck((SortContext_1_t7193 *)L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Linq.SortContext`1<System.Object>::Compare(System.Int32,System.Int32) */, (SortContext_1_t7193 *)L_0, (int32_t)L_1, (int32_t)L_2);
		return L_3;
	}
}
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m39469_gshared (QuickSort_1_t7195 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method)
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
		NullCheck((QuickSort_1_t7195 *)__this);
		int32_t L_8 = (( int32_t (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t7195 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_9 = ___left;
		int32_t L_10 = V_0;
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
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
		NullCheck((QuickSort_1_t7195 *)__this);
		int32_t L_17 = (( int32_t (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t7195 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_13)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_18 = ___left;
		int32_t L_19 = ___right;
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_18, (int32_t)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
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
		NullCheck((QuickSort_1_t7195 *)__this);
		int32_t L_26 = (( int32_t (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t7195 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = ___right;
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_27, (int32_t)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0072:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = ___right;
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_29, (int32_t)((int32_t)((int32_t)L_30-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Int32U5BU5D_t119* L_31 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_32 = ___right;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32-(int32_t)1)));
		int32_t L_33 = ((int32_t)((int32_t)L_32-(int32_t)1));
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_31, L_33));
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m39470_gshared (QuickSort_1_t7195 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method)
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
		NullCheck((QuickSort_1_t7195 *)__this);
		int32_t L_6 = (( int32_t (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
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
		NullCheck((QuickSort_1_t7195 *)__this);
		int32_t L_12 = (( int32_t (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t7195 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10)), (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
		NullCheck((QuickSort_1_t7195 *)__this);
		int32_t L_18 = (( int32_t (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t7195 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_16)), (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
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
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_23, (int32_t)((int32_t)((int32_t)L_24-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_25 = ___left;
		int32_t L_26 = V_0;
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_25, (int32_t)((int32_t)((int32_t)L_26-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_27 = V_0;
		int32_t L_28 = ___right;
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((QuickSort_1_t7195 *)__this, (int32_t)((int32_t)((int32_t)L_27+(int32_t)1)), (int32_t)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_009d;
	}

IL_0095:
	{
		int32_t L_29 = ___left;
		int32_t L_30 = ___right;
		NullCheck((QuickSort_1_t7195 *)__this);
		(( void (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_29, (int32_t)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_009d:
	{
		return;
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m39471_gshared (QuickSort_1_t7195 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method)
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
		NullCheck((QuickSort_1_t7195 *)__this);
		int32_t L_17 = (( int32_t (*) (QuickSort_1_t7195 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t7195 *)__this, (int32_t)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
extern "C" void QuickSort_1_Swap_m39472_gshared (QuickSort_1_t7195 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method)
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
extern "C" Object_t* QuickSort_1_Sort_m39473_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t7193 * ___context, const MethodInfo* method)
{
	U3CSortU3Ec__Iterator21_t7196 * V_0 = {0};
	{
		U3CSortU3Ec__Iterator21_t7196 * L_0 = (U3CSortU3Ec__Iterator21_t7196 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		(( void (*) (U3CSortU3Ec__Iterator21_t7196 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		V_0 = (U3CSortU3Ec__Iterator21_t7196 *)L_0;
		U3CSortU3Ec__Iterator21_t7196 * L_1 = V_0;
		Object_t* L_2 = ___source;
		NullCheck(L_1);
		L_1->___source_0 = L_2;
		U3CSortU3Ec__Iterator21_t7196 * L_3 = V_0;
		SortContext_1_t7193 * L_4 = ___context;
		NullCheck(L_3);
		L_3->___context_1 = L_4;
		U3CSortU3Ec__Iterator21_t7196 * L_5 = V_0;
		Object_t* L_6 = ___source;
		NullCheck(L_5);
		L_5->___U3CU24U3Esource_6 = L_6;
		U3CSortU3Ec__Iterator21_t7196 * L_7 = V_0;
		SortContext_1_t7193 * L_8 = ___context;
		NullCheck(L_7);
		L_7->___U3CU24U3Econtext_7 = L_8;
		U3CSortU3Ec__Iterator21_t7196 * L_9 = V_0;
		U3CSortU3Ec__Iterator21_t7196 * L_10 = (U3CSortU3Ec__Iterator21_t7196 *)L_9;
		NullCheck(L_10);
		L_10->___U24PC_4 = ((int32_t)-2);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::.ctor()
extern "C" void U3CSortU3Ec__Iterator21__ctor_m39474_gshared (U3CSortU3Ec__Iterator21_t7196 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TElement System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.Generic.IEnumerator<TElement>.get_Current()
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m39475_gshared (U3CSortU3Ec__Iterator21_t7196 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_IEnumerator_get_Current_m39476_gshared (U3CSortU3Ec__Iterator21_t7196 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_IEnumerable_GetEnumerator_m39477_gshared (U3CSortU3Ec__Iterator21_t7196 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CSortU3Ec__Iterator21_t7196 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TElement> System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.Generic.IEnumerable<TElement>.GetEnumerator() */, (U3CSortU3Ec__Iterator21_t7196 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TElement> System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.Generic.IEnumerable<TElement>.GetEnumerator()
extern "C" Object_t* U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumerableU3CTElementU3E_GetEnumerator_m39478_gshared (U3CSortU3Ec__Iterator21_t7196 * __this, const MethodInfo* method)
{
	U3CSortU3Ec__Iterator21_t7196 * V_0 = {0};
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
		U3CSortU3Ec__Iterator21_t7196 * L_2 = (U3CSortU3Ec__Iterator21_t7196 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CSortU3Ec__Iterator21_t7196 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CSortU3Ec__Iterator21_t7196 *)L_2;
		U3CSortU3Ec__Iterator21_t7196 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CSortU3Ec__Iterator21_t7196 * L_5 = V_0;
		SortContext_1_t7193 * L_6 = (SortContext_1_t7193 *)(__this->___U3CU24U3Econtext_7);
		NullCheck(L_5);
		L_5->___context_1 = L_6;
		U3CSortU3Ec__Iterator21_t7196 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::MoveNext()
extern "C" bool U3CSortU3Ec__Iterator21_MoveNext_m39479_gshared (U3CSortU3Ec__Iterator21_t7196 * __this, const MethodInfo* method)
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
		SortContext_1_t7193 * L_3 = (SortContext_1_t7193 *)(__this->___context_1);
		QuickSort_1_t7195 * L_4 = (QuickSort_1_t7195 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (QuickSort_1_t7195 *, Object_t*, SortContext_1_t7193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (Object_t*)L_2, (SortContext_1_t7193 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		__this->___U3CsorterU3E__0_2 = L_4;
		QuickSort_1_t7195 * L_5 = (QuickSort_1_t7195 *)(__this->___U3CsorterU3E__0_2);
		NullCheck((QuickSort_1_t7195 *)L_5);
		(( void (*) (QuickSort_1_t7195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t7195 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		__this->___U3CiU3E__1_3 = 0;
		goto IL_0091;
	}

IL_004f:
	{
		QuickSort_1_t7195 * L_6 = (QuickSort_1_t7195 *)(__this->___U3CsorterU3E__0_2);
		NullCheck(L_6);
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(L_6->___elements_0);
		QuickSort_1_t7195 * L_8 = (QuickSort_1_t7195 *)(__this->___U3CsorterU3E__0_2);
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
		QuickSort_1_t7195 * L_15 = (QuickSort_1_t7195 *)(__this->___U3CsorterU3E__0_2);
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
extern "C" void U3CSortU3Ec__Iterator21_Dispose_m39480_gshared (U3CSortU3Ec__Iterator21_t7196 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_4 = (-1);
		return;
	}
}
// System.Void System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CSortU3Ec__Iterator21_Reset_m39481_gshared (U3CSortU3Ec__Iterator21_t7196 * __this, const MethodInfo* method)
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
// System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateConcatIteratorU3.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateConcatIteratorU3MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::.ctor()
extern "C" void U3CCreateConcatIteratorU3Ec__Iterator1_1__ctor_m39482_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateConcatIteratorU3Ec__Iterator1_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m39483_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateConcatIteratorU3Ec__Iterator1_1_System_Collections_IEnumerator_get_Current_m39484_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateConcatIteratorU3Ec__Iterator1_1_System_Collections_IEnumerable_GetEnumerator_m39485_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateConcatIteratorU3Ec__Iterator1_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m39486_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * __this, const MethodInfo* method)
{
	U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_6);
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
		U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * L_2 = (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 *)L_2;
		U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Efirst_8);
		NullCheck(L_3);
		L_3->___first_0 = L_4;
		U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * L_5 = V_0;
		Object_t* L_6 = (Object_t*)(__this->___U3CU24U3Esecond_9);
		NullCheck(L_5);
		L_5->___second_3 = L_6;
		U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateConcatIteratorU3Ec__Iterator1_1_MoveNext_m39487_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * __this, const MethodInfo* method)
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_12);
			IL2CPP_END_FINALLY(140)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x12C, IL_012c)
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_23);
			IL2CPP_END_FINALLY(266)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(266)
	{
		IL2CPP_JUMP_TBL(0x12C, IL_012c)
		IL2CPP_JUMP_TBL(0x123, IL_0123)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateConcatIteratorU3Ec__Iterator1_1_Dispose_m39488_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * __this, const MethodInfo* method)
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_5);
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateConcatIteratorU3Ec__Iterator1_1_Reset_m39489_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t7197 * __this, const MethodInfo* method)
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
// System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateDistinctIterator.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateDistinctIteratorMethodDeclarations.h"

// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4.h"
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4MethodDeclarations.h"


// System.Void System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::.ctor()
extern "C" void U3CCreateDistinctIteratorU3Ec__Iterator3_1__ctor_m39490_gshared (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateDistinctIteratorU3Ec__Iterator3_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m39491_gshared (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_6);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateDistinctIteratorU3Ec__Iterator3_1_System_Collections_IEnumerator_get_Current_m39492_gshared (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_6);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateDistinctIteratorU3Ec__Iterator3_1_System_Collections_IEnumerable_GetEnumerator_m39493_gshared (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateDistinctIteratorU3Ec__Iterator3_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m39494_gshared (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * __this, const MethodInfo* method)
{
	U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_5);
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
		U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * L_2 = (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 *)L_2;
		U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Ecomparer_7);
		NullCheck(L_3);
		L_3->___comparer_0 = L_4;
		U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * L_5 = V_0;
		Object_t* L_6 = (Object_t*)(__this->___U3CU24U3Esource_8);
		NullCheck(L_5);
		L_5->___source_2 = L_6;
		U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateDistinctIteratorU3Ec__Iterator3_1_MoveNext_m39495_gshared (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * __this, const MethodInfo* method)
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
		int32_t L_0 = (int32_t)(__this->___U24PC_5);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_5 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_00e1;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___comparer_0);
		HashSet_1_t2048 * L_3 = (HashSet_1_t2048 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (HashSet_1_t2048 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_3, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		__this->___U3CitemsU3E__0_1 = L_3;
		Object_t* L_4 = (Object_t*)(__this->___source_2);
		NullCheck((Object_t*)L_4);
		Object_t* L_5 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_4);
		__this->___U3CU24s_47U3E__1_3 = L_5;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_6 = V_0;
			if (((int32_t)((int32_t)L_6-(int32_t)1)) == 0)
			{
				goto IL_00ac;
			}
		}

IL_0054:
		{
			goto IL_00ac;
		}

IL_0059:
		{
			Object_t* L_7 = (Object_t*)(__this->___U3CU24s_47U3E__1_3);
			NullCheck((Object_t*)L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), (Object_t*)L_7);
			__this->___U3CelementU3E__2_4 = L_8;
			HashSet_1_t2048 * L_9 = (HashSet_1_t2048 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_10 = (Object_t *)(__this->___U3CelementU3E__2_4);
			NullCheck((HashSet_1_t2048 *)L_9);
			bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T) */, (HashSet_1_t2048 *)L_9, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_00ac;
			}
		}

IL_0080:
		{
			HashSet_1_t2048 * L_12 = (HashSet_1_t2048 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_13 = (Object_t *)(__this->___U3CelementU3E__2_4);
			NullCheck((HashSet_1_t2048 *)L_12);
			(( bool (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((HashSet_1_t2048 *)L_12, (Object_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
			Object_t * L_14 = (Object_t *)(__this->___U3CelementU3E__2_4);
			__this->___U24current_6 = L_14;
			__this->___U24PC_5 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xE3, FINALLY_00c1);
		}

IL_00ac:
		{
			Object_t* L_15 = (Object_t*)(__this->___U3CU24s_47U3E__1_3);
			NullCheck((Object_t *)L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_15);
			if (L_16)
			{
				goto IL_0059;
			}
		}

IL_00bc:
		{
			IL2CPP_LEAVE(0xDA, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_00c5;
			}
		}

IL_00c4:
		{
			IL2CPP_END_FINALLY(193)
		}

IL_00c5:
		{
			Object_t* L_18 = (Object_t*)(__this->___U3CU24s_47U3E__1_3);
			if (L_18)
			{
				goto IL_00ce;
			}
		}

IL_00cd:
		{
			IL2CPP_END_FINALLY(193)
		}

IL_00ce:
		{
			Object_t* L_19 = (Object_t*)(__this->___U3CU24s_47U3E__1_3);
			NullCheck((Object_t *)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_19);
			IL2CPP_END_FINALLY(193)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_JUMP_TBL(0xE3, IL_00e3)
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_00da:
	{
		__this->___U24PC_5 = (-1);
	}

IL_00e1:
	{
		return 0;
	}

IL_00e3:
	{
		return 1;
	}
	// Dead block : IL_00e5: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateDistinctIteratorU3Ec__Iterator3_1_Dispose_m39496_gshared (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * __this, const MethodInfo* method)
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
		int32_t L_0 = (int32_t)(__this->___U24PC_5);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_5 = (-1);
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
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_47U3E__1_3);
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
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_47U3E__1_3);
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
// System.Void System.Linq.Enumerable/<CreateDistinctIterator>c__Iterator3`1<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateDistinctIteratorU3Ec__Iterator3_1_Reset_m39497_gshared (U3CCreateDistinctIteratorU3Ec__Iterator3_1_t7198 * __this, const MethodInfo* method)
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
// System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateExceptIteratorU3.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateExceptIteratorU3MethodDeclarations.h"

struct Enumerable_t718;
struct IEnumerable_1_t729;
struct Object_t;
struct IEqualityComparer_1_t1775;
// Declaration System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0,System.Collections.Generic.IEqualityComparer`1<!!0>)
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0,System.Collections.Generic.IEqualityComparer`1<!!0>)
extern "C" bool Enumerable_Contains_TisObject_t_m8959_gshared (Object_t * __this /* static, unused */, Object_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define Enumerable_Contains_TisObject_t_m8959(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, Object_t *, Object_t*, const MethodInfo*))Enumerable_Contains_TisObject_t_m8959_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::.ctor()
extern "C" void U3CCreateExceptIteratorU3Ec__Iterator4_1__ctor_m39726_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateExceptIteratorU3Ec__Iterator4_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m39727_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateExceptIteratorU3Ec__Iterator4_1_System_Collections_IEnumerator_get_Current_m39728_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateExceptIteratorU3Ec__Iterator4_1_System_Collections_IEnumerable_GetEnumerator_m39729_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateExceptIteratorU3Ec__Iterator4_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m39730_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * __this, const MethodInfo* method)
{
	U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_6);
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
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * L_2 = (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 *)L_2;
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esecond_8);
		NullCheck(L_3);
		L_3->___second_0 = L_4;
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * L_5 = V_0;
		Object_t* L_6 = (Object_t*)(__this->___U3CU24U3Ecomparer_9);
		NullCheck(L_5);
		L_5->___comparer_1 = L_6;
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * L_7 = V_0;
		Object_t* L_8 = (Object_t*)(__this->___U3CU24U3Efirst_10);
		NullCheck(L_7);
		L_7->___first_3 = L_8;
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateExceptIteratorU3Ec__Iterator4_1_MoveNext_m39731_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * __this, const MethodInfo* method)
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
		HashSet_1_t2048 * L_4 = (HashSet_1_t2048 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (HashSet_1_t2048 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (Object_t*)L_2, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
			HashSet_1_t2048 * L_10 = (HashSet_1_t2048 *)(__this->___U3CitemsU3E__0_2);
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_19);
			IL2CPP_END_FINALLY(187)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_JUMP_TBL(0xD4, IL_00d4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateExceptIteratorU3Ec__Iterator4_1_Dispose_m39732_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * __this, const MethodInfo* method)
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
// System.Void System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateExceptIteratorU3Ec__Iterator4_1_Reset_m39733_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t7213 * __this, const MethodInfo* method)
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
// System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateUnionIteratorU3E.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateUnionIteratorU3EMethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::.ctor()
extern "C" void U3CCreateUnionIteratorU3Ec__Iterator1C_1__ctor_m39734_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateUnionIteratorU3Ec__Iterator1C_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m39735_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_9);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateUnionIteratorU3Ec__Iterator1C_1_System_Collections_IEnumerator_get_Current_m39736_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_9);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateUnionIteratorU3Ec__Iterator1C_1_System_Collections_IEnumerable_GetEnumerator_m39737_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateUnionIteratorU3Ec__Iterator1C_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m39738_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * __this, const MethodInfo* method)
{
	U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_8);
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
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * L_2 = (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 *)L_2;
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Ecomparer_10);
		NullCheck(L_3);
		L_3->___comparer_0 = L_4;
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * L_5 = V_0;
		Object_t* L_6 = (Object_t*)(__this->___U3CU24U3Efirst_11);
		NullCheck(L_5);
		L_5->___first_2 = L_6;
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * L_7 = V_0;
		Object_t* L_8 = (Object_t*)(__this->___U3CU24U3Esecond_12);
		NullCheck(L_7);
		L_7->___second_5 = L_8;
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateUnionIteratorU3Ec__Iterator1C_1_MoveNext_m39739_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * __this, const MethodInfo* method)
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
		HashSet_1_t2048 * L_3 = (HashSet_1_t2048 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (HashSet_1_t2048 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_3, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
			HashSet_1_t2048 * L_9 = (HashSet_1_t2048 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_10 = (Object_t *)(__this->___U3CelementU3E__2_4);
			NullCheck((HashSet_1_t2048 *)L_9);
			bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T) */, (HashSet_1_t2048 *)L_9, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_00b0;
			}
		}

IL_0084:
		{
			HashSet_1_t2048 * L_12 = (HashSet_1_t2048 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_13 = (Object_t *)(__this->___U3CelementU3E__2_4);
			NullCheck((HashSet_1_t2048 *)L_12);
			(( bool (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((HashSet_1_t2048 *)L_12, (Object_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_19);
			IL2CPP_END_FINALLY(197)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(197)
	{
		IL2CPP_JUMP_TBL(0x193, IL_0193)
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
			HashSet_1_t2048 * L_25 = (HashSet_1_t2048 *)(__this->___U3CitemsU3E__0_1);
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
			HashSet_1_t2048 * L_29 = (HashSet_1_t2048 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_30 = (Object_t *)(__this->___U3CelementU3E__4_7);
			NullCheck((HashSet_1_t2048 *)L_29);
			(( bool (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((HashSet_1_t2048 *)L_29, (Object_t *)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_36);
			IL2CPP_END_FINALLY(369)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(369)
	{
		IL2CPP_JUMP_TBL(0x193, IL_0193)
		IL2CPP_JUMP_TBL(0x18A, IL_018a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateUnionIteratorU3Ec__Iterator1C_1_Dispose_m39740_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * __this, const MethodInfo* method)
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_5);
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateUnionIteratorU3Ec__Iterator1C_1_Reset_m39741_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t7214 * __this, const MethodInfo* method)
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
// <>f__AnonymousType0`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType0_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType0`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType0_2_gen_0MethodDeclarations.h"

// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void <>f__AnonymousType0`2<System.Object,System.Object>::.ctor(<constructor>j__TPar,<parameters>j__TPar)
extern "C" void U3CU3Ef__AnonymousType0_2__ctor_m39745_gshared (U3CU3Ef__AnonymousType0_2_t7215 * __this, Object_t * ___constructor, Object_t * ___parameters, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___constructor;
		__this->___U3CconstructorU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___parameters;
		__this->___U3CparametersU3Ei__Field_1 = L_1;
		return;
	}
}
// <constructor>j__TPar <>f__AnonymousType0`2<System.Object,System.Object>::get_constructor()
extern "C" Object_t * U3CU3Ef__AnonymousType0_2_get_constructor_m39746_gshared (U3CU3Ef__AnonymousType0_2_t7215 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CconstructorU3Ei__Field_0);
		return L_0;
	}
}
// <parameters>j__TPar <>f__AnonymousType0`2<System.Object,System.Object>::get_parameters()
extern "C" Object_t * U3CU3Ef__AnonymousType0_2_get_parameters_m39747_gshared (U3CU3Ef__AnonymousType0_2_t7215 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CparametersU3Ei__Field_1);
		return L_0;
	}
}
// System.String <>f__AnonymousType0`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType0_2_ToString_m39749_gshared (U3CU3Ef__AnonymousType0_2_t7215 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t696 * V_0 = {0};
	{
		StringBuilder_t696 * L_0 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3048(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t696 *)L_0;
		StringBuilder_t696 * L_1 = V_0;
		NullCheck((StringBuilder_t696 *)L_1);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_1, (String_t*)(String_t*) &_stringLiteral1988, /*hidden argument*/NULL);
		StringBuilder_t696 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CconstructorU3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t696 *)L_2);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t696 * L_5 = V_0;
		NullCheck((StringBuilder_t696 *)L_5);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_5, (String_t*)(String_t*) &_stringLiteral1989, /*hidden argument*/NULL);
		StringBuilder_t696 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CparametersU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t696 *)L_6);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t696 * L_9 = V_0;
		NullCheck((StringBuilder_t696 *)L_9);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_9, (String_t*)(String_t*) &_stringLiteral1990, /*hidden argument*/NULL);
		StringBuilder_t696 * L_10 = V_0;
		NullCheck((Object_t *)L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_10);
		return L_11;
	}
}
// System.Boolean <>f__AnonymousType0`2<System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType0_2_Equals_m39751_gshared (U3CU3Ef__AnonymousType0_2_t7215 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType0_2_t7215 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType0_2_t7215 *)((U3CU3Ef__AnonymousType0_2_t7215 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		U3CU3Ef__AnonymousType0_2_t7215 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_2 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_3 = (Object_t *)(__this->___U3CconstructorU3Ei__Field_0);
		U3CU3Ef__AnonymousType0_2_t7215 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CconstructorU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t6207 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_7 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_8 = (Object_t *)(__this->___U3CparametersU3Ei__Field_1);
		U3CU3Ef__AnonymousType0_2_t7215 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CparametersU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		return L_11;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType0`2<System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType0_2_GetHashCode_m39753_gshared (U3CU3Ef__AnonymousType0_2_t7215 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)-1750476964);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_1 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = (Object_t *)(__this->___U3CconstructorU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t6207 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t6207 * L_5 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = (Object_t *)(__this->___U3CparametersU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// <>f__AnonymousType1`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType1_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType1`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType1_2_gen_0MethodDeclarations.h"



// System.Void <>f__AnonymousType1`2<System.Object,System.Object>::.ctor(<<>h__TransparentIdentifier0>j__TPar,<types>j__TPar)
extern "C" void U3CU3Ef__AnonymousType1_2__ctor_m39757_gshared (U3CU3Ef__AnonymousType1_2_t7216 * __this, Object_t * ___U3CU3Eh__TransparentIdentifier0, Object_t * ___types, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___U3CU3Eh__TransparentIdentifier0;
		__this->___U3CU3CU3Eh__TransparentIdentifier0U3Ei__Field_0 = L_0;
		Object_t * L_1 = ___types;
		__this->___U3CtypesU3Ei__Field_1 = L_1;
		return;
	}
}
// <<>h__TransparentIdentifier0>j__TPar <>f__AnonymousType1`2<System.Object,System.Object>::get_<>h__TransparentIdentifier0()
extern "C" Object_t * U3CU3Ef__AnonymousType1_2_get_U3CU3Eh__TransparentIdentifier0_m39758_gshared (U3CU3Ef__AnonymousType1_2_t7216 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3CU3Eh__TransparentIdentifier0U3Ei__Field_0);
		return L_0;
	}
}
// <types>j__TPar <>f__AnonymousType1`2<System.Object,System.Object>::get_types()
extern "C" Object_t * U3CU3Ef__AnonymousType1_2_get_types_m39759_gshared (U3CU3Ef__AnonymousType1_2_t7216 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CtypesU3Ei__Field_1);
		return L_0;
	}
}
// System.String <>f__AnonymousType1`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType1_2_ToString_m39761_gshared (U3CU3Ef__AnonymousType1_2_t7216 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t696 * V_0 = {0};
	{
		StringBuilder_t696 * L_0 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3048(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t696 *)L_0;
		StringBuilder_t696 * L_1 = V_0;
		NullCheck((StringBuilder_t696 *)L_1);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_1, (String_t*)(String_t*) &_stringLiteral1991, /*hidden argument*/NULL);
		StringBuilder_t696 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CU3CU3Eh__TransparentIdentifier0U3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t696 *)L_2);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t696 * L_5 = V_0;
		NullCheck((StringBuilder_t696 *)L_5);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_5, (String_t*)(String_t*) &_stringLiteral1992, /*hidden argument*/NULL);
		StringBuilder_t696 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CtypesU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t696 *)L_6);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t696 * L_9 = V_0;
		NullCheck((StringBuilder_t696 *)L_9);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_9, (String_t*)(String_t*) &_stringLiteral1990, /*hidden argument*/NULL);
		StringBuilder_t696 * L_10 = V_0;
		NullCheck((Object_t *)L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_10);
		return L_11;
	}
}
// System.Boolean <>f__AnonymousType1`2<System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType1_2_Equals_m39763_gshared (U3CU3Ef__AnonymousType1_2_t7216 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType1_2_t7216 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType1_2_t7216 *)((U3CU3Ef__AnonymousType1_2_t7216 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		U3CU3Ef__AnonymousType1_2_t7216 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_2 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_3 = (Object_t *)(__this->___U3CU3CU3Eh__TransparentIdentifier0U3Ei__Field_0);
		U3CU3Ef__AnonymousType1_2_t7216 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CU3CU3Eh__TransparentIdentifier0U3Ei__Field_0);
		NullCheck((EqualityComparer_1_t6207 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_7 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_8 = (Object_t *)(__this->___U3CtypesU3Ei__Field_1);
		U3CU3Ef__AnonymousType1_2_t7216 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CtypesU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		return L_11;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType1`2<System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType1_2_GetHashCode_m39765_gshared (U3CU3Ef__AnonymousType1_2_t7216 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)-2015851013);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_1 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = (Object_t *)(__this->___U3CU3CU3Eh__TransparentIdentifier0U3Ei__Field_0);
		NullCheck((EqualityComparer_1_t6207 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t6207 * L_5 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = (Object_t *)(__this->___U3CtypesU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_78.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_78MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m39787_gshared (Func_2_t7219 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m39789_gshared (Func_2_t7219 * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m39789((Func_2_t7219 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2037_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m39791_gshared (Func_2_t7219 * __this, KeyValuePair_2_t2037  ___arg1, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9679);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t2037_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m39793_gshared (Func_2_t7219 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_79.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_79MethodDeclarations.h"



// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m39794_gshared (Func_2_t2040 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m39796_gshared (Func_2_t2040 * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m39796((Func_2_t2040 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2037  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2037_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m39798_gshared (Func_2_t2040 * __this, KeyValuePair_2_t2037  ___arg1, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9679);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t2037_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m39800_gshared (Func_2_t2040 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_1MethodDeclarations.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
#include "System_Core_System_Func_2_gen_80.h"
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
#include "System_Core_System_Func_2_gen_80MethodDeclarations.h"


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m39805_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" KeyValuePair_2_t2037  U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m39806_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2037  L_0 = (KeyValuePair_2_t2037 )(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m39807_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2037  L_0 = (KeyValuePair_2_t2037 )(__this->___U24current_5);
		KeyValuePair_2_t2037  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m39808_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m39809_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * __this, const MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * V_0 = {0};
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
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 *)L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * L_5 = V_0;
		Func_2_t2039 * L_6 = (Func_2_t2039 *)(__this->___U3CU24U3Epredicate_7);
		NullCheck(L_5);
		L_5->___predicate_3 = L_6;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m39810_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * __this, const MethodInfo* method)
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
			KeyValuePair_2_t2037  L_6 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker0< KeyValuePair_2_t2037  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t2039 * L_7 = (Func_2_t2039 *)(__this->___predicate_3);
			KeyValuePair_2_t2037  L_8 = (KeyValuePair_2_t2037 )(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t2039 *)L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t2037  >::Invoke(11 /* TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T) */, (Func_2_t2039 *)L_7, (KeyValuePair_2_t2037 )L_8);
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			KeyValuePair_2_t2037  L_10 = (KeyValuePair_2_t2037 )(__this->___U3CelementU3E__1_2);
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
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m39811_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * __this, const MethodInfo* method)
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
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m39812_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t7220 * __this, const MethodInfo* method)
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
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_1MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m39813_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m39814_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m39815_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m39816_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m39817_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * V_0 = {0};
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
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * L_5 = V_0;
		Func_2_t2040 * L_6 = (Func_2_t2040 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m39818_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * __this, const MethodInfo* method)
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
			KeyValuePair_2_t2037  L_6 = (KeyValuePair_2_t2037 )InterfaceFuncInvoker0< KeyValuePair_2_t2037  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t2040 * L_7 = (Func_2_t2040 *)(__this->___selector_3);
			KeyValuePair_2_t2037  L_8 = (KeyValuePair_2_t2037 )(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t2040 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, KeyValuePair_2_t2037  >::Invoke(11 /* TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(T) */, (Func_2_t2040 *)L_7, (KeyValuePair_2_t2037 )L_8);
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
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
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m39819_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * __this, const MethodInfo* method)
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
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m39820_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t7221 * __this, const MethodInfo* method)
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


// System.Void System.Nullable`1<System.Guid>::.ctor(T)
extern "C" void Nullable_1__ctor_m9051_gshared (Nullable_1_t1818 * __this, Guid_t1979  ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		Guid_t1979  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m9049_gshared (Nullable_1_t1818 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.Guid>::get_Value()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Guid_t1979  Nullable_1_get_Value_m9238_gshared (Nullable_1_t1818 * __this, const MethodInfo* method)
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
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4659, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Guid_t1979  L_2 = (Guid_t1979 )(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m39821_gshared (Nullable_1_t1818 * __this, Object_t * ___other, const MethodInfo* method)
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
		void* L_4 = alloca(sizeof(Nullable_1_t1818 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t1818 *, Nullable_1_t1818 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t1818 *)__this, (Nullable_1_t1818 )((*(Nullable_1_t1818 *)((Nullable_1_t1818 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m39822_gshared (Nullable_1_t1818 * __this, Nullable_1_t1818  ___other, const MethodInfo* method)
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
		Guid_t1979 * L_3 = (Guid_t1979 *)&((&___other)->___value_0);
		Guid_t1979  L_4 = (Guid_t1979 )(__this->___value_0);
		Guid_t1979  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.Guid>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m39823_gshared (Nullable_1_t1818 * __this, const MethodInfo* method)
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
		Guid_t1979 * L_1 = (Guid_t1979 *)&(__this->___value_0);
		NullCheck((ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// T System.Nullable`1<System.Guid>::GetValueOrDefault()
extern TypeInfo* Guid_t1979_il2cpp_TypeInfo_var;
extern "C" Guid_t1979  Nullable_1_GetValueOrDefault_m39824_gshared (Nullable_1_t1818 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3811);
		s_Il2CppMethodIntialized = true;
	}
	Guid_t1979  V_0 = {0};
	Guid_t1979  G_B3_0 = {0};
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Guid_t1979  L_1 = (Guid_t1979 )(__this->___value_0);
		G_B3_0 = L_1;
		goto IL_0019;
	}

IL_0010:
	{
		Initobj (Guid_t1979_il2cpp_TypeInfo_var, (&V_0));
		Guid_t1979  L_2 = V_0;
		G_B3_0 = L_2;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.String System.Nullable`1<System.Guid>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m39825_gshared (Nullable_1_t1818 * __this, const MethodInfo* method)
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
		Guid_t1979 * L_1 = (Guid_t1979 *)&(__this->___value_0);
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
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType2_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType2_2_gen_0MethodDeclarations.h"



// System.Void <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(<pair>j__TPar,<valueString>j__TPar)
extern "C" void U3CU3Ef__AnonymousType2_2__ctor_m39931_gshared (U3CU3Ef__AnonymousType2_2_t7227 * __this, KeyValuePair_2_t2037  ___pair, Object_t * ___valueString, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		KeyValuePair_2_t2037  L_0 = ___pair;
		__this->___U3CpairU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___valueString;
		__this->___U3CvalueStringU3Ei__Field_1 = L_1;
		return;
	}
}
// <pair>j__TPar <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_pair()
extern "C" KeyValuePair_2_t2037  U3CU3Ef__AnonymousType2_2_get_pair_m39932_gshared (U3CU3Ef__AnonymousType2_2_t7227 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2037  L_0 = (KeyValuePair_2_t2037 )(__this->___U3CpairU3Ei__Field_0);
		return L_0;
	}
}
// <valueString>j__TPar <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_valueString()
extern "C" Object_t * U3CU3Ef__AnonymousType2_2_get_valueString_m39933_gshared (U3CU3Ef__AnonymousType2_2_t7227 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CvalueStringU3Ei__Field_1);
		return L_0;
	}
}
// System.String <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::ToString()
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType2_2_ToString_m39935_gshared (U3CU3Ef__AnonymousType2_2_t7227 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t696 * V_0 = {0};
	{
		StringBuilder_t696 * L_0 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3048(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t696 *)L_0;
		StringBuilder_t696 * L_1 = V_0;
		NullCheck((StringBuilder_t696 *)L_1);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_1, (String_t*)(String_t*) &_stringLiteral1993, /*hidden argument*/NULL);
		StringBuilder_t696 * L_2 = V_0;
		KeyValuePair_2_t2037  L_3 = (KeyValuePair_2_t2037 )(__this->___U3CpairU3Ei__Field_0);
		KeyValuePair_2_t2037  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_4);
		NullCheck((StringBuilder_t696 *)L_2);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_2, (Object_t *)L_5, /*hidden argument*/NULL);
		StringBuilder_t696 * L_6 = V_0;
		NullCheck((StringBuilder_t696 *)L_6);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_6, (String_t*)(String_t*) &_stringLiteral1994, /*hidden argument*/NULL);
		StringBuilder_t696 * L_7 = V_0;
		Object_t * L_8 = (Object_t *)(__this->___U3CvalueStringU3Ei__Field_1);
		Object_t * L_9 = L_8;
		NullCheck((StringBuilder_t696 *)L_7);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_7, (Object_t *)((Object_t *)L_9), /*hidden argument*/NULL);
		StringBuilder_t696 * L_10 = V_0;
		NullCheck((StringBuilder_t696 *)L_10);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_10, (String_t*)(String_t*) &_stringLiteral1990, /*hidden argument*/NULL);
		StringBuilder_t696 * L_11 = V_0;
		NullCheck((Object_t *)L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_11);
		return L_12;
	}
}
// System.Boolean <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t7171_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType2_2_Equals_m39937_gshared (U3CU3Ef__AnonymousType2_2_t7227 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t7171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14003);
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType2_2_t7227 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType2_2_t7227 *)((U3CU3Ef__AnonymousType2_2_t7227 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		U3CU3Ef__AnonymousType2_2_t7227 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t7171_il2cpp_TypeInfo_var);
		EqualityComparer_1_t7171 * L_2 = (( EqualityComparer_1_t7171 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		KeyValuePair_2_t2037  L_3 = (KeyValuePair_2_t2037 )(__this->___U3CpairU3Ei__Field_0);
		U3CU3Ef__AnonymousType2_2_t7227 * L_4 = V_0;
		NullCheck(L_4);
		KeyValuePair_2_t2037  L_5 = (KeyValuePair_2_t2037 )(L_4->___U3CpairU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t7171 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t2037 , KeyValuePair_2_t2037  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(!0,!0) */, (EqualityComparer_1_t7171 *)L_2, (KeyValuePair_2_t2037 )L_3, (KeyValuePair_2_t2037 )L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_7 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_8 = (Object_t *)(__this->___U3CvalueStringU3Ei__Field_1);
		U3CU3Ef__AnonymousType2_2_t7227 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CvalueStringU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		return L_11;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t7171_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType2_2_GetHashCode_m39939_gshared (U3CU3Ef__AnonymousType2_2_t7227 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t7171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14003);
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)2136830467);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t7171_il2cpp_TypeInfo_var);
		EqualityComparer_1_t7171 * L_1 = (( EqualityComparer_1_t7171 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		KeyValuePair_2_t2037  L_2 = (KeyValuePair_2_t2037 )(__this->___U3CpairU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t7171 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t2037  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(!0) */, (EqualityComparer_1_t7171 *)L_1, (KeyValuePair_2_t2037 )L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_5 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = (Object_t *)(__this->___U3CvalueStringU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// Parse.ParseObject/<>c__DisplayClass4a`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass4a_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseObject/<>c__DisplayClass4a`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass4a_1_genMethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_29.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObjectMethodDeclarations.h"
struct ParseObject_t596;
struct Task_1_t6503;
struct IEnumerable_1_t729;
struct Task_t344;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Declaration System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseObject::FetchAllInternalAsync<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Boolean,System.Threading.Tasks.Task,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseObject::FetchAllInternalAsync<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Boolean,System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t6503 * ParseObject_FetchAllInternalAsync_TisObject_t_m74262_gshared (Object_t * __this /* static, unused */, Object_t* ___objects, bool ___force, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method);
#define ParseObject_FetchAllInternalAsync_TisObject_t_m74262(__this /* static, unused */, ___objects, ___force, ___toAwait, ___cancellationToken, method) (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Object_t*, bool, Task_t344 *, CancellationToken_t1753 , const MethodInfo*))ParseObject_FetchAllInternalAsync_TisObject_t_m74262_gshared)(__this /* static, unused */, ___objects, ___force, ___toAwait, ___cancellationToken, method)


// System.Void Parse.ParseObject/<>c__DisplayClass4a`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4a_1__ctor_m40087_gshared (U3CU3Ec__DisplayClass4a_1_t7234 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseObject/<>c__DisplayClass4a`1<System.Object>::<FetchAllAsync>b__49(System.Threading.Tasks.Task)
extern TypeInfo* ParseObject_t596_il2cpp_TypeInfo_var;
extern "C" Task_1_t6503 * U3CU3Ec__DisplayClass4a_1_U3CFetchAllAsyncU3Eb__49_m40088_gshared (U3CU3Ec__DisplayClass4a_1_t7234 * __this, Task_t344 * ___toAwait, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseObject_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1158);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___objects_0);
		Task_t344 * L_1 = ___toAwait;
		CancellationToken_t1753  L_2 = (CancellationToken_t1753 )(__this->___cancellationToken_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseObject_t596_il2cpp_TypeInfo_var);
		Task_1_t6503 * L_3 = (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Object_t*, bool, Task_t344 *, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t*)L_0, (bool)1, (Task_t344 *)L_1, (CancellationToken_t1753 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_3;
	}
}
// Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass6c_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass6c_1_genMethodDeclarations.h"

// Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass6c_1_U3CU.h"
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_9.h"
// System.Func`2<System.Object,System.String>
#include "System_Core_System_Func_2_gen_81.h"
// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>
#include "System_Core_System_Func_2_gen_82.h"
// <>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "Parse_Unity_U3CU3Ef__AnonymousType5_2_gen.h"
// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>>
#include "System_Core_System_Func_2_gen_90.h"
// System.Func`2<<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>,System.String>
#include "System_Core_System_Func_2_gen_83.h"
// System.Func`2<<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "System_Core_System_Func_2_gen_84.h"
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_33.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_57.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_52.h"
// System.Collections.Generic.List`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_List_1_gen_120.h"
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_34.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>,System.Collections.Generic.IEnumerable`1<System.Object>>
#include "System_Core_System_Func_2_gen_92.h"
// Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass6c_1_U3CUMethodDeclarations.h"
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_9MethodDeclarations.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_TaskMethodDeclarations.h"
// System.Func`2<System.Object,System.String>
#include "System_Core_System_Func_2_gen_81MethodDeclarations.h"
// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>
#include "System_Core_System_Func_2_gen_82MethodDeclarations.h"
// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>>
#include "System_Core_System_Func_2_gen_90MethodDeclarations.h"
// System.Func`2<<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>,System.String>
#include "System_Core_System_Func_2_gen_83MethodDeclarations.h"
// System.Func`2<<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "System_Core_System_Func_2_gen_84MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_57MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>,System.Collections.Generic.IEnumerable`1<System.Object>>
#include "System_Core_System_Func_2_gen_92MethodDeclarations.h"
// Parse.Internal.InternalExtensions
#include "Parse_Unity_Parse_Internal_InternalExtensionsMethodDeclarations.h"
// <>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "Parse_Unity_U3CU3Ef__AnonymousType5_2_genMethodDeclarations.h"
struct Enumerable_t718;
struct IEnumerable_1_t729;
struct Func_2_t1263;
// Declaration System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" bool Enumerable_Any_TisObject_t_m9382_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1263 * p1, const MethodInfo* method);
#define Enumerable_Any_TisObject_t_m9382(__this /* static, unused */, p0, p1, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1263 *, const MethodInfo*))Enumerable_Any_TisObject_t_m9382_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t718;
struct IEnumerable_1_t729;
struct Func_2_t1263;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" Object_t* Enumerable_Where_TisObject_t_m5463_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1263 * p1, const MethodInfo* method);
#define Enumerable_Where_TisObject_t_m5463(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1263 *, const MethodInfo*))Enumerable_Where_TisObject_t_m5463_gshared)(__this /* static, unused */, p0, p1, method)
struct Task_t344;
struct Task_1_t6503;
struct IEnumerable_1_t729;
struct Task_t344;
struct Task_1_t808;
struct Object_t;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Object>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Object>(T)
extern "C" Task_1_t808 * Task_FromResult_TisObject_t_m3775_gshared (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method);
#define Task_FromResult_TisObject_t_m3775(__this /* static, unused */, ___result, method) (( Task_1_t808 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Task_FromResult_TisObject_t_m3775_gshared)(__this /* static, unused */, ___result, method)
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Collections.Generic.IEnumerable`1<System.Object>>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Collections.Generic.IEnumerable`1<System.Object>>(T)
#define Task_FromResult_TisIEnumerable_1_t729_m75771(__this /* static, unused */, ___result, method) (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Task_FromResult_TisObject_t_m3775_gshared)(__this /* static, unused */, ___result, method)
struct Enumerable_t718;
struct IEnumerable_1_t11185;
struct IEnumerable_1_t729;
struct Func_2_t7235;
struct Enumerable_t718;
struct IEnumerable_1_t11166;
struct IEnumerable_1_t729;
struct Func_2_t1814;
// Declaration System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!2>> System.Linq.Enumerable::GroupBy<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!2>> System.Linq.Enumerable::GroupBy<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
extern "C" Object_t* Enumerable_GroupBy_TisObject_t_TisObject_t_TisObject_t_m74266_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1814 * p1, Func_2_t1814 * p2, const MethodInfo* method);
#define Enumerable_GroupBy_TisObject_t_TisObject_t_TisObject_t_m74266(__this /* static, unused */, p0, p1, p2, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1814 *, Func_2_t1814 *, const MethodInfo*))Enumerable_GroupBy_TisObject_t_TisObject_t_TisObject_t_m74266_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!2>> System.Linq.Enumerable::GroupBy<System.Object,System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!2>> System.Linq.Enumerable::GroupBy<System.Object,System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
#define Enumerable_GroupBy_TisObject_t_TisString_t_TisString_t_m75772(__this /* static, unused */, p0, p1, p2, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7235 *, Func_2_t7235 *, const MethodInfo*))Enumerable_GroupBy_TisObject_t_TisObject_t_TisObject_t_m74266_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Enumerable_t718;
struct IEnumerable_1_t11185;
struct Func_2_t7236;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Linq.IGrouping`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Linq.IGrouping`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisIGrouping_2_t2992_m75773(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7236 *, const MethodInfo*))Enumerable_Where_TisObject_t_m5463_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t718;
struct IEnumerable_1_t11186;
struct IEnumerable_1_t11185;
struct Func_2_t7271;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Linq.IGrouping`2<System.String,System.String>,<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Linq.IGrouping`2<System.String,System.String>,<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisIGrouping_2_t2992_TisU3CU3Ef__AnonymousType5_2_t2993_m75774(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7271 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m8985_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t718;
struct Dictionary_2_t7242;
struct IEnumerable_1_t11186;
struct Func_2_t7237;
struct Func_2_t7238;
struct Enumerable_t718;
struct Dictionary_2_t2067;
struct IEnumerable_1_t729;
struct Func_2_t1814;
// Declaration System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
extern "C" Dictionary_2_t2067 * Enumerable_ToDictionary_TisObject_t_TisObject_t_TisObject_t_m9147_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1814 * p1, Func_2_t1814 * p2, const MethodInfo* method);
#define Enumerable_ToDictionary_TisObject_t_TisObject_t_TisObject_t_m9147(__this /* static, unused */, p0, p1, p2, method) (( Dictionary_2_t2067 * (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1814 *, Func_2_t1814 *, const MethodInfo*))Enumerable_ToDictionary_TisObject_t_TisObject_t_TisObject_t_m9147_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>,System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>,System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
#define Enumerable_ToDictionary_TisU3CU3Ef__AnonymousType5_2_t2993_TisString_t_TisTask_1_t3006_m75775(__this /* static, unused */, p0, p1, p2, method) (( Dictionary_2_t7242 * (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7237 *, Func_2_t7238 *, const MethodInfo*))Enumerable_ToDictionary_TisObject_t_TisObject_t_TisObject_t_m9147_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Enumerable_t718;
struct List_1_t7272;
struct IEnumerable_1_t10397;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisTask_1_t3006_m75776(__this /* static, unused */, p0, method) (( List_1_t7272 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m8948_gshared)(__this /* static, unused */, p0, method)
struct Task_t344;
struct Task_1_t2994;
struct IEnumerable_1_t10397;
struct Task_t344;
struct Task_1_t7273;
struct IEnumerable_1_t7275;
// Declaration System.Threading.Tasks.Task`1<T[]> System.Threading.Tasks.Task::WhenAll<System.Object>(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task`1<T>>)
// System.Threading.Tasks.Task`1<T[]> System.Threading.Tasks.Task::WhenAll<System.Object>(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_1_t7273 * Task_WhenAll_TisObject_t_m74272_gshared (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method);
#define Task_WhenAll_TisObject_t_m74272(__this /* static, unused */, ___tasks, method) (( Task_1_t7273 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Task_WhenAll_TisObject_t_m74272_gshared)(__this /* static, unused */, ___tasks, method)
// Declaration System.Threading.Tasks.Task`1<T[]> System.Threading.Tasks.Task::WhenAll<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task`1<T>>)
// System.Threading.Tasks.Task`1<T[]> System.Threading.Tasks.Task::WhenAll<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task`1<T>>)
#define Task_WhenAll_TisIEnumerable_1_t1850_m75777(__this /* static, unused */, ___tasks, method) (( Task_1_t2994 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Task_WhenAll_TisObject_t_m74272_gshared)(__this /* static, unused */, ___tasks, method)
struct InternalExtensions_t1766;
struct Task_1_t6503;
struct Task_1_t2994;
struct Func_2_t7278;
// Parse.Internal.InternalExtensions
#include "Parse_Unity_Parse_Internal_InternalExtensions.h"
struct InternalExtensions_t1766;
struct Task_1_t808;
struct Func_2_t2042;
// Declaration System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Object,System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Object,System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
extern "C" Task_1_t808 * InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041_gshared (Object_t * __this /* static, unused */, Task_1_t808 * ___task, Func_2_t2042 * ___continuation, const MethodInfo* method);
#define InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041(__this /* static, unused */, ___task, ___continuation, method) (( Task_1_t808 * (*) (Object_t * /* static, unused */, Task_1_t808 *, Func_2_t2042 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041_gshared)(__this /* static, unused */, ___task, ___continuation, method)
// Declaration System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[],System.Collections.Generic.IEnumerable`1<System.Object>>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[],System.Collections.Generic.IEnumerable`1<System.Object>>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
#define InternalExtensions_OnSuccess_TisIEnumerable_1U5BU5D_t3013_TisIEnumerable_1_t729_m75778(__this /* static, unused */, ___task, ___continuation, method) (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Task_1_t2994 *, Func_2_t7278 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041_gshared)(__this /* static, unused */, ___task, ___continuation, method)
struct Enumerable_t718;
struct IEnumerable_1_t1654;
struct Enumerable_t718;
struct IEnumerable_1_t729;
// Declaration System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" int32_t Enumerable_Count_TisObject_t_m74273_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_Count_TisObject_t_m74273(__this /* static, unused */, p0, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_Count_TisObject_t_m74273_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Int32 System.Linq.Enumerable::Count<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Int32 System.Linq.Enumerable::Count<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisString_t_m75779(__this /* static, unused */, p0, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_Count_TisObject_t_m74273_gshared)(__this /* static, unused */, p0, method)


// System.Void Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass6c_1__ctor_m40089_gshared (U3CU3Ec__DisplayClass6c_1_t7239 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>::<FetchAllInternalAsync>b__5e(System.Threading.Tasks.Task)
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t344_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t7236_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t7271_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t7237_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t7238_il2cpp_TypeInfo_var;
extern const MethodInfo* Func_2__ctor_m40101_MethodInfo_var;
extern const MethodInfo* Enumerable_Where_TisIGrouping_2_t2992_m75773_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m40490_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisIGrouping_2_t2992_TisU3CU3Ef__AnonymousType5_2_t2993_m75774_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m40105_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m40132_MethodInfo_var;
extern const MethodInfo* Enumerable_ToDictionary_TisU3CU3Ef__AnonymousType5_2_t2993_TisString_t_TisTask_1_t3006_m75775_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m40189_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisTask_1_t3006_m75776_MethodInfo_var;
extern const MethodInfo* Task_WhenAll_TisIEnumerable_1_t1850_m75777_MethodInfo_var;
extern "C" Task_1_t6503 * U3CU3Ec__DisplayClass6c_1_U3CFetchAllInternalAsyncU3Eb__5e_m40090_gshared (U3CU3Ec__DisplayClass6c_1_t7239 * __this, Task_t344 * ____, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		Task_t344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		Func_2_t7236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14126);
		Func_2_t7271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14174);
		Func_2_t7237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14128);
		Func_2_t7238_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14131);
		Func_2__ctor_m40101_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485580);
		Enumerable_Where_TisIGrouping_2_t2992_m75773_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485581);
		Func_2__ctor_m40490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485582);
		Enumerable_Select_TisIGrouping_2_t2992_TisU3CU3Ef__AnonymousType5_2_t2993_m75774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485583);
		Func_2__ctor_m40105_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485584);
		Func_2__ctor_m40132_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485585);
		Enumerable_ToDictionary_TisU3CU3Ef__AnonymousType5_2_t2993_TisString_t_TisTask_1_t3006_m75775_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485586);
		Dictionary_2_get_Values_m40189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485587);
		Enumerable_ToList_TisTask_1_t3006_m75776_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485588);
		Task_WhenAll_TisIEnumerable_1_t1850_m75777_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485589);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass74_t7246 * V_0 = {0};
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	List_1_t2 * G_B8_0 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B8_1 = {0};
	List_1_t2 * G_B7_0 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B7_1 = {0};
	Func_2_t7235 * G_B10_0 = {0};
	List_1_t2 * G_B10_1 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B10_2 = {0};
	Func_2_t7235 * G_B9_0 = {0};
	List_1_t2 * G_B9_1 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B9_2 = {0};
	Object_t* G_B12_0 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B12_1 = {0};
	Object_t* G_B11_0 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B11_1 = {0};
	Object_t* G_B14_0 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B14_1 = {0};
	Object_t* G_B13_0 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B13_1 = {0};
	Func_2_t7237 * G_B16_0 = {0};
	Object_t* G_B16_1 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B16_2 = {0};
	Func_2_t7237 * G_B15_0 = {0};
	Object_t* G_B15_1 = {0};
	U3CU3Ec__DisplayClass74_t7246 * G_B15_2 = {0};
	{
		U3CU3Ec__DisplayClass74_t7246 * L_0 = (U3CU3Ec__DisplayClass74_t7246 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass74_t7246 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass74_t7246 *)L_0;
		U3CU3Ec__DisplayClass74_t7246 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals6d_0 = __this;
		Object_t* L_2 = (Object_t*)(__this->___objects_0);
		Func_2_t1263 * L_3 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6e_3;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_002b;
		}
	}
	{
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Func_2_t1263 * L_5 = (Func_2_t1263 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Func_2_t1263 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6e_3 = L_5;
		G_B2_0 = G_B1_0;
	}

IL_002b:
	{
		Func_2_t1263 * L_6 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6e_3;
		bool L_7 = (( bool (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t1263 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		InvalidOperationException_t1668 * L_8 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_8, (String_t*)(String_t*) &_stringLiteral1634, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass74_t7246 * L_9 = V_0;
		Object_t* L_10 = (Object_t*)(__this->___objects_0);
		U3CU3Ec__DisplayClass74_t7246 * L_11 = V_0;
		IntPtr_t L_12 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t1263 * L_13 = (Func_2_t1263 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Func_2_t1263 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_13, (Object_t *)L_11, (IntPtr_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t* L_14 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, (Object_t*)L_10, (Func_2_t1263 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		List_1_t2 * L_15 = (( List_1_t2 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		NullCheck(L_9);
		L_9->___objectsToFetch_1 = L_15;
		U3CU3Ec__DisplayClass74_t7246 * L_16 = V_0;
		NullCheck(L_16);
		List_1_t2 * L_17 = (List_1_t2 *)(L_16->___objectsToFetch_1);
		NullCheck((List_1_t2 *)L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t2 *)L_17);
		if (L_18)
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_19 = (Object_t*)(__this->___objects_0);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t344_il2cpp_TypeInfo_var);
		Task_1_t6503 * L_20 = (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_20;
	}

IL_007d:
	{
		U3CU3Ec__DisplayClass74_t7246 * L_21 = V_0;
		U3CU3Ec__DisplayClass74_t7246 * L_22 = V_0;
		NullCheck(L_22);
		List_1_t2 * L_23 = (List_1_t2 *)(L_22->___objectsToFetch_1);
		Func_2_t7235 * L_24 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6f_4;
		G_B7_0 = L_23;
		G_B7_1 = L_21;
		if (L_24)
		{
			G_B8_0 = L_23;
			G_B8_1 = L_21;
			goto IL_009c;
		}
	}
	{
		IntPtr_t L_25 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12) };
		Func_2_t7235 * L_26 = (Func_2_t7235 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (Func_2_t7235 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_26, (Object_t *)NULL, (IntPtr_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6f_4 = L_26;
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_009c:
	{
		Func_2_t7235 * L_27 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6f_4;
		Func_2_t7235 * L_28 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate70_5;
		G_B9_0 = L_27;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_28)
		{
			G_B10_0 = L_27;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_00b9;
		}
	}
	{
		IntPtr_t L_29 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15) };
		Func_2_t7235 * L_30 = (Func_2_t7235 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (Func_2_t7235 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_30, (Object_t *)NULL, (IntPtr_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate70_5 = L_30;
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00b9:
	{
		Func_2_t7235 * L_31 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate70_5;
		Object_t* L_32 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7235 *, Func_2_t7235 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(NULL /*static, unused*/, (Object_t*)G_B10_1, (Func_2_t7235 *)G_B10_0, (Func_2_t7235 *)L_31, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		Func_2_t7236 * L_33 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate71_6;
		G_B11_0 = L_32;
		G_B11_1 = G_B10_2;
		if (L_33)
		{
			G_B12_0 = L_32;
			G_B12_1 = G_B10_2;
			goto IL_00db;
		}
	}
	{
		IntPtr_t L_34 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Func_2_t7236 * L_35 = (Func_2_t7236 *)il2cpp_codegen_object_new (Func_2_t7236_il2cpp_TypeInfo_var);
		Func_2__ctor_m40101(L_35, (Object_t *)NULL, (IntPtr_t)L_34, /*hidden argument*/Func_2__ctor_m40101_MethodInfo_var);
		((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate71_6 = L_35;
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_00db:
	{
		Func_2_t7236 * L_36 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate71_6;
		Object_t* L_37 = Enumerable_Where_TisIGrouping_2_t2992_m75773(NULL /*static, unused*/, (Object_t*)G_B12_0, (Func_2_t7236 *)L_36, /*hidden argument*/Enumerable_Where_TisIGrouping_2_t2992_m75773_MethodInfo_var);
		U3CU3Ec__DisplayClass74_t7246 * L_38 = V_0;
		IntPtr_t L_39 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18) };
		Func_2_t7271 * L_40 = (Func_2_t7271 *)il2cpp_codegen_object_new (Func_2_t7271_il2cpp_TypeInfo_var);
		Func_2__ctor_m40490(L_40, (Object_t *)L_38, (IntPtr_t)L_39, /*hidden argument*/Func_2__ctor_m40490_MethodInfo_var);
		Object_t* L_41 = Enumerable_Select_TisIGrouping_2_t2992_TisU3CU3Ef__AnonymousType5_2_t2993_m75774(NULL /*static, unused*/, (Object_t*)L_37, (Func_2_t7271 *)L_40, /*hidden argument*/Enumerable_Select_TisIGrouping_2_t2992_TisU3CU3Ef__AnonymousType5_2_t2993_m75774_MethodInfo_var);
		Func_2_t7237 * L_42 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate72_7;
		G_B13_0 = L_41;
		G_B13_1 = G_B12_1;
		if (L_42)
		{
			G_B14_0 = L_41;
			G_B14_1 = G_B12_1;
			goto IL_010e;
		}
	}
	{
		IntPtr_t L_43 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19) };
		Func_2_t7237 * L_44 = (Func_2_t7237 *)il2cpp_codegen_object_new (Func_2_t7237_il2cpp_TypeInfo_var);
		Func_2__ctor_m40105(L_44, (Object_t *)NULL, (IntPtr_t)L_43, /*hidden argument*/Func_2__ctor_m40105_MethodInfo_var);
		((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate72_7 = L_44;
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_010e:
	{
		Func_2_t7237 * L_45 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate72_7;
		Func_2_t7238 * L_46 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate73_8;
		G_B15_0 = L_45;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		if (L_46)
		{
			G_B16_0 = L_45;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			goto IL_012b;
		}
	}
	{
		IntPtr_t L_47 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20) };
		Func_2_t7238 * L_48 = (Func_2_t7238 *)il2cpp_codegen_object_new (Func_2_t7238_il2cpp_TypeInfo_var);
		Func_2__ctor_m40132(L_48, (Object_t *)NULL, (IntPtr_t)L_47, /*hidden argument*/Func_2__ctor_m40132_MethodInfo_var);
		((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate73_8 = L_48;
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_012b:
	{
		Func_2_t7238 * L_49 = ((U3CU3Ec__DisplayClass6c_1_t7239_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate73_8;
		Dictionary_2_t7242 * L_50 = Enumerable_ToDictionary_TisU3CU3Ef__AnonymousType5_2_t2993_TisString_t_TisTask_1_t3006_m75775(NULL /*static, unused*/, (Object_t*)G_B16_1, (Func_2_t7237 *)G_B16_0, (Func_2_t7238 *)L_49, /*hidden argument*/Enumerable_ToDictionary_TisU3CU3Ef__AnonymousType5_2_t2993_TisString_t_TisTask_1_t3006_m75775_MethodInfo_var);
		NullCheck(G_B16_2);
		G_B16_2->___findsByClass_2 = L_50;
		U3CU3Ec__DisplayClass74_t7246 * L_51 = V_0;
		NullCheck(L_51);
		Dictionary_2_t7242 * L_52 = (Dictionary_2_t7242 *)(L_51->___findsByClass_2);
		NullCheck((Dictionary_2_t7242 *)L_52);
		ValueCollection_t7251 * L_53 = Dictionary_2_get_Values_m40189((Dictionary_2_t7242 *)L_52, /*hidden argument*/Dictionary_2_get_Values_m40189_MethodInfo_var);
		List_1_t7272 * L_54 = Enumerable_ToList_TisTask_1_t3006_m75776(NULL /*static, unused*/, (Object_t*)L_53, /*hidden argument*/Enumerable_ToList_TisTask_1_t3006_m75776_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t344_il2cpp_TypeInfo_var);
		Task_1_t2994 * L_55 = Task_WhenAll_TisIEnumerable_1_t1850_m75777(NULL /*static, unused*/, (Object_t*)L_54, /*hidden argument*/Task_WhenAll_TisIEnumerable_1_t1850_m75777_MethodInfo_var);
		U3CU3Ec__DisplayClass74_t7246 * L_56 = V_0;
		IntPtr_t L_57 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Func_2_t7278 * L_58 = (Func_2_t7278 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Func_2_t7278 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_58, (Object_t *)L_56, (IntPtr_t)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		Task_1_t6503 * L_59 = (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Task_1_t2994 *, Func_2_t7278 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Task_1_t2994 *)L_55, (Func_2_t7278 *)L_58, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_59;
	}
}
// System.Boolean Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>::<FetchAllInternalAsync>b__5f(T)
extern "C" bool U3CU3Ec__DisplayClass6c_1_U3CFetchAllInternalAsyncU3Eb__5f_m40091_gshared (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		NullCheck(((Object_t *)L_1));
		String_t* L_2 = (String_t*)(((ParseObject_t596 *)((Object_t *)L_1))->___objectId_18);
		return ((((Object_t*)(String_t*)L_2) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}
}
// System.String Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>::<FetchAllInternalAsync>b__61(T)
extern "C" String_t* U3CU3Ec__DisplayClass6c_1_U3CFetchAllInternalAsyncU3Eb__61_m40092_gshared (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	{
		NullCheck((ParseObject_t596 *)(*(&___obj)));
		String_t* L_0 = ParseObject_get_ClassName_m8488((ParseObject_t596 *)(*(&___obj)), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>::<FetchAllInternalAsync>b__62(T)
extern "C" String_t* U3CU3Ec__DisplayClass6c_1_U3CFetchAllInternalAsyncU3Eb__62_m40093_gshared (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	{
		NullCheck((ParseObject_t596 *)(*(&___obj)));
		String_t* L_0 = ParseObject_get_ObjectId_m8485((ParseObject_t596 *)(*(&___obj)), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>::<FetchAllInternalAsync>b__63(System.Linq.IGrouping`2<System.String,System.String>)
extern const MethodInfo* Enumerable_Count_TisString_t_m75779_MethodInfo_var;
extern "C" bool U3CU3Ec__DisplayClass6c_1_U3CFetchAllInternalAsyncU3Eb__63_m40094_gshared (Object_t * __this /* static, unused */, Object_t* ___classGroup, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerable_Count_TisString_t_m75779_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485590);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___classGroup;
		int32_t L_1 = Enumerable_Count_TisString_t_m75779(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/Enumerable_Count_TisString_t_m75779_MethodInfo_var);
		return ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.String Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>::<FetchAllInternalAsync>b__65(<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>)
extern const MethodInfo* U3CU3Ef__AnonymousType5_2_get_ClassName_m40111_MethodInfo_var;
extern "C" String_t* U3CU3Ec__DisplayClass6c_1_U3CFetchAllInternalAsyncU3Eb__65_m40095_gshared (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType5_2_t2993 * ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ef__AnonymousType5_2_get_ClassName_m40111_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485591);
		s_Il2CppMethodIntialized = true;
	}
	{
		U3CU3Ef__AnonymousType5_2_t2993 * L_0 = ___pair;
		NullCheck((U3CU3Ef__AnonymousType5_2_t2993 *)L_0);
		String_t* L_1 = U3CU3Ef__AnonymousType5_2_get_ClassName_m40111((U3CU3Ef__AnonymousType5_2_t2993 *)L_0, /*hidden argument*/U3CU3Ef__AnonymousType5_2_get_ClassName_m40111_MethodInfo_var);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>> Parse.ParseObject/<>c__DisplayClass6c`1<System.Object>::<FetchAllInternalAsync>b__66(<>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>)
extern const MethodInfo* U3CU3Ef__AnonymousType5_2_get_FindTask_m40113_MethodInfo_var;
extern "C" Task_1_t3006 * U3CU3Ec__DisplayClass6c_1_U3CFetchAllInternalAsyncU3Eb__66_m40096_gshared (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType5_2_t2993 * ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ef__AnonymousType5_2_get_FindTask_m40113_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485592);
		s_Il2CppMethodIntialized = true;
	}
	{
		U3CU3Ef__AnonymousType5_2_t2993 * L_0 = ___pair;
		NullCheck((U3CU3Ef__AnonymousType5_2_t2993 *)L_0);
		Task_1_t3006 * L_1 = U3CU3Ef__AnonymousType5_2_get_FindTask_m40113((U3CU3Ef__AnonymousType5_2_t2993 *)L_0, /*hidden argument*/U3CU3Ef__AnonymousType5_2_get_FindTask_m40113_MethodInfo_var);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// TKey System.Linq.IGrouping`2<System.Object,System.Object>::get_Key()
// <>f__AnonymousType5`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType5_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType5`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType5_2_gen_0MethodDeclarations.h"



// System.Void <>f__AnonymousType5`2<System.Object,System.Object>::.ctor(<ClassName>j__TPar,<FindTask>j__TPar)
extern "C" void U3CU3Ef__AnonymousType5_2__ctor_m40110_gshared (U3CU3Ef__AnonymousType5_2_t7241 * __this, Object_t * ___ClassName, Object_t * ___FindTask, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___ClassName;
		__this->___U3CClassNameU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___FindTask;
		__this->___U3CFindTaskU3Ei__Field_1 = L_1;
		return;
	}
}
// <ClassName>j__TPar <>f__AnonymousType5`2<System.Object,System.Object>::get_ClassName()
extern "C" Object_t * U3CU3Ef__AnonymousType5_2_get_ClassName_m40112_gshared (U3CU3Ef__AnonymousType5_2_t7241 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CClassNameU3Ei__Field_0);
		return L_0;
	}
}
// <FindTask>j__TPar <>f__AnonymousType5`2<System.Object,System.Object>::get_FindTask()
extern "C" Object_t * U3CU3Ef__AnonymousType5_2_get_FindTask_m40114_gshared (U3CU3Ef__AnonymousType5_2_t7241 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CFindTaskU3Ei__Field_1);
		return L_0;
	}
}
// System.String <>f__AnonymousType5`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType5_2_ToString_m40116_gshared (U3CU3Ef__AnonymousType5_2_t7241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t696 * V_0 = {0};
	{
		StringBuilder_t696 * L_0 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3048(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t696 *)L_0;
		StringBuilder_t696 * L_1 = V_0;
		NullCheck((StringBuilder_t696 *)L_1);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_1, (String_t*)(String_t*) &_stringLiteral2000, /*hidden argument*/NULL);
		StringBuilder_t696 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CClassNameU3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t696 *)L_2);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t696 * L_5 = V_0;
		NullCheck((StringBuilder_t696 *)L_5);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_5, (String_t*)(String_t*) &_stringLiteral2001, /*hidden argument*/NULL);
		StringBuilder_t696 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CFindTaskU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t696 *)L_6);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t696 * L_9 = V_0;
		NullCheck((StringBuilder_t696 *)L_9);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_9, (String_t*)(String_t*) &_stringLiteral1990, /*hidden argument*/NULL);
		StringBuilder_t696 * L_10 = V_0;
		NullCheck((Object_t *)L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_10);
		return L_11;
	}
}
// System.Boolean <>f__AnonymousType5`2<System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType5_2_Equals_m40118_gshared (U3CU3Ef__AnonymousType5_2_t7241 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType5_2_t7241 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType5_2_t7241 *)((U3CU3Ef__AnonymousType5_2_t7241 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		U3CU3Ef__AnonymousType5_2_t7241 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_2 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_3 = (Object_t *)(__this->___U3CClassNameU3Ei__Field_0);
		U3CU3Ef__AnonymousType5_2_t7241 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CClassNameU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t6207 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_7 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_8 = (Object_t *)(__this->___U3CFindTaskU3Ei__Field_1);
		U3CU3Ef__AnonymousType5_2_t7241 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CFindTaskU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		return L_11;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType5`2<System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType5_2_GetHashCode_m40120_gshared (U3CU3Ef__AnonymousType5_2_t7241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)549237220);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_1 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = (Object_t *)(__this->___U3CClassNameU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t6207 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t6207 * L_5 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = (Object_t *)(__this->___U3CFindTaskU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

// Parse.ParseQuery`1<Parse.ParseObject>
#include "Parse_Unity_Parse_ParseQuery_1_gen_0.h"
// <>f__AnonymousType6`2<System.Object,Parse.ParseObject>
#include "Parse_Unity_U3CU3Ef__AnonymousType6_2_gen.h"
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
#include "System_Core_System_Func_2_gen_88.h"
// System.Func`3<System.Object,Parse.ParseObject,<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>
#include "System_Core_System_Func_3_gen_3.h"
// System.Func`2<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>,System.Boolean>
#include "System_Core_System_Func_2_gen_85.h"
// System.Func`2<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>,<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>
#include "System_Core_System_Func_2_gen_86.h"
// Parse.ParseQuery`1<Parse.ParseObject>
#include "Parse_Unity_Parse_ParseQuery_1_gen_0MethodDeclarations.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationTokenMethodDeclarations.h"
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
#include "System_Core_System_Func_2_gen_88MethodDeclarations.h"
// System.Func`3<System.Object,Parse.ParseObject,<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>
#include "System_Core_System_Func_3_gen_3MethodDeclarations.h"
// System.Func`2<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>,System.Boolean>
#include "System_Core_System_Func_2_gen_85MethodDeclarations.h"
// System.Func`2<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>,<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>
#include "System_Core_System_Func_2_gen_86MethodDeclarations.h"
// <>f__AnonymousType6`2<System.Object,Parse.ParseObject>
#include "Parse_Unity_U3CU3Ef__AnonymousType6_2_genMethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_33MethodDeclarations.h"
struct ParseQuery_1_t1976;
struct String_t;
struct IEnumerable_1_t1654;
struct ParseQuery_1_t2095;
struct String_t;
struct IEnumerable_1_t729;
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_2.h"
// Declaration Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContainedIn<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContainedIn<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereContainedIn_TisObject_t_m9247_gshared (ParseQuery_1_t2095 * __this, String_t* p0, Object_t* p1, const MethodInfo* method);
#define ParseQuery_1_WhereContainedIn_TisObject_t_m9247(__this, p0, p1, method) (( ParseQuery_1_t2095 * (*) (ParseQuery_1_t2095 *, String_t*, Object_t*, const MethodInfo*))ParseQuery_1_WhereContainedIn_TisObject_t_m9247_gshared)(__this, p0, p1, method)
// Declaration Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContainedIn<System.String>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContainedIn<System.String>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
#define ParseQuery_1_WhereContainedIn_TisString_t_m75780(__this, p0, p1, method) (( ParseQuery_1_t1976 * (*) (ParseQuery_1_t1976 *, String_t*, Object_t*, const MethodInfo*))ParseQuery_1_WhereContainedIn_TisObject_t_m9247_gshared)(__this, p0, p1, method)
struct Enumerable_t718;
struct IEnumerable_1_t11187;
struct IEnumerable_1_t729;
struct Func_2_t7258;
struct Func_3_t7243;
struct Enumerable_t718;
struct IEnumerable_1_t729;
struct Func_2_t7259;
struct Func_3_t1782;
// Declaration System.Collections.Generic.IEnumerable`1<!!2> System.Linq.Enumerable::SelectMany<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>,System.Func`3<!!0,!!1,!!2>)
// System.Collections.Generic.IEnumerable`1<!!2> System.Linq.Enumerable::SelectMany<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>,System.Func`3<!!0,!!1,!!2>)
extern "C" Object_t* Enumerable_SelectMany_TisObject_t_TisObject_t_TisObject_t_m74264_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t7259 * p1, Func_3_t1782 * p2, const MethodInfo* method);
#define Enumerable_SelectMany_TisObject_t_TisObject_t_TisObject_t_m74264(__this /* static, unused */, p0, p1, p2, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7259 *, Func_3_t1782 *, const MethodInfo*))Enumerable_SelectMany_TisObject_t_TisObject_t_TisObject_t_m74264_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!2> System.Linq.Enumerable::SelectMany<System.Object,Parse.ParseObject,<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>,System.Func`3<!!0,!!1,!!2>)
// System.Collections.Generic.IEnumerable`1<!!2> System.Linq.Enumerable::SelectMany<System.Object,Parse.ParseObject,<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>,System.Func`3<!!0,!!1,!!2>)
#define Enumerable_SelectMany_TisObject_t_TisParseObject_t596_TisU3CU3Ef__AnonymousType6_2_t7253_m75781(__this /* static, unused */, p0, p1, p2, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7258 *, Func_3_t7243 *, const MethodInfo*))Enumerable_SelectMany_TisObject_t_TisObject_t_TisObject_t_m74264_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Enumerable_t718;
struct IEnumerable_1_t11187;
struct Func_2_t7244;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisU3CU3Ef__AnonymousType6_2_t7253_m75782(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7244 *, const MethodInfo*))Enumerable_Where_TisObject_t_m5463_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t718;
struct IEnumerable_1_t11187;
struct Func_2_t7245;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>,<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>,<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisU3CU3Ef__AnonymousType6_2_t7253_TisU3CU3Ef__AnonymousType6_2_t7253_m75783(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7245 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m8985_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass74__ctor_m40136_gshared (U3CU3Ec__DisplayClass74_t7246 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>::<FetchAllInternalAsync>b__60(T)
extern "C" bool U3CU3Ec__DisplayClass74_U3CFetchAllInternalAsyncU3Eb__60_m40137_gshared (U3CU3Ec__DisplayClass74_t7246 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		U3CU3Ec__DisplayClass6c_1_t7239 * L_0 = (U3CU3Ec__DisplayClass6c_1_t7239 *)(__this->___CSU24U3CU3E8__locals6d_0);
		NullCheck(L_0);
		bool L_1 = (bool)(L_0->___force_1);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((ParseObject_t596 *)(*(&___obj)));
		bool L_2 = ParseObject_get_IsDataAvailable_m8464((ParseObject_t596 *)(*(&___obj)), /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001e:
	{
		return 1;
	}
}
// <>f__AnonymousType5`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>> Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>::<FetchAllInternalAsync>b__64(System.Linq.IGrouping`2<System.String,System.String>)
extern TypeInfo* IGrouping_2_t2992_il2cpp_TypeInfo_var;
extern TypeInfo* ParseQuery_1_t1976_il2cpp_TypeInfo_var;
extern TypeInfo* U3CU3Ef__AnonymousType5_2_t2993_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseQuery_1__ctor_m9206_MethodInfo_var;
extern const MethodInfo* ParseQuery_1_WhereContainedIn_TisString_t_m75780_MethodInfo_var;
extern const MethodInfo* ParseQuery_1_FindAsync_m40304_MethodInfo_var;
extern const MethodInfo* U3CU3Ef__AnonymousType5_2__ctor_m40109_MethodInfo_var;
extern "C" U3CU3Ef__AnonymousType5_2_t2993 * U3CU3Ec__DisplayClass74_U3CFetchAllInternalAsyncU3Eb__64_m40138_gshared (U3CU3Ec__DisplayClass74_t7246 * __this, Object_t* ___classGroup, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGrouping_2_t2992_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5135);
		ParseQuery_1_t1976_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3909);
		U3CU3Ef__AnonymousType5_2_t2993_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5136);
		ParseQuery_1__ctor_m9206_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484910);
		ParseQuery_1_WhereContainedIn_TisString_t_m75780_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485593);
		ParseQuery_1_FindAsync_m40304_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485594);
		U3CU3Ef__AnonymousType5_2__ctor_m40109_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485595);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___classGroup;
		NullCheck((Object_t*)L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Linq.IGrouping`2<System.String,System.String>::get_Key() */, IGrouping_2_t2992_il2cpp_TypeInfo_var, (Object_t*)L_0);
		Object_t* L_2 = ___classGroup;
		NullCheck((Object_t*)L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Linq.IGrouping`2<System.String,System.String>::get_Key() */, IGrouping_2_t2992_il2cpp_TypeInfo_var, (Object_t*)L_2);
		ParseQuery_1_t1976 * L_4 = (ParseQuery_1_t1976 *)il2cpp_codegen_object_new (ParseQuery_1_t1976_il2cpp_TypeInfo_var);
		ParseQuery_1__ctor_m9206(L_4, (String_t*)L_3, /*hidden argument*/ParseQuery_1__ctor_m9206_MethodInfo_var);
		Object_t* L_5 = ___classGroup;
		NullCheck((ParseQuery_1_t1976 *)L_4);
		ParseQuery_1_t1976 * L_6 = ParseQuery_1_WhereContainedIn_TisString_t_m75780((ParseQuery_1_t1976 *)L_4, (String_t*)(String_t*) &_stringLiteral1555, (Object_t*)L_5, /*hidden argument*/ParseQuery_1_WhereContainedIn_TisString_t_m75780_MethodInfo_var);
		U3CU3Ec__DisplayClass6c_1_t7239 * L_7 = (U3CU3Ec__DisplayClass6c_1_t7239 *)(__this->___CSU24U3CU3E8__locals6d_0);
		NullCheck(L_7);
		CancellationToken_t1753  L_8 = (CancellationToken_t1753 )(L_7->___cancellationToken_2);
		NullCheck((ParseQuery_1_t1976 *)L_6);
		Task_1_t3006 * L_9 = ParseQuery_1_FindAsync_m40304((ParseQuery_1_t1976 *)L_6, (CancellationToken_t1753 )L_8, /*hidden argument*/ParseQuery_1_FindAsync_m40304_MethodInfo_var);
		U3CU3Ef__AnonymousType5_2_t2993 * L_10 = (U3CU3Ef__AnonymousType5_2_t2993 *)il2cpp_codegen_object_new (U3CU3Ef__AnonymousType5_2_t2993_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType5_2__ctor_m40109(L_10, (String_t*)L_1, (Task_1_t3006 *)L_9, /*hidden argument*/U3CU3Ef__AnonymousType5_2__ctor_m40109_MethodInfo_var);
		return L_10;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>::<FetchAllInternalAsync>b__67(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__DisplayClass74_U3CFetchAllInternalAsyncU3Eb__67_m40139_gshared (U3CU3Ec__DisplayClass74_t7246 * __this, Task_1_t2994 * _____, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	U3CU3Ef__AnonymousType6_2_t7253 * V_1 = {0};
	Object_t* V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Func_2_t7258 * G_B4_0 = {0};
	List_1_t2 * G_B4_1 = {0};
	Func_2_t7258 * G_B3_0 = {0};
	List_1_t2 * G_B3_1 = {0};
	Object_t* G_B6_0 = {0};
	Object_t* G_B5_0 = {0};
	Object_t* G_B8_0 = {0};
	Object_t* G_B7_0 = {0};
	{
		U3CU3Ec__DisplayClass6c_1_t7239 * L_0 = (U3CU3Ec__DisplayClass6c_1_t7239 *)(__this->___CSU24U3CU3E8__locals6d_0);
		NullCheck(L_0);
		CancellationToken_t1753 * L_1 = (CancellationToken_t1753 *)&(L_0->___cancellationToken_2);
		bool L_2 = CancellationToken_get_IsCancellationRequested_m8804((CancellationToken_t1753 *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		U3CU3Ec__DisplayClass6c_1_t7239 * L_3 = (U3CU3Ec__DisplayClass6c_1_t7239 *)(__this->___CSU24U3CU3E8__locals6d_0);
		NullCheck(L_3);
		Object_t* L_4 = (Object_t*)(L_3->___objects_0);
		return L_4;
	}

IL_001e:
	{
		List_1_t2 * L_5 = (List_1_t2 *)(__this->___objectsToFetch_1);
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1) };
		Func_2_t7258 * L_7 = (Func_2_t7258 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Func_2_t7258 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_7, (Object_t *)__this, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Func_3_t7243 * L_8 = ((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate76_3;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_8)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_9 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5) };
		Func_3_t7243 * L_10 = (Func_3_t7243 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		(( void (*) (Func_3_t7243 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_10, (Object_t *)NULL, (IntPtr_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate76_3 = L_10;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		Func_3_t7243 * L_11 = ((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate76_3;
		Object_t* L_12 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7258 *, Func_3_t7243 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, (Object_t*)G_B4_1, (Func_2_t7258 *)G_B4_0, (Func_3_t7243 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Func_2_t7244 * L_13 = ((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate77_4;
		G_B5_0 = L_12;
		if (L_13)
		{
			G_B6_0 = L_12;
			goto IL_006a;
		}
	}
	{
		IntPtr_t L_14 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9) };
		Func_2_t7244 * L_15 = (Func_2_t7244 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		(( void (*) (Func_2_t7244 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_15, (Object_t *)NULL, (IntPtr_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate77_4 = L_15;
		G_B6_0 = G_B5_0;
	}

IL_006a:
	{
		Func_2_t7244 * L_16 = ((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate77_4;
		Object_t* L_17 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7244 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)G_B6_0, (Func_2_t7244 *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Func_2_t7245 * L_18 = ((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate78_5;
		G_B7_0 = L_17;
		if (L_18)
		{
			G_B8_0 = L_17;
			goto IL_008c;
		}
	}
	{
		IntPtr_t L_19 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13) };
		Func_2_t7245 * L_20 = (Func_2_t7245 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		(( void (*) (Func_2_t7245 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(L_20, (Object_t *)NULL, (IntPtr_t)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate78_5 = L_20;
		G_B8_0 = G_B7_0;
	}

IL_008c:
	{
		Func_2_t7245 * L_21 = ((U3CU3Ec__DisplayClass74_t7246_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate78_5;
		Object_t* L_22 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t7245 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(NULL /*static, unused*/, (Object_t*)G_B8_0, (Func_2_t7245 *)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		V_0 = (Object_t*)L_22;
		Object_t* L_23 = V_0;
		NullCheck((Object_t*)L_23);
		Object_t* L_24 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), (Object_t*)L_23);
		V_2 = (Object_t*)L_24;
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d2;
		}

IL_00a0:
		{
			Object_t* L_25 = V_2;
			NullCheck((Object_t*)L_25);
			U3CU3Ef__AnonymousType6_2_t7253 * L_26 = (U3CU3Ef__AnonymousType6_2_t7253 *)InterfaceFuncInvoker0< U3CU3Ef__AnonymousType6_2_t7253 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<<>f__AnonymousType6`2<System.Object,Parse.ParseObject>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), (Object_t*)L_25);
			V_1 = (U3CU3Ef__AnonymousType6_2_t7253 *)L_26;
			U3CU3Ef__AnonymousType6_2_t7253 * L_27 = V_1;
			NullCheck((U3CU3Ef__AnonymousType6_2_t7253 *)L_27);
			Object_t * L_28 = (( Object_t * (*) (U3CU3Ef__AnonymousType6_2_t7253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((U3CU3Ef__AnonymousType6_2_t7253 *)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
			V_3 = (Object_t *)L_28;
			U3CU3Ef__AnonymousType6_2_t7253 * L_29 = V_1;
			NullCheck((U3CU3Ef__AnonymousType6_2_t7253 *)L_29);
			ParseObject_t596 * L_30 = (( ParseObject_t596 * (*) (U3CU3Ef__AnonymousType6_2_t7253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((U3CU3Ef__AnonymousType6_2_t7253 *)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
			NullCheck((ParseObject_t596 *)(*(&V_3)));
			ParseObject_MergeFromObject_m8425((ParseObject_t596 *)(*(&V_3)), (ParseObject_t596 *)L_30, /*hidden argument*/NULL);
			U3CU3Ef__AnonymousType6_2_t7253 * L_31 = V_1;
			NullCheck((U3CU3Ef__AnonymousType6_2_t7253 *)L_31);
			Object_t * L_32 = (( Object_t * (*) (U3CU3Ef__AnonymousType6_2_t7253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((U3CU3Ef__AnonymousType6_2_t7253 *)L_31, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
			Object_t * L_33 = L_32;
			NullCheck(((Object_t *)L_33));
			((ParseObject_t596 *)((Object_t *)L_33))->___hasBeenFetched_12 = 1;
		}

IL_00d2:
		{
			Object_t* L_34 = V_2;
			NullCheck((Object_t *)L_34);
			bool L_35 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_34);
			if (L_35)
			{
				goto IL_00a0;
			}
		}

IL_00da:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00dc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_00dc;
	}

FINALLY_00dc:
	{ // begin finally (depth: 1)
		{
			Object_t* L_36 = V_2;
			if (!L_36)
			{
				goto IL_00e5;
			}
		}

IL_00df:
		{
			Object_t* L_37 = V_2;
			NullCheck((Object_t *)L_37);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_37);
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(220)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(220)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_00e6:
	{
		U3CU3Ec__DisplayClass6c_1_t7239 * L_38 = (U3CU3Ec__DisplayClass6c_1_t7239 *)(__this->___CSU24U3CU3E8__locals6d_0);
		NullCheck(L_38);
		Object_t* L_39 = (Object_t*)(L_38->___objects_0);
		return L_39;
	}
}
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject> Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>::<FetchAllInternalAsync>b__68(T)
extern const MethodInfo* Task_1_get_Result_m40126_MethodInfo_var;
extern "C" Object_t* U3CU3Ec__DisplayClass74_U3CFetchAllInternalAsyncU3Eb__68_m40140_gshared (U3CU3Ec__DisplayClass74_t7246 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_1_get_Result_m40126_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485596);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t7242 * L_0 = (Dictionary_2_t7242 *)(__this->___findsByClass_2);
		NullCheck((ParseObject_t596 *)(*(&___obj)));
		String_t* L_1 = ParseObject_get_ClassName_m8488((ParseObject_t596 *)(*(&___obj)), /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t7242 *)L_0);
		Task_1_t3006 * L_2 = (Task_1_t3006 *)VirtFuncInvoker1< Task_1_t3006 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_Item(!0) */, (Dictionary_2_t7242 *)L_0, (String_t*)L_1);
		NullCheck((Task_1_t3006 *)L_2);
		Object_t* L_3 = Task_1_get_Result_m40126((Task_1_t3006 *)L_2, /*hidden argument*/Task_1_get_Result_m40126_MethodInfo_var);
		return L_3;
	}
}
// <>f__AnonymousType6`2<T,Parse.ParseObject> Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>::<FetchAllInternalAsync>b__69(T,Parse.ParseObject)
extern "C" U3CU3Ef__AnonymousType6_2_t7253 * U3CU3Ec__DisplayClass74_U3CFetchAllInternalAsyncU3Eb__69_m40141_gshared (Object_t * __this /* static, unused */, Object_t * ___obj, ParseObject_t596 * ___result, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ParseObject_t596 * L_1 = ___result;
		U3CU3Ef__AnonymousType6_2_t7253 * L_2 = (U3CU3Ef__AnonymousType6_2_t7253 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		(( void (*) (U3CU3Ef__AnonymousType6_2_t7253 *, Object_t *, ParseObject_t596 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(L_2, (Object_t *)L_0, (ParseObject_t596 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>::<FetchAllInternalAsync>b__6a(<>f__AnonymousType6`2<T,Parse.ParseObject>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ec__DisplayClass74_U3CFetchAllInternalAsyncU3Eb__6a_m40142_gshared (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType6_2_t7253 * ___U3CU3Eh__TransparentIdentifier53, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		U3CU3Ef__AnonymousType6_2_t7253 * L_0 = ___U3CU3Eh__TransparentIdentifier53;
		NullCheck((U3CU3Ef__AnonymousType6_2_t7253 *)L_0);
		ParseObject_t596 * L_1 = (( ParseObject_t596 * (*) (U3CU3Ef__AnonymousType6_2_t7253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((U3CU3Ef__AnonymousType6_2_t7253 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		NullCheck((ParseObject_t596 *)L_1);
		String_t* L_2 = ParseObject_get_ObjectId_m8485((ParseObject_t596 *)L_1, /*hidden argument*/NULL);
		U3CU3Ef__AnonymousType6_2_t7253 * L_3 = ___U3CU3Eh__TransparentIdentifier53;
		NullCheck((U3CU3Ef__AnonymousType6_2_t7253 *)L_3);
		Object_t * L_4 = (( Object_t * (*) (U3CU3Ef__AnonymousType6_2_t7253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((U3CU3Ef__AnonymousType6_2_t7253 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		V_0 = (Object_t *)L_4;
		NullCheck((ParseObject_t596 *)(*(&V_0)));
		String_t* L_5 = ParseObject_get_ObjectId_m8485((ParseObject_t596 *)(*(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2603(NULL /*static, unused*/, (String_t*)L_2, (String_t*)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// <>f__AnonymousType6`2<T,Parse.ParseObject> Parse.ParseObject/<>c__DisplayClass6c`1/<>c__DisplayClass74<System.Object>::<FetchAllInternalAsync>b__6b(<>f__AnonymousType6`2<T,Parse.ParseObject>)
extern "C" U3CU3Ef__AnonymousType6_2_t7253 * U3CU3Ec__DisplayClass74_U3CFetchAllInternalAsyncU3Eb__6b_m40143_gshared (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType6_2_t7253 * ___U3CU3Eh__TransparentIdentifier53, const MethodInfo* method)
{
	{
		U3CU3Ef__AnonymousType6_2_t7253 * L_0 = ___U3CU3Eh__TransparentIdentifier53;
		NullCheck((U3CU3Ef__AnonymousType6_2_t7253 *)L_0);
		Object_t * L_1 = (( Object_t * (*) (U3CU3Ef__AnonymousType6_2_t7253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((U3CU3Ef__AnonymousType6_2_t7253 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		U3CU3Ef__AnonymousType6_2_t7253 * L_2 = ___U3CU3Eh__TransparentIdentifier53;
		NullCheck((U3CU3Ef__AnonymousType6_2_t7253 *)L_2);
		ParseObject_t596 * L_3 = (( ParseObject_t596 * (*) (U3CU3Ef__AnonymousType6_2_t7253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((U3CU3Ef__AnonymousType6_2_t7253 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		U3CU3Ef__AnonymousType6_2_t7253 * L_4 = (U3CU3Ef__AnonymousType6_2_t7253 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		(( void (*) (U3CU3Ef__AnonymousType6_2_t7253 *, Object_t *, ParseObject_t596 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(L_4, (Object_t *)L_1, (ParseObject_t596 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		return L_4;
	}
}
// <>f__AnonymousType6`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType6_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType6`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType6_2_gen_0MethodDeclarations.h"



// System.Void <>f__AnonymousType6`2<System.Object,System.Object>::.ctor(<obj>j__TPar,<result>j__TPar)
extern "C" void U3CU3Ef__AnonymousType6_2__ctor_m40252_gshared (U3CU3Ef__AnonymousType6_2_t7254 * __this, Object_t * ___obj, Object_t * ___result, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___obj;
		__this->___U3CobjU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___result;
		__this->___U3CresultU3Ei__Field_1 = L_1;
		return;
	}
}
// <obj>j__TPar <>f__AnonymousType6`2<System.Object,System.Object>::get_obj()
extern "C" Object_t * U3CU3Ef__AnonymousType6_2_get_obj_m40254_gshared (U3CU3Ef__AnonymousType6_2_t7254 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CobjU3Ei__Field_0);
		return L_0;
	}
}
// <result>j__TPar <>f__AnonymousType6`2<System.Object,System.Object>::get_result()
extern "C" Object_t * U3CU3Ef__AnonymousType6_2_get_result_m40256_gshared (U3CU3Ef__AnonymousType6_2_t7254 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CresultU3Ei__Field_1);
		return L_0;
	}
}
// System.String <>f__AnonymousType6`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t696_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType6_2_ToString_m40258_gshared (U3CU3Ef__AnonymousType6_2_t7254 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t696 * V_0 = {0};
	{
		StringBuilder_t696 * L_0 = (StringBuilder_t696 *)il2cpp_codegen_object_new (StringBuilder_t696_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3048(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t696 *)L_0;
		StringBuilder_t696 * L_1 = V_0;
		NullCheck((StringBuilder_t696 *)L_1);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_1, (String_t*)(String_t*) &_stringLiteral2002, /*hidden argument*/NULL);
		StringBuilder_t696 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CobjU3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t696 *)L_2);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t696 * L_5 = V_0;
		NullCheck((StringBuilder_t696 *)L_5);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_5, (String_t*)(String_t*) &_stringLiteral2003, /*hidden argument*/NULL);
		StringBuilder_t696 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CresultU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t696 *)L_6);
		StringBuilder_Append_m10463((StringBuilder_t696 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t696 * L_9 = V_0;
		NullCheck((StringBuilder_t696 *)L_9);
		StringBuilder_Append_m3049((StringBuilder_t696 *)L_9, (String_t*)(String_t*) &_stringLiteral1990, /*hidden argument*/NULL);
		StringBuilder_t696 * L_10 = V_0;
		NullCheck((Object_t *)L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_10);
		return L_11;
	}
}
// System.Boolean <>f__AnonymousType6`2<System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType6_2_Equals_m40260_gshared (U3CU3Ef__AnonymousType6_2_t7254 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType6_2_t7254 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType6_2_t7254 *)((U3CU3Ef__AnonymousType6_2_t7254 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		U3CU3Ef__AnonymousType6_2_t7254 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_2 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_3 = (Object_t *)(__this->___U3CobjU3Ei__Field_0);
		U3CU3Ef__AnonymousType6_2_t7254 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CobjU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t6207 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_7 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_8 = (Object_t *)(__this->___U3CresultU3Ei__Field_1);
		U3CU3Ef__AnonymousType6_2_t7254 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CresultU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t6207 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		return L_11;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType6`2<System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType6_2_GetHashCode_m40262_gshared (U3CU3Ef__AnonymousType6_2_t7254 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)554809713);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_1 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = (Object_t *)(__this->___U3CobjU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t6207 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t6207 * L_5 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = (Object_t *)(__this->___U3CresultU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t6207 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t6207 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectManyIterat.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectManyIteratMethodDeclarations.h"

// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
#include "System_Core_System_Func_2_gen_89.h"
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen.h"
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
#include "System_Core_System_Func_2_gen_89MethodDeclarations.h"
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_genMethodDeclarations.h"


// System.Void System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void U3CCreateSelectManyIteratorU3Ec__Iterator14_3__ctor_m40367_gshared (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectManyIteratorU3Ec__Iterator14_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m40368_gshared (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_8);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectManyIteratorU3Ec__Iterator14_3_System_Collections_IEnumerator_get_Current_m40369_gshared (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_8);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectManyIteratorU3Ec__Iterator14_3_System_Collections_IEnumerable_GetEnumerator_m40370_gshared (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectManyIteratorU3Ec__Iterator14_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m40371_gshared (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * __this, const MethodInfo* method)
{
	U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_7);
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
		U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * L_2 = (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 *)L_2;
		U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_9);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * L_5 = V_0;
		Func_2_t7259 * L_6 = (Func_2_t7259 *)(__this->___U3CU24U3EcollectionSelector_10);
		NullCheck(L_5);
		L_5->___collectionSelector_3 = L_6;
		U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * L_7 = V_0;
		Func_3_t1782 * L_8 = (Func_3_t1782 *)(__this->___U3CU24U3Eselector_11);
		NullCheck(L_7);
		L_7->___selector_6 = L_8;
		U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectManyIteratorU3Ec__Iterator14_3_MoveNext_m40372_gshared (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * __this, const MethodInfo* method)
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
		int32_t L_0 = (int32_t)(__this->___U24PC_7);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_7 = (-1);
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
		goto IL_0128;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_76U3E__0_1 = L_3;
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
			goto IL_00f3;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_76U3E__0_1);
			NullCheck((Object_t*)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t7259 * L_7 = (Func_2_t7259 *)(__this->___collectionSelector_3);
			Object_t * L_8 = (Object_t *)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t7259 *)L_7);
			Object_t* L_9 = (Object_t*)VirtFuncInvoker1< Object_t*, Object_t * >::Invoke(11 /* TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::Invoke(T) */, (Func_2_t7259 *)L_7, (Object_t *)L_8);
			NullCheck((Object_t*)L_9);
			Object_t* L_10 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), (Object_t*)L_9);
			__this->___U3CU24s_77U3E__2_4 = L_10;
			V_0 = (uint32_t)((int32_t)-3);
		}

IL_0078:
		try
		{ // begin try (depth: 2)
			{
				uint32_t L_11 = V_0;
				if (((int32_t)((int32_t)L_11-(int32_t)1)) == 0)
				{
					goto IL_00c5;
				}
			}

IL_0084:
			{
				goto IL_00c5;
			}

IL_0089:
			{
				Object_t* L_12 = (Object_t*)(__this->___U3CU24s_77U3E__2_4);
				NullCheck((Object_t*)L_12);
				Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_12);
				__this->___U3CcollectionU3E__3_5 = L_13;
				Func_3_t1782 * L_14 = (Func_3_t1782 *)(__this->___selector_6);
				Object_t * L_15 = (Object_t *)(__this->___U3CelementU3E__1_2);
				Object_t * L_16 = (Object_t *)(__this->___U3CcollectionU3E__3_5);
				NullCheck((Func_3_t1782 *)L_14);
				Object_t * L_17 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, Object_t * >::Invoke(11 /* TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2) */, (Func_3_t1782 *)L_14, (Object_t *)L_15, (Object_t *)L_16);
				__this->___U24current_8 = L_17;
				__this->___U24PC_7 = 1;
				V_1 = (bool)1;
				IL2CPP_LEAVE(0x12A, FINALLY_00da);
			}

IL_00c5:
			{
				Object_t* L_18 = (Object_t*)(__this->___U3CU24s_77U3E__2_4);
				NullCheck((Object_t *)L_18);
				bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_18);
				if (L_19)
				{
					goto IL_0089;
				}
			}

IL_00d5:
			{
				IL2CPP_LEAVE(0xF3, FINALLY_00da);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t496 *)e.ex;
			goto FINALLY_00da;
		}

FINALLY_00da:
		{ // begin finally (depth: 2)
			{
				bool L_20 = V_1;
				if (!L_20)
				{
					goto IL_00de;
				}
			}

IL_00dd:
			{
				IL2CPP_END_FINALLY(218)
			}

IL_00de:
			{
				Object_t* L_21 = (Object_t*)(__this->___U3CU24s_77U3E__2_4);
				if (L_21)
				{
					goto IL_00e7;
				}
			}

IL_00e6:
			{
				IL2CPP_END_FINALLY(218)
			}

IL_00e7:
			{
				Object_t* L_22 = (Object_t*)(__this->___U3CU24s_77U3E__2_4);
				NullCheck((Object_t *)L_22);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_22);
				IL2CPP_END_FINALLY(218)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(218)
		{
			IL2CPP_END_CLEANUP(0x12A, FINALLY_0108);
			IL2CPP_JUMP_TBL(0xF3, IL_00f3)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
		}

IL_00f3:
		{
			Object_t* L_23 = (Object_t*)(__this->___U3CU24s_76U3E__0_1);
			NullCheck((Object_t *)L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_23);
			if (L_24)
			{
				goto IL_0048;
			}
		}

IL_0103:
		{
			IL2CPP_LEAVE(0x121, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		{
			bool L_25 = V_1;
			if (!L_25)
			{
				goto IL_010c;
			}
		}

IL_010b:
		{
			IL2CPP_END_FINALLY(264)
		}

IL_010c:
		{
			Object_t* L_26 = (Object_t*)(__this->___U3CU24s_76U3E__0_1);
			if (L_26)
			{
				goto IL_0115;
			}
		}

IL_0114:
		{
			IL2CPP_END_FINALLY(264)
		}

IL_0115:
		{
			Object_t* L_27 = (Object_t*)(__this->___U3CU24s_76U3E__0_1);
			NullCheck((Object_t *)L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_27);
			IL2CPP_END_FINALLY(264)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_JUMP_TBL(0x12A, IL_012a)
		IL2CPP_JUMP_TBL(0x121, IL_0121)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0121:
	{
		__this->___U24PC_7 = (-1);
	}

IL_0128:
	{
		return 0;
	}

IL_012a:
	{
		return 1;
	}
	// Dead block : IL_012c: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::Dispose()
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectManyIteratorU3Ec__Iterator14_3_Dispose_m40373_gshared (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * __this, const MethodInfo* method)
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
		int32_t L_0 = (int32_t)(__this->___U24PC_7);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_7 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0055;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0055;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x3B, FINALLY_0026);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t496 *)e.ex;
			goto FINALLY_0026;
		}

FINALLY_0026:
		{ // begin finally (depth: 2)
			{
				Object_t* L_2 = (Object_t*)(__this->___U3CU24s_77U3E__2_4);
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
				Object_t* L_3 = (Object_t*)(__this->___U3CU24s_77U3E__2_4);
				NullCheck((Object_t *)L_3);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_3);
				IL2CPP_END_FINALLY(38)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(38)
		{
			IL2CPP_JUMP_TBL(0x3B, IL_003b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t* L_4 = (Object_t*)(__this->___U3CU24s_76U3E__0_1);
			if (L_4)
			{
				goto IL_0049;
			}
		}

IL_0048:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_0049:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_76U3E__0_1);
			NullCheck((Object_t *)L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_5);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0055:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectManyIterator>c__Iterator14`3<System.Object,System.Object,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectManyIteratorU3Ec__Iterator14_3_Reset_m40374_gshared (U3CCreateSelectManyIteratorU3Ec__Iterator14_3_t7260 * __this, const MethodInfo* method)
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
// System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateGroupByIteratorU.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateGroupByIteratorUMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_58.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__36.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"
// System.Linq.Grouping`2<System.Object,System.Object>
#include "System_Core_System_Linq_Grouping_2_gen.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_58MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__36MethodDeclarations.h"
// System.Linq.Grouping`2<System.Object,System.Object>
#include "System_Core_System_Linq_Grouping_2_genMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42MethodDeclarations.h"
struct Enumerable_t718;
struct List_1_t2;
struct Dictionary_2_t7261;
struct Object_t;
struct IEqualityComparer_1_t1775;
// Declaration System.Collections.Generic.List`1<!!1> System.Linq.Enumerable::ContainsGroup<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<!!0,System.Collections.Generic.List`1<!!1>>,!!0,System.Collections.Generic.IEqualityComparer`1<!!0>)
// System.Collections.Generic.List`1<!!1> System.Linq.Enumerable::ContainsGroup<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<!!0,System.Collections.Generic.List`1<!!1>>,!!0,System.Collections.Generic.IEqualityComparer`1<!!0>)
extern "C" List_1_t2 * Enumerable_ContainsGroup_TisObject_t_TisObject_t_m74268_gshared (Object_t * __this /* static, unused */, Dictionary_2_t7261 * p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define Enumerable_ContainsGroup_TisObject_t_TisObject_t_m74268(__this /* static, unused */, p0, p1, p2, method) (( List_1_t2 * (*) (Object_t * /* static, unused */, Dictionary_2_t7261 *, Object_t *, Object_t*, const MethodInfo*))Enumerable_ContainsGroup_TisObject_t_TisObject_t_m74268_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void U3CCreateGroupByIteratorU3Ec__Iterator6_3__ctor_m40375_gshared (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Linq.IGrouping`2<TKey,TElement> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
extern "C" Object_t* U3CCreateGroupByIteratorU3Ec__Iterator6_3_System_Collections_Generic_IEnumeratorU3CSystem_Linq_IGroupingU3CTKeyU2CTElementU3EU3E_get_Current_m40376_gshared (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___U24current_16);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateGroupByIteratorU3Ec__Iterator6_3_System_Collections_IEnumerator_get_Current_m40377_gshared (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___U24current_16);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateGroupByIteratorU3Ec__Iterator6_3_System_Collections_IEnumerable_GetEnumerator_m40378_gshared (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Linq.IGrouping<TKey,TElement>>.GetEnumerator() */, (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Linq.IGrouping<TKey,TElement>>.GetEnumerator()
extern "C" Object_t* U3CCreateGroupByIteratorU3Ec__Iterator6_3_System_Collections_Generic_IEnumerableU3CSystem_Linq_IGroupingU3CTKeyU2CTElementU3EU3E_GetEnumerator_m40379_gshared (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * __this, const MethodInfo* method)
{
	U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_15);
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
		U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * L_2 = (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 *)L_2;
		U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_17);
		NullCheck(L_3);
		L_3->___source_4 = L_4;
		U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * L_5 = V_0;
		Func_2_t1814 * L_6 = (Func_2_t1814 *)(__this->___U3CU24U3EkeySelector_18);
		NullCheck(L_5);
		L_5->___keySelector_7 = L_6;
		U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * L_7 = V_0;
		Func_2_t1814 * L_8 = (Func_2_t1814 *)(__this->___U3CU24U3EelementSelector_19);
		NullCheck(L_7);
		L_7->___elementSelector_9 = L_8;
		U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * L_9 = V_0;
		Object_t* L_10 = (Object_t*)(__this->___U3CU24U3Ecomparer_20);
		NullCheck(L_9);
		L_9->___comparer_11 = L_10;
		U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * L_11 = V_0;
		return L_11;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateGroupByIteratorU3Ec__Iterator6_3_MoveNext_m40380_gshared (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	bool V_4 = false;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_15);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_15 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_002b;
		}
		if (L_1 == 1)
		{
			goto IL_019e;
		}
		if (L_1 == 2)
		{
			goto IL_019e;
		}
		if (L_1 == 3)
		{
			goto IL_02a9;
		}
	}
	{
		goto IL_02be;
	}

IL_002b:
	{
		Dictionary_2_t7261 * L_2 = (Dictionary_2_t7261 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (Dictionary_2_t7261 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		__this->___U3CgroupsU3E__0_0 = L_2;
		List_1_t2 * L_3 = (List_1_t2 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (List_1_t2 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		__this->___U3CnullListU3E__1_1 = L_3;
		__this->___U3CcounterU3E__2_2 = 0;
		__this->___U3CnullCounterU3E__3_3 = (-1);
		Object_t* L_4 = (Object_t*)(__this->___source_4);
		NullCheck((Object_t*)L_4);
		Object_t* L_5 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), (Object_t*)L_4);
		__this->___U3CU24s_54U3E__4_5 = L_5;
	}

IL_0060:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0065:
		{
			Object_t* L_6 = (Object_t*)(__this->___U3CU24s_54U3E__4_5);
			NullCheck((Object_t*)L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_6);
			__this->___U3CitemU3E__5_6 = L_7;
			Func_2_t1814 * L_8 = (Func_2_t1814 *)(__this->___keySelector_7);
			Object_t * L_9 = (Object_t *)(__this->___U3CitemU3E__5_6);
			NullCheck((Func_2_t1814 *)L_8);
			Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* TResult System.Func`2<System.Object,System.Object>::Invoke(T) */, (Func_2_t1814 *)L_8, (Object_t *)L_9);
			__this->___U3CkeyU3E__6_8 = L_10;
			Func_2_t1814 * L_11 = (Func_2_t1814 *)(__this->___elementSelector_9);
			Object_t * L_12 = (Object_t *)(__this->___U3CitemU3E__5_6);
			NullCheck((Func_2_t1814 *)L_11);
			Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* TResult System.Func`2<System.Object,System.Object>::Invoke(T) */, (Func_2_t1814 *)L_11, (Object_t *)L_12);
			__this->___U3CelementU3E__7_10 = L_13;
			Object_t * L_14 = (Object_t *)(__this->___U3CkeyU3E__6_8);
			Object_t * L_15 = L_14;
			if (((Object_t *)L_15))
			{
				goto IL_00f0;
			}
		}

IL_00b4:
		{
			List_1_t2 * L_16 = (List_1_t2 *)(__this->___U3CnullListU3E__1_1);
			Object_t * L_17 = (Object_t *)(__this->___U3CelementU3E__7_10);
			NullCheck((List_1_t2 *)L_16);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (List_1_t2 *)L_16, (Object_t *)L_17);
			int32_t L_18 = (int32_t)(__this->___U3CnullCounterU3E__3_3);
			if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
			{
				goto IL_00eb;
			}
		}

IL_00d1:
		{
			int32_t L_19 = (int32_t)(__this->___U3CcounterU3E__2_2);
			__this->___U3CnullCounterU3E__3_3 = L_19;
			int32_t L_20 = (int32_t)(__this->___U3CcounterU3E__2_2);
			__this->___U3CcounterU3E__2_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_00eb:
		{
			goto IL_0159;
		}

IL_00f0:
		{
			Dictionary_2_t7261 * L_21 = (Dictionary_2_t7261 *)(__this->___U3CgroupsU3E__0_0);
			Object_t * L_22 = (Object_t *)(__this->___U3CkeyU3E__6_8);
			Object_t* L_23 = (Object_t*)(__this->___comparer_11);
			List_1_t2 * L_24 = (( List_1_t2 * (*) (Object_t * /* static, unused */, Dictionary_2_t7261 *, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Dictionary_2_t7261 *)L_21, (Object_t *)L_22, (Object_t*)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
			__this->___U3CgroupU3E__8_12 = L_24;
			List_1_t2 * L_25 = (List_1_t2 *)(__this->___U3CgroupU3E__8_12);
			if (L_25)
			{
				goto IL_0148;
			}
		}

IL_0118:
		{
			List_1_t2 * L_26 = (List_1_t2 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (List_1_t2 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			__this->___U3CgroupU3E__8_12 = L_26;
			Dictionary_2_t7261 * L_27 = (Dictionary_2_t7261 *)(__this->___U3CgroupsU3E__0_0);
			Object_t * L_28 = (Object_t *)(__this->___U3CkeyU3E__6_8);
			List_1_t2 * L_29 = (List_1_t2 *)(__this->___U3CgroupU3E__8_12);
			NullCheck((Dictionary_2_t7261 *)L_27);
			VirtActionInvoker2< Object_t *, List_1_t2 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Add(!0,!1) */, (Dictionary_2_t7261 *)L_27, (Object_t *)L_28, (List_1_t2 *)L_29);
			int32_t L_30 = (int32_t)(__this->___U3CcounterU3E__2_2);
			__this->___U3CcounterU3E__2_2 = ((int32_t)((int32_t)L_30+(int32_t)1));
		}

IL_0148:
		{
			List_1_t2 * L_31 = (List_1_t2 *)(__this->___U3CgroupU3E__8_12);
			Object_t * L_32 = (Object_t *)(__this->___U3CelementU3E__7_10);
			NullCheck((List_1_t2 *)L_31);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (List_1_t2 *)L_31, (Object_t *)L_32);
		}

IL_0159:
		{
			Object_t* L_33 = (Object_t*)(__this->___U3CU24s_54U3E__4_5);
			NullCheck((Object_t *)L_33);
			bool L_34 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_33);
			if (L_34)
			{
				goto IL_0065;
			}
		}

IL_0169:
		{
			IL2CPP_LEAVE(0x183, FINALLY_016e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_016e;
	}

FINALLY_016e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_35 = (Object_t*)(__this->___U3CU24s_54U3E__4_5);
			if (L_35)
			{
				goto IL_0177;
			}
		}

IL_0176:
		{
			IL2CPP_END_FINALLY(366)
		}

IL_0177:
		{
			Object_t* L_36 = (Object_t*)(__this->___U3CU24s_54U3E__4_5);
			NullCheck((Object_t *)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_36);
			IL2CPP_END_FINALLY(366)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(366)
	{
		IL2CPP_JUMP_TBL(0x183, IL_0183)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0183:
	{
		__this->___U3CcounterU3E__2_2 = 0;
		Dictionary_2_t7261 * L_37 = (Dictionary_2_t7261 *)(__this->___U3CgroupsU3E__0_0);
		NullCheck((Dictionary_2_t7261 *)L_37);
		Enumerator_t7264  L_38 = (( Enumerator_t7264  (*) (Dictionary_2_t7261 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t7261 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		__this->___U3CU24s_55U3E__9_13 = L_38;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_019e:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_39 = V_0;
			if (((int32_t)((int32_t)L_39-(int32_t)1)) == 0)
			{
				goto IL_01fd;
			}
			if (((int32_t)((int32_t)L_39-(int32_t)1)) == 1)
			{
				goto IL_023a;
			}
		}

IL_01ae:
		{
			goto IL_0248;
		}

IL_01b3:
		{
			Enumerator_t7264 * L_40 = (Enumerator_t7264 *)&(__this->___U3CU24s_55U3E__9_13);
			KeyValuePair_2_t7265  L_41 = (( KeyValuePair_2_t7265  (*) (Enumerator_t7264 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)((Enumerator_t7264 *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
			__this->___U3CgroupU3E__10_14 = L_41;
			int32_t L_42 = (int32_t)(__this->___U3CcounterU3E__2_2);
			int32_t L_43 = (int32_t)(__this->___U3CnullCounterU3E__3_3);
			if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
			{
				goto IL_020b;
			}
		}

IL_01d5:
		{
			Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
			Object_t * L_44 = V_2;
			List_1_t2 * L_45 = (List_1_t2 *)(__this->___U3CnullListU3E__1_1);
			Grouping_2_t7270 * L_46 = (Grouping_2_t7270 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
			(( void (*) (Grouping_2_t7270 *, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(L_46, (Object_t *)L_44, (Object_t*)L_45, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
			__this->___U24current_16 = L_46;
			__this->___U24PC_15 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x2C0, FINALLY_025d);
		}

IL_01fd:
		{
			int32_t L_47 = (int32_t)(__this->___U3CcounterU3E__2_2);
			__this->___U3CcounterU3E__2_2 = ((int32_t)((int32_t)L_47+(int32_t)1));
		}

IL_020b:
		{
			KeyValuePair_2_t7265 * L_48 = (KeyValuePair_2_t7265 *)&(__this->___U3CgroupU3E__10_14);
			Object_t * L_49 = (( Object_t * (*) (KeyValuePair_2_t7265 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((KeyValuePair_2_t7265 *)L_48, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
			KeyValuePair_2_t7265 * L_50 = (KeyValuePair_2_t7265 *)&(__this->___U3CgroupU3E__10_14);
			List_1_t2 * L_51 = (( List_1_t2 * (*) (KeyValuePair_2_t7265 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((KeyValuePair_2_t7265 *)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
			Grouping_2_t7270 * L_52 = (Grouping_2_t7270 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
			(( void (*) (Grouping_2_t7270 *, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(L_52, (Object_t *)L_49, (Object_t*)L_51, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
			__this->___U24current_16 = L_52;
			__this->___U24PC_15 = 2;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x2C0, FINALLY_025d);
		}

IL_023a:
		{
			int32_t L_53 = (int32_t)(__this->___U3CcounterU3E__2_2);
			__this->___U3CcounterU3E__2_2 = ((int32_t)((int32_t)L_53+(int32_t)1));
		}

IL_0248:
		{
			Enumerator_t7264 * L_54 = (Enumerator_t7264 *)&(__this->___U3CU24s_55U3E__9_13);
			bool L_55 = (( bool (*) (Enumerator_t7264 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Enumerator_t7264 *)L_54, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
			if (L_55)
			{
				goto IL_01b3;
			}
		}

IL_0258:
		{
			IL2CPP_LEAVE(0x272, FINALLY_025d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_025d;
	}

FINALLY_025d:
	{ // begin finally (depth: 1)
		{
			bool L_56 = V_1;
			if (!L_56)
			{
				goto IL_0261;
			}
		}

IL_0260:
		{
			IL2CPP_END_FINALLY(605)
		}

IL_0261:
		{
			Enumerator_t7264  L_57 = (Enumerator_t7264 )(__this->___U3CU24s_55U3E__9_13);
			Enumerator_t7264  L_58 = L_57;
			Object_t * L_59 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), &L_58);
			NullCheck((Object_t *)L_59);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_59);
			IL2CPP_END_FINALLY(605)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(605)
	{
		IL2CPP_JUMP_TBL(0x2C0, IL_02c0)
		IL2CPP_JUMP_TBL(0x272, IL_0272)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0272:
	{
		int32_t L_60 = (int32_t)(__this->___U3CcounterU3E__2_2);
		int32_t L_61 = (int32_t)(__this->___U3CnullCounterU3E__3_3);
		if ((!(((uint32_t)L_60) == ((uint32_t)L_61))))
		{
			goto IL_02b7;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_3));
		Object_t * L_62 = V_3;
		List_1_t2 * L_63 = (List_1_t2 *)(__this->___U3CnullListU3E__1_1);
		Grouping_2_t7270 * L_64 = (Grouping_2_t7270 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		(( void (*) (Grouping_2_t7270 *, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(L_64, (Object_t *)L_62, (Object_t*)L_63, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		__this->___U24current_16 = L_64;
		__this->___U24PC_15 = 3;
		goto IL_02c0;
	}

IL_02a9:
	{
		int32_t L_65 = (int32_t)(__this->___U3CcounterU3E__2_2);
		__this->___U3CcounterU3E__2_2 = ((int32_t)((int32_t)L_65+(int32_t)1));
	}

IL_02b7:
	{
		__this->___U24PC_15 = (-1);
	}

IL_02be:
	{
		return 0;
	}

IL_02c0:
	{
		return 1;
	}
	// Dead block : IL_02c2: ldloc.s V_4
}
// System.Void System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::Dispose()
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateGroupByIteratorU3Ec__Iterator6_3_Dispose_m40381_gshared (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * __this, const MethodInfo* method)
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
		int32_t L_0 = (int32_t)(__this->___U24PC_15);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_15 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003f;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0029;
		}
		if (L_1 == 3)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_003f;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Enumerator_t7264  L_2 = (Enumerator_t7264 )(__this->___U3CU24s_55U3E__9_13);
		Enumerator_t7264  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), &L_3);
		NullCheck((Object_t *)L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_4);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateGroupByIteratorU3Ec__Iterator6_3_Reset_m40382_gshared (U3CCreateGroupByIteratorU3Ec__Iterator6_3_t7263 * __this, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif



// System.Void System.Linq.Grouping`2<System.Object,System.Object>::.ctor(K,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void Grouping_2__ctor_m40486_gshared (Grouping_2_t7270 * __this, Object_t * ___key, Object_t* ___group, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___group;
		__this->___group_1 = L_0;
		Object_t * L_1 = ___key;
		__this->___key_0 = L_1;
		return;
	}
}
// System.Collections.IEnumerator System.Linq.Grouping`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Grouping_2_System_Collections_IEnumerable_GetEnumerator_m40487_gshared (Grouping_2_t7270 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___group_1);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), (Object_t*)L_0);
		return L_1;
	}
}
// K System.Linq.Grouping`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * Grouping_2_get_Key_m40488_gshared (Grouping_2_t7270 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Linq.Grouping`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* Grouping_2_GetEnumerator_m40489_gshared (Grouping_2_t7270 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___group_1);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), (Object_t*)L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task/<>c__DisplayClass19`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClass19`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_6MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_58.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_58MethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4MethodDeclarations.h"
struct Enumerable_t718;
struct IEnumerable_1_t729;
struct IEnumerable_1_t7275;
struct Func_2_t2042;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Threading.Tasks.Task`1<System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Threading.Tasks.Task`1<System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisTask_1_t808_TisObject_t_m75784(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t2042 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m8985_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void System.Threading.Tasks.Task/<>c__DisplayClass19`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass19_1__ctor_m40567_gshared (U3CU3Ec__DisplayClass19_1_t7276 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T[] System.Threading.Tasks.Task/<>c__DisplayClass19`1<System.Object>::<WhenAll>b__17(System.Threading.Tasks.Task)
extern "C" ObjectU5BU5D_t21* U3CU3Ec__DisplayClass19_1_U3CWhenAllU3Eb__17_m40568_gshared (U3CU3Ec__DisplayClass19_1_t7276 * __this, Task_t344 * ____, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___tasks_0);
		Func_2_t2042 * L_1 = ((U3CU3Ec__DisplayClass19_1_t7276_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1b_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1) };
		Func_2_t2042 * L_3 = (Func_2_t2042 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Func_2_t2042 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((U3CU3Ec__DisplayClass19_1_t7276_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1b_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t2042 * L_4 = ((U3CU3Ec__DisplayClass19_1_t7276_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1b_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t2042 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t2042 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		ObjectU5BU5D_t21* L_6 = (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_6;
	}
}
// T System.Threading.Tasks.Task/<>c__DisplayClass19`1<System.Object>::<WhenAll>b__18(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * U3CU3Ec__DisplayClass19_1_U3CWhenAllU3Eb__18_m40569_gshared (Object_t * __this /* static, unused */, Task_1_t808 * ___t, const MethodInfo* method)
{
	{
		Task_1_t808 * L_0 = ___t;
		NullCheck((Task_1_t808 *)L_0);
		Object_t * L_1 = (( Object_t * (*) (Task_1_t808 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t808 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
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
#include "mscorlib_System_Collections_Generic_List_1_gen_82.h"
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_gen_82MethodDeclarations.h"


// System.Void Parse.ParseObject/<>c__DisplayClass89`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass89_1__ctor_m40589_gshared (U3CU3Ec__DisplayClass89_1_t7282 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseObject/<>c__DisplayClass89`1<System.Object>::<EnqueueForAll>b__83(System.Threading.Tasks.Task)
extern "C" Task_1_t808 * U3CU3Ec__DisplayClass89_1_U3CEnqueueForAllU3Eb__83_m40590_gshared (U3CU3Ec__DisplayClass89_1_t7282 * __this, Task_t344 * ___task, const MethodInfo* method)
{
	{
		List_1_t2073 * L_0 = (List_1_t2073 *)(__this->___childTasks_2);
		Task_t344 * L_1 = ___task;
		NullCheck((List_1_t2073 *)L_0);
		VirtActionInvoker1< Task_t344 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(!0) */, (List_1_t2073 *)L_0, (Task_t344 *)L_1);
		Task_1_t808 * L_2 = (Task_1_t808 *)(__this->___fullTask_1);
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

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_2.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_2MethodDeclarations.h"


// System.Void Parse.ParseObject/<>c__DisplayClass86`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass86_1__ctor_m40591_gshared (U3CU3Ec__DisplayClass86_1_t7281 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.ParseObject/<>c__DisplayClass86`1<System.Object>::<EnqueueForAll>b__84(System.Threading.Tasks.Task)
extern const MethodInfo* TaskCompletionSource_1_SetResult_m9324_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass86_1_U3CEnqueueForAllU3Eb__84_m40592_gshared (U3CU3Ec__DisplayClass86_1_t7281 * __this, Task_t344 * ___task, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskCompletionSource_1_SetResult_m9324_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485023);
		s_Il2CppMethodIntialized = true;
	}
	{
		TaskCompletionSource_1_t1912 * L_0 = (TaskCompletionSource_1_t1912 *)(__this->___readyToStart_0);
		NullCheck((TaskCompletionSource_1_t1912 *)L_0);
		TaskCompletionSource_1_SetResult_m9324((TaskCompletionSource_1_t1912 *)L_0, (Object_t *)NULL, /*hidden argument*/TaskCompletionSource_1_SetResult_m9324_MethodInfo_var);
		return;
	}
}
// Parse.ParseObject/<>c__DisplayClass47`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass47_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseObject/<>c__DisplayClass47`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass47_1_genMethodDeclarations.h"



// System.Void Parse.ParseObject/<>c__DisplayClass47`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass47_1__ctor_m40597_gshared (U3CU3Ec__DisplayClass47_1_t7284 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseObject/<>c__DisplayClass47`1<System.Object>::<FetchAllIfNeededAsync>b__46(System.Threading.Tasks.Task)
extern TypeInfo* ParseObject_t596_il2cpp_TypeInfo_var;
extern "C" Task_1_t6503 * U3CU3Ec__DisplayClass47_1_U3CFetchAllIfNeededAsyncU3Eb__46_m40598_gshared (U3CU3Ec__DisplayClass47_1_t7284 * __this, Task_t344 * ___toAwait, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseObject_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1158);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___objects_0);
		Task_t344 * L_1 = ___toAwait;
		CancellationToken_t1753  L_2 = (CancellationToken_t1753 )(__this->___cancellationToken_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseObject_t596_il2cpp_TypeInfo_var);
		Task_1_t6503 * L_3 = (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Object_t*, bool, Task_t344 *, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t*)L_0, (bool)0, (Task_t344 *)L_1, (CancellationToken_t1753 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_3;
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
extern "C" void Nullable_1__ctor_m9182_gshared (Nullable_1_t1870 * __this, DateTime_t1953  ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		DateTime_t1953  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m9183_gshared (Nullable_1_t1870 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.DateTime>::get_Value()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" DateTime_t1953  Nullable_1_get_Value_m9236_gshared (Nullable_1_t1870 * __this, const MethodInfo* method)
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
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4659, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		DateTime_t1953  L_2 = (DateTime_t1953 )(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m40642_gshared (Nullable_1_t1870 * __this, Object_t * ___other, const MethodInfo* method)
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
		void* L_4 = alloca(sizeof(Nullable_1_t1870 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t1870 *, Nullable_1_t1870 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t1870 *)__this, (Nullable_1_t1870 )((*(Nullable_1_t1870 *)((Nullable_1_t1870 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m40643_gshared (Nullable_1_t1870 * __this, Nullable_1_t1870  ___other, const MethodInfo* method)
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
		DateTime_t1953 * L_3 = (DateTime_t1953 *)&((&___other)->___value_0);
		DateTime_t1953  L_4 = (DateTime_t1953 )(__this->___value_0);
		DateTime_t1953  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m40644_gshared (Nullable_1_t1870 * __this, const MethodInfo* method)
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
		DateTime_t1953 * L_1 = (DateTime_t1953 *)&(__this->___value_0);
		NullCheck((ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern TypeInfo* DateTime_t1953_il2cpp_TypeInfo_var;
extern "C" DateTime_t1953  Nullable_1_GetValueOrDefault_m40645_gshared (Nullable_1_t1870 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3725);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t1953  V_0 = {0};
	DateTime_t1953  G_B3_0 = {0};
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		DateTime_t1953  L_1 = (DateTime_t1953 )(__this->___value_0);
		G_B3_0 = L_1;
		goto IL_0019;
	}

IL_0010:
	{
		Initobj (DateTime_t1953_il2cpp_TypeInfo_var, (&V_0));
		DateTime_t1953  L_2 = V_0;
		G_B3_0 = L_2;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.String System.Nullable`1<System.DateTime>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m40646_gshared (Nullable_1_t1870 * __this, const MethodInfo* method)
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
		DateTime_t1953 * L_1 = (DateTime_t1953 *)&(__this->___value_0);
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"


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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_96.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_96MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
extern "C" KeyValuePair_2_t7288  Array_InternalArray__get_Item_TisKeyValuePair_2_t7288_m74294_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t7288_m74294(__this, p0, method) (( KeyValuePair_2_t7288  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t7288_m74294_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m40653_gshared (InternalEnumerator_1_t7289 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m40654_gshared (InternalEnumerator_1_t7289 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m40655_gshared (InternalEnumerator_1_t7289 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t7288  L_0 = (( KeyValuePair_2_t7288  (*) (InternalEnumerator_1_t7289 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t7289 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t7288  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m40656_gshared (InternalEnumerator_1_t7289 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m40657_gshared (InternalEnumerator_1_t7289 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t7288  InternalEnumerator_1_get_Current_m40658_gshared (InternalEnumerator_1_t7289 * __this, const MethodInfo* method)
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
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4622, /*hidden argument*/NULL);
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
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4623, /*hidden argument*/NULL);
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
		KeyValuePair_2_t7288  L_8 = (( KeyValuePair_2_t7288  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43MethodDeclarations.h"



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m40659_gshared (KeyValuePair_2_t7288 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t7288 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t7288 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t7288 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t7288 *)__this, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m40660_gshared (KeyValuePair_2_t7288 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m40661_gshared (KeyValuePair_2_t7288 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Value()
extern "C" uint8_t KeyValuePair_2_get_Value_m40662_gshared (KeyValuePair_2_t7288 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m40663_gshared (KeyValuePair_2_t7288 * __this, uint8_t ___value, const MethodInfo* method)
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
extern "C" String_t* KeyValuePair_2_ToString_m40664_gshared (KeyValuePair_2_t7288 * __this, const MethodInfo* method)
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
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1016);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1016;
		StringU5BU5D_t20* L_1 = (StringU5BU5D_t20*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t7288 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t7288 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t7288 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t7288 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral259);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral259;
		StringU5BU5D_t20* L_8 = (StringU5BU5D_t20*)L_7;
		uint8_t L_9 = (( uint8_t (*) (KeyValuePair_2_t7288 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t7288 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		uint8_t L_12 = (( uint8_t (*) (KeyValuePair_2_t7288 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t7288 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral565);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral565;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3337(NULL /*static, unused*/, (StringU5BU5D_t20*)L_15, /*hidden argument*/NULL);
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_59.h"
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_6.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_59MethodDeclarations.h"
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"


// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Byte>::get_ThreadLocalData()
extern TypeInfo* WeakReference_t2793_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t10360_il2cpp_TypeInfo_var;
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m40666_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t2793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4656);
		ICollection_1_t10360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13985);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t7292_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		Dictionary_2_t7296 * L_1 = (Dictionary_2_t7296 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Dictionary_2_t7296 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t7292_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1 = L_1;
		Object_t* L_2 = ((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_3 = (Object_t*)L_2;
		V_0 = (Object_t*)L_3;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_4 = ((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_5 = ((ThreadLocal_1_t7292_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		WeakReference_t2793 * L_6 = (WeakReference_t2793 *)il2cpp_codegen_object_new (WeakReference_t2793_il2cpp_TypeInfo_var);
		WeakReference__ctor_m15369(L_6, (Object_t *)L_5, /*hidden argument*/NULL);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker1< WeakReference_t2793 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.WeakReference>::Add(!0) */, ICollection_1_t10360_il2cpp_TypeInfo_var, (Object_t*)L_4, (WeakReference_t2793 *)L_6);
		IL2CPP_LEAVE(0x3A, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_t* L_7 = V_0;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_8 = ((ThreadLocal_1_t7292_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		return L_8;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.ctor()
extern "C" void ThreadLocal_1__ctor_m40668_gshared (ThreadLocal_1_t7292 * __this, const MethodInfo* method)
{
	ThreadLocal_1_t7292 * G_B2_0 = {0};
	ThreadLocal_1_t7292 * G_B1_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_1_t6492 * L_0 = ((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
		G_B1_0 = ((ThreadLocal_1_t7292 *)(__this));
		if (L_0)
		{
			G_B2_0 = ((ThreadLocal_1_t7292 *)(__this));
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Func_1_t6492 * L_2 = (Func_1_t6492 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Func_1_t6492 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6 = L_2;
		G_B2_0 = ((ThreadLocal_1_t7292 *)(G_B1_0));
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_1_t6492 * L_3 = ((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
		NullCheck((ThreadLocal_1_t7292 *)G_B2_0);
		(( void (*) (ThreadLocal_1_t7292 *, Func_1_t6492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ThreadLocal_1_t7292 *)G_B2_0, (Func_1_t6492 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m40669_gshared (ThreadLocal_1_t7292 * __this, Func_1_t6492 * ___valueFactory, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Func_1_t6492 * L_0 = ___valueFactory;
		__this->___valueFactory_5 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = Interlocked_Increment_m22454(NULL /*static, unused*/, (int64_t*)(&((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0), /*hidden argument*/NULL);
		__this->___id_4 = L_1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Byte>::get_Value()
extern TypeInfo* ThreadLocal_1_t7292_il2cpp_TypeInfo_var;
extern "C" uint8_t ThreadLocal_1_get_Value_m40670_gshared (ThreadLocal_1_t7292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t7292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14209);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		NullCheck((ThreadLocal_1_t7292 *)__this);
		(( void (*) (ThreadLocal_1_t7292 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t7292 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t7292_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_1 = (int64_t)(__this->___id_4);
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, int64_t, uint8_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int64_t)L_1, (uint8_t*)(&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t7292_il2cpp_TypeInfo_var);
		Object_t* L_4 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_5 = (int64_t)(__this->___id_4);
		Func_1_t6492 * L_6 = (Func_1_t6492 *)(__this->___valueFactory_5);
		NullCheck((Func_1_t6492 *)L_6);
		uint8_t L_7 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* !0 System.Func`1<System.Byte>::Invoke() */, (Func_1_t6492 *)L_6);
		uint8_t L_8 = (uint8_t)L_7;
		V_1 = (uint8_t)L_8;
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< int64_t, uint8_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_4, (int64_t)L_5, (uint8_t)L_8);
		uint8_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::set_Value(T)
extern TypeInfo* ThreadLocal_1_t7292_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_set_Value_m40671_gshared (ThreadLocal_1_t7292 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t7292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14209);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ThreadLocal_1_t7292 *)__this);
		(( void (*) (ThreadLocal_1_t7292 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t7292 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t7292_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_1 = (int64_t)(__this->___id_4);
		uint8_t L_2 = ___value;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int64_t, uint8_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int64_t)L_1, (uint8_t)L_2);
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m40673_gshared (ThreadLocal_1_t7292 * __this, const MethodInfo* method)
{
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
			bool L_0 = (bool)(__this->___disposed_3);
			if (L_0)
			{
				goto IL_000e;
			}
		}

IL_0008:
		{
			NullCheck((ThreadLocal_1_t7292 *)__this);
			(( void (*) (ThreadLocal_1_t7292 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((ThreadLocal_1_t7292 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		}

IL_000e:
		{
			IL2CPP_LEAVE(0x17, FINALLY_0010);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
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
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::CheckDisposed()
extern TypeInfo* ObjectDisposedException_t3310_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_CheckDisposed_m40675_gshared (ThreadLocal_1_t7292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
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
		ObjectDisposedException_t3310 * L_1 = (ObjectDisposedException_t3310 *)il2cpp_codegen_object_new (ObjectDisposedException_t3310_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m10475(L_1, (String_t*)(String_t*) &_stringLiteral1455, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::Dispose()
extern TypeInfo* IList_1_t7133_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t776_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t10360_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_Dispose_m40677_gshared (ThreadLocal_1_t7292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t7133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13969);
		Int64_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		ICollection_1_t10360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13985);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_1 = (Object_t*)L_0;
		V_2 = (Object_t*)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
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
			Object_t* L_2 = ((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_3 = V_0;
			NullCheck((Object_t*)L_2);
			WeakReference_t2793 * L_4 = (WeakReference_t2793 *)InterfaceFuncInvoker1< WeakReference_t2793 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.WeakReference>::get_Item(System.Int32) */, IList_1_t7133_il2cpp_TypeInfo_var, (Object_t*)L_2, (int32_t)L_3);
			NullCheck((WeakReference_t2793 *)L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t2793 *)L_4);
			V_1 = (Object_t*)((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)));
			Object_t* L_6 = V_1;
			if (L_6)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_7 = ((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_8 = V_0;
			NullCheck((Object_t*)L_7);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.WeakReference>::RemoveAt(System.Int32) */, IList_1_t7133_il2cpp_TypeInfo_var, (Object_t*)L_7, (int32_t)L_8);
			int32_t L_9 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_9-(int32_t)1));
			goto IL_004c;
		}

IL_003a:
		{
			Object_t* L_10 = V_1;
			int64_t L_11 = (int64_t)(__this->___id_4);
			int64_t L_12 = L_11;
			Object_t * L_13 = Box(Int64_t776_il2cpp_TypeInfo_var, &L_12);
			NullCheck((Object_t*)L_10);
			InterfaceFuncInvoker1< bool, Object_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), (Object_t*)L_10, (Object_t *)L_13);
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
			Object_t* L_16 = ((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			NullCheck((Object_t*)L_16);
			int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.WeakReference>::get_Count() */, ICollection_1_t10360_il2cpp_TypeInfo_var, (Object_t*)L_16);
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
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		Object_t* L_18 = V_2;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0066:
	{
		__this->___disposed_3 = 1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Byte>::<.ctor>b__0()
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" uint8_t ThreadLocal_1_U3C_ctorU3Eb__0_m40679_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Initobj (Byte_t26_il2cpp_TypeInfo_var, (&V_0));
		uint8_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.cctor()
extern TypeInfo* List_1_t7154_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m38937_MethodInfo_var;
extern "C" void ThreadLocal_1__cctor_m40681_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t7154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13986);
		List_1__ctor_m38937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485579);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0 = (((int64_t)(-1)));
		List_1_t7154 * L_0 = (List_1_t7154 *)il2cpp_codegen_object_new (List_1_t7154_il2cpp_TypeInfo_var);
		List_1__ctor_m38937(L_0, /*hidden argument*/List_1__ctor_m38937_MethodInfo_var);
		((ThreadLocal_1_t7292_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2 = L_0;
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"


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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
