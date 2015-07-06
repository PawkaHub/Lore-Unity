#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t732_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4285);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ExtensionAttribute_t732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t33 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t33 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m114(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m115(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t732 * tmp;
		tmp = (ExtensionAttribute_t732 *)il2cpp_codegen_object_new (ExtensionAttribute_t732_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3439(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2494 * tmp;
		tmp = (InternalsVisibleToAttribute_t2494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m8996(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t4434_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m16142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t4434_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m16143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AssetBundle_t1396_CustomAttributesCacheGenerator_AssetBundle_Contains_m7115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void AssetBundle_t1396_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m16147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void AssetBundle_t1396_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m16148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AssetBundle_t1396_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m16149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_LayerToName_m16151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m3042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_t87_LayerMask_GetMask_m16152_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void RuntimePlatform_t4438_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void RuntimePlatform_t4438_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void RuntimePlatform_t4438_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void RuntimePlatform_t4438_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void RuntimePlatform_t4438_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SystemInfo_t4439_CustomAttributesCacheGenerator_SystemInfo_get_processorCount_m2520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SystemInfo_t4439_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m16153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Coroutine_t879_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m16156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m16158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t4601_il2cpp_TypeInfo_var;
void ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_t474_ScriptableObject_Internal_CreateScriptableObject_m16158_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8454);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4601 * tmp;
		tmp = (WritableAttribute_t4601 *)il2cpp_codegen_object_new (WritableAttribute_t4601_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17359(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m16159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m16160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.ConditionalAttribute
#include "mscorlib_System_Diagnostics_ConditionalAttribute.h"
// System.Diagnostics.ConditionalAttribute
#include "mscorlib_System_Diagnostics_ConditionalAttributeMethodDeclarations.h"
extern TypeInfo* ConditionalAttribute_t4261_il2cpp_TypeInfo_var;
void Profiler_t4442_CustomAttributesCacheGenerator_Profiler_BeginSample_m3255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConditionalAttribute_t4261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7344);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ConditionalAttribute_t4261 * tmp;
		tmp = (ConditionalAttribute_t4261 *)il2cpp_codegen_object_new (ConditionalAttribute_t4261_il2cpp_TypeInfo_var);
		ConditionalAttribute__ctor_m15125(tmp, il2cpp_codegen_string_new_wrapper("ENABLE_PROFILER"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Profiler_t4442_CustomAttributesCacheGenerator_Profiler_BeginSampleOnly_m16161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
extern TypeInfo* ConditionalAttribute_t4261_il2cpp_TypeInfo_var;
void Profiler_t4442_CustomAttributesCacheGenerator_Profiler_EndSample_m3256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		ConditionalAttribute_t4261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7344);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		ConditionalAttribute_t4261 * tmp;
		tmp = (ConditionalAttribute_t4261 *)il2cpp_codegen_object_new (ConditionalAttribute_t4261_il2cpp_TypeInfo_var);
		ConditionalAttribute__ctor_m15125(tmp, il2cpp_codegen_string_new_wrapper("ENABLE_PROFILER"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Cursor_t4444_CustomAttributesCacheGenerator_Cursor_get_visible_m7368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Cursor_t4444_CustomAttributesCacheGenerator_Cursor_set_visible_m7370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Cursor_t4444_CustomAttributesCacheGenerator_Cursor_get_lockState_m7369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Cursor_t4444_CustomAttributesCacheGenerator_Cursor_set_lockState_m7371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m16166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m16167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m16168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m16169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m16170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m16171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m16172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m16173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m16174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m16175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m16176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m16177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m16178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m16179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m16180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m16181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m16182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m16186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GcLeaderboard_t4456_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m16230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GcLeaderboard_t4456_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m16231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GcLeaderboard_t4456_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m16232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GcLeaderboard_t4456_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m16233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RenderSettings_t4457_CustomAttributesCacheGenerator_RenderSettings_set_skybox_m2432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_sharedMesh_m2601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_Internal_Create_m16234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4601_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_t93_Mesh_Internal_Create_m16234_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8454);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4601 * tmp;
		tmp = (WritableAttribute_t4601 *)il2cpp_codegen_object_new (WritableAttribute_t4601_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17359(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertices_m2581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_normals_m2582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_uv_m2583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertexCount_m2719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_boneWeights_m2605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_bindposes_m2607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_bones_m2606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_sharedMesh_m2604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_BakeMesh_m2612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_enabled_m7366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_enabled_m3002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_material_m2416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_material_m3049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sharedMaterial_m2644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_sharedMaterial_m2645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_bounds_m2451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_isVisible_m2687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Graphics_t4459_CustomAttributesCacheGenerator_Graphics_DrawTexture_m16247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GeometryUtility_t4460_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m16250(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GeometryUtility_t4460_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m16251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Screen_t4461_CustomAttributesCacheGenerator_Screen_get_width_m2424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Screen_t4461_CustomAttributesCacheGenerator_Screen_get_height_m2428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Screen_t4461_CustomAttributesCacheGenerator_Screen_get_dpi_m5011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Texture_t731_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m16253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Texture_t731_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m16254(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m16257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4601_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Internal_Create_m16257_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8454);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4601 * tmp;
		tmp = (WritableAttribute_t4601 *)il2cpp_codegen_object_new (WritableAttribute_t4601_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17359(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_SetPixel_m16258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m2543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m16259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_GetPixels32_m16259_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m2544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m16260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m16260_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m16260_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m7346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RenderTexture_t4462_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m16261(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RenderTexture_t4462_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m16262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUITexture_t1228_CustomAttributesCacheGenerator_GUITexture_INTERNAL_set_color_m16265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUITexture_t1228_CustomAttributesCacheGenerator_GUITexture_set_texture_m7347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUILayer_t1442_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m16267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Init_m16270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Cleanup_m16271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Evaluate_m2676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_colorKeys_m2640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_alphaKeys_m2641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_SetKeys_m2642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m16278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m16279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m16280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m16281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_get_color_m16282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_set_color_m16283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_set_contentColor_m16284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_get_changed_m3154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_set_changed_m16285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_get_enabled_m2443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_set_enabled_m2440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m16287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m16290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_DrawTexture_m7416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_t587_GUI_DrawTexture_m7411_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("ScaleMode.StretchToFill"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_t587_GUI_DrawTexture_m7411_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_t587_GUI_DrawTexture_m7411_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_DrawTextureWithTexCoords_m7417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_t587_GUI_DrawTextureWithTexCoords_m7410_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_get_blendMaterial_m16291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_get_blitMaterial_m16292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m16296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_SetNextControlName_m3064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_GetNameOfFocusedControl_m3062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_FocusControl_m3063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m16303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m16312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m16314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoWindow_m16324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DragWindow_m16325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Label_m3043_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Label_m2998_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Button_m3044_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Button_m3389_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_TextField_m3076_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_TextArea_m7094_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Toggle_m3263_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Toggle_m3390_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Toolbar_m3070_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Toolbar_m16332_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_HorizontalSlider_m3266_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginHorizontal_m3074_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginHorizontal_m16334_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginVertical_m3093_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginVertical_m16335_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginScrollView_m3071_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginScrollView_m16337_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Window_m3260_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m16351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m16353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m16354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8456);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4709 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4709 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m17661(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_t4475_GUILayoutUtility_GetRect_m16358_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_t4475_GUILayoutUtility_GetRect_m16360_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m16399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m16403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m16406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m16407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m16408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m16409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m16410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m16411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m16413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m16415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m16419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m16420(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m16421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIClip_t4483_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m16423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIClip_t4483_CustomAttributesCacheGenerator_GUIClip_Pop_m16424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISettings_t4484_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISettings_t4484_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISettings_t4484_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISettings_t4484_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISettings_t4484_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t733_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t733 * tmp;
		tmp = (ExecuteInEditMode_t733 *)il2cpp_codegen_object_new (ExecuteInEditMode_t733_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m3440(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUIContent_t542_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUIContent_t542_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void GUIContent_t542_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_Init_m16485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m16486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m16487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_get_textColor_m16488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m16489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_Init_m16492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_Cleanup_m16493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_left_m5026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_set_left_m16494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_right_m7428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_set_right_m16495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_top_m5027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_set_top_m16496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_bottom_m7429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_set_bottom_m16497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m16499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m16501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Init_m16506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m16507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m16508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_name_m16509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_name_m16510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m16511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m16513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m16514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m16515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_alignment_m7412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m7413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m16516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m16517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m16518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m16519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m16520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m16521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m16522(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fontStyle_m7438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m7439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m16524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Draw_m16527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_t303_GUIStyle_Draw_m16528_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m16530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m16531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m16534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m16535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m16536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m16539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m16542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m16544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m3401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_Init_m16546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_Cleanup_m16548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_get_rawType_m4908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_get_type_m3060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_set_type_m16549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_GetTypeForControl_m16550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m16552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m16553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_get_modifiers_m4905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_set_modifiers_m16554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_get_character_m4906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_set_character_m16555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_get_commandName_m16556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_get_keyCode_m3061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_set_keyCode_m16557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m16558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_Use_m7095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Event_t662_CustomAttributesCacheGenerator_Event_PopEvent_m4909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t739_il2cpp_TypeInfo_var;
void EventModifiers_t4491_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t739 * tmp;
		tmp = (FlagsAttribute_t739 *)il2cpp_codegen_object_new (FlagsAttribute_t739_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3446(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m16564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireSphere_m16565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawSphere_m16566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireCube_m16567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m16568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m16569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void Vector2_t97_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_Slerp_m16575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_RotateTowards_m16576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void Color_t121_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t4595_il2cpp_TypeInfo_var;
void Color32_t89_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t4595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t4595 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t4595 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t4595_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m17351(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m16588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_t69_Quaternion_LookRotation_m2950_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_LookRotation_m3123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_LookRotation_m16589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Slerp_m16590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Lerp_m16591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_UnclampedSlerp_m16593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m16594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m16597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m16599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m16612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m16614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m16616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m16619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m16630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m16633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m16634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m16647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m16649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m16652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m16656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void Vector4_t961_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Mathf_t589_CustomAttributesCacheGenerator_Mathf_SmoothDamp_m2468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Mathf_t589_CustomAttributesCacheGenerator_Mathf_t589_Mathf_SmoothDamp_m4959_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Mathf_t589_CustomAttributesCacheGenerator_Mathf_t589_Mathf_SmoothDamp_m4959_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Mathf_t589_CustomAttributesCacheGenerator_Mathf_SmoothDampAngle_m3121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Mathf_t589_CustomAttributesCacheGenerator_Mathf_t589_Mathf_SmoothDampAngle_m16684_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Mathf_t589_CustomAttributesCacheGenerator_Mathf_t589_Mathf_SmoothDampAngle_m16684_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Mathf_t589_CustomAttributesCacheGenerator_Mathf_PerlinNoise_m2701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t739_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t4494_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t739 * tmp;
		tmp = (FlagsAttribute_t739 *)il2cpp_codegen_object_new (FlagsAttribute_t739_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3446(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m16690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m16691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m16692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m16693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m16694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m16695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m16696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m16697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m16698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m16699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m16700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void Resources_t4498_CustomAttributesCacheGenerator_Resources_FindObjectsOfTypeAll_m3364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void Resources_t4498_CustomAttributesCacheGenerator_Resources_Load_m3234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextAsset_t569_CustomAttributesCacheGenerator_TextAsset_get_text_m2756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t4499_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Shader_t594_CustomAttributesCacheGenerator_Shader_Find_m2530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Shader_t594_CustomAttributesCacheGenerator_Shader_PropertyToID_m16708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m16711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_GetColor_m16713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_GetTexture_m16714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureOffset_m16715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_SetFloat_m16717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_HasProperty_m16718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m16719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4601_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithShader_m16719_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8454);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4601 * tmp;
		tmp = (WritableAttribute_t4601 *)il2cpp_codegen_object_new (WritableAttribute_t4601_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17359(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m16720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4601_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithMaterial_m16720_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8454);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4601 * tmp;
		tmp = (WritableAttribute_t4601 *)il2cpp_codegen_object_new (WritableAttribute_t4601_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17359(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t4500_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t4500_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m16723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t4500_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m16726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t4500_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m16729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Sprite_t573_CustomAttributesCacheGenerator_Sprite_Create_m2938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Sprite_t573_CustomAttributesCacheGenerator_Sprite_INTERNAL_CALL_Create_m16739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_rect_m4845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_texture_m4838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_border_m4839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void DataUtility_t4502_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void DataUtility_t4502_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void DataUtility_t4502_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void DataUtility_t4502_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m16740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void WWW_t1224_CustomAttributesCacheGenerator_WWW_DestroyWWW_m16744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void WWW_t1224_CustomAttributesCacheGenerator_WWW_InitWWW_m16745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void WWW_t1224_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m16747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void WWW_t1224_CustomAttributesCacheGenerator_WWW_get_bytes_m16750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void WWW_t1224_CustomAttributesCacheGenerator_WWW_get_error_m8887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void WWW_t1224_CustomAttributesCacheGenerator_WWW_GetAudioClipInternal_m16754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void WWW_t1224_CustomAttributesCacheGenerator_WWW_get_isDone_m7341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void WWW_t1224_CustomAttributesCacheGenerator_WWW_get_progress_m8891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void WWWForm_t4504_CustomAttributesCacheGenerator_WWWForm_AddField_m16758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void WWWForm_t4504_CustomAttributesCacheGenerator_WWWForm_t4504_WWWForm_AddField_m16759_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void WWWTranscoder_t4505_CustomAttributesCacheGenerator_WWWTranscoder_t4505_WWWTranscoder_QPEncode_m16766_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void WWWTranscoder_t4505_CustomAttributesCacheGenerator_WWWTranscoder_t4505_WWWTranscoder_SevenBitClean_m16769_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void CacheIndex_t4506_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void UnityString_t4507_CustomAttributesCacheGenerator_UnityString_t4507_UnityString_Format_m16771_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AsyncOperation_t1270_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m16773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AsyncOperation_t1270_CustomAttributesCacheGenerator_AsyncOperation_get_isDone_m7387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_Quit_m3361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_loadedLevel_m3095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m16782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_isLoadingLevel_m3310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_isPlaying_m2677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_isEditor_m3435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m8932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_platform_m4886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_set_runInBackground_m3053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_HasProLicense_m7385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m8930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_OpenURL_m3082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_get_systemLanguage_m7123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m16784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m3386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t4710_il2cpp_TypeInfo_var;
void Application_t1853_CustomAttributesCacheGenerator_Application_t1853____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t4710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8458);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t4710 * tmp;
		tmp = (SecurityCriticalAttribute_t4710 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t4710_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m17665(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Behaviour_t1007_CustomAttributesCacheGenerator_Behaviour_get_enabled_m2552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Behaviour_t1007_CustomAttributesCacheGenerator_Behaviour_set_enabled_m2780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Behaviour_t1007_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m7290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m7291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_depth_m4685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_eventMask_m16791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m16792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_targetTexture_m16794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_worldToCameraMatrix_m16795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m16797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_clearFlags_m16799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m16800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m16801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m16802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportPointToRay_m16803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m16804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_main_m2548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m16805(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_GetAllCameras_m16806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m16811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m16813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var;
void CameraCallback_t4508_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2527 * tmp;
		tmp = (EditorBrowsableAttribute_t2527 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9290(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Debug_t4509_CustomAttributesCacheGenerator_Debug_DrawLine_m3338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Debug_t4509_CustomAttributesCacheGenerator_Debug_DrawLine_m3117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Debug_t4509_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m16814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Debug_t4509_CustomAttributesCacheGenerator_Debug_Internal_Log_m16815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4601_il2cpp_TypeInfo_var;
void Debug_t4509_CustomAttributesCacheGenerator_Debug_t4509_Debug_Internal_Log_m16815_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8454);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4601 * tmp;
		tmp = (WritableAttribute_t4601 *)il2cpp_codegen_object_new (WritableAttribute_t4601_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17359(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Debug_t4509_CustomAttributesCacheGenerator_Debug_Internal_LogException_m16816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4601_il2cpp_TypeInfo_var;
void Debug_t4509_CustomAttributesCacheGenerator_Debug_t4509_Debug_Internal_LogException_m16816_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8454);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4601 * tmp;
		tmp = (WritableAttribute_t4601 *)il2cpp_codegen_object_new (WritableAttribute_t4601_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17359(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Display_t4512_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m16841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Display_t4512_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m16842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Display_t4512_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m16843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Display_t4512_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m16844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Display_t4512_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m16845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Display_t4512_CustomAttributesCacheGenerator_Display_SetParamsImpl_m16846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Display_t4512_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m16847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Display_t4512_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m16848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Internal_CancelInvokeAll_m16849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_InvokeRepeating_m3372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m16850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m16852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m16853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopAllCoroutines_m2853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetKeyInt_m16855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetKeyUpInt_m16856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m16857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetAxis_m2466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetAxisRaw_m3038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetButton_m3120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetButtonDown_m2933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetButtonUp_m2976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetMouseButton_m2465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_get_mousePosition_m2964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_get_mousePresent_m4755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_get_acceleration_m3387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_GetTouch_m3345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_get_touchCount_m2977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_get_compositionString_m4890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Input_t585_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m16858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t739_il2cpp_TypeInfo_var;
void HideFlags_t4515_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t739 * tmp;
		tmp = (FlagsAttribute_t739 *)il2cpp_codegen_object_new (FlagsAttribute_t739_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3446(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m16860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m16862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_Destroy_m7289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_t584_Object_Destroy_m7289_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_Destroy_m2754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_DestroyImmediate_m16863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_t584_Object_DestroyImmediate_m16863_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m3236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_get_name_m2484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_set_name_m2536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_set_hideFlags_m3278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_DestroyObject_m16864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_t584_Object_DestroyObject_m16864_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_DestroyObject_m2485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_ToString_m3479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_Instantiate_m2944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_Instantiate_m7311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void Object_t584_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_get_transform_m2421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_get_gameObject_m2452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m5033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m16870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m17669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8456);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4709 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4709 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m17661(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m7317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m7125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m16871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m2821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_SendMessage_m2821_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_SendMessage_m2821_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m3354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m2841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_BroadcastMessage_m7126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_BroadcastMessage_m7126_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_BroadcastMessage_m7126_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Light_t720_CustomAttributesCacheGenerator_Light_INTERNAL_get_color_m16872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Light_t720_CustomAttributesCacheGenerator_Light_INTERNAL_set_color_m16873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject__ctor_m2537_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m2538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m16874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m17675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8456);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4709 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4709 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m17661(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m7124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m16875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_transform_m2462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_layer_m2694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_layer_m4922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SetActive_m2429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m2433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m2549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_tag_m16876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_tag_m3131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m7389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m3102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m2975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m2975_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m2975_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m3090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_BroadcastMessage_m2974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m2974_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m2974_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m16877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_AddComponent_m7296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8453);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4653 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4653 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4653_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17560(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m16878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4601_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_Internal_CreateGameObject_m16878_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8454);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4601 * tmp;
		tmp = (WritableAttribute_t4601 *)il2cpp_codegen_object_new (WritableAttribute_t4601_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17359(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Find_m3371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m16883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m16884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m16885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m16886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m16887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m16888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m16889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m16890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m16891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m16892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_parentInternal_m16893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_set_parentInternal_m16894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_SetParent_m2835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m16895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m16896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m16897_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_Rotate_m3024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m16898_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m16899_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m16900_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_LookAt_m16901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m16902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformDirection_m16903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m16904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m16905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_root_m3159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_childCount_m2456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_Find_m7309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_GetChild_m3144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_get_time_m2414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_get_timeSinceLevelLoad_m2546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_get_deltaTime_m2446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_get_timeScale_m2690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_set_timeScale_m2731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_get_frameCount_m2550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Time_t4517_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m2788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Random_t4518_CustomAttributesCacheGenerator_Random_Range_m2447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Random_t4518_CustomAttributesCacheGenerator_Random_RandomRangeInt_m16907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Random_t4518_CustomAttributesCacheGenerator_Random_get_value_m3381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Random_t4518_CustomAttributesCacheGenerator_Random_get_insideUnitSphere_m3134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m16910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_t4520_PlayerPrefs_GetString_m3259_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_DeleteKey_m2740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_Save_m8882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isStopped_m2680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isPaused_m2679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_startSize_m2718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_simulationSpace_m2658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_simulationSpace_m2693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_SetParticles_m2653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_GetParticles_m2651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Play_m16911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Stop_m16912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Clear_m16913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Play_m2681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Play_m16914_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Stop_m2678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Stop_m16915_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Clear_m2657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Clear_m16916_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_INTERNAL_CALL_Emit_m16917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void ParticleSystemRenderer_t190_CustomAttributesCacheGenerator_ParticleSystemRenderer_get_renderMode_m2691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m16937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_Raycast_m2949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Raycast_m2585_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Raycast_m2585_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_Raycast_m3160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Raycast_m2562_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Raycast_m2562_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_RaycastAll_m3007_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_RaycastAll_m3007_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_RaycastAll_m16938_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_RaycastAll_m16938_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m16939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Linecast_m7442_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_velocity_m16940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_velocity_m16941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_angularVelocity_m16942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_angularVelocity_m16943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_set_isKinematic_m3046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForce_m3352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m16944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForceAtPosition_m2709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForceAtPosition_m16945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_get_enabled_m7367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_set_enabled_m3001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m16946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_INTERNAL_get_bounds_m16947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void BoxCollider_t1449_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_center_m16948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void BoxCollider_t1449_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_size_m16949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SphereCollider_t1450_CustomAttributesCacheGenerator_SphereCollider_INTERNAL_get_center_m16950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void SphereCollider_t1450_CustomAttributesCacheGenerator_SphereCollider_get_radius_m7365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CapsuleCollider_t1448_CustomAttributesCacheGenerator_CapsuleCollider_get_height_m7361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_INTERNAL_CALL_Move_m16951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_get_height_m7360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m16954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_Raycast_m3006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_t597_Physics2D_Raycast_m2569_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_t597_Physics2D_Raycast_m2569_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_t597_Physics2D_Raycast_m2569_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_t597_Physics2D_Raycast_m2569_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m3005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m16955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m16956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m16957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_get_angularVelocity_m3316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_set_angularVelocity_m3313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_set_isKinematic_m3047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m3037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m16958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_AddForceAtPosition_m2712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m16959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Collider2D_t195_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m16960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_INTERNAL_CALL_SetDestination_m16961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_get_remainingDistance_m2959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioClip_t261_CustomAttributesCacheGenerator_AudioClip_get_length_m7331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_volume_m7315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_volume_m7316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_clip_m7334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_clip_m3156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m16977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_Play_m16977_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m3157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Stop_m7335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m16978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m7333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m16979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_PlayOneShot_m16979_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void AnimationEvent_t4538_CustomAttributesCacheGenerator_AnimationEvent_t4538____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationClip_t296_CustomAttributesCacheGenerator_AnimationClip_get_length_m3027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_t98_AnimationCurve__ctor_m2596_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m17005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Evaluate_m2588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_SetKeys_m17007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_GetKeys_m17008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Init_m17009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_get_clip_m7349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m17014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m17014_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("0.3F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m17014_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("PlayMode.StopSameLayer"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m2960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m17015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_AddClip_m17015_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m17016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetState_m17018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateAtIndex_m17019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateCount_m17020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_set_wrapMode_m3125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_set_time_m3126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_set_speed_m3028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_get_length_m7310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_set_layer_m3022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m17021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_t660_AnimationState_AddMixingTransform_m17021_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m3023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_get_name_m7359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t574_CustomAttributesCacheGenerator_AnimatorStateInfo_t574____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_set_applyRootMotion_m3331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_get_layerCount_m3163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetLayerWeight_m3336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetLayerWeight_m3164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetCurrentAnimatorStateInfo_m2789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_IsInTransition_m3423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m7314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m7397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17037_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17037_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m17038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17038_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17038_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m7313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4651 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4651 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4651_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17559(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17039_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17039_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m17040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17040_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4650_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17040_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8450);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4650 * tmp;
		tmp = (DefaultValueAttribute_t4650 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4650_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17555(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_set_runtimeAnimatorController_m7312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_StringToHash_m3427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatString_m17041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatID_m17042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatString_m17043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatID_m17044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetBoolString_m17045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetBoolID_m17046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetBoolString_m17047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetBoolID_m17048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetIntegerString_m17049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetIntegerString_m17050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetTriggerString_m17051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m17052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatStringDamp_m17053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TerrainData_t590_CustomAttributesCacheGenerator_TerrainData_INTERNAL_get_size_m17058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_terrainData_m2474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_INTERNAL_CALL_SampleHeight_m17059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_activeTerrain_m2479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_text_m3369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_font_m3366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_anchor_m3367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_characterSize_m3368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void CharacterInfo_t4547_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void CharacterInfo_t4547_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void CharacterInfo_t4547_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void CharacterInfo_t4547_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t740 * tmp;
		tmp = (ObsoleteAttribute_t740 *)il2cpp_codegen_object_new (ObsoleteAttribute_t740_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Font_t529_CustomAttributesCacheGenerator_Font_get_material_m3365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Font_t529_CustomAttributesCacheGenerator_Font_HasCharacter_m4907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Font_t529_CustomAttributesCacheGenerator_Font_get_dynamic_m4992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Font_t529_CustomAttributesCacheGenerator_Font_get_fontSize_m4994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t4548_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2527 * tmp;
		tmp = (EditorBrowsableAttribute_t2527 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9290(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_Init_m17083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m17084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m17088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m17089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m17090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m17091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m17092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m17093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m17094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m17095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_worldCamera_m2779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m17107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_set_blocksRaycasts_m3411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m17110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m17111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m17112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransformUtility_t725_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransformUtility_t725_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4594_il2cpp_TypeInfo_var;
void RectTransformUtility_t725_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8452);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4594 * tmp;
		tmp = (WrapperlessIcall_t4594 *)il2cpp_codegen_object_new (WrapperlessIcall_t4594_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17350(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4552_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4552_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4552_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4552_CustomAttributesCacheGenerator_Request_get_sourceId_m17120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4552_CustomAttributesCacheGenerator_Request_get_appId_m17121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4552_CustomAttributesCacheGenerator_Request_get_domain_m17122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4554_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4554_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4554_CustomAttributesCacheGenerator_Response_get_success_m17131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4554_CustomAttributesCacheGenerator_Response_set_success_m17132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4554_CustomAttributesCacheGenerator_Response_get_extendedInfo_m17133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4554_CustomAttributesCacheGenerator_Response_set_extendedInfo_m17134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m17139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m17140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m17141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m17142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m17143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m17144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m17145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m17146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m17147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m17150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m17151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m17152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m17153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m17154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m17155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m17156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m17157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m17158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m17159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m17160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m17161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4559_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4559_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4559_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m17165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4559_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m17166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4559_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m17167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4559_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m17168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m17171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m17172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m17173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m17174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m17175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m17176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m17177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m17178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m17179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m17180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m17181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m17182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t4561_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t4561_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m17186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t4561_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m17187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4562_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4562_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4562_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m17190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4562_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m17191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4562_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m17192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4562_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m17193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m17196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m17197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m17198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m17199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m17200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m17201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m17202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m17203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m17206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m17207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m17208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m17209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m17210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m17211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m17215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m17216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_name_m17217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_name_m17218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m17219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m17220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m17221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m17222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m17223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m17224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m17225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m17226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m17227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m17228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m17229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchResponse_t4568_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchResponse_t4568_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m17233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchResponse_t4568_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m17234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t3932_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t4569_il2cpp_TypeInfo_var;
void AppID_t4569_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t3932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6346);
		AppID_t4569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8365);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t3932 * tmp;
		tmp = (DefaultValueAttribute_t3932 *)il2cpp_codegen_object_new (DefaultValueAttribute_t3932_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13163(tmp, Box(AppID_t4569_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t3932_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t4570_il2cpp_TypeInfo_var;
void SourceID_t4570_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t3932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6346);
		SourceID_t4570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8364);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t3932 * tmp;
		tmp = (DefaultValueAttribute_t3932 *)il2cpp_codegen_object_new (DefaultValueAttribute_t3932_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13163(tmp, Box(SourceID_t4570_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t3932_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4571_il2cpp_TypeInfo_var;
void NetworkID_t4571_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t3932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6346);
		NetworkID_t4571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8366);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t3932 * tmp;
		tmp = (DefaultValueAttribute_t3932 *)il2cpp_codegen_object_new (DefaultValueAttribute_t3932_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13163(tmp, Box(NetworkID_t4571_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t3932_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t4572_il2cpp_TypeInfo_var;
void NodeID_t4572_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t3932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6346);
		NodeID_t4572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8367);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t3932 * tmp;
		tmp = (DefaultValueAttribute_t3932 *)il2cpp_codegen_object_new (DefaultValueAttribute_t3932_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13163(tmp, Box(NodeID_t4572_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var;
void NetworkMatch_t4576_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m17686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t736 * tmp;
		tmp = (DebuggerHiddenAttribute_t736 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3443(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m17692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t736 * tmp;
		tmp = (DebuggerHiddenAttribute_t736 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3443(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m17693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t736 * tmp;
		tmp = (DebuggerHiddenAttribute_t736 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3443(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m17695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t736 * tmp;
		tmp = (DebuggerHiddenAttribute_t736 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3443(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m17696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t736 * tmp;
		tmp = (DebuggerHiddenAttribute_t736 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t736_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3443(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var;
void JsonArray_t4577_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4289);
		GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2527 * tmp;
		tmp = (EditorBrowsableAttribute_t2527 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9290(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t3958 * tmp;
		tmp = (GeneratedCodeAttribute_t3958 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13063(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void JsonObject_t4578_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4289);
		GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7352);
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2527 * tmp;
		tmp = (EditorBrowsableAttribute_t2527 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9290(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t3958 * tmp;
		tmp = (GeneratedCodeAttribute_t3958 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13063(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var;
void SimpleJson_t4581_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t3958 * tmp;
		tmp = (GeneratedCodeAttribute_t3958 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13063(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var;
void SimpleJson_t4581_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m17279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4714 * tmp;
		tmp = (SuppressMessageAttribute_t4714 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m17697(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m17698(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var;
void SimpleJson_t4581_CustomAttributesCacheGenerator_SimpleJson_NextToken_m17291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4714 * tmp;
		tmp = (SuppressMessageAttribute_t4714 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m17697(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var;
void SimpleJson_t4581_CustomAttributesCacheGenerator_SimpleJson_t4581____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2527 * tmp;
		tmp = (EditorBrowsableAttribute_t2527 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2527_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9290(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t4579_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t3958 * tmp;
		tmp = (GeneratedCodeAttribute_t3958 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13063(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t4579_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m17699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4714 * tmp;
		tmp = (SuppressMessageAttribute_t4714 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m17697(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m17698(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t4580_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t3958 * tmp;
		tmp = (GeneratedCodeAttribute_t3958 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13063(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t4580_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m17308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4714 * tmp;
		tmp = (SuppressMessageAttribute_t4714 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m17697(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m17698(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t4580_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m17309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4714 * tmp;
		tmp = (SuppressMessageAttribute_t4714 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4714_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m17697(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m17698(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var;
void ReflectionUtils_t4593_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t3958 * tmp;
		tmp = (GeneratedCodeAttribute_t3958 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t3958_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13063(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void ReflectionUtils_t4593_CustomAttributesCacheGenerator_ReflectionUtils_t4593_ReflectionUtils_GetConstructorInfo_m17334_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void ReflectionUtils_t4593_CustomAttributesCacheGenerator_ReflectionUtils_t4593_ReflectionUtils_GetContructor_m17339_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void ReflectionUtils_t4593_CustomAttributesCacheGenerator_ReflectionUtils_t4593_ReflectionUtils_GetConstructorByReflection_m17341_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t4715_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1031 * tmp;
		tmp = (DefaultMemberAttribute_t1031 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5142(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void ConstructorDelegate_t4587_CustomAttributesCacheGenerator_ConstructorDelegate_t4587_ConstructorDelegate_Invoke_m17319_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t741_il2cpp_TypeInfo_var;
void ConstructorDelegate_t4587_CustomAttributesCacheGenerator_ConstructorDelegate_t4587_ConstructorDelegate_BeginInvoke_m17320_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t741 * tmp;
		tmp = (ParamArrayAttribute_t741 *)il2cpp_codegen_object_new (ParamArrayAttribute_t741_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3449(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4588_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4589_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4590_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4591_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4592_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t4595_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1025_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void RequireComponent_t737_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void WritableAttribute_t4601_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t4602_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var;
void GUIStateObjects_t4613_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m17374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8456);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4709 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4709 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m17661(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4616_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4616_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4616_CustomAttributesCacheGenerator_Achievement_get_id_m17394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4616_CustomAttributesCacheGenerator_Achievement_set_id_m17395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4616_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m17396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4616_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m17397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void AchievementDescription_t4617_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void AchievementDescription_t4617_CustomAttributesCacheGenerator_AchievementDescription_get_id_m17404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void AchievementDescription_t4617_CustomAttributesCacheGenerator_AchievementDescription_set_id_m17405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4618_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4618_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4618_CustomAttributesCacheGenerator_Score_get_leaderboardID_m17414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4618_CustomAttributesCacheGenerator_Score_set_leaderboardID_m17415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4618_CustomAttributesCacheGenerator_Score_get_value_m17416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4618_CustomAttributesCacheGenerator_Score_set_value_m17417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_get_id_m17425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_set_id_m17426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m17427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m17428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_get_range_m17429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_set_range_m17430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m17431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m17432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void PropertyAttribute_t1247_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void TooltipAttribute_t1028_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void SpaceAttribute_t1026_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void RangeAttribute_t1024_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void MultilineAttribute_t1462_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1029_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1027_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var;
void StackTraceUtility_t4631_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m17471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8456);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4709 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4709 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m17661(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var;
void StackTraceUtility_t4631_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m17474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8456);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4709 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4709 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m17661(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var;
void StackTraceUtility_t4631_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m17476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8456);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4709 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4709 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4709_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m17661(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t4632_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
void ArgumentCache_t4639_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
void ArgumentCache_t4639_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void ArgumentCache_t4639_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
void ArgumentCache_t4639_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
void ArgumentCache_t4639_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void ArgumentCache_t4639_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
void PersistentCall_t4643_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void PersistentCall_t4643_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void PersistentCall_t4643_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
void PersistentCall_t4643_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void PersistentCall_t4643_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void PersistentCallGroup_t4645_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var;
void UnityEventBase_t4648_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t1019 * tmp;
		tmp = (FormerlySerializedAsAttribute_t1019 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t1019_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m5080(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t734_il2cpp_TypeInfo_var;
void UnityEventBase_t4648_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t734 * tmp;
		tmp = (SerializeField_t734 *)il2cpp_codegen_object_new (SerializeField_t734_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3441(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t738_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t4649_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t738 * tmp;
		tmp = (AddComponentMenu_t738 *)il2cpp_codegen_object_new (AddComponentMenu_t738_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m3445(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t4650_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t4651_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t1019_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m9153(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m9152(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t4653_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t2519 * tmp;
		tmp = (AttributeUsageAttribute_t2519 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t2519_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m9151(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[1036] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t4434_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m16142,
	AssetBundleCreateRequest_t4434_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m16143,
	AssetBundle_t1396_CustomAttributesCacheGenerator_AssetBundle_Contains_m7115,
	AssetBundle_t1396_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m16147,
	AssetBundle_t1396_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m16148,
	AssetBundle_t1396_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m16149,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_LayerToName_m16151,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m3042,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_t87_LayerMask_GetMask_m16152_Arg0_ParameterInfo,
	RuntimePlatform_t4438_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t4438_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t4438_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t4438_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t4438_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t4439_CustomAttributesCacheGenerator_SystemInfo_get_processorCount_m2520,
	SystemInfo_t4439_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m16153,
	Coroutine_t879_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m16156,
	ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m16158,
	ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_t474_ScriptableObject_Internal_CreateScriptableObject_m16158_Arg0_ParameterInfo,
	ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m16159,
	ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m16160,
	Profiler_t4442_CustomAttributesCacheGenerator_Profiler_BeginSample_m3255,
	Profiler_t4442_CustomAttributesCacheGenerator_Profiler_BeginSampleOnly_m16161,
	Profiler_t4442_CustomAttributesCacheGenerator_Profiler_EndSample_m3256,
	Cursor_t4444_CustomAttributesCacheGenerator_Cursor_get_visible_m7368,
	Cursor_t4444_CustomAttributesCacheGenerator_Cursor_set_visible_m7370,
	Cursor_t4444_CustomAttributesCacheGenerator_Cursor_get_lockState_m7369,
	Cursor_t4444_CustomAttributesCacheGenerator_Cursor_set_lockState_m7371,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m16166,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m16167,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m16168,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m16169,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m16170,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m16171,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m16172,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m16173,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m16174,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m16175,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m16176,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m16177,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m16178,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m16179,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m16180,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m16181,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m16182,
	GameCenterPlatform_t4454_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m16186,
	GcLeaderboard_t4456_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m16230,
	GcLeaderboard_t4456_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m16231,
	GcLeaderboard_t4456_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m16232,
	GcLeaderboard_t4456_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m16233,
	RenderSettings_t4457_CustomAttributesCacheGenerator_RenderSettings_set_skybox_m2432,
	MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_sharedMesh_m2601,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_Internal_Create_m16234,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_t93_Mesh_Internal_Create_m16234_Arg0_ParameterInfo,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertices_m2581,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_normals_m2582,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_uv_m2583,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertexCount_m2719,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_boneWeights_m2605,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_bindposes_m2607,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_bones_m2606,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_sharedMesh_m2604,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_BakeMesh_m2612,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_enabled_m7366,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_enabled_m3002,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_material_m2416,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_material_m3049,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sharedMaterial_m2644,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_sharedMaterial_m2645,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_bounds_m2451,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_isVisible_m2687,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m4765,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m4766,
	Graphics_t4459_CustomAttributesCacheGenerator_Graphics_DrawTexture_m16247,
	GeometryUtility_t4460_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m16250,
	GeometryUtility_t4460_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m16251,
	Screen_t4461_CustomAttributesCacheGenerator_Screen_get_width_m2424,
	Screen_t4461_CustomAttributesCacheGenerator_Screen_get_height_m2428,
	Screen_t4461_CustomAttributesCacheGenerator_Screen_get_dpi_m5011,
	Texture_t731_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m16253,
	Texture_t731_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m16254,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m16257,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Internal_Create_m16257_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m4798,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_SetPixel_m16258,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m2543,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m16259,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_GetPixels32_m16259_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m2544,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m16260,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m16260_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m16260_Arg1_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m7346,
	RenderTexture_t4462_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m16261,
	RenderTexture_t4462_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m16262,
	GUITexture_t1228_CustomAttributesCacheGenerator_GUITexture_INTERNAL_set_color_m16265,
	GUITexture_t1228_CustomAttributesCacheGenerator_GUITexture_set_texture_m7347,
	GUILayer_t1442_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m16267,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Init_m16270,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Cleanup_m16271,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Evaluate_m2676,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_colorKeys_m2640,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_alphaKeys_m2641,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_SetKeys_m2642,
	GUI_t587_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t587_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t587_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m16278,
	GUI_t587_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m16279,
	GUI_t587_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m16280,
	GUI_t587_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m16281,
	GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_get_color_m16282,
	GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_set_color_m16283,
	GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_set_contentColor_m16284,
	GUI_t587_CustomAttributesCacheGenerator_GUI_get_changed_m3154,
	GUI_t587_CustomAttributesCacheGenerator_GUI_set_changed_m16285,
	GUI_t587_CustomAttributesCacheGenerator_GUI_get_enabled_m2443,
	GUI_t587_CustomAttributesCacheGenerator_GUI_set_enabled_m2440,
	GUI_t587_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m16287,
	GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m16290,
	GUI_t587_CustomAttributesCacheGenerator_GUI_DrawTexture_m7416,
	GUI_t587_CustomAttributesCacheGenerator_GUI_t587_GUI_DrawTexture_m7411_Arg2_ParameterInfo,
	GUI_t587_CustomAttributesCacheGenerator_GUI_t587_GUI_DrawTexture_m7411_Arg3_ParameterInfo,
	GUI_t587_CustomAttributesCacheGenerator_GUI_t587_GUI_DrawTexture_m7411_Arg4_ParameterInfo,
	GUI_t587_CustomAttributesCacheGenerator_GUI_DrawTextureWithTexCoords_m7417,
	GUI_t587_CustomAttributesCacheGenerator_GUI_t587_GUI_DrawTextureWithTexCoords_m7410_Arg3_ParameterInfo,
	GUI_t587_CustomAttributesCacheGenerator_GUI_get_blendMaterial_m16291,
	GUI_t587_CustomAttributesCacheGenerator_GUI_get_blitMaterial_m16292,
	GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m16296,
	GUI_t587_CustomAttributesCacheGenerator_GUI_SetNextControlName_m3064,
	GUI_t587_CustomAttributesCacheGenerator_GUI_GetNameOfFocusedControl_m3062,
	GUI_t587_CustomAttributesCacheGenerator_GUI_FocusControl_m3063,
	GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m16303,
	GUI_t587_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m16312,
	GUI_t587_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m16314,
	GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoWindow_m16324,
	GUI_t587_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DragWindow_m16325,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Label_m3043_Arg1_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Label_m2998_Arg2_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Button_m3044_Arg1_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Button_m3389_Arg1_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_TextField_m3076_Arg1_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_TextArea_m7094_Arg1_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Toggle_m3263_Arg2_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Toggle_m3390_Arg2_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Toolbar_m3070_Arg2_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Toolbar_m16332_Arg3_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_HorizontalSlider_m3266_Arg3_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginHorizontal_m3074_Arg0_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginHorizontal_m16334_Arg2_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginVertical_m3093_Arg0_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginVertical_m16335_Arg2_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginScrollView_m3071_Arg1_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_BeginScrollView_m16337_Arg6_ParameterInfo,
	GUILayout_t4471_CustomAttributesCacheGenerator_GUILayout_t4471_GUILayout_Window_m3260_Arg4_ParameterInfo,
	GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m16351,
	GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m16353,
	GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m16354,
	GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_t4475_GUILayoutUtility_GetRect_m16358_Arg2_ParameterInfo,
	GUILayoutUtility_t4475_CustomAttributesCacheGenerator_GUILayoutUtility_t4475_GUILayoutUtility_GetRect_m16360_Arg3_ParameterInfo,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m16399,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m16403,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m16406,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m16407,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m16408,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m16409,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m16410,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m16411,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m16413,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m16415,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m16419,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m16420,
	GUIUtility_t653_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m16421,
	GUIClip_t4483_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m16423,
	GUIClip_t4483_CustomAttributesCacheGenerator_GUIClip_Pop_m16424,
	GUISettings_t4484_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t4484_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t4484_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t4484_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t4484_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t197_CustomAttributesCacheGenerator,
	GUISkin_t197_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t197_CustomAttributesCacheGenerator_m_box,
	GUISkin_t197_CustomAttributesCacheGenerator_m_button,
	GUISkin_t197_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t197_CustomAttributesCacheGenerator_m_label,
	GUISkin_t197_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t197_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t197_CustomAttributesCacheGenerator_m_window,
	GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t197_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t197_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t197_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t197_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t197_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t542_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t542_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t542_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_Init_m16485,
	GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m16486,
	GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m16487,
	GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_get_textColor_m16488,
	GUIStyleState_t656_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m16489,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_Init_m16492,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_Cleanup_m16493,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_left_m5026,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_set_left_m16494,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_right_m7428,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_set_right_m16495,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_top_m5027,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_set_top_m16496,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_bottom_m7429,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_set_bottom_m16497,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5021,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5022,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m16499,
	RectOffset_t667_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m16501,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Init_m16506,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m16507,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m16508,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_name_m16509,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_name_m16510,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m16511,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m16513,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m16514,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m16515,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_alignment_m7412,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2439,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m7413,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3058,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m16516,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m16517,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m16518,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m16519,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m16520,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m16521,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m16522,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fontStyle_m7438,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m7439,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m16524,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Draw_m16527,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_t303_GUIStyle_Draw_m16528_Arg3_ParameterInfo,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m16530,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m16531,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m16534,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m16535,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m16536,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m16539,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m16542,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m16544,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4939,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m4940,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg1_ParameterInfo,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg2_ParameterInfo,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg3_ParameterInfo,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg4_ParameterInfo,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg5_ParameterInfo,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_t874_TouchScreenKeyboard_Open_m16545_Arg6_ParameterInfo,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m4888,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m4889,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m3401,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m4887,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m4938,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m4899,
	TouchScreenKeyboard_t874_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m4898,
	Event_t662_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t662_CustomAttributesCacheGenerator_Event_Init_m16546,
	Event_t662_CustomAttributesCacheGenerator_Event_Cleanup_m16548,
	Event_t662_CustomAttributesCacheGenerator_Event_get_rawType_m4908,
	Event_t662_CustomAttributesCacheGenerator_Event_get_type_m3060,
	Event_t662_CustomAttributesCacheGenerator_Event_set_type_m16549,
	Event_t662_CustomAttributesCacheGenerator_Event_GetTypeForControl_m16550,
	Event_t662_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m16552,
	Event_t662_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m16553,
	Event_t662_CustomAttributesCacheGenerator_Event_get_modifiers_m4905,
	Event_t662_CustomAttributesCacheGenerator_Event_set_modifiers_m16554,
	Event_t662_CustomAttributesCacheGenerator_Event_get_character_m4906,
	Event_t662_CustomAttributesCacheGenerator_Event_set_character_m16555,
	Event_t662_CustomAttributesCacheGenerator_Event_get_commandName_m16556,
	Event_t662_CustomAttributesCacheGenerator_Event_get_keyCode_m3061,
	Event_t662_CustomAttributesCacheGenerator_Event_set_keyCode_m16557,
	Event_t662_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m16558,
	Event_t662_CustomAttributesCacheGenerator_Event_Use_m7095,
	Event_t662_CustomAttributesCacheGenerator_Event_PopEvent_m4909,
	EventModifiers_t4491_CustomAttributesCacheGenerator,
	Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m16564,
	Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireSphere_m16565,
	Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawSphere_m16566,
	Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireCube_m16567,
	Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m16568,
	Gizmos_t4492_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m16569,
	Vector2_t97_CustomAttributesCacheGenerator,
	Vector3_t53_CustomAttributesCacheGenerator,
	Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_Slerp_m16575,
	Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_RotateTowards_m16576,
	Color_t121_CustomAttributesCacheGenerator,
	Color32_t89_CustomAttributesCacheGenerator,
	Quaternion_t69_CustomAttributesCacheGenerator,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m16588,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_t69_Quaternion_LookRotation_m2950_Arg1_ParameterInfo,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_LookRotation_m3123,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_LookRotation_m16589,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Slerp_m16590,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Lerp_m16591,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_UnclampedSlerp_m16593,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m16594,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m16597,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m16599,
	Matrix4x4_t68_CustomAttributesCacheGenerator,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m16612,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m16614,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m16616,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m16619,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m16630,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m16633,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m16634,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m16647,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m16649,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m16652,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m16656,
	Vector4_t961_CustomAttributesCacheGenerator,
	Mathf_t589_CustomAttributesCacheGenerator_Mathf_SmoothDamp_m2468,
	Mathf_t589_CustomAttributesCacheGenerator_Mathf_t589_Mathf_SmoothDamp_m4959_Arg4_ParameterInfo,
	Mathf_t589_CustomAttributesCacheGenerator_Mathf_t589_Mathf_SmoothDamp_m4959_Arg5_ParameterInfo,
	Mathf_t589_CustomAttributesCacheGenerator_Mathf_SmoothDampAngle_m3121,
	Mathf_t589_CustomAttributesCacheGenerator_Mathf_t589_Mathf_SmoothDampAngle_m16684_Arg4_ParameterInfo,
	Mathf_t589_CustomAttributesCacheGenerator_Mathf_t589_Mathf_SmoothDampAngle_m16684_Arg5_ParameterInfo,
	Mathf_t589_CustomAttributesCacheGenerator_Mathf_PerlinNoise_m2701,
	DrivenTransformProperties_t4494_CustomAttributesCacheGenerator,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m16690,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m16691,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m16692,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m16693,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m16694,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m16695,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m16696,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m16697,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m16698,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m16699,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m16700,
	Resources_t4498_CustomAttributesCacheGenerator_Resources_FindObjectsOfTypeAll_m3364,
	Resources_t4498_CustomAttributesCacheGenerator_Resources_Load_m3234,
	TextAsset_t569_CustomAttributesCacheGenerator_TextAsset_get_text_m2756,
	SerializePrivateVariables_t4499_CustomAttributesCacheGenerator,
	Shader_t594_CustomAttributesCacheGenerator_Shader_Find_m2530,
	Shader_t594_CustomAttributesCacheGenerator_Shader_PropertyToID_m16708,
	Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m16711,
	Material_t48_CustomAttributesCacheGenerator_Material_GetColor_m16713,
	Material_t48_CustomAttributesCacheGenerator_Material_GetTexture_m16714,
	Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureOffset_m16715,
	Material_t48_CustomAttributesCacheGenerator_Material_SetFloat_m16717,
	Material_t48_CustomAttributesCacheGenerator_Material_HasProperty_m16718,
	Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m16719,
	Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithShader_m16719_Arg0_ParameterInfo,
	Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m16720,
	Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithMaterial_m16720_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t4500_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t4500_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m16723,
	SphericalHarmonicsL2_t4500_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m16726,
	SphericalHarmonicsL2_t4500_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m16729,
	Sprite_t573_CustomAttributesCacheGenerator_Sprite_Create_m2938,
	Sprite_t573_CustomAttributesCacheGenerator_Sprite_INTERNAL_CALL_Create_m16739,
	Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_rect_m4845,
	Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m4841,
	Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_texture_m4838,
	Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_textureRect_m4859,
	Sprite_t573_CustomAttributesCacheGenerator_Sprite_get_border_m4839,
	DataUtility_t4502_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m4850,
	DataUtility_t4502_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m4849,
	DataUtility_t4502_CustomAttributesCacheGenerator_DataUtility_GetPadding_m4844,
	DataUtility_t4502_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m16740,
	WWW_t1224_CustomAttributesCacheGenerator_WWW_DestroyWWW_m16744,
	WWW_t1224_CustomAttributesCacheGenerator_WWW_InitWWW_m16745,
	WWW_t1224_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m16747,
	WWW_t1224_CustomAttributesCacheGenerator_WWW_get_bytes_m16750,
	WWW_t1224_CustomAttributesCacheGenerator_WWW_get_error_m8887,
	WWW_t1224_CustomAttributesCacheGenerator_WWW_GetAudioClipInternal_m16754,
	WWW_t1224_CustomAttributesCacheGenerator_WWW_get_isDone_m7341,
	WWW_t1224_CustomAttributesCacheGenerator_WWW_get_progress_m8891,
	WWWForm_t4504_CustomAttributesCacheGenerator_WWWForm_AddField_m16758,
	WWWForm_t4504_CustomAttributesCacheGenerator_WWWForm_t4504_WWWForm_AddField_m16759_Arg2_ParameterInfo,
	WWWTranscoder_t4505_CustomAttributesCacheGenerator_WWWTranscoder_t4505_WWWTranscoder_QPEncode_m16766_Arg1_ParameterInfo,
	WWWTranscoder_t4505_CustomAttributesCacheGenerator_WWWTranscoder_t4505_WWWTranscoder_SevenBitClean_m16769_Arg1_ParameterInfo,
	CacheIndex_t4506_CustomAttributesCacheGenerator,
	UnityString_t4507_CustomAttributesCacheGenerator_UnityString_t4507_UnityString_Format_m16771_Arg1_ParameterInfo,
	AsyncOperation_t1270_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m16773,
	AsyncOperation_t1270_CustomAttributesCacheGenerator_AsyncOperation_get_isDone_m7387,
	Application_t1853_CustomAttributesCacheGenerator_Application_Quit_m3361,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_loadedLevel_m3095,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2430,
	Application_t1853_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m16782,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_isLoadingLevel_m3310,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_isPlaying_m2677,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_isEditor_m3435,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m8932,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_platform_m4886,
	Application_t1853_CustomAttributesCacheGenerator_Application_set_runInBackground_m3053,
	Application_t1853_CustomAttributesCacheGenerator_Application_HasProLicense_m7385,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m8930,
	Application_t1853_CustomAttributesCacheGenerator_Application_OpenURL_m3082,
	Application_t1853_CustomAttributesCacheGenerator_Application_get_systemLanguage_m7123,
	Application_t1853_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m16784,
	Application_t1853_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m3386,
	Application_t1853_CustomAttributesCacheGenerator_Application_t1853____persistentDataPath_PropertyInfo,
	Behaviour_t1007_CustomAttributesCacheGenerator_Behaviour_get_enabled_m2552,
	Behaviour_t1007_CustomAttributesCacheGenerator_Behaviour_set_enabled_m2780,
	Behaviour_t1007_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m4718,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m4764,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m4763,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m7290,
	Camera_t356_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m7291,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_depth_m4685,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_cullingMask_m4768,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_eventMask_m16791,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m16792,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_targetTexture_m16794,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_worldToCameraMatrix_m16795,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m16797,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_clearFlags_m16799,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m16800,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m16801,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m16802,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportPointToRay_m16803,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m16804,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_main_m2548,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m16805,
	Camera_t356_CustomAttributesCacheGenerator_Camera_GetAllCameras_m16806,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m16811,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m16813,
	CameraCallback_t4508_CustomAttributesCacheGenerator,
	Debug_t4509_CustomAttributesCacheGenerator_Debug_DrawLine_m3338,
	Debug_t4509_CustomAttributesCacheGenerator_Debug_DrawLine_m3117,
	Debug_t4509_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m16814,
	Debug_t4509_CustomAttributesCacheGenerator_Debug_Internal_Log_m16815,
	Debug_t4509_CustomAttributesCacheGenerator_Debug_t4509_Debug_Internal_Log_m16815_Arg2_ParameterInfo,
	Debug_t4509_CustomAttributesCacheGenerator_Debug_Internal_LogException_m16816,
	Debug_t4509_CustomAttributesCacheGenerator_Debug_t4509_Debug_Internal_LogException_m16816_Arg1_ParameterInfo,
	Display_t4512_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m16841,
	Display_t4512_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m16842,
	Display_t4512_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m16843,
	Display_t4512_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m16844,
	Display_t4512_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m16845,
	Display_t4512_CustomAttributesCacheGenerator_Display_SetParamsImpl_m16846,
	Display_t4512_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m16847,
	Display_t4512_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m16848,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Internal_CancelInvokeAll_m16849,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2786,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_InvokeRepeating_m3372,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2785,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m16850,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m16852,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m16853,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopAllCoroutines_m2853,
	Input_t585_CustomAttributesCacheGenerator_Input_GetKeyInt_m16855,
	Input_t585_CustomAttributesCacheGenerator_Input_GetKeyUpInt_m16856,
	Input_t585_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m16857,
	Input_t585_CustomAttributesCacheGenerator_Input_GetAxis_m2466,
	Input_t585_CustomAttributesCacheGenerator_Input_GetAxisRaw_m3038,
	Input_t585_CustomAttributesCacheGenerator_Input_GetButton_m3120,
	Input_t585_CustomAttributesCacheGenerator_Input_GetButtonDown_m2933,
	Input_t585_CustomAttributesCacheGenerator_Input_GetButtonUp_m2976,
	Input_t585_CustomAttributesCacheGenerator_Input_GetMouseButton_m2465,
	Input_t585_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2961,
	Input_t585_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3347,
	Input_t585_CustomAttributesCacheGenerator_Input_get_mousePosition_m2964,
	Input_t585_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m4731,
	Input_t585_CustomAttributesCacheGenerator_Input_get_mousePresent_m4755,
	Input_t585_CustomAttributesCacheGenerator_Input_get_acceleration_m3387,
	Input_t585_CustomAttributesCacheGenerator_Input_GetTouch_m3345,
	Input_t585_CustomAttributesCacheGenerator_Input_get_touchCount_m2977,
	Input_t585_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m4941,
	Input_t585_CustomAttributesCacheGenerator_Input_get_compositionString_m4890,
	Input_t585_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m16858,
	HideFlags_t4515_CustomAttributesCacheGenerator,
	Object_t584_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m16860,
	Object_t584_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m16862,
	Object_t584_CustomAttributesCacheGenerator_Object_Destroy_m7289,
	Object_t584_CustomAttributesCacheGenerator_Object_t584_Object_Destroy_m7289_Arg1_ParameterInfo,
	Object_t584_CustomAttributesCacheGenerator_Object_Destroy_m2754,
	Object_t584_CustomAttributesCacheGenerator_Object_DestroyImmediate_m16863,
	Object_t584_CustomAttributesCacheGenerator_Object_t584_Object_DestroyImmediate_m16863_Arg1_ParameterInfo,
	Object_t584_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2518,
	Object_t584_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m3236,
	Object_t584_CustomAttributesCacheGenerator_Object_get_name_m2484,
	Object_t584_CustomAttributesCacheGenerator_Object_set_name_m2536,
	Object_t584_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3052,
	Object_t584_CustomAttributesCacheGenerator_Object_set_hideFlags_m3278,
	Object_t584_CustomAttributesCacheGenerator_Object_DestroyObject_m16864,
	Object_t584_CustomAttributesCacheGenerator_Object_t584_Object_DestroyObject_m16864_Arg1_ParameterInfo,
	Object_t584_CustomAttributesCacheGenerator_Object_DestroyObject_m2485,
	Object_t584_CustomAttributesCacheGenerator_Object_ToString_m3479,
	Object_t584_CustomAttributesCacheGenerator_Object_Instantiate_m2944,
	Object_t584_CustomAttributesCacheGenerator_Object_Instantiate_m7311,
	Object_t584_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2435,
	Component_t462_CustomAttributesCacheGenerator_Component_get_transform_m2421,
	Component_t462_CustomAttributesCacheGenerator_Component_get_gameObject_m2452,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m5033,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m16870,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m17669,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m7317,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m7125,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m16871,
	Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m2821,
	Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_SendMessage_m2821_Arg1_ParameterInfo,
	Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_SendMessage_m2821_Arg2_ParameterInfo,
	Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m3354,
	Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m2841,
	Component_t462_CustomAttributesCacheGenerator_Component_BroadcastMessage_m7126,
	Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_BroadcastMessage_m7126_Arg1_ParameterInfo,
	Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_BroadcastMessage_m7126_Arg2_ParameterInfo,
	Light_t720_CustomAttributesCacheGenerator_Light_INTERNAL_get_color_m16872,
	Light_t720_CustomAttributesCacheGenerator_Light_INTERNAL_set_color_m16873,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject__ctor_m2537_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m2538,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m16874,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m17675,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m7124,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m16875,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_transform_m2462,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_layer_m2694,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_layer_m4922,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SetActive_m2429,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m2433,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m2549,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_tag_m16876,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_tag_m3131,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m7389,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m3102,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m2975,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m2975_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m2975_Arg2_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m3090,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_BroadcastMessage_m2974,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m2974_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m2974_Arg2_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m16877,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_AddComponent_m7296,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m16878,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_Internal_CreateGameObject_m16878_Arg0_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Find_m3371,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m16883,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m16884,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m16885,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m16886,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m16887,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m16888,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m16889,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m16890,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m16891,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m16892,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_parentInternal_m16893,
	Transform_t54_CustomAttributesCacheGenerator_Transform_set_parentInternal_m16894,
	Transform_t54_CustomAttributesCacheGenerator_Transform_SetParent_m2835,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m16895,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m16896,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m16897_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_Rotate_m3024,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m16898_Arg3_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2471,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m16899_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m16900_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2940,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_LookAt_m16901,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m16902,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformDirection_m16903,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m16904,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m16905,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_root_m3159,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_childCount_m2456,
	Transform_t54_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m4921,
	Transform_t54_CustomAttributesCacheGenerator_Transform_SetAsLastSibling_m3410,
	Transform_t54_CustomAttributesCacheGenerator_Transform_Find_m7309,
	Transform_t54_CustomAttributesCacheGenerator_Transform_GetChild_m3144,
	Time_t4517_CustomAttributesCacheGenerator_Time_get_time_m2414,
	Time_t4517_CustomAttributesCacheGenerator_Time_get_timeSinceLevelLoad_m2546,
	Time_t4517_CustomAttributesCacheGenerator_Time_get_deltaTime_m2446,
	Time_t4517_CustomAttributesCacheGenerator_Time_get_unscaledTime_m4757,
	Time_t4517_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m4773,
	Time_t4517_CustomAttributesCacheGenerator_Time_get_timeScale_m2690,
	Time_t4517_CustomAttributesCacheGenerator_Time_set_timeScale_m2731,
	Time_t4517_CustomAttributesCacheGenerator_Time_get_frameCount_m2550,
	Time_t4517_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m2788,
	Random_t4518_CustomAttributesCacheGenerator_Random_Range_m2447,
	Random_t4518_CustomAttributesCacheGenerator_Random_RandomRangeInt_m16907,
	Random_t4518_CustomAttributesCacheGenerator_Random_get_value_m3381,
	Random_t4518_CustomAttributesCacheGenerator_Random_get_insideUnitSphere_m3134,
	PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m16910,
	PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3259,
	PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_t4520_PlayerPrefs_GetString_m3259_Arg1_ParameterInfo,
	PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2737,
	PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2736,
	PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_DeleteKey_m2740,
	PlayerPrefs_t4520_CustomAttributesCacheGenerator_PlayerPrefs_Save_m8882,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isStopped_m2680,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isPaused_m2679,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_startSize_m2718,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_simulationSpace_m2658,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_simulationSpace_m2693,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_SetParticles_m2653,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_GetParticles_m2651,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Play_m16911,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Stop_m16912,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Clear_m16913,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Play_m2681,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Play_m16914_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Stop_m2678,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Stop_m16915_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Clear_m2657,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Clear_m16916_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_INTERNAL_CALL_Emit_m16917,
	ParticleSystemRenderer_t190_CustomAttributesCacheGenerator_ParticleSystemRenderer_get_renderMode_m2691,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m16937,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_Raycast_m2949,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Raycast_m2585_Arg3_ParameterInfo,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Raycast_m2585_Arg4_ParameterInfo,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_Raycast_m3160,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Raycast_m2562_Arg2_ParameterInfo,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Raycast_m2562_Arg3_ParameterInfo,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_RaycastAll_m3007_Arg1_ParameterInfo,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_RaycastAll_m3007_Arg2_ParameterInfo,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_RaycastAll_m16938_Arg2_ParameterInfo,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_RaycastAll_m16938_Arg3_ParameterInfo,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m16939,
	Physics_t4526_CustomAttributesCacheGenerator_Physics_t4526_Physics_Linecast_m7442_Arg3_ParameterInfo,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_velocity_m16940,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_velocity_m16941,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_angularVelocity_m16942,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_angularVelocity_m16943,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_set_isKinematic_m3046,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForce_m3352,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m16944,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForceAtPosition_m2709,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForceAtPosition_m16945,
	Collider_t194_CustomAttributesCacheGenerator_Collider_get_enabled_m7367,
	Collider_t194_CustomAttributesCacheGenerator_Collider_set_enabled_m3001,
	Collider_t194_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m16946,
	Collider_t194_CustomAttributesCacheGenerator_Collider_INTERNAL_get_bounds_m16947,
	BoxCollider_t1449_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_center_m16948,
	BoxCollider_t1449_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_size_m16949,
	SphereCollider_t1450_CustomAttributesCacheGenerator_SphereCollider_INTERNAL_get_center_m16950,
	SphereCollider_t1450_CustomAttributesCacheGenerator_SphereCollider_get_radius_m7365,
	CapsuleCollider_t1448_CustomAttributesCacheGenerator_CapsuleCollider_get_height_m7361,
	CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_INTERNAL_CALL_Move_m16951,
	CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_get_height_m7360,
	Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m16954,
	Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_Raycast_m3006,
	Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_t597_Physics2D_Raycast_m2569_Arg2_ParameterInfo,
	Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_t597_Physics2D_Raycast_m2569_Arg3_ParameterInfo,
	Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_t597_Physics2D_Raycast_m2569_Arg4_ParameterInfo,
	Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_t597_Physics2D_Raycast_m2569_Arg5_ParameterInfo,
	Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m3005,
	Physics2D_t597_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m16955,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m16956,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m16957,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_get_angularVelocity_m3316,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_set_angularVelocity_m3313,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_set_isKinematic_m3047,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m3037,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m16958,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_AddForceAtPosition_m2712,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m16959,
	Collider2D_t195_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m16960,
	NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_INTERNAL_CALL_SetDestination_m16961,
	NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_get_remainingDistance_m2959,
	AudioClip_t261_CustomAttributesCacheGenerator_AudioClip_get_length_m7331,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_volume_m7315,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_volume_m7316,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_clip_m7334,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_clip_m3156,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m16977,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_Play_m16977_Arg0_ParameterInfo,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m3157,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Stop_m7335,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m16978,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m7333,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m16979,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_PlayOneShot_m16979_Arg1_ParameterInfo,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2871,
	AnimationEvent_t4538_CustomAttributesCacheGenerator_AnimationEvent_t4538____data_PropertyInfo,
	AnimationClip_t296_CustomAttributesCacheGenerator_AnimationClip_get_length_m3027,
	AnimationCurve_t98_CustomAttributesCacheGenerator,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_t98_AnimationCurve__ctor_m2596_Arg0_ParameterInfo,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m17005,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Evaluate_m2588,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_SetKeys_m17007,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_GetKeys_m17008,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Init_m17009,
	Animation_t298_CustomAttributesCacheGenerator,
	Animation_t298_CustomAttributesCacheGenerator_Animation_get_clip_m7349,
	Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m17014,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m17014_Arg1_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m17014_Arg2_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m2960,
	Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m17015,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_AddClip_m17015_Arg4_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m17016,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetState_m17018,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateAtIndex_m17019,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateCount_m17020,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_set_wrapMode_m3125,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_set_time_m3126,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_set_speed_m3028,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_get_length_m7310,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_set_layer_m3022,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m17021,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_t660_AnimationState_AddMixingTransform_m17021_Arg1_ParameterInfo,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m3023,
	AnimationState_t660_CustomAttributesCacheGenerator_AnimationState_get_name_m7359,
	AnimatorStateInfo_t574_CustomAttributesCacheGenerator_AnimatorStateInfo_t574____nameHash_PropertyInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_set_applyRootMotion_m3331,
	Animator_t214_CustomAttributesCacheGenerator_Animator_get_layerCount_m3163,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetLayerWeight_m3336,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetLayerWeight_m3164,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetCurrentAnimatorStateInfo_m2789,
	Animator_t214_CustomAttributesCacheGenerator_Animator_IsInTransition_m3423,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m7314,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m7397,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17037_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17037_Arg3_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m17038,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17038_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17038_Arg3_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m7313,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17039_Arg1_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17039_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m17040,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17040_Arg1_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17040_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m4983,
	Animator_t214_CustomAttributesCacheGenerator_Animator_set_runtimeAnimatorController_m7312,
	Animator_t214_CustomAttributesCacheGenerator_Animator_StringToHash_m3427,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatString_m17041,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatID_m17042,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatString_m17043,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatID_m17044,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetBoolString_m17045,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetBoolID_m17046,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetBoolString_m17047,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetBoolID_m17048,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetIntegerString_m17049,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetIntegerString_m17050,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetTriggerString_m17051,
	Animator_t214_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m17052,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatStringDamp_m17053,
	TerrainData_t590_CustomAttributesCacheGenerator_TerrainData_INTERNAL_get_size_m17058,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_terrainData_m2474,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_INTERNAL_CALL_SampleHeight_m17059,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_activeTerrain_m2479,
	TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_text_m3369,
	TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_font_m3366,
	TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_anchor_m3367,
	TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_characterSize_m3368,
	CharacterInfo_t4547_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t4547_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t4547_CustomAttributesCacheGenerator_width,
	CharacterInfo_t4547_CustomAttributesCacheGenerator_flipped,
	Font_t529_CustomAttributesCacheGenerator_Font_get_material_m3365,
	Font_t529_CustomAttributesCacheGenerator_Font_HasCharacter_m4907,
	Font_t529_CustomAttributesCacheGenerator_Font_get_dynamic_m4992,
	Font_t529_CustomAttributesCacheGenerator_Font_get_fontSize_m4994,
	FontTextureRebuildCallback_t4548_CustomAttributesCacheGenerator,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_Init_m17083,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m17084,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17087,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m4919,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m17088,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m17089,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m17090,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m17091,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m17092,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m17093,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m4901,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m17094,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m17095,
	TextGenerator_t877_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m4931,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderMode_m4819,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5009,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2778,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_worldCamera_m2779,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m4993,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5012,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m4842,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5013,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m4808,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m4821,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m4820,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m4824,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m4795,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m4989,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m4979,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m17107,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_set_blocksRaycasts_m3411,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m4807,
	CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m17110,
	CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m4811,
	CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5043,
	CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m4803,
	CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m17111,
	CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m17112,
	CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m4799,
	CanvasRenderer_t846_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m4796,
	RectTransformUtility_t725_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17114,
	RectTransformUtility_t725_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17116,
	RectTransformUtility_t725_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m4810,
	Request_t4552_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t4552_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t4552_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t4552_CustomAttributesCacheGenerator_Request_get_sourceId_m17120,
	Request_t4552_CustomAttributesCacheGenerator_Request_get_appId_m17121,
	Request_t4552_CustomAttributesCacheGenerator_Request_get_domain_m17122,
	Response_t4554_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t4554_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t4554_CustomAttributesCacheGenerator_Response_get_success_m17131,
	Response_t4554_CustomAttributesCacheGenerator_Response_set_success_m17132,
	Response_t4554_CustomAttributesCacheGenerator_Response_get_extendedInfo_m17133,
	Response_t4554_CustomAttributesCacheGenerator_Response_set_extendedInfo_m17134,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m17139,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m17140,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m17141,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m17142,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m17143,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m17144,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m17145,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m17146,
	CreateMatchRequest_t4557_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m17147,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m17150,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m17151,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m17152,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m17153,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m17154,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m17155,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m17156,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m17157,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m17158,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m17159,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m17160,
	CreateMatchResponse_t4558_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m17161,
	JoinMatchRequest_t4559_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t4559_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t4559_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m17165,
	JoinMatchRequest_t4559_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m17166,
	JoinMatchRequest_t4559_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m17167,
	JoinMatchRequest_t4559_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m17168,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m17171,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m17172,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m17173,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m17174,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m17175,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m17176,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m17177,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m17178,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m17179,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m17180,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m17181,
	JoinMatchResponse_t4560_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m17182,
	DestroyMatchRequest_t4561_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t4561_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m17186,
	DestroyMatchRequest_t4561_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m17187,
	DropConnectionRequest_t4562_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t4562_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t4562_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m17190,
	DropConnectionRequest_t4562_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m17191,
	DropConnectionRequest_t4562_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m17192,
	DropConnectionRequest_t4562_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m17193,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m17196,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m17197,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m17198,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m17199,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m17200,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m17201,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m17202,
	ListMatchRequest_t4563_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m17203,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m17206,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m17207,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m17208,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m17209,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m17210,
	MatchDirectConnectInfo_t4564_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m17211,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m17215,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m17216,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_name_m17217,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_name_m17218,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m17219,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m17220,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m17221,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m17222,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m17223,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m17224,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m17225,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m17226,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m17227,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m17228,
	MatchDesc_t4566_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m17229,
	ListMatchResponse_t4568_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t4568_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m17233,
	ListMatchResponse_t4568_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m17234,
	AppID_t4569_CustomAttributesCacheGenerator,
	SourceID_t4570_CustomAttributesCacheGenerator,
	NetworkID_t4571_CustomAttributesCacheGenerator,
	NodeID_t4572_CustomAttributesCacheGenerator,
	NetworkMatch_t4576_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m17686,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m17692,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m17693,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m17695,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4713_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m17696,
	JsonArray_t4577_CustomAttributesCacheGenerator,
	JsonObject_t4578_CustomAttributesCacheGenerator,
	SimpleJson_t4581_CustomAttributesCacheGenerator,
	SimpleJson_t4581_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m17279,
	SimpleJson_t4581_CustomAttributesCacheGenerator_SimpleJson_NextToken_m17291,
	SimpleJson_t4581_CustomAttributesCacheGenerator_SimpleJson_t4581____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t4579_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t4579_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m17699,
	PocoJsonSerializerStrategy_t4580_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t4580_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m17308,
	PocoJsonSerializerStrategy_t4580_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m17309,
	ReflectionUtils_t4593_CustomAttributesCacheGenerator,
	ReflectionUtils_t4593_CustomAttributesCacheGenerator_ReflectionUtils_t4593_ReflectionUtils_GetConstructorInfo_m17334_Arg1_ParameterInfo,
	ReflectionUtils_t4593_CustomAttributesCacheGenerator_ReflectionUtils_t4593_ReflectionUtils_GetContructor_m17339_Arg1_ParameterInfo,
	ReflectionUtils_t4593_CustomAttributesCacheGenerator_ReflectionUtils_t4593_ReflectionUtils_GetConstructorByReflection_m17341_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t4715_CustomAttributesCacheGenerator,
	ConstructorDelegate_t4587_CustomAttributesCacheGenerator_ConstructorDelegate_t4587_ConstructorDelegate_Invoke_m17319_Arg0_ParameterInfo,
	ConstructorDelegate_t4587_CustomAttributesCacheGenerator_ConstructorDelegate_t4587_ConstructorDelegate_BeginInvoke_m17320_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4588_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4589_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4590_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4591_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4592_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t4595_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1025_CustomAttributesCacheGenerator,
	RequireComponent_t737_CustomAttributesCacheGenerator,
	WritableAttribute_t4601_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t4602_CustomAttributesCacheGenerator,
	GUIStateObjects_t4613_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m17374,
	Achievement_t4616_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t4616_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t4616_CustomAttributesCacheGenerator_Achievement_get_id_m17394,
	Achievement_t4616_CustomAttributesCacheGenerator_Achievement_set_id_m17395,
	Achievement_t4616_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m17396,
	Achievement_t4616_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m17397,
	AchievementDescription_t4617_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t4617_CustomAttributesCacheGenerator_AchievementDescription_get_id_m17404,
	AchievementDescription_t4617_CustomAttributesCacheGenerator_AchievementDescription_set_id_m17405,
	Score_t4618_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t4618_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t4618_CustomAttributesCacheGenerator_Score_get_leaderboardID_m17414,
	Score_t4618_CustomAttributesCacheGenerator_Score_set_leaderboardID_m17415,
	Score_t4618_CustomAttributesCacheGenerator_Score_get_value_m17416,
	Score_t4618_CustomAttributesCacheGenerator_Score_set_value_m17417,
	Leaderboard_t4455_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t4455_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t4455_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t4455_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_get_id_m17425,
	Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_set_id_m17426,
	Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m17427,
	Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m17428,
	Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_get_range_m17429,
	Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_set_range_m17430,
	Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m17431,
	Leaderboard_t4455_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m17432,
	PropertyAttribute_t1247_CustomAttributesCacheGenerator,
	TooltipAttribute_t1028_CustomAttributesCacheGenerator,
	SpaceAttribute_t1026_CustomAttributesCacheGenerator,
	RangeAttribute_t1024_CustomAttributesCacheGenerator,
	MultilineAttribute_t1462_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1029_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1027_CustomAttributesCacheGenerator,
	StackTraceUtility_t4631_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m17471,
	StackTraceUtility_t4631_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m17474,
	StackTraceUtility_t4631_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m17476,
	SharedBetweenAnimatorsAttribute_t4632_CustomAttributesCacheGenerator,
	ArgumentCache_t4639_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t4639_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t4639_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t4639_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t4639_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t4639_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t4643_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t4643_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t4643_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t4643_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t4643_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t4645_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t4648_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t4648_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t4649_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t4650_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t4651_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t1019_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t4653_CustomAttributesCacheGenerator,
};
