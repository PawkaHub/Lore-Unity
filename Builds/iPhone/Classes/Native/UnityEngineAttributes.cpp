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
extern TypeInfo* InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t811_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ExtensionAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
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
		ExtensionAttribute_t811 * tmp;
		tmp = (ExtensionAttribute_t811 *)il2cpp_codegen_object_new (ExtensionAttribute_t811_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3777(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t4672_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m16561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t4672_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m16562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AssetBundle_t1655_CustomAttributesCacheGenerator_AssetBundle_Contains_m7562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void AssetBundle_t1655_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m16566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AssetBundle_t1655_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m16567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AssetBundle_t1655_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m16568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_LayerToName_m16570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m3272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_t87_LayerMask_GetMask_m16571_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t4676_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t4676_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t4676_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t4676_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void RuntimePlatform_t4676_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SystemInfo_t4677_CustomAttributesCacheGenerator_SystemInfo_get_processorCount_m2692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SystemInfo_t4677_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m16572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Coroutine_t589_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m16575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ScriptableObject_t501_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m16577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t4839_il2cpp_TypeInfo_var;
void ScriptableObject_t501_CustomAttributesCacheGenerator_ScriptableObject_t501_ScriptableObject_Internal_CreateScriptableObject_m16577_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8815);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4839 * tmp;
		tmp = (WritableAttribute_t4839 *)il2cpp_codegen_object_new (WritableAttribute_t4839_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17777(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ScriptableObject_t501_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m16578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ScriptableObject_t501_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m16579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.ConditionalAttribute
#include "mscorlib_System_Diagnostics_ConditionalAttribute.h"
// System.Diagnostics.ConditionalAttribute
#include "mscorlib_System_Diagnostics_ConditionalAttributeMethodDeclarations.h"
extern TypeInfo* ConditionalAttribute_t4499_il2cpp_TypeInfo_var;
void Profiler_t4680_CustomAttributesCacheGenerator_Profiler_BeginSample_m3484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConditionalAttribute_t4499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7705);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ConditionalAttribute_t4499 * tmp;
		tmp = (ConditionalAttribute_t4499 *)il2cpp_codegen_object_new (ConditionalAttribute_t4499_il2cpp_TypeInfo_var);
		ConditionalAttribute__ctor_m15544(tmp, il2cpp_codegen_string_new_wrapper("ENABLE_PROFILER"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Profiler_t4680_CustomAttributesCacheGenerator_Profiler_BeginSampleOnly_m16580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
extern TypeInfo* ConditionalAttribute_t4499_il2cpp_TypeInfo_var;
void Profiler_t4680_CustomAttributesCacheGenerator_Profiler_EndSample_m3485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		ConditionalAttribute_t4499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7705);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		ConditionalAttribute_t4499 * tmp;
		tmp = (ConditionalAttribute_t4499 *)il2cpp_codegen_object_new (ConditionalAttribute_t4499_il2cpp_TypeInfo_var);
		ConditionalAttribute__ctor_m15544(tmp, il2cpp_codegen_string_new_wrapper("ENABLE_PROFILER"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Cursor_t4682_CustomAttributesCacheGenerator_Cursor_get_visible_m7815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Cursor_t4682_CustomAttributesCacheGenerator_Cursor_set_visible_m7817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Cursor_t4682_CustomAttributesCacheGenerator_Cursor_get_lockState_m7816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Cursor_t4682_CustomAttributesCacheGenerator_Cursor_set_lockState_m7818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m16585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m16586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m16587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m16588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m16589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m16590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m16591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m16592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m16593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m16594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m16595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m16596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m16597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m16598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m16599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m16600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m16601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m16605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GcLeaderboard_t4694_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m16649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GcLeaderboard_t4694_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m16650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GcLeaderboard_t4694_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m16651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GcLeaderboard_t4694_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m16652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RenderSettings_t4695_CustomAttributesCacheGenerator_RenderSettings_set_skybox_m2604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_sharedMesh_m2773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_Internal_Create_m16653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4839_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_t93_Mesh_Internal_Create_m16653_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8815);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4839 * tmp;
		tmp = (WritableAttribute_t4839 *)il2cpp_codegen_object_new (WritableAttribute_t4839_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17777(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertices_m2753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_normals_m2754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_uv_m2755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertexCount_m2891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_boneWeights_m2777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_bindposes_m2779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_bones_m2778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_sharedMesh_m2776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_BakeMesh_m2784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_enabled_m7813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_enabled_m3174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_material_m2588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_material_m3279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sharedMaterial_m2816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_sharedMaterial_m2817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_bounds_m2623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_isVisible_m2859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Graphics_t4697_CustomAttributesCacheGenerator_Graphics_DrawTexture_m16666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GeometryUtility_t4698_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m16669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GeometryUtility_t4698_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m16670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Screen_t4699_CustomAttributesCacheGenerator_Screen_get_width_m2596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Screen_t4699_CustomAttributesCacheGenerator_Screen_get_height_m2600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Screen_t4699_CustomAttributesCacheGenerator_Screen_get_dpi_m5472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Texture_t802_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m16672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Texture_t802_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m16673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m16676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4839_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Internal_Create_m16676_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8815);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4839 * tmp;
		tmp = (WritableAttribute_t4839 *)il2cpp_codegen_object_new (WritableAttribute_t4839_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17777(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_SetPixel_m16677(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m2715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m16678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_GetPixels32_m16678_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m2716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m16679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m16679_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m16679_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m7793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RenderTexture_t4700_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m16680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RenderTexture_t4700_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m16681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUITexture_t1487_CustomAttributesCacheGenerator_GUITexture_INTERNAL_set_color_m16684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUITexture_t1487_CustomAttributesCacheGenerator_GUITexture_set_texture_m7794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUILayer_t1699_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m16686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Init_m16689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Cleanup_m16690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_Evaluate_m2848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_colorKeys_m2812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_alphaKeys_m2813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gradient_t117_CustomAttributesCacheGenerator_Gradient_SetKeys_m2814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m16697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m16698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m16699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m16700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_get_color_m16701(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_set_color_m16702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_set_contentColor_m16703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_get_changed_m3383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_set_changed_m16704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_get_enabled_m2615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_set_enabled_m2612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m16706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m16709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_DrawTexture_m7864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_t645_GUI_DrawTexture_m7859_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("ScaleMode.StretchToFill"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_t645_GUI_DrawTexture_m7859_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_t645_GUI_DrawTexture_m7859_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_DrawTextureWithTexCoords_m7865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_t645_GUI_DrawTextureWithTexCoords_m7858_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_get_blendMaterial_m16710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_get_blitMaterial_m16711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m16715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_SetNextControlName_m3293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_GetNameOfFocusedControl_m3291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_FocusControl_m3292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m16722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m16731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m16733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoWindow_m16743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DragWindow_m16744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Label_m3273_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Label_m3170_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Button_m3274_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Button_m3611_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_TextField_m3305_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_TextArea_m7541_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Toggle_m3492_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Toggle_m3612_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Toolbar_m3299_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Toolbar_m16751_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_HorizontalSlider_m3495_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginHorizontal_m3303_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginHorizontal_m16753_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginVertical_m3322_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginVertical_m16754_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginScrollView_m3300_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginScrollView_m16756_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Window_m3489_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m16770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m16772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m16773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8817);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4947 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4947 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m18079(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_t4713_GUILayoutUtility_GetRect_m16777_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_t4713_GUILayoutUtility_GetRect_m16779_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m16818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m16822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m16825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m16826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m16827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m16828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m16829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m16830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m16832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m16834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m16838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m16839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m16840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIClip_t4721_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m16842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIClip_t4721_CustomAttributesCacheGenerator_GUIClip_Pop_m16843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISettings_t4722_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISettings_t4722_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISettings_t4722_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISettings_t4722_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISettings_t4722_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t812_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t812 * tmp;
		tmp = (ExecuteInEditMode_t812 *)il2cpp_codegen_object_new (ExecuteInEditMode_t812_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m3778(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUISkin_t197_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUIContent_t566_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUIContent_t566_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void GUIContent_t566_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_Init_m16904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m16905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m16906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_get_textColor_m16907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m16908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_Init_m16911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_Cleanup_m16912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_left_m5487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_set_left_m16913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_right_m7876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_set_right_m16914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_top_m5488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_set_top_m16915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_bottom_m7877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_set_bottom_m16916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5482(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m16918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m16920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Init_m16925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m16926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m16927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_name_m16928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_name_m16929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m16930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m16932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m16933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m16934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_alignment_m7860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m7861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m16935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m16936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m16937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m16938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m16939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m16940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m16941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fontStyle_m7886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m7887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m16943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Draw_m16946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_t303_GUIStyle_Draw_m16947_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m16949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m16950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m16953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m16954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m16955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m16958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m16961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m16963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m3735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m3736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m3652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m3653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m3734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m3651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m3731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m3668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m3667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_Init_m16965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_Cleanup_m16967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_get_rawType_m3686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_get_type_m3289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_set_type_m16968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_GetTypeForControl_m16969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m16971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m16972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_get_modifiers_m3682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_set_modifiers_m16973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_get_character_m3683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_set_character_m16974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_get_commandName_m16975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_get_keyCode_m3290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_set_keyCode_m16976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m16977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_Use_m7542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Event_t590_CustomAttributesCacheGenerator_Event_PopEvent_m3687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t831_il2cpp_TypeInfo_var;
void EventModifiers_t4729_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t831 * tmp;
		tmp = (FlagsAttribute_t831 *)il2cpp_codegen_object_new (FlagsAttribute_t831_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3854(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m16983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireSphere_m16984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawSphere_m16985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireCube_m16986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m16987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m16988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void Vector2_t97_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_Slerp_m16994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_RotateTowards_m16995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void Color_t121_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t4833_il2cpp_TypeInfo_var;
void Color32_t89_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t4833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8818);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t4833 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t4833 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t4833_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m17769(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m17007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_t69_Quaternion_LookRotation_m3122_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_LookRotation_m3352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_LookRotation_m17008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Slerp_m17009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Lerp_m17010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_UnclampedSlerp_m17012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m17013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m17016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m17018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m17031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m17033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m17035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m17038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m17049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m17052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m17053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m17066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m17068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m17071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m17075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void Vector4_t1235_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Mathf_t647_CustomAttributesCacheGenerator_Mathf_SmoothDamp_m2640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Mathf_t647_CustomAttributesCacheGenerator_Mathf_t647_Mathf_SmoothDamp_m5420_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Mathf_t647_CustomAttributesCacheGenerator_Mathf_t647_Mathf_SmoothDamp_m5420_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Mathf_t647_CustomAttributesCacheGenerator_Mathf_SmoothDampAngle_m3350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Mathf_t647_CustomAttributesCacheGenerator_Mathf_t647_Mathf_SmoothDampAngle_m17103_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Mathf_t647_CustomAttributesCacheGenerator_Mathf_t647_Mathf_SmoothDampAngle_m17103_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Mathf_t647_CustomAttributesCacheGenerator_Mathf_PerlinNoise_m2873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t831_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t4732_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t831 * tmp;
		tmp = (FlagsAttribute_t831 *)il2cpp_codegen_object_new (FlagsAttribute_t831_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3854(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m17109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m17110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m17111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m17112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m17113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m17114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m17115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m17116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m17117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m17118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m17119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void Resources_t4736_CustomAttributesCacheGenerator_Resources_FindObjectsOfTypeAll_m3592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Resources_t4736_CustomAttributesCacheGenerator_Resources_Load_m3463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextAsset_t622_CustomAttributesCacheGenerator_TextAsset_get_text_m2928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t4737_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Shader_t652_CustomAttributesCacheGenerator_Shader_Find_m2702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Shader_t652_CustomAttributesCacheGenerator_Shader_PropertyToID_m17127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m17130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_GetTexture_m17132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureOffset_m17134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_SetFloat_m17136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_HasProperty_m17137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m17138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4839_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithShader_m17138_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8815);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4839 * tmp;
		tmp = (WritableAttribute_t4839 *)il2cpp_codegen_object_new (WritableAttribute_t4839_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17777(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m17139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4839_il2cpp_TypeInfo_var;
void Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithMaterial_m17139_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8815);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4839 * tmp;
		tmp = (WritableAttribute_t4839 *)il2cpp_codegen_object_new (WritableAttribute_t4839_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17777(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t4738_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t4738_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m17142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t4738_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m17145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t4738_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m17148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Sprite_t626_CustomAttributesCacheGenerator_Sprite_Create_m3110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Sprite_t626_CustomAttributesCacheGenerator_Sprite_INTERNAL_CALL_Create_m17158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_rect_m5375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_texture_m5368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_border_m5369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void DataUtility_t4740_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void DataUtility_t4740_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void DataUtility_t4740_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void DataUtility_t4740_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m17159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_DestroyWWW_m17163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_InitWWW_m17164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_EscapeURL_m3756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_t1483_WWW_EscapeURL_m17165_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m17167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_get_bytes_m17170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_get_error_m9317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_GetAudioClipInternal_m17174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_get_isDone_m7788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void WWW_t1483_CustomAttributesCacheGenerator_WWW_get_progress_m9321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void WWWForm_t4742_CustomAttributesCacheGenerator_WWWForm_AddField_m17178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void WWWForm_t4742_CustomAttributesCacheGenerator_WWWForm_t4742_WWWForm_AddField_m17179_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void WWWTranscoder_t4743_CustomAttributesCacheGenerator_WWWTranscoder_t4743_WWWTranscoder_URLEncode_m17185_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void WWWTranscoder_t4743_CustomAttributesCacheGenerator_WWWTranscoder_t4743_WWWTranscoder_QPEncode_m17187_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void WWWTranscoder_t4743_CustomAttributesCacheGenerator_WWWTranscoder_t4743_WWWTranscoder_SevenBitClean_m17190_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CacheIndex_t4744_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void UnityString_t4745_CustomAttributesCacheGenerator_UnityString_t4745_UnityString_Format_m17192_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AsyncOperation_t1529_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m17194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AsyncOperation_t1529_CustomAttributesCacheGenerator_AsyncOperation_get_isDone_m7834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_Quit_m3589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_loadedLevel_m3324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m17203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_isLoadingLevel_m3539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_isPlaying_m2849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_isEditor_m5401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m9361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_platform_m3650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_set_runInBackground_m3282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_HasProLicense_m7832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m9359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_OpenURL_m3311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_get_systemLanguage_m7570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m17205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m3608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("Application.RegisterLogCallback is deprecated. Use Application.logMessageReceived instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t4948_il2cpp_TypeInfo_var;
void Application_t2092_CustomAttributesCacheGenerator_Application_t2092____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t4948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8819);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t4948 * tmp;
		tmp = (SecurityCriticalAttribute_t4948 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t4948_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m18083(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Behaviour_t1270_CustomAttributesCacheGenerator_Behaviour_get_enabled_m2724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Behaviour_t1270_CustomAttributesCacheGenerator_Behaviour_set_enabled_m2952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Behaviour_t1270_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m7736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m7737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_depth_m5219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_eventMask_m17212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m17213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_targetTexture_m17215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_get_worldToCameraMatrix_m17216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m17218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_clearFlags_m17220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m17221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m17222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m17223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportPointToRay_m17224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m17225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_main_m2720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m17226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_GetAllCameras_m17227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m17232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m17234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var;
void CameraCallback_t4746_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2764 * tmp;
		tmp = (EditorBrowsableAttribute_t2764 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9715(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Debug_t4747_CustomAttributesCacheGenerator_Debug_DrawLine_m3566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Debug_t4747_CustomAttributesCacheGenerator_Debug_DrawLine_m3346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Debug_t4747_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m17235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Debug_t4747_CustomAttributesCacheGenerator_Debug_Internal_Log_m17236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4839_il2cpp_TypeInfo_var;
void Debug_t4747_CustomAttributesCacheGenerator_Debug_t4747_Debug_Internal_Log_m17236_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8815);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4839 * tmp;
		tmp = (WritableAttribute_t4839 *)il2cpp_codegen_object_new (WritableAttribute_t4839_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17777(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Debug_t4747_CustomAttributesCacheGenerator_Debug_Internal_LogException_m17237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4839_il2cpp_TypeInfo_var;
void Debug_t4747_CustomAttributesCacheGenerator_Debug_t4747_Debug_Internal_LogException_m17237_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8815);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4839 * tmp;
		tmp = (WritableAttribute_t4839 *)il2cpp_codegen_object_new (WritableAttribute_t4839_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17777(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Display_t4750_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m17262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Display_t4750_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m17263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Display_t4750_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m17264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Display_t4750_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m17265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Display_t4750_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m17266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Display_t4750_CustomAttributesCacheGenerator_Display_SetParamsImpl_m17267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Display_t4750_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m17268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Display_t4750_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m17269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Internal_CancelInvokeAll_m17270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_InvokeRepeating_m3600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m17271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m17273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m17274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopAllCoroutines_m3025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetKeyInt_m17276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetKeyUpInt_m17277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m17278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetAxis_m2638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetAxisRaw_m3268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetButton_m3349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetButtonDown_m3105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetButtonUp_m3148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetMouseButton_m2637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_get_mousePosition_m3136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_get_mousePresent_m5289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_get_acceleration_m3609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_GetTouch_m3573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_get_touchCount_m3149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m3737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_get_compositionString_m3654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Input_t643_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m17279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t831_il2cpp_TypeInfo_var;
void HideFlags_t4753_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t831 * tmp;
		tmp = (FlagsAttribute_t831 *)il2cpp_codegen_object_new (FlagsAttribute_t831_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3854(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m17281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m17283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_Destroy_m7735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_t642_Object_Destroy_m7735_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_Destroy_m2926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_DestroyImmediate_m17284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_t642_Object_DestroyImmediate_m17284_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m3465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_get_name_m2656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_set_name_m2708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_set_hideFlags_m3507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_DestroyObject_m17285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_t642_Object_DestroyObject_m17285_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_DestroyObject_m2657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_ToString_m3891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_Instantiate_m3116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_Instantiate_m7757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void Object_t642_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_get_transform_m2593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_get_gameObject_m2624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_GetComponent_m3759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m17291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_GetComponent_m18087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8817);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4947 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4947 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m18079(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_GetComponent_m7763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m7572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m17292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_SendMessage_m2993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_t490_Component_SendMessage_m2993_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_t490_Component_SendMessage_m2993_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_SendMessage_m3582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_SendMessage_m3013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_BroadcastMessage_m7573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_t490_Component_BroadcastMessage_m7573_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Component_t490_CustomAttributesCacheGenerator_Component_t490_Component_BroadcastMessage_m7573_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject__ctor_m2709_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m2710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m17293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m18093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8817);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4947 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4947 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m18079(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m7571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m17294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_transform_m2634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_layer_m2866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_layer_m3703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SetActive_m2601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m2605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m2721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_tag_m17295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_tag_m3360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m7836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m3331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m3147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m3147_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m3147_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m3319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_BroadcastMessage_m3146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m3146_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m3146_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m17296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_AddComponent_m7742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8814);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t4891 * tmp;
		tmp = (TypeInferenceRuleAttribute_t4891 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t4891_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m17978(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m17297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t4839_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_Internal_CreateGameObject_m17297_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t4839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8815);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t4839 * tmp;
		tmp = (WritableAttribute_t4839 *)il2cpp_codegen_object_new (WritableAttribute_t4839_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m17777(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void GameObject_t49_CustomAttributesCacheGenerator_GameObject_Find_m3599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m17302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m17303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m17304(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m17305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m17306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m17307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m17308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m17309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m17310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m17311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_parentInternal_m17312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_set_parentInternal_m17313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_SetParent_m3007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m17314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m17315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m17316_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_Rotate_m3196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m17317_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m17318_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m17319_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Vector3.up"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m3112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_LookAt_m17320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m17321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformDirection_m17322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m17323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m17324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_root_m3388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_get_childCount_m2628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m3702(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_Find_m7755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Transform_t54_CustomAttributesCacheGenerator_Transform_GetChild_m3373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_get_time_m2586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_get_timeSinceLevelLoad_m2718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_get_deltaTime_m2618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_get_unscaledTime_m3617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_get_timeScale_m2862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_set_timeScale_m2903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_get_frameCount_m2722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Time_t4755_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m2960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Random_t4756_CustomAttributesCacheGenerator_Random_Range_m2619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Random_t4756_CustomAttributesCacheGenerator_Random_RandomRangeInt_m17326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Random_t4756_CustomAttributesCacheGenerator_Random_get_value_m7845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Random_t4756_CustomAttributesCacheGenerator_Random_get_insideUnitSphere_m3363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m17329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_t4758_PlayerPrefs_GetString_m3488_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_DeleteKey_m2912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_Save_m9312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isStopped_m2852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isPaused_m2851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_startSize_m2890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_simulationSpace_m2830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_simulationSpace_m2865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_SetParticles_m2825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_GetParticles_m2823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Play_m17330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Stop_m17331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Clear_m17332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Play_m2853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Play_m17333_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Stop_m2850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Stop_m17334_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Clear_m2829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Clear_m17335_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_INTERNAL_CALL_Emit_m17336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void ParticleSystemRenderer_t190_CustomAttributesCacheGenerator_ParticleSystemRenderer_get_renderMode_m2863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m17356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_Raycast_m3121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Raycast_m2757_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Raycast_m2757_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_Raycast_m3389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Raycast_m2734_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Raycast_m2734_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_RaycastAll_m3179_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_RaycastAll_m3179_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_RaycastAll_m17357_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_RaycastAll_m17357_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m17358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Linecast_m7890_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_velocity_m17359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_velocity_m17360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_angularVelocity_m17361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_angularVelocity_m17362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_set_isKinematic_m3276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForce_m3580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m17363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForceAtPosition_m2881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForceAtPosition_m17364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_get_enabled_m7814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_set_enabled_m3173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m17365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Collider_t194_CustomAttributesCacheGenerator_Collider_INTERNAL_get_bounds_m17366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void BoxCollider_t1706_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_center_m17367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void BoxCollider_t1706_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_size_m17368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SphereCollider_t1707_CustomAttributesCacheGenerator_SphereCollider_INTERNAL_get_center_m17369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void SphereCollider_t1707_CustomAttributesCacheGenerator_SphereCollider_get_radius_m7812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CapsuleCollider_t1705_CustomAttributesCacheGenerator_CapsuleCollider_get_height_m7808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_INTERNAL_CALL_Move_m17370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_get_height_m7807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m17373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_Raycast_m3178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_t655_Physics2D_Raycast_m2741_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_t655_Physics2D_Raycast_m2741_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_t655_Physics2D_Raycast_m2741_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_t655_Physics2D_Raycast_m2741_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m3177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m17374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m17375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m17376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_get_angularVelocity_m3545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_set_angularVelocity_m3542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_set_isKinematic_m3277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m3267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m17377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_AddForceAtPosition_m2884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m17378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Collider2D_t195_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m17379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_INTERNAL_CALL_SetDestination_m17380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_get_remainingDistance_m3131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioClip_t261_CustomAttributesCacheGenerator_AudioClip_get_length_m7778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_volume_m7761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_volume_m7762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_clip_m7781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_clip_m3385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m17396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_Play_m17396_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m3386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Stop_m7782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m17397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m7780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m17398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_PlayOneShot_m17398_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void AnimationEvent_t4776_CustomAttributesCacheGenerator_AnimationEvent_t4776____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationClip_t296_CustomAttributesCacheGenerator_AnimationClip_get_length_m3199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_t98_AnimationCurve__ctor_m2768_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m17424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Evaluate_m2760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_SetKeys_m17426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_GetKeys_m17427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Init_m17428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_get_clip_m7796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m17433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m17433_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("0.3F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m17433_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("PlayMode.StopSameLayer"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m3132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m17434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_AddClip_m17434_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m17435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetState_m17437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateAtIndex_m17438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateCount_m17439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_set_wrapMode_m3354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_set_time_m3355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_set_speed_m3200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_get_length_m7756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_set_layer_m3194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m17440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_t716_AnimationState_AddMixingTransform_m17440_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m3195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_get_name_m7806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t627_CustomAttributesCacheGenerator_AnimatorStateInfo_t627____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_set_applyRootMotion_m3559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_get_layerCount_m3392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetLayerWeight_m3564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetLayerWeight_m3393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetCurrentAnimatorStateInfo_m2961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m7760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m7844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17456_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17456_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m17457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17457_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17457_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m7759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8816);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t4889 * tmp;
		tmp = (ExcludeFromDocsAttribute_t4889 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t4889_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m17977(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17458_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17458_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m17459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17459_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17459_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t4888 * tmp;
		tmp = (DefaultValueAttribute_t4888 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4888_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m17973(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_set_runtimeAnimatorController_m7758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_StringToHash_m7775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatString_m17460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatID_m17461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatString_m17462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatID_m17463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetBoolString_m17464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetBoolString_m17465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetIntegerString_m17466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_GetIntegerString_m17467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetTriggerString_m17468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m17469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatStringDamp_m17470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TerrainData_t648_CustomAttributesCacheGenerator_TerrainData_INTERNAL_get_size_m17475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_terrainData_m2646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_INTERNAL_CALL_SampleHeight_m17476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_activeTerrain_m2651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextMesh_t555_CustomAttributesCacheGenerator_TextMesh_set_text_m3597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextMesh_t555_CustomAttributesCacheGenerator_TextMesh_set_font_m3594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextMesh_t555_CustomAttributesCacheGenerator_TextMesh_set_anchor_m3595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextMesh_t555_CustomAttributesCacheGenerator_TextMesh_set_characterSize_m3596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CharacterInfo_t4785_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CharacterInfo_t4785_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CharacterInfo_t4785_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t832_il2cpp_TypeInfo_var;
void CharacterInfo_t4785_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t832 * tmp;
		tmp = (ObsoleteAttribute_t832 *)il2cpp_codegen_object_new (ObsoleteAttribute_t832_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m3855(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Font_t556_CustomAttributesCacheGenerator_Font_get_material_m3593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Font_t556_CustomAttributesCacheGenerator_Font_HasCharacter_m3685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Font_t556_CustomAttributesCacheGenerator_Font_get_dynamic_m5454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Font_t556_CustomAttributesCacheGenerator_Font_get_fontSize_m5456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t4786_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2764 * tmp;
		tmp = (EditorBrowsableAttribute_t2764 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9715(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_Init_m17500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m17501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m3699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m17505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m17506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m17507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m17508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m17509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m17510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m3673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m17511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m17512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m3724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderMode_m3670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_worldCamera_m2951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m5455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5473(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m17524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m17527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m3705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m17528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m17529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransformUtility_t790_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransformUtility_t790_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t4832_il2cpp_TypeInfo_var;
void RectTransformUtility_t790_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t4832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8813);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t4832 * tmp;
		tmp = (WrapperlessIcall_t4832 *)il2cpp_codegen_object_new (WrapperlessIcall_t4832_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m17768(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4790_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4790_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4790_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4790_CustomAttributesCacheGenerator_Request_get_sourceId_m17538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4790_CustomAttributesCacheGenerator_Request_get_appId_m17539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Request_t4790_CustomAttributesCacheGenerator_Request_get_domain_m17540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4792_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4792_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4792_CustomAttributesCacheGenerator_Response_get_success_m17549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4792_CustomAttributesCacheGenerator_Response_set_success_m17550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4792_CustomAttributesCacheGenerator_Response_get_extendedInfo_m17551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Response_t4792_CustomAttributesCacheGenerator_Response_set_extendedInfo_m17552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m17557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m17558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m17559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m17560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m17561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m17562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m17563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m17564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m17565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m17568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m17569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m17570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m17571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m17572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m17573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m17574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m17575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m17576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m17577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m17578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m17579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4797_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4797_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4797_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m17583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4797_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m17584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4797_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m17585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchRequest_t4797_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m17586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m17589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m17590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m17591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m17592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m17593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m17594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m17595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m17596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m17597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m17598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m17599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m17600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t4799_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t4799_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m17604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t4799_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m17605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4800_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4800_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4800_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m17608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4800_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m17609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4800_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m17610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void DropConnectionRequest_t4800_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m17611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m17614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m17615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m17616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m17617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m17618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m17619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m17620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m17621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m17624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m17625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m17626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m17627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m17628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m17629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m17633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m17634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_name_m17635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_name_m17636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m17637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m17638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m17639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m17640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m17641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m17642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m17643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m17644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m17645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m17646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m17647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchResponse_t4806_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchResponse_t4806_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m17651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ListMatchResponse_t4806_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m17652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* DefaultValueAttribute_t4170_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t4807_il2cpp_TypeInfo_var;
void AppID_t4807_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6707);
		AppID_t4807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8726);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t4170 * tmp;
		tmp = (DefaultValueAttribute_t4170 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4170_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13581(tmp, Box(AppID_t4807_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t4170_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t4808_il2cpp_TypeInfo_var;
void SourceID_t4808_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6707);
		SourceID_t4808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8725);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t4170 * tmp;
		tmp = (DefaultValueAttribute_t4170 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4170_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13581(tmp, Box(SourceID_t4808_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t4170_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t4809_il2cpp_TypeInfo_var;
void NetworkID_t4809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6707);
		NetworkID_t4809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t4170 * tmp;
		tmp = (DefaultValueAttribute_t4170 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4170_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13581(tmp, Box(NetworkID_t4809_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t4170_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t4810_il2cpp_TypeInfo_var;
void NodeID_t4810_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6707);
		NodeID_t4810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8728);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t4170 * tmp;
		tmp = (DefaultValueAttribute_t4170 *)il2cpp_codegen_object_new (DefaultValueAttribute_t4170_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m13581(tmp, Box(NodeID_t4810_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var;
void NetworkMatch_t4814_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m18104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t815 * tmp;
		tmp = (DebuggerHiddenAttribute_t815 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3781(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m18110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t815 * tmp;
		tmp = (DebuggerHiddenAttribute_t815 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3781(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m18111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t815 * tmp;
		tmp = (DebuggerHiddenAttribute_t815 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3781(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m18113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t815 * tmp;
		tmp = (DebuggerHiddenAttribute_t815 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3781(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m18114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t815 * tmp;
		tmp = (DebuggerHiddenAttribute_t815 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t815_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m3781(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var;
void JsonArray_t4815_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7713);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2764 * tmp;
		tmp = (EditorBrowsableAttribute_t2764 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9715(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t4196 * tmp;
		tmp = (GeneratedCodeAttribute_t4196 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void JsonObject_t4816_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7713);
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2764 * tmp;
		tmp = (EditorBrowsableAttribute_t2764 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9715(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t4196 * tmp;
		tmp = (GeneratedCodeAttribute_t4196 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var;
void SimpleJson_t4819_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7713);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t4196 * tmp;
		tmp = (GeneratedCodeAttribute_t4196 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var;
void SimpleJson_t4819_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m17697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8820);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4952 * tmp;
		tmp = (SuppressMessageAttribute_t4952 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m18115(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m18116(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var;
void SimpleJson_t4819_CustomAttributesCacheGenerator_SimpleJson_NextToken_m17709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8820);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4952 * tmp;
		tmp = (SuppressMessageAttribute_t4952 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m18115(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var;
void SimpleJson_t4819_CustomAttributesCacheGenerator_SimpleJson_t4819____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4650);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t2764 * tmp;
		tmp = (EditorBrowsableAttribute_t2764 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t2764_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m9715(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t4817_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7713);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t4196 * tmp;
		tmp = (GeneratedCodeAttribute_t4196 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t4817_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m18117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8820);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4952 * tmp;
		tmp = (SuppressMessageAttribute_t4952 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m18115(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m18116(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t4818_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7713);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t4196 * tmp;
		tmp = (GeneratedCodeAttribute_t4196 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t4818_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m17726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8820);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4952 * tmp;
		tmp = (SuppressMessageAttribute_t4952 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m18115(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m18116(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t4818_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m17727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8820);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t4952 * tmp;
		tmp = (SuppressMessageAttribute_t4952 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t4952_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m18115(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m18116(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var;
void ReflectionUtils_t4831_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7713);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t4196 * tmp;
		tmp = (GeneratedCodeAttribute_t4196 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t4196_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m13481(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void ReflectionUtils_t4831_CustomAttributesCacheGenerator_ReflectionUtils_t4831_ReflectionUtils_GetConstructorInfo_m17752_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void ReflectionUtils_t4831_CustomAttributesCacheGenerator_ReflectionUtils_t4831_ReflectionUtils_GetContructor_m17757_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void ReflectionUtils_t4831_CustomAttributesCacheGenerator_ReflectionUtils_t4831_ReflectionUtils_GetConstructorByReflection_m17759_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t4953_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2231);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t1292 * tmp;
		tmp = (DefaultMemberAttribute_t1292 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m5599(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void ConstructorDelegate_t4825_CustomAttributesCacheGenerator_ConstructorDelegate_t4825_ConstructorDelegate_Invoke_m17737_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t833_il2cpp_TypeInfo_var;
void ConstructorDelegate_t4825_CustomAttributesCacheGenerator_ConstructorDelegate_t4825_ConstructorDelegate_BeginInvoke_m17738_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t833 * tmp;
		tmp = (ParamArrayAttribute_t833 *)il2cpp_codegen_object_new (ParamArrayAttribute_t833_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3857(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
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
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t4833_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t1286_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void RequireComponent_t816_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void WritableAttribute_t4839_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t4840_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var;
void GUIStateObjects_t4851_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m17792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8817);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4947 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4947 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m18079(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4854_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4854_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4854_CustomAttributesCacheGenerator_Achievement_get_id_m17812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4854_CustomAttributesCacheGenerator_Achievement_set_id_m17813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4854_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m17814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Achievement_t4854_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m17815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void AchievementDescription_t4855_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void AchievementDescription_t4855_CustomAttributesCacheGenerator_AchievementDescription_get_id_m17822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void AchievementDescription_t4855_CustomAttributesCacheGenerator_AchievementDescription_set_id_m17823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4856_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4856_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4856_CustomAttributesCacheGenerator_Score_get_leaderboardID_m17832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4856_CustomAttributesCacheGenerator_Score_set_leaderboardID_m17833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4856_CustomAttributesCacheGenerator_Score_get_value_m17834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Score_t4856_CustomAttributesCacheGenerator_Score_set_value_m17835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_get_id_m17843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_set_id_m17844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m17845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m17846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_get_range_m17847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_set_range_m17848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m17849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m17850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void PropertyAttribute_t1506_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void TooltipAttribute_t1289_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void SpaceAttribute_t1287_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void RangeAttribute_t837_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void MultilineAttribute_t1719_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void TextAreaAttribute_t1290_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t1288_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var;
void StackTraceUtility_t4869_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m17889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8817);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4947 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4947 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m18079(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var;
void StackTraceUtility_t4869_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m17892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8817);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4947 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4947 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m18079(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var;
void StackTraceUtility_t4869_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m17894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8817);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t4947 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t4947 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t4947_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m18079(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t4870_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void ArgumentCache_t4877_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
void ArgumentCache_t4877_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void ArgumentCache_t4877_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void ArgumentCache_t4877_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
void ArgumentCache_t4877_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void ArgumentCache_t4877_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void PersistentCall_t4881_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
void PersistentCall_t4881_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void PersistentCall_t4881_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
void PersistentCall_t4881_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
void PersistentCall_t4881_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
void PersistentCallGroup_t4883_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void UnityEventBase_t4886_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t836 * tmp;
		tmp = (FormerlySerializedAsAttribute_t836 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t836_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3885(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t813_il2cpp_TypeInfo_var;
void UnityEventBase_t4886_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t813 * tmp;
		tmp = (SerializeField_t813 *)il2cpp_codegen_object_new (SerializeField_t813_il2cpp_TypeInfo_var);
		SerializeField__ctor_m3779(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t817_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t4887_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t817 * tmp;
		tmp = (AddComponentMenu_t817 *)il2cpp_codegen_object_new (AddComponentMenu_t817_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m3783(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t4888_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t4889_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t836_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3819(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m3818(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t819_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t4891_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t819 * tmp;
		tmp = (AttributeUsageAttribute_t819 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t819_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3817(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[1031] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t4672_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m16561,
	AssetBundleCreateRequest_t4672_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m16562,
	AssetBundle_t1655_CustomAttributesCacheGenerator_AssetBundle_Contains_m7562,
	AssetBundle_t1655_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m16566,
	AssetBundle_t1655_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m16567,
	AssetBundle_t1655_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m16568,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_LayerToName_m16570,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m3272,
	LayerMask_t87_CustomAttributesCacheGenerator_LayerMask_t87_LayerMask_GetMask_m16571_Arg0_ParameterInfo,
	RuntimePlatform_t4676_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t4676_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t4676_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t4676_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t4676_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t4677_CustomAttributesCacheGenerator_SystemInfo_get_processorCount_m2692,
	SystemInfo_t4677_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m16572,
	Coroutine_t589_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m16575,
	ScriptableObject_t501_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m16577,
	ScriptableObject_t501_CustomAttributesCacheGenerator_ScriptableObject_t501_ScriptableObject_Internal_CreateScriptableObject_m16577_Arg0_ParameterInfo,
	ScriptableObject_t501_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m16578,
	ScriptableObject_t501_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m16579,
	Profiler_t4680_CustomAttributesCacheGenerator_Profiler_BeginSample_m3484,
	Profiler_t4680_CustomAttributesCacheGenerator_Profiler_BeginSampleOnly_m16580,
	Profiler_t4680_CustomAttributesCacheGenerator_Profiler_EndSample_m3485,
	Cursor_t4682_CustomAttributesCacheGenerator_Cursor_get_visible_m7815,
	Cursor_t4682_CustomAttributesCacheGenerator_Cursor_set_visible_m7817,
	Cursor_t4682_CustomAttributesCacheGenerator_Cursor_get_lockState_m7816,
	Cursor_t4682_CustomAttributesCacheGenerator_Cursor_set_lockState_m7818,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m16585,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m16586,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m16587,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m16588,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m16589,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m16590,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m16591,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m16592,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m16593,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m16594,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m16595,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m16596,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m16597,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m16598,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m16599,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m16600,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m16601,
	GameCenterPlatform_t4692_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m16605,
	GcLeaderboard_t4694_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m16649,
	GcLeaderboard_t4694_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m16650,
	GcLeaderboard_t4694_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m16651,
	GcLeaderboard_t4694_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m16652,
	RenderSettings_t4695_CustomAttributesCacheGenerator_RenderSettings_set_skybox_m2604,
	MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_sharedMesh_m2773,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_Internal_Create_m16653,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_t93_Mesh_Internal_Create_m16653_Arg0_ParameterInfo,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertices_m2753,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_normals_m2754,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_uv_m2755,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_vertexCount_m2891,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_boneWeights_m2777,
	Mesh_t93_CustomAttributesCacheGenerator_Mesh_get_bindposes_m2779,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_bones_m2778,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_get_sharedMesh_m2776,
	SkinnedMeshRenderer_t105_CustomAttributesCacheGenerator_SkinnedMeshRenderer_BakeMesh_m2784,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_enabled_m7813,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_enabled_m3174,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_material_m2588,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_material_m3279,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sharedMaterial_m2816,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_set_sharedMaterial_m2817,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_bounds_m2623,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_isVisible_m2859,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m5297,
	Renderer_t103_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m5298,
	Graphics_t4697_CustomAttributesCacheGenerator_Graphics_DrawTexture_m16666,
	GeometryUtility_t4698_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m16669,
	GeometryUtility_t4698_CustomAttributesCacheGenerator_GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m16670,
	Screen_t4699_CustomAttributesCacheGenerator_Screen_get_width_m2596,
	Screen_t4699_CustomAttributesCacheGenerator_Screen_get_height_m2600,
	Screen_t4699_CustomAttributesCacheGenerator_Screen_get_dpi_m5472,
	Texture_t802_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m16672,
	Texture_t802_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m16673,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m16676,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Internal_Create_m16676_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m5331,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_SetPixel_m16677,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m2715,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m16678,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_GetPixels32_m16678_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m2716,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m16679,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m16679_Arg0_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_t90_Texture2D_Apply_m16679_Arg1_ParameterInfo,
	Texture2D_t90_CustomAttributesCacheGenerator_Texture2D_Apply_m7793,
	RenderTexture_t4700_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m16680,
	RenderTexture_t4700_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m16681,
	GUITexture_t1487_CustomAttributesCacheGenerator_GUITexture_INTERNAL_set_color_m16684,
	GUITexture_t1487_CustomAttributesCacheGenerator_GUITexture_set_texture_m7794,
	GUILayer_t1699_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m16686,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Init_m16689,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Cleanup_m16690,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_Evaluate_m2848,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_colorKeys_m2812,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_get_alphaKeys_m2813,
	Gradient_t117_CustomAttributesCacheGenerator_Gradient_SetKeys_m2814,
	GUI_t645_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t645_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t645_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m16697,
	GUI_t645_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m16698,
	GUI_t645_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m16699,
	GUI_t645_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m16700,
	GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_get_color_m16701,
	GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_set_color_m16702,
	GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_set_contentColor_m16703,
	GUI_t645_CustomAttributesCacheGenerator_GUI_get_changed_m3383,
	GUI_t645_CustomAttributesCacheGenerator_GUI_set_changed_m16704,
	GUI_t645_CustomAttributesCacheGenerator_GUI_get_enabled_m2615,
	GUI_t645_CustomAttributesCacheGenerator_GUI_set_enabled_m2612,
	GUI_t645_CustomAttributesCacheGenerator_GUI_Internal_SetTooltip_m16706,
	GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m16709,
	GUI_t645_CustomAttributesCacheGenerator_GUI_DrawTexture_m7864,
	GUI_t645_CustomAttributesCacheGenerator_GUI_t645_GUI_DrawTexture_m7859_Arg2_ParameterInfo,
	GUI_t645_CustomAttributesCacheGenerator_GUI_t645_GUI_DrawTexture_m7859_Arg3_ParameterInfo,
	GUI_t645_CustomAttributesCacheGenerator_GUI_t645_GUI_DrawTexture_m7859_Arg4_ParameterInfo,
	GUI_t645_CustomAttributesCacheGenerator_GUI_DrawTextureWithTexCoords_m7865,
	GUI_t645_CustomAttributesCacheGenerator_GUI_t645_GUI_DrawTextureWithTexCoords_m7858_Arg3_ParameterInfo,
	GUI_t645_CustomAttributesCacheGenerator_GUI_get_blendMaterial_m16710,
	GUI_t645_CustomAttributesCacheGenerator_GUI_get_blitMaterial_m16711,
	GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m16715,
	GUI_t645_CustomAttributesCacheGenerator_GUI_SetNextControlName_m3293,
	GUI_t645_CustomAttributesCacheGenerator_GUI_GetNameOfFocusedControl_m3291,
	GUI_t645_CustomAttributesCacheGenerator_GUI_FocusControl_m3292,
	GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoToggle_m16722,
	GUI_t645_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m16731,
	GUI_t645_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m16733,
	GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoWindow_m16743,
	GUI_t645_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DragWindow_m16744,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Label_m3273_Arg1_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Label_m3170_Arg2_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Button_m3274_Arg1_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Button_m3611_Arg1_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_TextField_m3305_Arg1_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_TextArea_m7541_Arg1_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Toggle_m3492_Arg2_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Toggle_m3612_Arg2_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Toolbar_m3299_Arg2_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Toolbar_m16751_Arg3_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_HorizontalSlider_m3495_Arg3_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginHorizontal_m3303_Arg0_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginHorizontal_m16753_Arg2_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginVertical_m3322_Arg0_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginVertical_m16754_Arg2_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginScrollView_m3300_Arg1_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_BeginScrollView_m16756_Arg6_ParameterInfo,
	GUILayout_t4709_CustomAttributesCacheGenerator_GUILayout_t4709_GUILayout_Window_m3489_Arg4_ParameterInfo,
	GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m16770,
	GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m16772,
	GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m16773,
	GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_t4713_GUILayoutUtility_GetRect_m16777_Arg2_ParameterInfo,
	GUILayoutUtility_t4713_CustomAttributesCacheGenerator_GUILayoutUtility_t4713_GUILayoutUtility_GetRect_m16779_Arg3_ParameterInfo,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m16818,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m16822,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m16825,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m16826,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_get_keyboardControl_m16827,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_set_keyboardControl_m16828,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m16829,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m16830,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m16832,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m16834,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m16838,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_get_mouseUsed_m16839,
	GUIUtility_t709_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m16840,
	GUIClip_t4721_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m16842,
	GUIClip_t4721_CustomAttributesCacheGenerator_GUIClip_Pop_m16843,
	GUISettings_t4722_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t4722_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t4722_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t4722_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t4722_CustomAttributesCacheGenerator_m_SelectionColor,
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
	GUIContent_t566_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t566_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t566_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_Init_m16904,
	GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m16905,
	GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m16906,
	GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_get_textColor_m16907,
	GUIStyleState_t712_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m16908,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_Init_m16911,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_Cleanup_m16912,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_left_m5487,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_set_left_m16913,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_right_m7876,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_set_right_m16914,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_top_m5488,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_set_top_m16915,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_bottom_m7877,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_set_bottom_m16916,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m5482,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_get_vertical_m5483,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Add_m16918,
	RectOffset_t736_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m16920,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Init_m16925,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_InitCopy_m16926,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m16927,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_name_m16928,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_name_m16929,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m16930,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m16932,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_AssignRectOffset_m16933,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m16934,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_alignment_m7860,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m2611,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m7861,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_wordWrap_m3287,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m16935,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m16936,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m16937,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m16938,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m16939,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m16940,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m16941,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_get_fontStyle_m7886,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m7887,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m16943,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Draw_m16946,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_t303_GUIStyle_Draw_m16947_Arg3_ParameterInfo,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m16949,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m16950,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m16953,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m16954,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m16955,
	GUIStyle_t303_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m16958,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m16961,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m16963,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m3735,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m3736,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg1_ParameterInfo,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg2_ParameterInfo,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg3_ParameterInfo,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg4_ParameterInfo,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg5_ParameterInfo,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_t582_TouchScreenKeyboard_Open_m16964_Arg6_ParameterInfo,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m3652,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m3653,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m3734,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m3651,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m3731,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m3668,
	TouchScreenKeyboard_t582_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m3667,
	Event_t590_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t590_CustomAttributesCacheGenerator_Event_Init_m16965,
	Event_t590_CustomAttributesCacheGenerator_Event_Cleanup_m16967,
	Event_t590_CustomAttributesCacheGenerator_Event_get_rawType_m3686,
	Event_t590_CustomAttributesCacheGenerator_Event_get_type_m3289,
	Event_t590_CustomAttributesCacheGenerator_Event_set_type_m16968,
	Event_t590_CustomAttributesCacheGenerator_Event_GetTypeForControl_m16969,
	Event_t590_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m16971,
	Event_t590_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m16972,
	Event_t590_CustomAttributesCacheGenerator_Event_get_modifiers_m3682,
	Event_t590_CustomAttributesCacheGenerator_Event_set_modifiers_m16973,
	Event_t590_CustomAttributesCacheGenerator_Event_get_character_m3683,
	Event_t590_CustomAttributesCacheGenerator_Event_set_character_m16974,
	Event_t590_CustomAttributesCacheGenerator_Event_get_commandName_m16975,
	Event_t590_CustomAttributesCacheGenerator_Event_get_keyCode_m3290,
	Event_t590_CustomAttributesCacheGenerator_Event_set_keyCode_m16976,
	Event_t590_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m16977,
	Event_t590_CustomAttributesCacheGenerator_Event_Use_m7542,
	Event_t590_CustomAttributesCacheGenerator_Event_PopEvent_m3687,
	EventModifiers_t4729_CustomAttributesCacheGenerator,
	Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m16983,
	Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireSphere_m16984,
	Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawSphere_m16985,
	Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireCube_m16986,
	Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m16987,
	Gizmos_t4730_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m16988,
	Vector2_t97_CustomAttributesCacheGenerator,
	Vector3_t53_CustomAttributesCacheGenerator,
	Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_Slerp_m16994,
	Vector3_t53_CustomAttributesCacheGenerator_Vector3_INTERNAL_CALL_RotateTowards_m16995,
	Color_t121_CustomAttributesCacheGenerator,
	Color32_t89_CustomAttributesCacheGenerator,
	Quaternion_t69_CustomAttributesCacheGenerator,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m17007,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_t69_Quaternion_LookRotation_m3122_Arg1_ParameterInfo,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_LookRotation_m3352,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_LookRotation_m17008,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Slerp_m17009,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Lerp_m17010,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_UnclampedSlerp_m17012,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m17013,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m17016,
	Quaternion_t69_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m17018,
	Matrix4x4_t68_CustomAttributesCacheGenerator,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m17031,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m17033,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m17035,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m17038,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m17049,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m17052,
	Matrix4x4_t68_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m17053,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m17066,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m17068,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m17071,
	Bounds_t56_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m17075,
	Vector4_t1235_CustomAttributesCacheGenerator,
	Mathf_t647_CustomAttributesCacheGenerator_Mathf_SmoothDamp_m2640,
	Mathf_t647_CustomAttributesCacheGenerator_Mathf_t647_Mathf_SmoothDamp_m5420_Arg4_ParameterInfo,
	Mathf_t647_CustomAttributesCacheGenerator_Mathf_t647_Mathf_SmoothDamp_m5420_Arg5_ParameterInfo,
	Mathf_t647_CustomAttributesCacheGenerator_Mathf_SmoothDampAngle_m3350,
	Mathf_t647_CustomAttributesCacheGenerator_Mathf_t647_Mathf_SmoothDampAngle_m17103_Arg4_ParameterInfo,
	Mathf_t647_CustomAttributesCacheGenerator_Mathf_t647_Mathf_SmoothDampAngle_m17103_Arg5_ParameterInfo,
	Mathf_t647_CustomAttributesCacheGenerator_Mathf_PerlinNoise_m2873,
	DrivenTransformProperties_t4732_CustomAttributesCacheGenerator,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m17109,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m17110,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m17111,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m17112,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m17113,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m17114,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m17115,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m17116,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m17117,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m17118,
	RectTransform_t259_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m17119,
	Resources_t4736_CustomAttributesCacheGenerator_Resources_FindObjectsOfTypeAll_m3592,
	Resources_t4736_CustomAttributesCacheGenerator_Resources_Load_m3463,
	TextAsset_t622_CustomAttributesCacheGenerator_TextAsset_get_text_m2928,
	SerializePrivateVariables_t4737_CustomAttributesCacheGenerator,
	Shader_t652_CustomAttributesCacheGenerator_Shader_Find_m2702,
	Shader_t652_CustomAttributesCacheGenerator_Shader_PropertyToID_m17127,
	Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m17130,
	Material_t48_CustomAttributesCacheGenerator_Material_GetTexture_m17132,
	Material_t48_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureOffset_m17134,
	Material_t48_CustomAttributesCacheGenerator_Material_SetFloat_m17136,
	Material_t48_CustomAttributesCacheGenerator_Material_HasProperty_m17137,
	Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m17138,
	Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithShader_m17138_Arg0_ParameterInfo,
	Material_t48_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m17139,
	Material_t48_CustomAttributesCacheGenerator_Material_t48_Material_Internal_CreateWithMaterial_m17139_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t4738_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t4738_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m17142,
	SphericalHarmonicsL2_t4738_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m17145,
	SphericalHarmonicsL2_t4738_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m17148,
	Sprite_t626_CustomAttributesCacheGenerator_Sprite_Create_m3110,
	Sprite_t626_CustomAttributesCacheGenerator_Sprite_INTERNAL_CALL_Create_m17158,
	Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_rect_m5375,
	Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m5371,
	Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_texture_m5368,
	Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_textureRect_m5385,
	Sprite_t626_CustomAttributesCacheGenerator_Sprite_get_border_m5369,
	DataUtility_t4740_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m5377,
	DataUtility_t4740_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m5376,
	DataUtility_t4740_CustomAttributesCacheGenerator_DataUtility_GetPadding_m5374,
	DataUtility_t4740_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m17159,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_DestroyWWW_m17163,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_InitWWW_m17164,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_EscapeURL_m3756,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_t1483_WWW_EscapeURL_m17165_Arg1_ParameterInfo,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m17167,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_get_bytes_m17170,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_get_error_m9317,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_GetAudioClipInternal_m17174,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_get_isDone_m7788,
	WWW_t1483_CustomAttributesCacheGenerator_WWW_get_progress_m9321,
	WWWForm_t4742_CustomAttributesCacheGenerator_WWWForm_AddField_m17178,
	WWWForm_t4742_CustomAttributesCacheGenerator_WWWForm_t4742_WWWForm_AddField_m17179_Arg2_ParameterInfo,
	WWWTranscoder_t4743_CustomAttributesCacheGenerator_WWWTranscoder_t4743_WWWTranscoder_URLEncode_m17185_Arg1_ParameterInfo,
	WWWTranscoder_t4743_CustomAttributesCacheGenerator_WWWTranscoder_t4743_WWWTranscoder_QPEncode_m17187_Arg1_ParameterInfo,
	WWWTranscoder_t4743_CustomAttributesCacheGenerator_WWWTranscoder_t4743_WWWTranscoder_SevenBitClean_m17190_Arg1_ParameterInfo,
	CacheIndex_t4744_CustomAttributesCacheGenerator,
	UnityString_t4745_CustomAttributesCacheGenerator_UnityString_t4745_UnityString_Format_m17192_Arg1_ParameterInfo,
	AsyncOperation_t1529_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m17194,
	AsyncOperation_t1529_CustomAttributesCacheGenerator_AsyncOperation_get_isDone_m7834,
	Application_t2092_CustomAttributesCacheGenerator_Application_Quit_m3589,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_loadedLevel_m3324,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_loadedLevelName_m2602,
	Application_t2092_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m17203,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_isLoadingLevel_m3539,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_isPlaying_m2849,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_isEditor_m5401,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_isWebPlayer_m9361,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_platform_m3650,
	Application_t2092_CustomAttributesCacheGenerator_Application_set_runInBackground_m3282,
	Application_t2092_CustomAttributesCacheGenerator_Application_HasProLicense_m7832,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m9359,
	Application_t2092_CustomAttributesCacheGenerator_Application_OpenURL_m3311,
	Application_t2092_CustomAttributesCacheGenerator_Application_get_systemLanguage_m7570,
	Application_t2092_CustomAttributesCacheGenerator_Application_SetLogCallbackDefined_m17205,
	Application_t2092_CustomAttributesCacheGenerator_Application_RegisterLogCallback_m3608,
	Application_t2092_CustomAttributesCacheGenerator_Application_t2092____persistentDataPath_PropertyInfo,
	Behaviour_t1270_CustomAttributesCacheGenerator_Behaviour_get_enabled_m2724,
	Behaviour_t1270_CustomAttributesCacheGenerator_Behaviour_set_enabled_m2952,
	Behaviour_t1270_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m5252,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m5296,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m5295,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m7736,
	Camera_t384_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m7737,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_depth_m5219,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_cullingMask_m5300,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_eventMask_m17212,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m17213,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_targetTexture_m17215,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_get_worldToCameraMatrix_m17216,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m17218,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_clearFlags_m17220,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m17221,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m17222,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m17223,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportPointToRay_m17224,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m17225,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_main_m2720,
	Camera_t384_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m17226,
	Camera_t384_CustomAttributesCacheGenerator_Camera_GetAllCameras_m17227,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m17232,
	Camera_t384_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m17234,
	CameraCallback_t4746_CustomAttributesCacheGenerator,
	Debug_t4747_CustomAttributesCacheGenerator_Debug_DrawLine_m3566,
	Debug_t4747_CustomAttributesCacheGenerator_Debug_DrawLine_m3346,
	Debug_t4747_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m17235,
	Debug_t4747_CustomAttributesCacheGenerator_Debug_Internal_Log_m17236,
	Debug_t4747_CustomAttributesCacheGenerator_Debug_t4747_Debug_Internal_Log_m17236_Arg2_ParameterInfo,
	Debug_t4747_CustomAttributesCacheGenerator_Debug_Internal_LogException_m17237,
	Debug_t4747_CustomAttributesCacheGenerator_Debug_t4747_Debug_Internal_LogException_m17237_Arg1_ParameterInfo,
	Display_t4750_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m17262,
	Display_t4750_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m17263,
	Display_t4750_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m17264,
	Display_t4750_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m17265,
	Display_t4750_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m17266,
	Display_t4750_CustomAttributesCacheGenerator_Display_SetParamsImpl_m17267,
	Display_t4750_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m17268,
	Display_t4750_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m17269,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Internal_CancelInvokeAll_m17270,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m2958,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_InvokeRepeating_m3600,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_CancelInvoke_m2957,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m17271,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m17273,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m17274,
	MonoBehaviour_t47_CustomAttributesCacheGenerator_MonoBehaviour_StopAllCoroutines_m3025,
	Input_t643_CustomAttributesCacheGenerator_Input_GetKeyInt_m17276,
	Input_t643_CustomAttributesCacheGenerator_Input_GetKeyUpInt_m17277,
	Input_t643_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m17278,
	Input_t643_CustomAttributesCacheGenerator_Input_GetAxis_m2638,
	Input_t643_CustomAttributesCacheGenerator_Input_GetAxisRaw_m3268,
	Input_t643_CustomAttributesCacheGenerator_Input_GetButton_m3349,
	Input_t643_CustomAttributesCacheGenerator_Input_GetButtonDown_m3105,
	Input_t643_CustomAttributesCacheGenerator_Input_GetButtonUp_m3148,
	Input_t643_CustomAttributesCacheGenerator_Input_GetMouseButton_m2637,
	Input_t643_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m3133,
	Input_t643_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m3575,
	Input_t643_CustomAttributesCacheGenerator_Input_get_mousePosition_m3136,
	Input_t643_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m5265,
	Input_t643_CustomAttributesCacheGenerator_Input_get_mousePresent_m5289,
	Input_t643_CustomAttributesCacheGenerator_Input_get_acceleration_m3609,
	Input_t643_CustomAttributesCacheGenerator_Input_GetTouch_m3573,
	Input_t643_CustomAttributesCacheGenerator_Input_get_touchCount_m3149,
	Input_t643_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m3737,
	Input_t643_CustomAttributesCacheGenerator_Input_get_compositionString_m3654,
	Input_t643_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m17279,
	HideFlags_t4753_CustomAttributesCacheGenerator,
	Object_t642_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m17281,
	Object_t642_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m17283,
	Object_t642_CustomAttributesCacheGenerator_Object_Destroy_m7735,
	Object_t642_CustomAttributesCacheGenerator_Object_t642_Object_Destroy_m7735_Arg1_ParameterInfo,
	Object_t642_CustomAttributesCacheGenerator_Object_Destroy_m2926,
	Object_t642_CustomAttributesCacheGenerator_Object_DestroyImmediate_m17284,
	Object_t642_CustomAttributesCacheGenerator_Object_t642_Object_DestroyImmediate_m17284_Arg1_ParameterInfo,
	Object_t642_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2690,
	Object_t642_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m3465,
	Object_t642_CustomAttributesCacheGenerator_Object_get_name_m2656,
	Object_t642_CustomAttributesCacheGenerator_Object_set_name_m2708,
	Object_t642_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m3211,
	Object_t642_CustomAttributesCacheGenerator_Object_set_hideFlags_m3507,
	Object_t642_CustomAttributesCacheGenerator_Object_DestroyObject_m17285,
	Object_t642_CustomAttributesCacheGenerator_Object_t642_Object_DestroyObject_m17285_Arg1_ParameterInfo,
	Object_t642_CustomAttributesCacheGenerator_Object_DestroyObject_m2657,
	Object_t642_CustomAttributesCacheGenerator_Object_ToString_m3891,
	Object_t642_CustomAttributesCacheGenerator_Object_Instantiate_m3116,
	Object_t642_CustomAttributesCacheGenerator_Object_Instantiate_m7757,
	Object_t642_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2607,
	Component_t490_CustomAttributesCacheGenerator_Component_get_transform_m2593,
	Component_t490_CustomAttributesCacheGenerator_Component_get_gameObject_m2624,
	Component_t490_CustomAttributesCacheGenerator_Component_GetComponent_m3759,
	Component_t490_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m17291,
	Component_t490_CustomAttributesCacheGenerator_Component_GetComponent_m18087,
	Component_t490_CustomAttributesCacheGenerator_Component_GetComponent_m7763,
	Component_t490_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m7572,
	Component_t490_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m17292,
	Component_t490_CustomAttributesCacheGenerator_Component_SendMessage_m2993,
	Component_t490_CustomAttributesCacheGenerator_Component_t490_Component_SendMessage_m2993_Arg1_ParameterInfo,
	Component_t490_CustomAttributesCacheGenerator_Component_t490_Component_SendMessage_m2993_Arg2_ParameterInfo,
	Component_t490_CustomAttributesCacheGenerator_Component_SendMessage_m3582,
	Component_t490_CustomAttributesCacheGenerator_Component_SendMessage_m3013,
	Component_t490_CustomAttributesCacheGenerator_Component_BroadcastMessage_m7573,
	Component_t490_CustomAttributesCacheGenerator_Component_t490_Component_BroadcastMessage_m7573_Arg1_ParameterInfo,
	Component_t490_CustomAttributesCacheGenerator_Component_t490_Component_BroadcastMessage_m7573_Arg2_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject__ctor_m2709_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m2710,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m17293,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponent_m18093,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m7571,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m17294,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_transform_m2634,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_layer_m2866,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_layer_m3703,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SetActive_m2601,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m2605,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m2721,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_get_tag_m17295,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_set_tag_m3360,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m7836,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m3331,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m3147,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m3147_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_SendMessage_m3147_Arg2_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_SendMessage_m3319,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_BroadcastMessage_m3146,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m3146_Arg1_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_BroadcastMessage_m3146_Arg2_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m17296,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_AddComponent_m7742,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m17297,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_t49_GameObject_Internal_CreateGameObject_m17297_Arg0_ParameterInfo,
	GameObject_t49_CustomAttributesCacheGenerator_GameObject_Find_m3599,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m17302,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m17303,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m17304,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m17305,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m17306,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m17307,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m17308,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m17309,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m17310,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m17311,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_parentInternal_m17312,
	Transform_t54_CustomAttributesCacheGenerator_Transform_set_parentInternal_m17313,
	Transform_t54_CustomAttributesCacheGenerator_Transform_SetParent_m3007,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m17314,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m17315,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m17316_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_Rotate_m3196,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_Rotate_m17317_Arg3_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m2643,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m17318_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_t54_Transform_LookAt_m17319_Arg1_ParameterInfo,
	Transform_t54_CustomAttributesCacheGenerator_Transform_LookAt_m3112,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_LookAt_m17320,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m17321,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformDirection_m17322,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m17323,
	Transform_t54_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m17324,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_root_m3388,
	Transform_t54_CustomAttributesCacheGenerator_Transform_get_childCount_m2628,
	Transform_t54_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m3702,
	Transform_t54_CustomAttributesCacheGenerator_Transform_Find_m7755,
	Transform_t54_CustomAttributesCacheGenerator_Transform_GetChild_m3373,
	Time_t4755_CustomAttributesCacheGenerator_Time_get_time_m2586,
	Time_t4755_CustomAttributesCacheGenerator_Time_get_timeSinceLevelLoad_m2718,
	Time_t4755_CustomAttributesCacheGenerator_Time_get_deltaTime_m2618,
	Time_t4755_CustomAttributesCacheGenerator_Time_get_unscaledTime_m3617,
	Time_t4755_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m5305,
	Time_t4755_CustomAttributesCacheGenerator_Time_get_timeScale_m2862,
	Time_t4755_CustomAttributesCacheGenerator_Time_set_timeScale_m2903,
	Time_t4755_CustomAttributesCacheGenerator_Time_get_frameCount_m2722,
	Time_t4755_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m2960,
	Random_t4756_CustomAttributesCacheGenerator_Random_Range_m2619,
	Random_t4756_CustomAttributesCacheGenerator_Random_RandomRangeInt_m17326,
	Random_t4756_CustomAttributesCacheGenerator_Random_get_value_m7845,
	Random_t4756_CustomAttributesCacheGenerator_Random_get_insideUnitSphere_m3363,
	PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m17329,
	PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m3488,
	PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_t4758_PlayerPrefs_GetString_m3488_Arg1_ParameterInfo,
	PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2909,
	PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m2908,
	PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_DeleteKey_m2912,
	PlayerPrefs_t4758_CustomAttributesCacheGenerator_PlayerPrefs_Save_m9312,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isStopped_m2852,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_isPaused_m2851,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_startSize_m2890,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_get_simulationSpace_m2830,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_set_simulationSpace_m2865,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_SetParticles_m2825,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_GetParticles_m2823,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Play_m17330,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Stop_m17331,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Internal_Clear_m17332,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Play_m2853,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Play_m17333_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Stop_m2850,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Stop_m17334_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_Clear_m2829,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_t189_ParticleSystem_Clear_m17335_Arg0_ParameterInfo,
	ParticleSystem_t189_CustomAttributesCacheGenerator_ParticleSystem_INTERNAL_CALL_Emit_m17336,
	ParticleSystemRenderer_t190_CustomAttributesCacheGenerator_ParticleSystemRenderer_get_renderMode_m2863,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m17356,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_Raycast_m3121,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Raycast_m2757_Arg3_ParameterInfo,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Raycast_m2757_Arg4_ParameterInfo,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_Raycast_m3389,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Raycast_m2734_Arg2_ParameterInfo,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Raycast_m2734_Arg3_ParameterInfo,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_RaycastAll_m3179_Arg1_ParameterInfo,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_RaycastAll_m3179_Arg2_ParameterInfo,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_RaycastAll_m17357_Arg2_ParameterInfo,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_RaycastAll_m17357_Arg3_ParameterInfo,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m17358,
	Physics_t4764_CustomAttributesCacheGenerator_Physics_t4764_Physics_Linecast_m7890_Arg3_ParameterInfo,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_velocity_m17359,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_velocity_m17360,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_angularVelocity_m17361,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_set_angularVelocity_m17362,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_set_isKinematic_m3276,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForce_m3580,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m17363,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_AddForceAtPosition_m2881,
	Rigidbody_t100_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForceAtPosition_m17364,
	Collider_t194_CustomAttributesCacheGenerator_Collider_get_enabled_m7814,
	Collider_t194_CustomAttributesCacheGenerator_Collider_set_enabled_m3173,
	Collider_t194_CustomAttributesCacheGenerator_Collider_get_attachedRigidbody_m17365,
	Collider_t194_CustomAttributesCacheGenerator_Collider_INTERNAL_get_bounds_m17366,
	BoxCollider_t1706_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_center_m17367,
	BoxCollider_t1706_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_size_m17368,
	SphereCollider_t1707_CustomAttributesCacheGenerator_SphereCollider_INTERNAL_get_center_m17369,
	SphereCollider_t1707_CustomAttributesCacheGenerator_SphereCollider_get_radius_m7812,
	CapsuleCollider_t1705_CustomAttributesCacheGenerator_CapsuleCollider_get_height_m7808,
	CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_INTERNAL_CALL_Move_m17370,
	CharacterController_t321_CustomAttributesCacheGenerator_CharacterController_get_height_m7807,
	Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m17373,
	Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_Raycast_m3178,
	Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_t655_Physics2D_Raycast_m2741_Arg2_ParameterInfo,
	Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_t655_Physics2D_Raycast_m2741_Arg3_ParameterInfo,
	Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_t655_Physics2D_Raycast_m2741_Arg4_ParameterInfo,
	Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_t655_Physics2D_Raycast_m2741_Arg5_ParameterInfo,
	Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m3177,
	Physics2D_t655_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m17374,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m17375,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m17376,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_get_angularVelocity_m3545,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_set_angularVelocity_m3542,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_set_isKinematic_m3277,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m3267,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m17377,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_AddForceAtPosition_m2884,
	Rigidbody2D_t352_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m17378,
	Collider2D_t195_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m17379,
	NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_INTERNAL_CALL_SetDestination_m17380,
	NavMeshAgent_t297_CustomAttributesCacheGenerator_NavMeshAgent_get_remainingDistance_m3131,
	AudioClip_t261_CustomAttributesCacheGenerator_AudioClip_get_length_m7778,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_volume_m7761,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_volume_m7762,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_clip_m7781,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_set_clip_m3385,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m17396,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_Play_m17396_Arg0_ParameterInfo,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Play_m3386,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_Stop_m7782,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_INTERNAL_CALL_Pause_m17397,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m7780,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m17398,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_t262_AudioSource_PlayOneShot_m17398_Arg1_ParameterInfo,
	AudioSource_t262_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m3043,
	AnimationEvent_t4776_CustomAttributesCacheGenerator_AnimationEvent_t4776____data_PropertyInfo,
	AnimationClip_t296_CustomAttributesCacheGenerator_AnimationClip_get_length_m3199,
	AnimationCurve_t98_CustomAttributesCacheGenerator,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_t98_AnimationCurve__ctor_m2768_Arg0_ParameterInfo,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m17424,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Evaluate_m2760,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_SetKeys_m17426,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_GetKeys_m17427,
	AnimationCurve_t98_CustomAttributesCacheGenerator_AnimationCurve_Init_m17428,
	Animation_t298_CustomAttributesCacheGenerator,
	Animation_t298_CustomAttributesCacheGenerator_Animation_get_clip_m7796,
	Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m17433,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m17433_Arg1_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_CrossFade_m17433_Arg2_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_CrossFade_m3132,
	Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m17434,
	Animation_t298_CustomAttributesCacheGenerator_Animation_t298_Animation_AddClip_m17434_Arg4_ParameterInfo,
	Animation_t298_CustomAttributesCacheGenerator_Animation_AddClip_m17435,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetState_m17437,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateAtIndex_m17438,
	Animation_t298_CustomAttributesCacheGenerator_Animation_GetStateCount_m17439,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_set_wrapMode_m3354,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_set_time_m3355,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_set_speed_m3200,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_get_length_m7756,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_set_layer_m3194,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m17440,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_t716_AnimationState_AddMixingTransform_m17440_Arg1_ParameterInfo,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_AddMixingTransform_m3195,
	AnimationState_t716_CustomAttributesCacheGenerator_AnimationState_get_name_m7806,
	AnimatorStateInfo_t627_CustomAttributesCacheGenerator_AnimatorStateInfo_t627____nameHash_PropertyInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_set_applyRootMotion_m3559,
	Animator_t214_CustomAttributesCacheGenerator_Animator_get_layerCount_m3392,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetLayerWeight_m3564,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetLayerWeight_m3393,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetCurrentAnimatorStateInfo_m2961,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m7760,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m7844,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17456_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17456_Arg3_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_CrossFade_m17457,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17457_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_CrossFade_m17457_Arg3_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m7759,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17458_Arg1_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17458_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_Play_m17459,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17459_Arg1_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_t214_Animator_Play_m17459_Arg2_ParameterInfo,
	Animator_t214_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m5444,
	Animator_t214_CustomAttributesCacheGenerator_Animator_set_runtimeAnimatorController_m7758,
	Animator_t214_CustomAttributesCacheGenerator_Animator_StringToHash_m7775,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatString_m17460,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatID_m17461,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatString_m17462,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetFloatID_m17463,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetBoolString_m17464,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetBoolString_m17465,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetIntegerString_m17466,
	Animator_t214_CustomAttributesCacheGenerator_Animator_GetIntegerString_m17467,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetTriggerString_m17468,
	Animator_t214_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m17469,
	Animator_t214_CustomAttributesCacheGenerator_Animator_SetFloatStringDamp_m17470,
	TerrainData_t648_CustomAttributesCacheGenerator_TerrainData_INTERNAL_get_size_m17475,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_terrainData_m2646,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_INTERNAL_CALL_SampleHeight_m17476,
	Terrain_t58_CustomAttributesCacheGenerator_Terrain_get_activeTerrain_m2651,
	TextMesh_t555_CustomAttributesCacheGenerator_TextMesh_set_text_m3597,
	TextMesh_t555_CustomAttributesCacheGenerator_TextMesh_set_font_m3594,
	TextMesh_t555_CustomAttributesCacheGenerator_TextMesh_set_anchor_m3595,
	TextMesh_t555_CustomAttributesCacheGenerator_TextMesh_set_characterSize_m3596,
	CharacterInfo_t4785_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t4785_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t4785_CustomAttributesCacheGenerator_width,
	CharacterInfo_t4785_CustomAttributesCacheGenerator_flipped,
	Font_t556_CustomAttributesCacheGenerator_Font_get_material_m3593,
	Font_t556_CustomAttributesCacheGenerator_Font_HasCharacter_m3685,
	Font_t556_CustomAttributesCacheGenerator_Font_get_dynamic_m5454,
	Font_t556_CustomAttributesCacheGenerator_Font_get_fontSize_m5456,
	FontTextureRebuildCallback_t4786_CustomAttributesCacheGenerator,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_Init_m17500,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m17501,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m17504,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m3699,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m17505,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m17506,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m17507,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m17508,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m17509,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m17510,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m3673,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m17511,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m17512,
	TextGenerator_t586_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m3724,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderMode_m3670,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m5470,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m2950,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_worldCamera_m2951,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m5455,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m5473,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m5372,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m5474,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m5340,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m5352,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m5351,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m5355,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m5328,
	Canvas_t213_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m5451,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m5440,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m17524,
	CanvasGroup_t211_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m5339,
	CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m17527,
	CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m5343,
	CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m5503,
	CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m3705,
	CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m17528,
	CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m17529,
	CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m5332,
	CanvasRenderer_t587_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m5329,
	RectTransformUtility_t790_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m17531,
	RectTransformUtility_t790_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m17533,
	RectTransformUtility_t790_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m5342,
	Request_t4790_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t4790_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t4790_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t4790_CustomAttributesCacheGenerator_Request_get_sourceId_m17538,
	Request_t4790_CustomAttributesCacheGenerator_Request_get_appId_m17539,
	Request_t4790_CustomAttributesCacheGenerator_Request_get_domain_m17540,
	Response_t4792_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t4792_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t4792_CustomAttributesCacheGenerator_Response_get_success_m17549,
	Response_t4792_CustomAttributesCacheGenerator_Response_set_success_m17550,
	Response_t4792_CustomAttributesCacheGenerator_Response_get_extendedInfo_m17551,
	Response_t4792_CustomAttributesCacheGenerator_Response_set_extendedInfo_m17552,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m17557,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m17558,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m17559,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m17560,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m17561,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m17562,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m17563,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m17564,
	CreateMatchRequest_t4795_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m17565,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m17568,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m17569,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m17570,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m17571,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m17572,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m17573,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m17574,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m17575,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m17576,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m17577,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m17578,
	CreateMatchResponse_t4796_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m17579,
	JoinMatchRequest_t4797_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t4797_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t4797_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m17583,
	JoinMatchRequest_t4797_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m17584,
	JoinMatchRequest_t4797_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m17585,
	JoinMatchRequest_t4797_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m17586,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m17589,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m17590,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m17591,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m17592,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m17593,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m17594,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m17595,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m17596,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m17597,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m17598,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m17599,
	JoinMatchResponse_t4798_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m17600,
	DestroyMatchRequest_t4799_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t4799_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m17604,
	DestroyMatchRequest_t4799_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m17605,
	DropConnectionRequest_t4800_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t4800_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t4800_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m17608,
	DropConnectionRequest_t4800_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m17609,
	DropConnectionRequest_t4800_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m17610,
	DropConnectionRequest_t4800_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m17611,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m17614,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m17615,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m17616,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m17617,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m17618,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m17619,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m17620,
	ListMatchRequest_t4801_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m17621,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m17624,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m17625,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m17626,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m17627,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m17628,
	MatchDirectConnectInfo_t4802_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m17629,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m17633,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m17634,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_name_m17635,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_name_m17636,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m17637,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m17638,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m17639,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m17640,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m17641,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m17642,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m17643,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m17644,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m17645,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m17646,
	MatchDesc_t4804_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m17647,
	ListMatchResponse_t4806_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t4806_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m17651,
	ListMatchResponse_t4806_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m17652,
	AppID_t4807_CustomAttributesCacheGenerator,
	SourceID_t4808_CustomAttributesCacheGenerator,
	NetworkID_t4809_CustomAttributesCacheGenerator,
	NodeID_t4810_CustomAttributesCacheGenerator,
	NetworkMatch_t4814_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m18104,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m18110,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m18111,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m18113,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t4951_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Reset_m18114,
	JsonArray_t4815_CustomAttributesCacheGenerator,
	JsonObject_t4816_CustomAttributesCacheGenerator,
	SimpleJson_t4819_CustomAttributesCacheGenerator,
	SimpleJson_t4819_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m17697,
	SimpleJson_t4819_CustomAttributesCacheGenerator_SimpleJson_NextToken_m17709,
	SimpleJson_t4819_CustomAttributesCacheGenerator_SimpleJson_t4819____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t4817_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t4817_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m18117,
	PocoJsonSerializerStrategy_t4818_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t4818_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m17726,
	PocoJsonSerializerStrategy_t4818_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m17727,
	ReflectionUtils_t4831_CustomAttributesCacheGenerator,
	ReflectionUtils_t4831_CustomAttributesCacheGenerator_ReflectionUtils_t4831_ReflectionUtils_GetConstructorInfo_m17752_Arg1_ParameterInfo,
	ReflectionUtils_t4831_CustomAttributesCacheGenerator_ReflectionUtils_t4831_ReflectionUtils_GetContructor_m17757_Arg1_ParameterInfo,
	ReflectionUtils_t4831_CustomAttributesCacheGenerator_ReflectionUtils_t4831_ReflectionUtils_GetConstructorByReflection_m17759_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t4953_CustomAttributesCacheGenerator,
	ConstructorDelegate_t4825_CustomAttributesCacheGenerator_ConstructorDelegate_t4825_ConstructorDelegate_Invoke_m17737_Arg0_ParameterInfo,
	ConstructorDelegate_t4825_CustomAttributesCacheGenerator_ConstructorDelegate_t4825_ConstructorDelegate_BeginInvoke_m17738_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t4826_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t4827_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t4828_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t4829_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t4830_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t4833_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t1286_CustomAttributesCacheGenerator,
	RequireComponent_t816_CustomAttributesCacheGenerator,
	WritableAttribute_t4839_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t4840_CustomAttributesCacheGenerator,
	GUIStateObjects_t4851_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m17792,
	Achievement_t4854_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t4854_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t4854_CustomAttributesCacheGenerator_Achievement_get_id_m17812,
	Achievement_t4854_CustomAttributesCacheGenerator_Achievement_set_id_m17813,
	Achievement_t4854_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m17814,
	Achievement_t4854_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m17815,
	AchievementDescription_t4855_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t4855_CustomAttributesCacheGenerator_AchievementDescription_get_id_m17822,
	AchievementDescription_t4855_CustomAttributesCacheGenerator_AchievementDescription_set_id_m17823,
	Score_t4856_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t4856_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t4856_CustomAttributesCacheGenerator_Score_get_leaderboardID_m17832,
	Score_t4856_CustomAttributesCacheGenerator_Score_set_leaderboardID_m17833,
	Score_t4856_CustomAttributesCacheGenerator_Score_get_value_m17834,
	Score_t4856_CustomAttributesCacheGenerator_Score_set_value_m17835,
	Leaderboard_t4693_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t4693_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t4693_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t4693_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_get_id_m17843,
	Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_set_id_m17844,
	Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m17845,
	Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m17846,
	Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_get_range_m17847,
	Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_set_range_m17848,
	Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m17849,
	Leaderboard_t4693_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m17850,
	PropertyAttribute_t1506_CustomAttributesCacheGenerator,
	TooltipAttribute_t1289_CustomAttributesCacheGenerator,
	SpaceAttribute_t1287_CustomAttributesCacheGenerator,
	RangeAttribute_t837_CustomAttributesCacheGenerator,
	MultilineAttribute_t1719_CustomAttributesCacheGenerator,
	TextAreaAttribute_t1290_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t1288_CustomAttributesCacheGenerator,
	StackTraceUtility_t4869_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m17889,
	StackTraceUtility_t4869_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m17892,
	StackTraceUtility_t4869_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m17894,
	SharedBetweenAnimatorsAttribute_t4870_CustomAttributesCacheGenerator,
	ArgumentCache_t4877_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t4877_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t4877_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t4877_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t4877_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t4877_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t4881_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t4881_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t4881_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t4881_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t4881_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t4883_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t4886_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t4886_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t4887_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t4888_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t4889_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t836_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t4891_CustomAttributesCacheGenerator,
};
