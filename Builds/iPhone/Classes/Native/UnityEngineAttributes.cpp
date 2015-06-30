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
extern TypeInfo* InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t706_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2750);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ExtensionAttribute_t706_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t706 * tmp;
		tmp = (ExtensionAttribute_t706 *)il2cpp_codegen_object_new (ExtensionAttribute_t706_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3308(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2699_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m12263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t2699_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m12264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AssetBundle_t1073_CustomAttributesCacheGenerator_AssetBundle_Contains_m5261(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void AssetBundle_t1073_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m12268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void AssetBundle_t1073_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m12269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AssetBundle_t1073_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m12270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_LayerToName_m12272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m2955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_t87_LayerMask_GetMask_m12273_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void RuntimePlatform_t2703_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void RuntimePlatform_t2703_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void RuntimePlatform_t2703_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void RuntimePlatform_t2703_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void RuntimePlatform_t2703_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_processorCount_m2433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m12274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Coroutine_t2059_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m12277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m12279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t2866_il2cpp_TypeInfo_var;
void ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_t474_ScriptableObject_Internal_CreateScriptableObject_m12279_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2866 * tmp;
		tmp = (WritableAttribute_t2866 *)il2cpp_codegen_object_new (WritableAttribute_t2866_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m13480(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m12280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m12281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.ConditionalAttribute
#include "mscorlib_System_Diagnostics_ConditionalAttribute.h"
// System.Diagnostics.ConditionalAttribute
#include "mscorlib_System_Diagnostics_ConditionalAttributeMethodDeclarations.h"
extern TypeInfo* ConditionalAttribute_t2979_il2cpp_TypeInfo_var;
void Profiler_t2707_CustomAttributesCacheGenerator_Profiler_BeginSample_m3170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConditionalAttribute_t2979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5832);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ConditionalAttribute_t2979 * tmp;
		tmp = (ConditionalAttribute_t2979 *)il2cpp_codegen_object_new (ConditionalAttribute_t2979_il2cpp_TypeInfo_var);
		ConditionalAttribute__ctor_m13792(tmp, il2cpp_codegen_string_new_wrapper("ENABLE_PROFILER"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Profiler_t2707_CustomAttributesCacheGenerator_Profiler_BeginSampleOnly_m12282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
extern TypeInfo* ConditionalAttribute_t2979_il2cpp_TypeInfo_var;
void Profiler_t2707_CustomAttributesCacheGenerator_Profiler_EndSample_m3171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		ConditionalAttribute_t2979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5832);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		ConditionalAttribute_t2979 * tmp;
		tmp = (ConditionalAttribute_t2979 *)il2cpp_codegen_object_new (ConditionalAttribute_t2979_il2cpp_TypeInfo_var);
		ConditionalAttribute__ctor_m13792(tmp, il2cpp_codegen_string_new_wrapper("ENABLE_PROFILER"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Cursor_t2709_CustomAttributesCacheGenerator_Cursor_get_visible_m5518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Cursor_t2709_CustomAttributesCacheGenerator_Cursor_set_visible_m5520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Cursor_t2709_CustomAttributesCacheGenerator_Cursor_get_lockState_m5519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Cursor_t2709_CustomAttributesCacheGenerator_Cursor_set_lockState_m5521(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m12287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m12288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m12289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m12290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m12291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m12292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m12293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m12294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m12295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m12296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m12297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m12298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m12299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m12300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m12301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m12302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m12303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m12307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GcLeaderboard_t2721_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m12351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GcLeaderboard_t2721_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m12352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GcLeaderboard_t2721_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m12353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GcLeaderboard_t2721_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m12354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RenderSettings_t2722_CustomAttributesCacheGenerator_RenderSettings_set_skybox_m2345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_sharedMesh_m2514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_Internal_Create_m12355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2866_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_t93_Mesh_Internal_Create_m12355_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2866 * tmp;
		tmp = (WritableAttribute_t2866 *)il2cpp_codegen_object_new (WritableAttribute_t2866_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m13480(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertices_m2494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_normals_m2495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_uv_m2496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertexCount_m2632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_boneWeights_m2518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_bindposes_m2520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_bones_m2519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_sharedMesh_m2517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_BakeMesh_m2525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_enabled_m5516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_enabled_m2915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_material_m2329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_material_m2962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sharedMaterial_m2557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_sharedMaterial_m2558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_bounds_m2364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_isVisible_m2600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m9335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m9336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Graphics_t2724_CustomAttributesCacheGenerator_Graphics_DrawTexture_m12368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GeometryUtility_t2725_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m12371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GeometryUtility_t2725_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m12372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Screen_t2726_CustomAttributesCacheGenerator_Screen_get_width_m2337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Screen_t2726_CustomAttributesCacheGenerator_Screen_get_height_m2341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Screen_t2726_CustomAttributesCacheGenerator_Screen_get_dpi_m9573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Texture_t903_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m12374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Texture_t903_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m12375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m12378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2866_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Internal_Create_m12378_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2866 * tmp;
		tmp = (WritableAttribute_t2866 *)il2cpp_codegen_object_new (WritableAttribute_t2866_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m13480(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m9368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_SetPixel_m12379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m2456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m12380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_GetPixels32_m12380_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m2457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m12381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m12381_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m12381_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m5493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RenderTexture_t2727_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m12382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RenderTexture_t2727_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m12383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUITexture_t904_CustomAttributesCacheGenerator_GUITexture_INTERNAL_set_color_m12386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUITexture_t904_CustomAttributesCacheGenerator_GUITexture_set_texture_m5494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUILayer_t1119_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m12388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Init_m12391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Cleanup_m12392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Evaluate_m2589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_colorKeys_m2553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_alphaKeys_m2554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_SetKeys_m2555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
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
void GUI_t566_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
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
void GUI_t566_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m12399(CustomAttributesCache* cache)
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
void GUI_t566_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m12400(CustomAttributesCache* cache)
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
void GUI_t566_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m12401(CustomAttributesCache* cache)
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
void GUI_t566_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m12402(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_get_color_m12403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_set_color_m12404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_set_contentColor_m12405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_get_changed_m3067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_set_changed_m12406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_get_enabled_m2356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_set_enabled_m2353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m12408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m12411(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_DrawTexture_m5577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_t566_GUI_DrawTexture_m5571_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("ScaleMode.StretchToFill"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_t566_GUI_DrawTexture_m5571_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_t566_GUI_DrawTexture_m5571_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_DrawTextureWithTexCoords_m5578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_t566_GUI_DrawTextureWithTexCoords_m5570_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_get_blendMaterial_m12412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_get_blitMaterial_m12413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m12417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_SetNextControlName_m2977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_GetNameOfFocusedControl_m2975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_FocusControl_m2976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m12424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m12433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m12435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoWindow_m12445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DragWindow_m12446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Label_m2956_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Label_m2911_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Button_m2957_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Button_m3298_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_TextField_m2989_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_TextArea_m5240_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Toggle_m3178_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Toggle_m3299_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Toolbar_m2983_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Toolbar_m12453_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_HorizontalSlider_m3181_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginHorizontal_m2987_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginHorizontal_m12455_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginVertical_m3006_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginVertical_m12456_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginScrollView_m2984_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginScrollView_m12458_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Window_m3175_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m12472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m12474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m12475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m13793(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_t2740_GUILayoutUtility_GetRect_m12479_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_t2740_GUILayoutUtility_GetRect_m12481_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m12520(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m12524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m12527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m12528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m12529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m12530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m12531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m12532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m12534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m12536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m12540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m12541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m12542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIClip_t2748_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m12544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIClip_t2748_CustomAttributesCacheGenerator_GUIClip_Pop_m12545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISettings_t2749_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISettings_t2749_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISettings_t2749_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISettings_t2749_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISettings_t2749_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t707_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t707 * tmp;
		tmp = (ExecuteInEditMode_t707 *)il2cpp_codegen_object_new (ExecuteInEditMode_t707_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m3309(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUIContent_t539_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUIContent_t539_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void GUIContent_t539_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_Init_m12606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m12607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m12608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_get_textColor_m12609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m12610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_Init_m12613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_Cleanup_m12614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_left_m5589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_set_left_m12615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_right_m5590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_set_right_m12616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_top_m5591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_set_top_m12617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_bottom_m5592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_set_bottom_m12618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m9583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_vertical_m9584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m12620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m12622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Init_m12627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m12628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m12629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_name_m12630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_name_m12631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m12632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m12634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m12635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m12636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_alignment_m5572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m12637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m12638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m12639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m12640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m12641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m12642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m12643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fontStyle_m5601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m5602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m12645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Draw_m12648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_t303_GUIStyle_Draw_m12649_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m12651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m12652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m12655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m12656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m12657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m12660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m12663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m12665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m9501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m9502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m9452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m9453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m9500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m9451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m9499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m9463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m9462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_Init_m12667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_Cleanup_m12669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_get_rawType_m9471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_get_type_m2973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_set_type_m12670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_GetTypeForControl_m12671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m12673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m12674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_get_modifiers_m9469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_set_modifiers_m12675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_get_character_m5553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_set_character_m12676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_get_commandName_m12677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_get_keyCode_m2974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_set_keyCode_m12678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m12679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_Use_m5241(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Event_t643_CustomAttributesCacheGenerator_Event_PopEvent_m9472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t713_il2cpp_TypeInfo_var;
void EventModifiers_t2756_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t713 * tmp;
		tmp = (FlagsAttribute_t713 *)il2cpp_codegen_object_new (FlagsAttribute_t713_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3315(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m12685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireSphere_m12686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawSphere_m12687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireCube_m12688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m12689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m12690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void Vector2_t97_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_Slerp_m12696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_RotateTowards_m12697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void Color_t121_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t2860_il2cpp_TypeInfo_var;
void Color32_t89_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t2860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5835);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t2860 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t2860 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t2860_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m13472(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m12709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_t69_Quaternion_LookRotation_m2863_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_LookRotation_m3036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_LookRotation_m12710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Slerp_m12711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Lerp_m12712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_UnclampedSlerp_m12714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m12715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m12718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m12720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m12733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m12735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m12737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m12740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m12751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m12754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m12755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m12768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m12770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m12773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m12777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void Vector4_t2149_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Mathf_t568_CustomAttributesCacheGenerator_Mathf_SmoothDamp_m2381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Mathf_t568_CustomAttributesCacheGenerator_Mathf_t568_Mathf_SmoothDamp_m9523_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Mathf_t568_CustomAttributesCacheGenerator_Mathf_t568_Mathf_SmoothDamp_m9523_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Mathf_t568_CustomAttributesCacheGenerator_Mathf_SmoothDampAngle_m3034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Mathf_t568_CustomAttributesCacheGenerator_Mathf_t568_Mathf_SmoothDampAngle_m12806_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Mathf_t568_CustomAttributesCacheGenerator_Mathf_t568_Mathf_SmoothDampAngle_m12806_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Mathf_t568_CustomAttributesCacheGenerator_Mathf_PerlinNoise_m2614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t713_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t2759_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t713 * tmp;
		tmp = (FlagsAttribute_t713 *)il2cpp_codegen_object_new (FlagsAttribute_t713_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3315(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m12812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m12813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m12814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m12815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m12816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m12817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m12818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m12819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m12820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m12821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m12822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void Resources_t2763_CustomAttributesCacheGenerator_Resources_FindObjectsOfTypeAll_m3279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void Resources_t2763_CustomAttributesCacheGenerator_Resources_Load_m3149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextAsset_t551_CustomAttributesCacheGenerator_TextAsset_get_text_m2669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t2764_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Shader_t573_CustomAttributesCacheGenerator_Shader_Find_m2443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Shader_t573_CustomAttributesCacheGenerator_Shader_PropertyToID_m12830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m12833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_GetTexture_m12835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureOffset_m12837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_SetFloat_m12839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_HasProperty_m12840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m12841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2866_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithShader_m12841_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2866 * tmp;
		tmp = (WritableAttribute_t2866 *)il2cpp_codegen_object_new (WritableAttribute_t2866_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m13480(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m12842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2866_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithMaterial_m12842_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2866 * tmp;
		tmp = (WritableAttribute_t2866 *)il2cpp_codegen_object_new (WritableAttribute_t2866_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m13480(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2765_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2765_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m12845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2765_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m12848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t2765_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m12851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Sprite_t555_CustomAttributesCacheGenerator_Sprite_Create_m2851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Sprite_t555_CustomAttributesCacheGenerator_Sprite_INTERNAL_CALL_Create_m12861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_rect_m9413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m9409(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_texture_m9406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_textureRect_m9429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_border_m9407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void DataUtility_t2767_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m9419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void DataUtility_t2767_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m9418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void DataUtility_t2767_CustomAttributesCacheGenerator_DataUtility_GetPadding_m9412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void DataUtility_t2767_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m12862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void WWW_t899_CustomAttributesCacheGenerator_WWW_DestroyWWW_m12866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void WWW_t899_CustomAttributesCacheGenerator_WWW_InitWWW_m12867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void WWW_t899_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m12869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void WWW_t899_CustomAttributesCacheGenerator_WWW_get_bytes_m12872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void WWW_t899_CustomAttributesCacheGenerator_WWW_get_error_m7618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void WWW_t899_CustomAttributesCacheGenerator_WWW_GetAudioClipInternal_m12876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void WWW_t899_CustomAttributesCacheGenerator_WWW_get_isDone_m5488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void WWW_t899_CustomAttributesCacheGenerator_WWW_get_progress_m7622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void WWWForm_t2769_CustomAttributesCacheGenerator_WWWForm_AddField_m12880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void WWWForm_t2769_CustomAttributesCacheGenerator_WWWForm_t2769_WWWForm_AddField_m12881_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void WWWTranscoder_t2770_CustomAttributesCacheGenerator_WWWTranscoder_t2770_WWWTranscoder_QPEncode_m12888_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void WWWTranscoder_t2770_CustomAttributesCacheGenerator_WWWTranscoder_t2770_WWWTranscoder_SevenBitClean_m12891_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void CacheIndex_t2771_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void UnityString_t2772_CustomAttributesCacheGenerator_UnityString_t2772_UnityString_Format_m12893_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AsyncOperation_t946_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m12895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AsyncOperation_t946_CustomAttributesCacheGenerator_AsyncOperation_get_isDone_m5538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_Quit_m3276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_loadedLevel_m3008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m12904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_isLoadingLevel_m3225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_isPlaying_m2590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_isEditor_m9504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m7646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_platform_m7637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_set_runInBackground_m2966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_HasProLicense_m5536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_OpenURL_m2995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_get_systemLanguage_m5269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m12906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m3295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t2981_il2cpp_TypeInfo_var;
void Application_t1650_CustomAttributesCacheGenerator_Application_t1650____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t2981_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5836);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t2981 * tmp;
		tmp = (SecurityCriticalAttribute_t2981 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t2981_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m13797(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Behaviour_t1130_CustomAttributesCacheGenerator_Behaviour_get_enabled_m2465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Behaviour_t1130_CustomAttributesCacheGenerator_Behaviour_set_enabled_m2693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Behaviour_t1130_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m9289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m9334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m9333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m5436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m5437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_depth_m9258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_cullingMask_m9338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_eventMask_m12913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m12914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_targetTexture_m12916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_worldToCameraMatrix_m12917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m12919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_clearFlags_m12921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m12922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m12923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m12924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportPointToRay_m12925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m12926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_main_m2461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m12927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_GetAllCameras_m12928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m12933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m12935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var;
void CameraCallback_t2773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1711 * tmp;
		tmp = (EditorBrowsableAttribute_t1711 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7851(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Debug_t2774_CustomAttributesCacheGenerator_Debug_DrawLine_m3253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Debug_t2774_CustomAttributesCacheGenerator_Debug_DrawLine_m3030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Debug_t2774_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m12936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Debug_t2774_CustomAttributesCacheGenerator_Debug_Internal_Log_m12937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2866_il2cpp_TypeInfo_var;
void Debug_t2774_CustomAttributesCacheGenerator_Debug_t2774_Debug_Internal_Log_m12937_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2866 * tmp;
		tmp = (WritableAttribute_t2866 *)il2cpp_codegen_object_new (WritableAttribute_t2866_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m13480(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Debug_t2774_CustomAttributesCacheGenerator_Debug_Internal_LogException_m12938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2866_il2cpp_TypeInfo_var;
void Debug_t2774_CustomAttributesCacheGenerator_Debug_t2774_Debug_Internal_LogException_m12938_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2866 * tmp;
		tmp = (WritableAttribute_t2866 *)il2cpp_codegen_object_new (WritableAttribute_t2866_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m13480(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Display_t2777_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m12963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Display_t2777_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m12964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Display_t2777_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m12965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Display_t2777_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m12966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Display_t2777_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m12967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Display_t2777_CustomAttributesCacheGenerator_Display_SetParamsImpl_m12968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Display_t2777_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m12969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Display_t2777_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m12970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Internal_CancelInvokeAll_m12971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_InvokeRepeating_m3287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m12972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m12974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m12975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopAllCoroutines_m2766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetKeyInt_m12977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetKeyUpInt_m12978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m12979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetAxis_m2379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetAxisRaw_m2951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetButton_m3033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetButtonDown_m2846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetButtonUp_m2889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetMouseButton_m2378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_get_mousePosition_m2877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m9302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_get_mousePresent_m9325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_get_acceleration_m3296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_GetTouch_m3260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_get_touchCount_m2890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m9503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_get_compositionString_m9454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Input_t564_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m12980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t713_il2cpp_TypeInfo_var;
void HideFlags_t2780_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t713 * tmp;
		tmp = (FlagsAttribute_t713 *)il2cpp_codegen_object_new (FlagsAttribute_t713_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3315(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m12982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m12984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_Destroy_m5435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_t563_Object_Destroy_m5435_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_Destroy_m2667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_DestroyImmediate_m12985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_t563_Object_DestroyImmediate_m12985_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m3151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_get_name_m2397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_set_name_m2449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_set_hideFlags_m3193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_DestroyObject_m12986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_t563_Object_DestroyObject_m12986_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_DestroyObject_m2398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_ToString_m3347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_Instantiate_m2857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_Instantiate_m5457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void Object_t563_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_get_transform_m2334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_get_gameObject_m2365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m5496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m12992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m13801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m13793(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m5463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m5272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m12993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m2734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_SendMessage_m2734_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_SendMessage_m2734_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m3269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m2754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_BroadcastMessage_m5273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_BroadcastMessage_m5273_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_BroadcastMessage_m5273_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject__ctor_m2450_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m2451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m12994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m13807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m13793(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m12995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_transform_m2375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_layer_m2607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_layer_m9482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SetActive_m2342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m2346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m2462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_tag_m12996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_tag_m3044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m5540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m3015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m2888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m2888_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m2888_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m3003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_BroadcastMessage_m2887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m2887_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m2887_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m12997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_AddComponent_m5442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t2918 * tmp;
		tmp = (TypeInferenceRuleAttribute_t2918 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t2918_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m13681(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m12998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t2866_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_Internal_CreateGameObject_m12998_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t2866 * tmp;
		tmp = (WritableAttribute_t2866 *)il2cpp_codegen_object_new (WritableAttribute_t2866_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m13480(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Find_m3286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m13002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m13003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m13004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m13005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m13006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m13007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m13008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m13009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m13010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m13011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_parentInternal_m13012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_set_parentInternal_m13013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_SetParent_m2748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m13014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m13015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m13016_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_Rotate_m2937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m13017_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m13018_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m13019_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_LookAt_m13020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m13021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformDirection_m13022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m13023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m13024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_root_m3072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_childCount_m2369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m9481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_Find_m5455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_GetChild_m3057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_get_time_m2327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_get_timeSinceLevelLoad_m2459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_get_deltaTime_m2359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_get_unscaledTime_m9327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m9343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_get_timeScale_m2603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_set_timeScale_m2644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_get_frameCount_m2463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Time_t2782_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m2701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Random_t2783_CustomAttributesCacheGenerator_Random_Range_m2360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Random_t2783_CustomAttributesCacheGenerator_Random_RandomRangeInt_m13026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Random_t2783_CustomAttributesCacheGenerator_Random_get_value_m5549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Random_t2783_CustomAttributesCacheGenerator_Random_get_insideUnitSphere_m3047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m13029(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_t2785_PlayerPrefs_GetString_m3174_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_DeleteKey_m2653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isStopped_m2593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isPaused_m2592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_startSize_m2631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_simulationSpace_m2571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_simulationSpace_m2606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_SetParticles_m2566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_GetParticles_m2564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Play_m13030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Stop_m13031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Clear_m13032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Play_m2594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Play_m13033_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Stop_m2591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Stop_m13034_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Clear_m2570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Clear_m13035_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_INTERNAL_CALL_Emit_m13036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void ParticleSystemRenderer_t190_CustomAttributesCacheGenerator_ParticleSystemRenderer_get_renderMode_m2604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m13056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_Raycast_m2862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Raycast_m2498_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Raycast_m2498_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_Raycast_m3073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Raycast_m2475_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Raycast_m2475_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_RaycastAll_m2920_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_RaycastAll_m2920_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_RaycastAll_m13057_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_RaycastAll_m13057_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m13058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Linecast_m5605_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_velocity_m13059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_velocity_m13060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_angularVelocity_m13061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_angularVelocity_m13062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_set_isKinematic_m2959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForce_m3267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m13063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForceAtPosition_m2622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForceAtPosition_m13064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_position_m13065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_position_m13066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_rotation_m13067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_rotation_m13068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_get_enabled_m5517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_set_enabled_m2914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m13069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_INTERNAL_get_bounds_m13070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void BoxCollider_t1128_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_center_m13071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void BoxCollider_t1128_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_size_m13072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SphereCollider_t1129_CustomAttributesCacheGenerator_SphereCollider_INTERNAL_get_center_m13073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void SphereCollider_t1129_CustomAttributesCacheGenerator_SphereCollider_get_radius_m5515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CapsuleCollider_t1127_CustomAttributesCacheGenerator_CapsuleCollider_get_height_m5511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_INTERNAL_CALL_Move_m13074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_get_height_m5510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m13077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_Raycast_m2919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_t576_Physics2D_Raycast_m2482_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_t576_Physics2D_Raycast_m2482_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_t576_Physics2D_Raycast_m2482_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_t576_Physics2D_Raycast_m2482_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m2918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m13078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m13079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m13080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_get_angularVelocity_m3231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_set_angularVelocity_m3228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_set_isKinematic_m2960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m2950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m13081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_AddForceAtPosition_m2625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m13082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Collider2D_t195_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m13083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_INTERNAL_CALL_SetDestination_m13084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_get_remainingDistance_m2872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioClip_t261_CustomAttributesCacheGenerator_AudioClip_get_length_m5478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_volume_m5461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_volume_m5462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_clip_m5481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_clip_m3069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m13100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_Play_m13100_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m3070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Stop_m5482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m13101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m5480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m13102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_PlayOneShot_m13102_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void AnimationEvent_t2803_CustomAttributesCacheGenerator_AnimationEvent_t2803____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationClip_t296_CustomAttributesCacheGenerator_AnimationClip_get_length_m2940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_t98_AnimationCurve__ctor_m2509_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m13128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Evaluate_m2501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_SetKeys_m13130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_GetKeys_m13131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Init_m13132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_get_clip_m5497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m13136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m13136_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("0.3F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m13136_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("PlayMode.StopSameLayer"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m2873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m13137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_AddClip_m13137_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m13138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetState_m13140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateAtIndex_m13141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateCount_m13142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_set_wrapMode_m3038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_set_time_m3039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_set_speed_m2941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_get_length_m5456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_set_layer_m2935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m13143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_t641_AnimationState_AddMixingTransform_m13143_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m2936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_get_name_m5509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t556_CustomAttributesCacheGenerator_AnimatorStateInfo_t556____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_set_applyRootMotion_m3246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_get_layerCount_m3076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetLayerWeight_m3251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetLayerWeight_m3077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetCurrentAnimatorStateInfo_m2702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m5460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m5548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m13159_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m13159_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m13160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m13160_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m13160_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m5459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t2916 * tmp;
		tmp = (ExcludeFromDocsAttribute_t2916 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t2916_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m13680(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m13161_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m13161_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m13162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m13162_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t2915_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m13162_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t2915 * tmp;
		tmp = (DefaultValueAttribute_t2915 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2915_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13676(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m9546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_set_runtimeAnimatorController_m5458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_StringToHash_m5475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatString_m13163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatID_m13164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatString_m13165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatID_m13166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetBoolString_m13167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetBoolString_m13168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetIntegerString_m13169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetIntegerString_m13170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetTriggerString_m13171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m13172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatStringDamp_m13173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TerrainData_t569_CustomAttributesCacheGenerator_TerrainData_INTERNAL_get_size_m13178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_terrainData_m2387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_INTERNAL_CALL_SampleHeight_m13179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_activeTerrain_m2392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_text_m3284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_font_m3281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_anchor_m3282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_characterSize_m3283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void CharacterInfo_t2812_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void CharacterInfo_t2812_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void CharacterInfo_t2812_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t714_il2cpp_TypeInfo_var;
void CharacterInfo_t2812_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t714 * tmp;
		tmp = (ObsoleteAttribute_t714 *)il2cpp_codegen_object_new (ObsoleteAttribute_t714_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3316(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Font_t529_CustomAttributesCacheGenerator_Font_get_material_m3280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Font_t529_CustomAttributesCacheGenerator_Font_HasCharacter_m9470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Font_t529_CustomAttributesCacheGenerator_Font_get_dynamic_m9556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Font_t529_CustomAttributesCacheGenerator_Font_get_fontSize_m9558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t2813_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1711 * tmp;
		tmp = (EditorBrowsableAttribute_t1711 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7851(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_Init_m13203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m13204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m13207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m9479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m13208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m13209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m13210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m13211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m13212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m13213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m9465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m13214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m13215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m9492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderMode_m9387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m9571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_worldCamera_m2692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m9557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m9574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m9410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m9575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m9376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m9389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m9388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m9392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m9365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m9553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m9543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m13227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m9375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m13230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m9379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m9602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m9373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m13231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m13232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m9369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m9366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransformUtility_t2167_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m13234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransformUtility_t2167_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m13236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t2859_il2cpp_TypeInfo_var;
void RectTransformUtility_t2167_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m9378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t2859 * tmp;
		tmp = (WrapperlessIcall_t2859 *)il2cpp_codegen_object_new (WrapperlessIcall_t2859_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m13471(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t2817_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t2817_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t2817_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t2817_CustomAttributesCacheGenerator_Request_get_sourceId_m13241(CustomAttributesCache* cache)
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
void Request_t2817_CustomAttributesCacheGenerator_Request_get_appId_m13242(CustomAttributesCache* cache)
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
void Request_t2817_CustomAttributesCacheGenerator_Request_get_domain_m13243(CustomAttributesCache* cache)
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
void Response_t2819_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
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
void Response_t2819_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
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
void Response_t2819_CustomAttributesCacheGenerator_Response_get_success_m13252(CustomAttributesCache* cache)
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
void Response_t2819_CustomAttributesCacheGenerator_Response_set_success_m13253(CustomAttributesCache* cache)
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
void Response_t2819_CustomAttributesCacheGenerator_Response_get_extendedInfo_m13254(CustomAttributesCache* cache)
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
void Response_t2819_CustomAttributesCacheGenerator_Response_set_extendedInfo_m13255(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m13260(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m13261(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m13262(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m13263(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m13264(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m13265(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m13266(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m13267(CustomAttributesCache* cache)
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
void CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m13268(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m13271(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m13272(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m13273(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m13274(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m13275(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m13276(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m13277(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m13278(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m13279(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m13280(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m13281(CustomAttributesCache* cache)
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
void CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m13282(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2824_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2824_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2824_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m13286(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2824_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m13287(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2824_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m13288(CustomAttributesCache* cache)
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
void JoinMatchRequest_t2824_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m13289(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m13292(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m13293(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m13294(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m13295(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m13296(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m13297(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m13298(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m13299(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m13300(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m13301(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m13302(CustomAttributesCache* cache)
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
void JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m13303(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t2826_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t2826_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m13307(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t2826_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m13308(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2827_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2827_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2827_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m13311(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2827_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m13312(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2827_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m13313(CustomAttributesCache* cache)
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
void DropConnectionRequest_t2827_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m13314(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m13317(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m13318(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m13319(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m13320(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m13321(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m13322(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m13323(CustomAttributesCache* cache)
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
void ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m13324(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m13327(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m13328(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m13329(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m13330(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m13331(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m13332(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m13336(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m13337(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_name_m13338(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_name_m13339(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m13340(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m13341(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m13342(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m13343(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m13344(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m13345(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m13346(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m13347(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m13348(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m13349(CustomAttributesCache* cache)
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
void MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m13350(CustomAttributesCache* cache)
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
void ListMatchResponse_t2833_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchResponse_t2833_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m13354(CustomAttributesCache* cache)
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
void ListMatchResponse_t2833_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m13355(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultValueAttribute_t2547_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2834_il2cpp_TypeInfo_var;
void AppID_t2834_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		AppID_t2834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5738);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2547 * tmp;
		tmp = (DefaultValueAttribute_t2547 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2547_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13818(tmp, Box(AppID_t2834_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t2547_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2835_il2cpp_TypeInfo_var;
void SourceID_t2835_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		SourceID_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5737);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2547 * tmp;
		tmp = (DefaultValueAttribute_t2547 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2547_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13818(tmp, Box(SourceID_t2835_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t2547_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2836_il2cpp_TypeInfo_var;
void NetworkID_t2836_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		NetworkID_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5739);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t2547 * tmp;
		tmp = (DefaultValueAttribute_t2547 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2547_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13818(tmp, Box(NetworkID_t2836_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t2547_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2837_il2cpp_TypeInfo_var;
void NodeID_t2837_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		NodeID_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5740);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t2547 * tmp;
		tmp = (DefaultValueAttribute_t2547 *)il2cpp_codegen_object_new (DefaultValueAttribute_t2547_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13818(tmp, Box(NodeID_t2837_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var;
void NetworkMatch_t2841_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m13819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t710 * tmp;
		tmp = (DebuggerHiddenAttribute_t710 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3312(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2984_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2984_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m13825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t710 * tmp;
		tmp = (DebuggerHiddenAttribute_t710 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3312(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2984_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m13826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t710 * tmp;
		tmp = (DebuggerHiddenAttribute_t710 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3312(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t2984_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m13828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t710 * tmp;
		tmp = (DebuggerHiddenAttribute_t710 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t710_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3312(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var;
void JsonArray_t2842_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5837);
		EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2985 * tmp;
		tmp = (GeneratedCodeAttribute_t2985 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13829(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t1711 * tmp;
		tmp = (EditorBrowsableAttribute_t1711 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7851(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void JsonObject_t2843_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3297);
		GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5837);
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1711 * tmp;
		tmp = (EditorBrowsableAttribute_t1711 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7851(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t2985 * tmp;
		tmp = (GeneratedCodeAttribute_t2985 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13829(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var;
void SimpleJson_t2846_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5837);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2985 * tmp;
		tmp = (GeneratedCodeAttribute_t2985 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13829(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var;
void SimpleJson_t2846_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m13400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5838);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2986 * tmp;
		tmp = (SuppressMessageAttribute_t2986 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m13830(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m13831(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var;
void SimpleJson_t2846_CustomAttributesCacheGenerator_SimpleJson_NextToken_m13412(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5838);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2986 * tmp;
		tmp = (SuppressMessageAttribute_t2986 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m13830(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var;
void SimpleJson_t2846_CustomAttributesCacheGenerator_SimpleJson_t2846____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1711 * tmp;
		tmp = (EditorBrowsableAttribute_t1711 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1711_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m7851(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2844_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5837);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2985 * tmp;
		tmp = (GeneratedCodeAttribute_t2985 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13829(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t2844_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m13832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5838);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2986 * tmp;
		tmp = (SuppressMessageAttribute_t2986 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m13830(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m13831(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2845_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5837);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2985 * tmp;
		tmp = (GeneratedCodeAttribute_t2985 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13829(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2845_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m13429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5838);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2986 * tmp;
		tmp = (SuppressMessageAttribute_t2986 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m13830(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m13831(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t2845_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m13430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5838);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t2986 * tmp;
		tmp = (SuppressMessageAttribute_t2986 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t2986_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m13830(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m13831(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var;
void ReflectionUtils_t2858_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5837);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t2985 * tmp;
		tmp = (GeneratedCodeAttribute_t2985 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t2985_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13829(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void ReflectionUtils_t2858_CustomAttributesCacheGenerator_ReflectionUtils_t2858_ReflectionUtils_GetConstructorInfo_m13455_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void ReflectionUtils_t2858_CustomAttributesCacheGenerator_ReflectionUtils_t2858_ReflectionUtils_GetContructor_m13460_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void ReflectionUtils_t2858_CustomAttributesCacheGenerator_ReflectionUtils_t2858_ReflectionUtils_GetConstructorByReflection_m13462_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t2987_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1138 * tmp;
		tmp = (DefaultMemberAttribute_t1138 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5615(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2852_CustomAttributesCacheGenerator_ConstructorDelegate_t2852_ConstructorDelegate_Invoke_m13440_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t715_il2cpp_TypeInfo_var;
void ConstructorDelegate_t2852_CustomAttributesCacheGenerator_ConstructorDelegate_t2852_ConstructorDelegate_BeginInvoke_m13441_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t715 * tmp;
		tmp = (ParamArrayAttribute_t715 *)il2cpp_codegen_object_new (ParamArrayAttribute_t715_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2853_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2854_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2855_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2856_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2857_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t2860_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t2199_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void RequireComponent_t711_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void WritableAttribute_t2866_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t2867_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void GUIStateObjects_t2878_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m13495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m13793(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t2881_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void Achievement_t2881_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
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
void Achievement_t2881_CustomAttributesCacheGenerator_Achievement_get_id_m13515(CustomAttributesCache* cache)
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
void Achievement_t2881_CustomAttributesCacheGenerator_Achievement_set_id_m13516(CustomAttributesCache* cache)
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
void Achievement_t2881_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m13517(CustomAttributesCache* cache)
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
void Achievement_t2881_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m13518(CustomAttributesCache* cache)
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
void AchievementDescription_t2882_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void AchievementDescription_t2882_CustomAttributesCacheGenerator_AchievementDescription_get_id_m13525(CustomAttributesCache* cache)
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
void AchievementDescription_t2882_CustomAttributesCacheGenerator_AchievementDescription_set_id_m13526(CustomAttributesCache* cache)
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
void Score_t2883_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
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
void Score_t2883_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
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
void Score_t2883_CustomAttributesCacheGenerator_Score_get_leaderboardID_m13535(CustomAttributesCache* cache)
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
void Score_t2883_CustomAttributesCacheGenerator_Score_set_leaderboardID_m13536(CustomAttributesCache* cache)
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
void Score_t2883_CustomAttributesCacheGenerator_Score_get_value_m13537(CustomAttributesCache* cache)
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
void Score_t2883_CustomAttributesCacheGenerator_Score_set_value_m13538(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_get_id_m13546(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_set_id_m13547(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m13548(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m13549(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_get_range_m13550(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_set_range_m13551(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m13552(CustomAttributesCache* cache)
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
void Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m13553(CustomAttributesCache* cache)
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
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void PropertyAttribute_t923_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void TooltipAttribute_t2202_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void SpaceAttribute_t2200_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void RangeAttribute_t2198_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void MultilineAttribute_t1145_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void TextAreaAttribute_t2203_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t2201_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void StackTraceUtility_t2896_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m13592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m13793(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void StackTraceUtility_t2896_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m13595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m13793(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var;
void StackTraceUtility_t2896_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m13597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2980 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2980 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t2980_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m13793(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t2897_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
void ArgumentCache_t2904_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void ArgumentCache_t2904_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
void ArgumentCache_t2904_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void ArgumentCache_t2904_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void ArgumentCache_t2904_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void ArgumentCache_t2904_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void PersistentCall_t2908_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void PersistentCall_t2908_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
void PersistentCall_t2908_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void PersistentCall_t2908_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
void PersistentCall_t2908_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void PersistentCallGroup_t2910_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var;
void UnityEventBase_t2913_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4101);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t2193 * tmp;
		tmp = (FormerlySerializedAsAttribute_t2193 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t2193_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m9630(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t708_il2cpp_TypeInfo_var;
void UnityEventBase_t2913_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t708 * tmp;
		tmp = (SerializeField_t708 *)il2cpp_codegen_object_new (SerializeField_t708_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t712_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t2914_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t712 * tmp;
		tmp = (AddComponentMenu_t712 *)il2cpp_codegen_object_new (AddComponentMenu_t712_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m3314(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t2915_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t2916_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t2193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m7831(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m7830(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t2918_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1708 * tmp;
		tmp = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[1031] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t2699_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m12263,
	AssetBundleCreateRequest_t2699_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m12264,
	AssetBundle_t1073_CustomAttributesCacheGenerator_AssetBundle_Contains_m5261,
	AssetBundle_t1073_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m12268,
	AssetBundle_t1073_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m12269,
	AssetBundle_t1073_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m12270,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_LayerToName_m12272,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m2955,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_t87_LayerMask_GetMask_m12273_Arg0_ParameterInfo,
	RuntimePlatform_t2703_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t2703_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t2703_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t2703_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t2703_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_processorCount_m2433,
	SystemInfo_t2704_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m12274,
	Coroutine_t2059_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m12277,
	ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m12279,
	ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_t474_ScriptableObject_Internal_CreateScriptableObject_m12279_Arg0_ParameterInfo,
	ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m12280,
	ScriptableObject_t474_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m12281,
	Profiler_t2707_CustomAttributesCacheGenerator_Profiler_BeginSample_m3170,
	Profiler_t2707_CustomAttributesCacheGenerator_Profiler_BeginSampleOnly_m12282,
	Profiler_t2707_CustomAttributesCacheGenerator_Profiler_EndSample_m3171,
	Cursor_t2709_CustomAttributesCacheGenerator_Cursor_get_visible_m5518,
	Cursor_t2709_CustomAttributesCacheGenerator_Cursor_set_visible_m5520,
	Cursor_t2709_CustomAttributesCacheGenerator_Cursor_get_lockState_m5519,
	Cursor_t2709_CustomAttributesCacheGenerator_Cursor_set_lockState_m5521,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m12287,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m12288,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m12289,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m12290,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m12291,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m12292,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m12293,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m12294,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m12295,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m12296,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m12297,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m12298,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m12299,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m12300,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m12301,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m12302,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m12303,
	GameCenterPlatform_t2719_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m12307,
	GcLeaderboard_t2721_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m12351,
	GcLeaderboard_t2721_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m12352,
	GcLeaderboard_t2721_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m12353,
	GcLeaderboard_t2721_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m12354,
	RenderSettings_t2722_CustomAttributesCacheGenerator_RenderSettings_set_skybox_m2345,
	MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_sharedMesh_m2514,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_Internal_Create_m12355,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_t93_Mesh_Internal_Create_m12355_Arg0_ParameterInfo,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertices_m2494,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_normals_m2495,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_uv_m2496,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertexCount_m2632,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_boneWeights_m2518,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_bindposes_m2520,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_bones_m2519,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_sharedMesh_m2517,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_BakeMesh_m2525,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_enabled_m5516,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_enabled_m2915,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_material_m2329,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_material_m2962,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sharedMaterial_m2557,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_sharedMaterial_m2558,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_bounds_m2364,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_isVisible_m2600,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m9335,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m9336,
	Graphics_t2724_CustomAttributesCacheGenerator_Graphics_DrawTexture_m12368,
	GeometryUtility_t2725_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m12371,
	GeometryUtility_t2725_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m12372,
	Screen_t2726_CustomAttributesCacheGenerator_Screen_get_width_m2337,
	Screen_t2726_CustomAttributesCacheGenerator_Screen_get_height_m2341,
	Screen_t2726_CustomAttributesCacheGenerator_Screen_get_dpi_m9573,
	Texture_t903_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m12374,
	Texture_t903_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m12375,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m12378,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Internal_Create_m12378_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m9368,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_SetPixel_m12379,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m2456,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m12380,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_GetPixels32_m12380_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m2457,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m12381,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m12381_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m12381_Arg1_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m5493,
	RenderTexture_t2727_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m12382,
	RenderTexture_t2727_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m12383,
	GUITexture_t904_CustomAttributesCacheGenerator_GUITexture_INTERNAL_set_color_m12386,
	GUITexture_t904_CustomAttributesCacheGenerator_GUITexture_set_texture_m5494,
	GUILayer_t1119_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m12388,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Init_m12391,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Cleanup_m12392,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Evaluate_m2589,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_colorKeys_m2553,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_alphaKeys_m2554,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_SetKeys_m2555,
	GUI_t566_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t566_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t566_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m12399,
	GUI_t566_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m12400,
	GUI_t566_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m12401,
	GUI_t566_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m12402,
	GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_get_color_m12403,
	GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_set_color_m12404,
	GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_set_contentColor_m12405,
	GUI_t566_CustomAttributesCacheGenerator_GUI_get_changed_m3067,
	GUI_t566_CustomAttributesCacheGenerator_GUI_set_changed_m12406,
	GUI_t566_CustomAttributesCacheGenerator_GUI_get_enabled_m2356,
	GUI_t566_CustomAttributesCacheGenerator_GUI_set_enabled_m2353,
	GUI_t566_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m12408,
	GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m12411,
	GUI_t566_CustomAttributesCacheGenerator_GUI_DrawTexture_m5577,
	GUI_t566_CustomAttributesCacheGenerator_GUI_t566_GUI_DrawTexture_m5571_Arg2_ParameterInfo,
	GUI_t566_CustomAttributesCacheGenerator_GUI_t566_GUI_DrawTexture_m5571_Arg3_ParameterInfo,
	GUI_t566_CustomAttributesCacheGenerator_GUI_t566_GUI_DrawTexture_m5571_Arg4_ParameterInfo,
	GUI_t566_CustomAttributesCacheGenerator_GUI_DrawTextureWithTexCoords_m5578,
	GUI_t566_CustomAttributesCacheGenerator_GUI_t566_GUI_DrawTextureWithTexCoords_m5570_Arg3_ParameterInfo,
	GUI_t566_CustomAttributesCacheGenerator_GUI_get_blendMaterial_m12412,
	GUI_t566_CustomAttributesCacheGenerator_GUI_get_blitMaterial_m12413,
	GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m12417,
	GUI_t566_CustomAttributesCacheGenerator_GUI_SetNextControlName_m2977,
	GUI_t566_CustomAttributesCacheGenerator_GUI_GetNameOfFocusedControl_m2975,
	GUI_t566_CustomAttributesCacheGenerator_GUI_FocusControl_m2976,
	GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m12424,
	GUI_t566_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m12433,
	GUI_t566_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m12435,
	GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoWindow_m12445,
	GUI_t566_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DragWindow_m12446,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Label_m2956_Arg1_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Label_m2911_Arg2_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Button_m2957_Arg1_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Button_m3298_Arg1_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_TextField_m2989_Arg1_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_TextArea_m5240_Arg1_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Toggle_m3178_Arg2_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Toggle_m3299_Arg2_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Toolbar_m2983_Arg2_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Toolbar_m12453_Arg3_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_HorizontalSlider_m3181_Arg3_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginHorizontal_m2987_Arg0_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginHorizontal_m12455_Arg2_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginVertical_m3006_Arg0_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginVertical_m12456_Arg2_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginScrollView_m2984_Arg1_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_BeginScrollView_m12458_Arg6_ParameterInfo,
	GUILayout_t2736_CustomAttributesCacheGenerator_GUILayout_t2736_GUILayout_Window_m3175_Arg4_ParameterInfo,
	GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m12472,
	GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m12474,
	GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m12475,
	GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_t2740_GUILayoutUtility_GetRect_m12479_Arg2_ParameterInfo,
	GUILayoutUtility_t2740_CustomAttributesCacheGenerator_GUILayoutUtility_t2740_GUILayoutUtility_GetRect_m12481_Arg3_ParameterInfo,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m12520,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m12524,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m12527,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m12528,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m12529,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m12530,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m12531,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m12532,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m12534,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m12536,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m12540,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m12541,
	GUIUtility_t634_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m12542,
	GUIClip_t2748_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m12544,
	GUIClip_t2748_CustomAttributesCacheGenerator_GUIClip_Pop_m12545,
	GUISettings_t2749_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t2749_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t2749_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t2749_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t2749_CustomAttributesCacheGenerator_m_SelectionColor,
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
	GUIContent_t539_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t539_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t539_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_Init_m12606,
	GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m12607,
	GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m12608,
	GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_get_textColor_m12609,
	GUIStyleState_t637_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m12610,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_Init_m12613,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_Cleanup_m12614,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_left_m5589,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_set_left_m12615,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_right_m5590,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_set_right_m12616,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_top_m5591,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_set_top_m12617,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_bottom_m5592,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_set_bottom_m12618,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m9583,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_get_vertical_m9584,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m12620,
	RectOffset_t648_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m12622,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Init_m12627,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m12628,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m12629,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_name_m12630,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_name_m12631,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m12632,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m12634,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m12635,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m12636,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_alignment_m5572,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2352,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m5573,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m2971,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m12637,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m12638,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m12639,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m12640,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m12641,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m12642,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m12643,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fontStyle_m5601,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m5602,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m12645,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Draw_m12648,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_t303_GUIStyle_Draw_m12649_Arg3_ParameterInfo,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m12651,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m12652,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m12655,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m12656,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m12657,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m12660,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m12663,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m12665,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m9501,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m9502,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg1_ParameterInfo,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg2_ParameterInfo,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg3_ParameterInfo,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg4_ParameterInfo,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg5_ParameterInfo,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_t2054_TouchScreenKeyboard_Open_m12666_Arg6_ParameterInfo,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m9452,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m9453,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m9500,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m9451,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m9499,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m9463,
	TouchScreenKeyboard_t2054_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m9462,
	Event_t643_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t643_CustomAttributesCacheGenerator_Event_Init_m12667,
	Event_t643_CustomAttributesCacheGenerator_Event_Cleanup_m12669,
	Event_t643_CustomAttributesCacheGenerator_Event_get_rawType_m9471,
	Event_t643_CustomAttributesCacheGenerator_Event_get_type_m2973,
	Event_t643_CustomAttributesCacheGenerator_Event_set_type_m12670,
	Event_t643_CustomAttributesCacheGenerator_Event_GetTypeForControl_m12671,
	Event_t643_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m12673,
	Event_t643_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m12674,
	Event_t643_CustomAttributesCacheGenerator_Event_get_modifiers_m9469,
	Event_t643_CustomAttributesCacheGenerator_Event_set_modifiers_m12675,
	Event_t643_CustomAttributesCacheGenerator_Event_get_character_m5553,
	Event_t643_CustomAttributesCacheGenerator_Event_set_character_m12676,
	Event_t643_CustomAttributesCacheGenerator_Event_get_commandName_m12677,
	Event_t643_CustomAttributesCacheGenerator_Event_get_keyCode_m2974,
	Event_t643_CustomAttributesCacheGenerator_Event_set_keyCode_m12678,
	Event_t643_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m12679,
	Event_t643_CustomAttributesCacheGenerator_Event_Use_m5241,
	Event_t643_CustomAttributesCacheGenerator_Event_PopEvent_m9472,
	EventModifiers_t2756_CustomAttributesCacheGenerator,
	Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m12685,
	Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireSphere_m12686,
	Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawSphere_m12687,
	Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireCube_m12688,
	Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m12689,
	Gizmos_t2757_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m12690,
	Vector2_t97_CustomAttributesCacheGenerator,
	Vector3_t53_CustomAttributesCacheGenerator,
	Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_Slerp_m12696,
	Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_RotateTowards_m12697,
	Color_t121_CustomAttributesCacheGenerator,
	Color32_t89_CustomAttributesCacheGenerator,
	Quaternion_t69_CustomAttributesCacheGenerator,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m12709,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_t69_Quaternion_LookRotation_m2863_Arg1_ParameterInfo,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_LookRotation_m3036,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_LookRotation_m12710,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Slerp_m12711,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Lerp_m12712,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_UnclampedSlerp_m12714,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m12715,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m12718,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m12720,
	Matrix4x4_t68_CustomAttributesCacheGenerator,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m12733,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m12735,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m12737,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m12740,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m12751,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m12754,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m12755,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m12768,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m12770,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m12773,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m12777,
	Vector4_t2149_CustomAttributesCacheGenerator,
	Mathf_t568_CustomAttributesCacheGenerator_Mathf_SmoothDamp_m2381,
	Mathf_t568_CustomAttributesCacheGenerator_Mathf_t568_Mathf_SmoothDamp_m9523_Arg4_ParameterInfo,
	Mathf_t568_CustomAttributesCacheGenerator_Mathf_t568_Mathf_SmoothDamp_m9523_Arg5_ParameterInfo,
	Mathf_t568_CustomAttributesCacheGenerator_Mathf_SmoothDampAngle_m3034,
	Mathf_t568_CustomAttributesCacheGenerator_Mathf_t568_Mathf_SmoothDampAngle_m12806_Arg4_ParameterInfo,
	Mathf_t568_CustomAttributesCacheGenerator_Mathf_t568_Mathf_SmoothDampAngle_m12806_Arg5_ParameterInfo,
	Mathf_t568_CustomAttributesCacheGenerator_Mathf_PerlinNoise_m2614,
	DrivenTransformProperties_t2759_CustomAttributesCacheGenerator,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m12812,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m12813,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m12814,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m12815,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m12816,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m12817,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m12818,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m12819,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m12820,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m12821,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m12822,
	Resources_t2763_CustomAttributesCacheGenerator_Resources_FindObjectsOfTypeAll_m3279,
	Resources_t2763_CustomAttributesCacheGenerator_Resources_Load_m3149,
	TextAsset_t551_CustomAttributesCacheGenerator_TextAsset_get_text_m2669,
	SerializePrivateVariables_t2764_CustomAttributesCacheGenerator,
	Shader_t573_CustomAttributesCacheGenerator_Shader_Find_m2443,
	Shader_t573_CustomAttributesCacheGenerator_Shader_PropertyToID_m12830,
	Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m12833,
	Material_t48_CustomAttributesCacheGenerator_Material_GetTexture_m12835,
	Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureOffset_m12837,
	Material_t48_CustomAttributesCacheGenerator_Material_SetFloat_m12839,
	Material_t48_CustomAttributesCacheGenerator_Material_HasProperty_m12840,
	Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m12841,
	Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithShader_m12841_Arg0_ParameterInfo,
	Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m12842,
	Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithMaterial_m12842_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t2765_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t2765_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m12845,
	SphericalHarmonicsL2_t2765_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m12848,
	SphericalHarmonicsL2_t2765_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m12851,
	Sprite_t555_CustomAttributesCacheGenerator_Sprite_Create_m2851,
	Sprite_t555_CustomAttributesCacheGenerator_Sprite_INTERNAL_CALL_Create_m12861,
	Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_rect_m9413,
	Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m9409,
	Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_texture_m9406,
	Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_textureRect_m9429,
	Sprite_t555_CustomAttributesCacheGenerator_Sprite_get_border_m9407,
	DataUtility_t2767_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m9419,
	DataUtility_t2767_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m9418,
	DataUtility_t2767_CustomAttributesCacheGenerator_DataUtility_GetPadding_m9412,
	DataUtility_t2767_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m12862,
	WWW_t899_CustomAttributesCacheGenerator_WWW_DestroyWWW_m12866,
	WWW_t899_CustomAttributesCacheGenerator_WWW_InitWWW_m12867,
	WWW_t899_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m12869,
	WWW_t899_CustomAttributesCacheGenerator_WWW_get_bytes_m12872,
	WWW_t899_CustomAttributesCacheGenerator_WWW_get_error_m7618,
	WWW_t899_CustomAttributesCacheGenerator_WWW_GetAudioClipInternal_m12876,
	WWW_t899_CustomAttributesCacheGenerator_WWW_get_isDone_m5488,
	WWW_t899_CustomAttributesCacheGenerator_WWW_get_progress_m7622,
	WWWForm_t2769_CustomAttributesCacheGenerator_WWWForm_AddField_m12880,
	WWWForm_t2769_CustomAttributesCacheGenerator_WWWForm_t2769_WWWForm_AddField_m12881_Arg2_ParameterInfo,
	WWWTranscoder_t2770_CustomAttributesCacheGenerator_WWWTranscoder_t2770_WWWTranscoder_QPEncode_m12888_Arg1_ParameterInfo,
	WWWTranscoder_t2770_CustomAttributesCacheGenerator_WWWTranscoder_t2770_WWWTranscoder_SevenBitClean_m12891_Arg1_ParameterInfo,
	CacheIndex_t2771_CustomAttributesCacheGenerator,
	UnityString_t2772_CustomAttributesCacheGenerator_UnityString_t2772_UnityString_Format_m12893_Arg1_ParameterInfo,
	AsyncOperation_t946_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m12895,
	AsyncOperation_t946_CustomAttributesCacheGenerator_AsyncOperation_get_isDone_m5538,
	Application_t1650_CustomAttributesCacheGenerator_Application_Quit_m3276,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_loadedLevel_m3008,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2343,
	Application_t1650_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m12904,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_isLoadingLevel_m3225,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_isPlaying_m2590,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_isEditor_m9504,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m7646,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_platform_m7637,
	Application_t1650_CustomAttributesCacheGenerator_Application_set_runInBackground_m2966,
	Application_t1650_CustomAttributesCacheGenerator_Application_HasProLicense_m5536,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m7645,
	Application_t1650_CustomAttributesCacheGenerator_Application_OpenURL_m2995,
	Application_t1650_CustomAttributesCacheGenerator_Application_get_systemLanguage_m5269,
	Application_t1650_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m12906,
	Application_t1650_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m3295,
	Application_t1650_CustomAttributesCacheGenerator_Application_t1650____persistentDataPath_PropertyInfo,
	Behaviour_t1130_CustomAttributesCacheGenerator_Behaviour_get_enabled_m2465,
	Behaviour_t1130_CustomAttributesCacheGenerator_Behaviour_set_enabled_m2693,
	Behaviour_t1130_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m9289,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m9334,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m9333,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m5436,
	Camera_t356_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m5437,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_depth_m9258,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_cullingMask_m9338,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_eventMask_m12913,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m12914,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_targetTexture_m12916,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_worldToCameraMatrix_m12917,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m12919,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_clearFlags_m12921,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m12922,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m12923,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m12924,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportPointToRay_m12925,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m12926,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_main_m2461,
	Camera_t356_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m12927,
	Camera_t356_CustomAttributesCacheGenerator_Camera_GetAllCameras_m12928,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m12933,
	Camera_t356_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m12935,
	CameraCallback_t2773_CustomAttributesCacheGenerator,
	Debug_t2774_CustomAttributesCacheGenerator_Debug_DrawLine_m3253,
	Debug_t2774_CustomAttributesCacheGenerator_Debug_DrawLine_m3030,
	Debug_t2774_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m12936,
	Debug_t2774_CustomAttributesCacheGenerator_Debug_Internal_Log_m12937,
	Debug_t2774_CustomAttributesCacheGenerator_Debug_t2774_Debug_Internal_Log_m12937_Arg2_ParameterInfo,
	Debug_t2774_CustomAttributesCacheGenerator_Debug_Internal_LogException_m12938,
	Debug_t2774_CustomAttributesCacheGenerator_Debug_t2774_Debug_Internal_LogException_m12938_Arg1_ParameterInfo,
	Display_t2777_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m12963,
	Display_t2777_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m12964,
	Display_t2777_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m12965,
	Display_t2777_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m12966,
	Display_t2777_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m12967,
	Display_t2777_CustomAttributesCacheGenerator_Display_SetParamsImpl_m12968,
	Display_t2777_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m12969,
	Display_t2777_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m12970,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Internal_CancelInvokeAll_m12971,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2699,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_InvokeRepeating_m3287,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2698,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m12972,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m12974,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m12975,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopAllCoroutines_m2766,
	Input_t564_CustomAttributesCacheGenerator_Input_GetKeyInt_m12977,
	Input_t564_CustomAttributesCacheGenerator_Input_GetKeyUpInt_m12978,
	Input_t564_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m12979,
	Input_t564_CustomAttributesCacheGenerator_Input_GetAxis_m2379,
	Input_t564_CustomAttributesCacheGenerator_Input_GetAxisRaw_m2951,
	Input_t564_CustomAttributesCacheGenerator_Input_GetButton_m3033,
	Input_t564_CustomAttributesCacheGenerator_Input_GetButtonDown_m2846,
	Input_t564_CustomAttributesCacheGenerator_Input_GetButtonUp_m2889,
	Input_t564_CustomAttributesCacheGenerator_Input_GetMouseButton_m2378,
	Input_t564_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m2874,
	Input_t564_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3262,
	Input_t564_CustomAttributesCacheGenerator_Input_get_mousePosition_m2877,
	Input_t564_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m9302,
	Input_t564_CustomAttributesCacheGenerator_Input_get_mousePresent_m9325,
	Input_t564_CustomAttributesCacheGenerator_Input_get_acceleration_m3296,
	Input_t564_CustomAttributesCacheGenerator_Input_GetTouch_m3260,
	Input_t564_CustomAttributesCacheGenerator_Input_get_touchCount_m2890,
	Input_t564_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m9503,
	Input_t564_CustomAttributesCacheGenerator_Input_get_compositionString_m9454,
	Input_t564_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m12980,
	HideFlags_t2780_CustomAttributesCacheGenerator,
	Object_t563_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m12982,
	Object_t563_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m12984,
	Object_t563_CustomAttributesCacheGenerator_Object_Destroy_m5435,
	Object_t563_CustomAttributesCacheGenerator_Object_t563_Object_Destroy_m5435_Arg1_ParameterInfo,
	Object_t563_CustomAttributesCacheGenerator_Object_Destroy_m2667,
	Object_t563_CustomAttributesCacheGenerator_Object_DestroyImmediate_m12985,
	Object_t563_CustomAttributesCacheGenerator_Object_t563_Object_DestroyImmediate_m12985_Arg1_ParameterInfo,
	Object_t563_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2431,
	Object_t563_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m3151,
	Object_t563_CustomAttributesCacheGenerator_Object_get_name_m2397,
	Object_t563_CustomAttributesCacheGenerator_Object_set_name_m2449,
	Object_t563_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2965,
	Object_t563_CustomAttributesCacheGenerator_Object_set_hideFlags_m3193,
	Object_t563_CustomAttributesCacheGenerator_Object_DestroyObject_m12986,
	Object_t563_CustomAttributesCacheGenerator_Object_t563_Object_DestroyObject_m12986_Arg1_ParameterInfo,
	Object_t563_CustomAttributesCacheGenerator_Object_DestroyObject_m2398,
	Object_t563_CustomAttributesCacheGenerator_Object_ToString_m3347,
	Object_t563_CustomAttributesCacheGenerator_Object_Instantiate_m2857,
	Object_t563_CustomAttributesCacheGenerator_Object_Instantiate_m5457,
	Object_t563_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2348,
	Component_t462_CustomAttributesCacheGenerator_Component_get_transform_m2334,
	Component_t462_CustomAttributesCacheGenerator_Component_get_gameObject_m2365,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m5496,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m12992,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m13801,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponent_m5463,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m5272,
	Component_t462_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m12993,
	Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m2734,
	Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_SendMessage_m2734_Arg1_ParameterInfo,
	Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_SendMessage_m2734_Arg2_ParameterInfo,
	Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m3269,
	Component_t462_CustomAttributesCacheGenerator_Component_SendMessage_m2754,
	Component_t462_CustomAttributesCacheGenerator_Component_BroadcastMessage_m5273,
	Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_BroadcastMessage_m5273_Arg1_ParameterInfo,
	Component_t462_CustomAttributesCacheGenerator_Component_t462_Component_BroadcastMessage_m5273_Arg2_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject__ctor_m2450_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m2451,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m12994,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m13807,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5271,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m12995,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_transform_m2375,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_layer_m2607,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_layer_m9482,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SetActive_m2342,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m2346,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m2462,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_tag_m12996,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_tag_m3044,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m5540,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m3015,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m2888,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m2888_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m2888_Arg2_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m3003,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_BroadcastMessage_m2887,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m2887_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m2887_Arg2_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m12997,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_AddComponent_m5442,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m12998,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_Internal_CreateGameObject_m12998_Arg0_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Find_m3286,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m13002,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m13003,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m13004,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m13005,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m13006,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m13007,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m13008,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m13009,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m13010,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m13011,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_parentInternal_m13012,
	Transform_t54_CustomAttributesCacheGenerator_Transform_set_parentInternal_m13013,
	Transform_t54_CustomAttributesCacheGenerator_Transform_SetParent_m2748,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m13014,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m13015,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m13016_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_Rotate_m2937,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m13017_Arg3_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2384,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m13018_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m13019_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2853,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_LookAt_m13020,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m13021,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformDirection_m13022,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m13023,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m13024,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_root_m3072,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_childCount_m2369,
	Transform_t54_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m9481,
	Transform_t54_CustomAttributesCacheGenerator_Transform_Find_m5455,
	Transform_t54_CustomAttributesCacheGenerator_Transform_GetChild_m3057,
	Time_t2782_CustomAttributesCacheGenerator_Time_get_time_m2327,
	Time_t2782_CustomAttributesCacheGenerator_Time_get_timeSinceLevelLoad_m2459,
	Time_t2782_CustomAttributesCacheGenerator_Time_get_deltaTime_m2359,
	Time_t2782_CustomAttributesCacheGenerator_Time_get_unscaledTime_m9327,
	Time_t2782_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m9343,
	Time_t2782_CustomAttributesCacheGenerator_Time_get_timeScale_m2603,
	Time_t2782_CustomAttributesCacheGenerator_Time_set_timeScale_m2644,
	Time_t2782_CustomAttributesCacheGenerator_Time_get_frameCount_m2463,
	Time_t2782_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m2701,
	Random_t2783_CustomAttributesCacheGenerator_Random_Range_m2360,
	Random_t2783_CustomAttributesCacheGenerator_Random_RandomRangeInt_m13026,
	Random_t2783_CustomAttributesCacheGenerator_Random_get_value_m5549,
	Random_t2783_CustomAttributesCacheGenerator_Random_get_insideUnitSphere_m3047,
	PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m13029,
	PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3174,
	PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_t2785_PlayerPrefs_GetString_m3174_Arg1_ParameterInfo,
	PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2650,
	PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2649,
	PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_DeleteKey_m2653,
	PlayerPrefs_t2785_CustomAttributesCacheGenerator_PlayerPrefs_Save_m7613,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isStopped_m2593,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isPaused_m2592,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_startSize_m2631,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_simulationSpace_m2571,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_simulationSpace_m2606,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_SetParticles_m2566,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_GetParticles_m2564,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Play_m13030,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Stop_m13031,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Clear_m13032,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Play_m2594,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Play_m13033_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Stop_m2591,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Stop_m13034_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Clear_m2570,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Clear_m13035_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_INTERNAL_CALL_Emit_m13036,
	ParticleSystemRenderer_t190_CustomAttributesCacheGenerator_ParticleSystemRenderer_get_renderMode_m2604,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m13056,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_Raycast_m2862,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Raycast_m2498_Arg3_ParameterInfo,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Raycast_m2498_Arg4_ParameterInfo,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_Raycast_m3073,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Raycast_m2475_Arg2_ParameterInfo,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Raycast_m2475_Arg3_ParameterInfo,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_RaycastAll_m2920_Arg1_ParameterInfo,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_RaycastAll_m2920_Arg2_ParameterInfo,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_RaycastAll_m13057_Arg2_ParameterInfo,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_RaycastAll_m13057_Arg3_ParameterInfo,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m13058,
	Physics_t2791_CustomAttributesCacheGenerator_Physics_t2791_Physics_Linecast_m5605_Arg3_ParameterInfo,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_velocity_m13059,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_velocity_m13060,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_angularVelocity_m13061,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_angularVelocity_m13062,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_set_isKinematic_m2959,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForce_m3267,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m13063,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForceAtPosition_m2622,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForceAtPosition_m13064,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_position_m13065,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_position_m13066,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_rotation_m13067,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_rotation_m13068,
	Collider_t194_CustomAttributesCacheGenerator_Collider_get_enabled_m5517,
	Collider_t194_CustomAttributesCacheGenerator_Collider_set_enabled_m2914,
	Collider_t194_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m13069,
	Collider_t194_CustomAttributesCacheGenerator_Collider_INTERNAL_get_bounds_m13070,
	BoxCollider_t1128_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_center_m13071,
	BoxCollider_t1128_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_size_m13072,
	SphereCollider_t1129_CustomAttributesCacheGenerator_SphereCollider_INTERNAL_get_center_m13073,
	SphereCollider_t1129_CustomAttributesCacheGenerator_SphereCollider_get_radius_m5515,
	CapsuleCollider_t1127_CustomAttributesCacheGenerator_CapsuleCollider_get_height_m5511,
	CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_INTERNAL_CALL_Move_m13074,
	CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_get_height_m5510,
	Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m13077,
	Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_Raycast_m2919,
	Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_t576_Physics2D_Raycast_m2482_Arg2_ParameterInfo,
	Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_t576_Physics2D_Raycast_m2482_Arg3_ParameterInfo,
	Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_t576_Physics2D_Raycast_m2482_Arg4_ParameterInfo,
	Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_t576_Physics2D_Raycast_m2482_Arg5_ParameterInfo,
	Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m2918,
	Physics2D_t576_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m13078,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m13079,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m13080,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_get_angularVelocity_m3231,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_set_angularVelocity_m3228,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_set_isKinematic_m2960,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m2950,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m13081,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_AddForceAtPosition_m2625,
	Rigidbody2D_t324_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m13082,
	Collider2D_t195_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m13083,
	NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_INTERNAL_CALL_SetDestination_m13084,
	NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_get_remainingDistance_m2872,
	AudioClip_t261_CustomAttributesCacheGenerator_AudioClip_get_length_m5478,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_volume_m5461,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_volume_m5462,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_clip_m5481,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_clip_m3069,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m13100,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_Play_m13100_Arg0_ParameterInfo,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m3070,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Stop_m5482,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m13101,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m5480,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m13102,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_PlayOneShot_m13102_Arg1_ParameterInfo,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m2784,
	AnimationEvent_t2803_CustomAttributesCacheGenerator_AnimationEvent_t2803____data_PropertyInfo,
	AnimationClip_t296_CustomAttributesCacheGenerator_AnimationClip_get_length_m2940,
	AnimationCurve_t98_CustomAttributesCacheGenerator,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_t98_AnimationCurve__ctor_m2509_Arg0_ParameterInfo,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m13128,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Evaluate_m2501,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_SetKeys_m13130,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_GetKeys_m13131,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Init_m13132,
	Animation_t298_CustomAttributesCacheGenerator,
	Animation_t298_CustomAttributesCacheGenerator_Animation_get_clip_m5497,
	Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m13136,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m13136_Arg1_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m13136_Arg2_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m2873,
	Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m13137,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_AddClip_m13137_Arg4_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m13138,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetState_m13140,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateAtIndex_m13141,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateCount_m13142,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_set_wrapMode_m3038,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_set_time_m3039,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_set_speed_m2941,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_get_length_m5456,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_set_layer_m2935,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m13143,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_t641_AnimationState_AddMixingTransform_m13143_Arg1_ParameterInfo,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m2936,
	AnimationState_t641_CustomAttributesCacheGenerator_AnimationState_get_name_m5509,
	AnimatorStateInfo_t556_CustomAttributesCacheGenerator_AnimatorStateInfo_t556____nameHash_PropertyInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_set_applyRootMotion_m3246,
	Animator_t214_CustomAttributesCacheGenerator_Animator_get_layerCount_m3076,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetLayerWeight_m3251,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetLayerWeight_m3077,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetCurrentAnimatorStateInfo_m2702,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m5460,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m5548,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m13159_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m13159_Arg3_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m13160,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m13160_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m13160_Arg3_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m5459,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m13161_Arg1_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m13161_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m13162,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m13162_Arg1_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m13162_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m9546,
	Animator_t214_CustomAttributesCacheGenerator_Animator_set_runtimeAnimatorController_m5458,
	Animator_t214_CustomAttributesCacheGenerator_Animator_StringToHash_m5475,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatString_m13163,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatID_m13164,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatString_m13165,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatID_m13166,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetBoolString_m13167,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetBoolString_m13168,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetIntegerString_m13169,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetIntegerString_m13170,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetTriggerString_m13171,
	Animator_t214_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m13172,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatStringDamp_m13173,
	TerrainData_t569_CustomAttributesCacheGenerator_TerrainData_INTERNAL_get_size_m13178,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_terrainData_m2387,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_INTERNAL_CALL_SampleHeight_m13179,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_activeTerrain_m2392,
	TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_text_m3284,
	TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_font_m3281,
	TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_anchor_m3282,
	TextMesh_t528_CustomAttributesCacheGenerator_TextMesh_set_characterSize_m3283,
	CharacterInfo_t2812_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t2812_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t2812_CustomAttributesCacheGenerator_width,
	CharacterInfo_t2812_CustomAttributesCacheGenerator_flipped,
	Font_t529_CustomAttributesCacheGenerator_Font_get_material_m3280,
	Font_t529_CustomAttributesCacheGenerator_Font_HasCharacter_m9470,
	Font_t529_CustomAttributesCacheGenerator_Font_get_dynamic_m9556,
	Font_t529_CustomAttributesCacheGenerator_Font_get_fontSize_m9558,
	FontTextureRebuildCallback_t2813_CustomAttributesCacheGenerator,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_Init_m13203,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m13204,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m13207,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m9479,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m13208,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m13209,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m13210,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m13211,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m13212,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m13213,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m9465,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m13214,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m13215,
	TextGenerator_t2057_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m9492,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderMode_m9387,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m9571,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2691,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_worldCamera_m2692,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m9557,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m9574,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m9410,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m9575,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m9376,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m9389,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m9388,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m9392,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m9365,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m9553,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m9543,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m13227,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m9375,
	CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m13230,
	CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m9379,
	CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m9602,
	CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m9373,
	CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m13231,
	CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m13232,
	CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m9369,
	CanvasRenderer_t2031_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m9366,
	RectTransformUtility_t2167_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m13234,
	RectTransformUtility_t2167_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m13236,
	RectTransformUtility_t2167_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m9378,
	Request_t2817_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t2817_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t2817_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t2817_CustomAttributesCacheGenerator_Request_get_sourceId_m13241,
	Request_t2817_CustomAttributesCacheGenerator_Request_get_appId_m13242,
	Request_t2817_CustomAttributesCacheGenerator_Request_get_domain_m13243,
	Response_t2819_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t2819_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t2819_CustomAttributesCacheGenerator_Response_get_success_m13252,
	Response_t2819_CustomAttributesCacheGenerator_Response_set_success_m13253,
	Response_t2819_CustomAttributesCacheGenerator_Response_get_extendedInfo_m13254,
	Response_t2819_CustomAttributesCacheGenerator_Response_set_extendedInfo_m13255,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m13260,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m13261,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m13262,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m13263,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m13264,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m13265,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m13266,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m13267,
	CreateMatchRequest_t2822_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m13268,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m13271,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m13272,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m13273,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m13274,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m13275,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m13276,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m13277,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m13278,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m13279,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m13280,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m13281,
	CreateMatchResponse_t2823_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m13282,
	JoinMatchRequest_t2824_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t2824_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t2824_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m13286,
	JoinMatchRequest_t2824_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m13287,
	JoinMatchRequest_t2824_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m13288,
	JoinMatchRequest_t2824_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m13289,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m13292,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m13293,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m13294,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m13295,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m13296,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m13297,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m13298,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m13299,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m13300,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m13301,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m13302,
	JoinMatchResponse_t2825_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m13303,
	DestroyMatchRequest_t2826_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t2826_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m13307,
	DestroyMatchRequest_t2826_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m13308,
	DropConnectionRequest_t2827_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t2827_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t2827_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m13311,
	DropConnectionRequest_t2827_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m13312,
	DropConnectionRequest_t2827_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m13313,
	DropConnectionRequest_t2827_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m13314,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m13317,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m13318,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m13319,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m13320,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m13321,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m13322,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m13323,
	ListMatchRequest_t2828_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m13324,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m13327,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m13328,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m13329,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m13330,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m13331,
	MatchDirectConnectInfo_t2829_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m13332,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m13336,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m13337,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_name_m13338,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_name_m13339,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m13340,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m13341,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m13342,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m13343,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m13344,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m13345,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m13346,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m13347,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m13348,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m13349,
	MatchDesc_t2831_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m13350,
	ListMatchResponse_t2833_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t2833_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m13354,
	ListMatchResponse_t2833_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m13355,
	AppID_t2834_CustomAttributesCacheGenerator,
	SourceID_t2835_CustomAttributesCacheGenerator,
	NetworkID_t2836_CustomAttributesCacheGenerator,
	NodeID_t2837_CustomAttributesCacheGenerator,
	NetworkMatch_t2841_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m13819,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2984_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2984_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m13825,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2984_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m13826,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t2984_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m13828,
	JsonArray_t2842_CustomAttributesCacheGenerator,
	JsonObject_t2843_CustomAttributesCacheGenerator,
	SimpleJson_t2846_CustomAttributesCacheGenerator,
	SimpleJson_t2846_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m13400,
	SimpleJson_t2846_CustomAttributesCacheGenerator_SimpleJson_NextToken_m13412,
	SimpleJson_t2846_CustomAttributesCacheGenerator_SimpleJson_t2846____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t2844_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t2844_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m13832,
	PocoJsonSerializerStrategy_t2845_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t2845_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m13429,
	PocoJsonSerializerStrategy_t2845_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m13430,
	ReflectionUtils_t2858_CustomAttributesCacheGenerator,
	ReflectionUtils_t2858_CustomAttributesCacheGenerator_ReflectionUtils_t2858_ReflectionUtils_GetConstructorInfo_m13455_Arg1_ParameterInfo,
	ReflectionUtils_t2858_CustomAttributesCacheGenerator_ReflectionUtils_t2858_ReflectionUtils_GetContructor_m13460_Arg1_ParameterInfo,
	ReflectionUtils_t2858_CustomAttributesCacheGenerator_ReflectionUtils_t2858_ReflectionUtils_GetConstructorByReflection_m13462_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t2987_CustomAttributesCacheGenerator,
	ConstructorDelegate_t2852_CustomAttributesCacheGenerator_ConstructorDelegate_t2852_ConstructorDelegate_Invoke_m13440_Arg0_ParameterInfo,
	ConstructorDelegate_t2852_CustomAttributesCacheGenerator_ConstructorDelegate_t2852_ConstructorDelegate_BeginInvoke_m13441_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2853_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2854_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2855_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2856_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2857_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t2860_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t2199_CustomAttributesCacheGenerator,
	RequireComponent_t711_CustomAttributesCacheGenerator,
	WritableAttribute_t2866_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t2867_CustomAttributesCacheGenerator,
	GUIStateObjects_t2878_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m13495,
	Achievement_t2881_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t2881_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t2881_CustomAttributesCacheGenerator_Achievement_get_id_m13515,
	Achievement_t2881_CustomAttributesCacheGenerator_Achievement_set_id_m13516,
	Achievement_t2881_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m13517,
	Achievement_t2881_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m13518,
	AchievementDescription_t2882_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t2882_CustomAttributesCacheGenerator_AchievementDescription_get_id_m13525,
	AchievementDescription_t2882_CustomAttributesCacheGenerator_AchievementDescription_set_id_m13526,
	Score_t2883_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t2883_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t2883_CustomAttributesCacheGenerator_Score_get_leaderboardID_m13535,
	Score_t2883_CustomAttributesCacheGenerator_Score_set_leaderboardID_m13536,
	Score_t2883_CustomAttributesCacheGenerator_Score_get_value_m13537,
	Score_t2883_CustomAttributesCacheGenerator_Score_set_value_m13538,
	Leaderboard_t2720_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t2720_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t2720_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t2720_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_get_id_m13546,
	Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_set_id_m13547,
	Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m13548,
	Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m13549,
	Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_get_range_m13550,
	Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_set_range_m13551,
	Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m13552,
	Leaderboard_t2720_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m13553,
	PropertyAttribute_t923_CustomAttributesCacheGenerator,
	TooltipAttribute_t2202_CustomAttributesCacheGenerator,
	SpaceAttribute_t2200_CustomAttributesCacheGenerator,
	RangeAttribute_t2198_CustomAttributesCacheGenerator,
	MultilineAttribute_t1145_CustomAttributesCacheGenerator,
	TextAreaAttribute_t2203_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t2201_CustomAttributesCacheGenerator,
	StackTraceUtility_t2896_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m13592,
	StackTraceUtility_t2896_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m13595,
	StackTraceUtility_t2896_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m13597,
	SharedBetweenAnimatorsAttribute_t2897_CustomAttributesCacheGenerator,
	ArgumentCache_t2904_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t2904_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t2904_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t2904_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t2904_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t2904_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t2908_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t2908_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t2908_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t2908_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t2908_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t2910_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t2913_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t2913_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t2914_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t2915_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t2916_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t2193_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t2918_CustomAttributesCacheGenerator,
};
