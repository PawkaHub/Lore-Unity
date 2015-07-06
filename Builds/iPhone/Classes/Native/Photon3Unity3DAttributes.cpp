#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttribute.h"
// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttributeMethodDeclarations.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttribute.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttribute.h"
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyProductAttribute_t1013_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t1015_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCopyrightAttribute_t1014_il2cpp_TypeInfo_var;
extern TypeInfo* GuidAttribute_t1009_il2cpp_TypeInfo_var;
extern TypeInfo* DebuggableAttribute_t778_il2cpp_TypeInfo_var;
extern TypeInfo* CompilationRelaxationsAttribute_t2495_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t1012_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyConfigurationAttribute_t1011_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t1010_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t1016_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTrademarkAttribute_t1018_il2cpp_TypeInfo_var;
void g_Photon3Unity3D_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyProductAttribute_t1013_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1823);
		ComVisibleAttribute_t1015_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		AssemblyCopyrightAttribute_t1014_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1824);
		GuidAttribute_t1009_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1819);
		DebuggableAttribute_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1641);
		CompilationRelaxationsAttribute_t2495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4286);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		AssemblyCompanyAttribute_t1012_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1822);
		AssemblyConfigurationAttribute_t1011_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1821);
		AssemblyDescriptionAttribute_t1010_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1820);
		AssemblyTitleAttribute_t1016_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1826);
		AssemblyTrademarkAttribute_t1018_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1828);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyProductAttribute_t1013 * tmp;
		tmp = (AssemblyProductAttribute_t1013 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t1013_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m5057(tmp, il2cpp_codegen_string_new_wrapper("PhotonUnity3D"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t1015 * tmp;
		tmp = (ComVisibleAttribute_t1015 *)il2cpp_codegen_object_new (ComVisibleAttribute_t1015_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m5059(tmp, false, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t1014 * tmp;
		tmp = (AssemblyCopyrightAttribute_t1014 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t1014_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m5058(tmp, il2cpp_codegen_string_new_wrapper("(c) Exit Games GmbH, http://www.exitgames.com"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		GuidAttribute_t1009 * tmp;
		tmp = (GuidAttribute_t1009 *)il2cpp_codegen_object_new (GuidAttribute_t1009_il2cpp_TypeInfo_var);
		GuidAttribute__ctor_m5053(tmp, il2cpp_codegen_string_new_wrapper("cc6a3e2e-6cf3-4dd8-aa50-4b5fd09cc328"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t778 * tmp;
		tmp = (DebuggableAttribute_t778 *)il2cpp_codegen_object_new (DebuggableAttribute_t778_il2cpp_TypeInfo_var);
		DebuggableAttribute__ctor_m3515(tmp, 263, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t2495 * tmp;
		tmp = (CompilationRelaxationsAttribute_t2495 *)il2cpp_codegen_object_new (CompilationRelaxationsAttribute_t2495_il2cpp_TypeInfo_var);
		CompilationRelaxationsAttribute__ctor_m8997(tmp, 8, NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t33 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t33 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m114(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m115(tmp, true, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t1012 * tmp;
		tmp = (AssemblyCompanyAttribute_t1012 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t1012_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m5056(tmp, il2cpp_codegen_string_new_wrapper("Exit Games GmbH"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyConfigurationAttribute_t1011 * tmp;
		tmp = (AssemblyConfigurationAttribute_t1011 *)il2cpp_codegen_object_new (AssemblyConfigurationAttribute_t1011_il2cpp_TypeInfo_var);
		AssemblyConfigurationAttribute__ctor_m5055(tmp, il2cpp_codegen_string_new_wrapper(".NET Framework 3.5"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t1010 * tmp;
		tmp = (AssemblyDescriptionAttribute_t1010 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t1010_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m5054(tmp, il2cpp_codegen_string_new_wrapper("Debug. Unity Mono compatible"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t1016 * tmp;
		tmp = (AssemblyTitleAttribute_t1016 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t1016_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m5060(tmp, il2cpp_codegen_string_new_wrapper("Photon3Unity"), NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTrademarkAttribute_t1018 * tmp;
		tmp = (AssemblyTrademarkAttribute_t1018 *)il2cpp_codegen_object_new (AssemblyTrademarkAttribute_t1018_il2cpp_TypeInfo_var);
		AssemblyTrademarkAttribute__ctor_m5062(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void Hashtable_t436_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_U3CHttpUrlParametersU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_U3CQuickResendAttemptsU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_U3CTcpConnectionPrefixU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_m17936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m17937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_get_Listener_m17938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_set_Listener_m17939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_get_QuickResendAttempts_m17940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_set_QuickResendAttempts_m17941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_get_IsSendingOnlyAcks_m17947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_set_IsSendingOnlyAcks_m17948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClass2_t4853_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClass6_t4854_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void EnetPeer_t4859_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__13_m17991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClassb_t4860_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClassd_t4861_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClass11_t4862_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void StatusCode_t39_CustomAttributesCacheGenerator_InternalReceiveException(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("Replaced by ExceptionOnReceive"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void StatusCode_t39_CustomAttributesCacheGenerator_TcpRouterResponseOk(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("TCP routing was removed after becoming obsolete."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void StatusCode_t39_CustomAttributesCacheGenerator_TcpRouterResponseNodeIdUnknown(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("TCP routing was removed after becoming obsolete."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void StatusCode_t39_CustomAttributesCacheGenerator_TcpRouterResponseEndpointUnknown(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("TCP routing was removed after becoming obsolete."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t740_il2cpp_TypeInfo_var;
void StatusCode_t39_CustomAttributesCacheGenerator_TcpRouterResponseNodeNotReady(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m3447(tmp, il2cpp_codegen_string_new_wrapper("TCP routing was removed after becoming obsolete."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_U3CProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_get_Protocol_m17998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_set_Protocol_m17999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_get_State_m18000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m18001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m18002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m18003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_m18004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m18005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__7_m18016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClass3_t4868_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClass5_t4869_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void SimulationItem_t4870_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void SimulationItem_t4870_CustomAttributesCacheGenerator_SimulationItem_get_Delay_m18024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void SimulationItem_t4870_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m18025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void NetworkSimulationSet_t703_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void NetworkSimulationSet_t703_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void NetworkSimulationSet_t703_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m18031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void NetworkSimulationSet_t703_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m18032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void NetworkSimulationSet_t703_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m18033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void NetworkSimulationSet_t703_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m18034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1031_il2cpp_TypeInfo_var;
void OperationResponse_t23_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void EventData_t22_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void SupportClass_t678_CustomAttributesCacheGenerator_CSU24U3CU3E9__CachedAnonymousMethodDelegate4(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void SupportClass_t678_CustomAttributesCacheGenerator_SupportClass_U3C_cctorU3Eb__3_m18151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClass1_t4885_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CU3Ec__DisplayClass3_t4887_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_m18173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_m18174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_m18175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m18176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_m18177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m18178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m18179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_m18180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m18181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_m18182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m18183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_m18184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m3305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m18185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m3306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m18186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m3303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m18187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_m3304(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m18188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m3302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m18189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m18190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m18191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m18192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m18193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m18194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m18205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m18206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m18207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m18208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_m18209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m18210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_m18211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m18212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_m18213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m18214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_m18215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m18216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m18217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m18218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_m18219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m18220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m18221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m18222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m18223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m18224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_m18225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m18226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m18230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_m18231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3EU7BFD8D965DU2D3FBBU2D4B9BU2DBB9CU2D5E659CC66C0EU7D_t4895_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Photon3Unity3D_Assembly_AttributeGenerators[138] = 
{
	NULL,
	g_Photon3Unity3D_Assembly_CustomAttributesCacheGenerator,
	Hashtable_t436_CustomAttributesCacheGenerator,
	PeerBase_t4852_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	PeerBase_t4852_CustomAttributesCacheGenerator_U3CHttpUrlParametersU3Ek__BackingField,
	PeerBase_t4852_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField,
	PeerBase_t4852_CustomAttributesCacheGenerator_U3CQuickResendAttemptsU3Ek__BackingField,
	PeerBase_t4852_CustomAttributesCacheGenerator_U3CTcpConnectionPrefixU3Ek__BackingField,
	PeerBase_t4852_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField,
	PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_m17936,
	PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m17937,
	PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_get_Listener_m17938,
	PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_set_Listener_m17939,
	PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_get_QuickResendAttempts_m17940,
	PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_set_QuickResendAttempts_m17941,
	PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_get_IsSendingOnlyAcks_m17947,
	PeerBase_t4852_CustomAttributesCacheGenerator_PeerBase_set_IsSendingOnlyAcks_m17948,
	U3CU3Ec__DisplayClass2_t4853_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass6_t4854_CustomAttributesCacheGenerator,
	EnetPeer_t4859_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__13_m17991,
	U3CU3Ec__DisplayClassb_t4860_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClassd_t4861_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass11_t4862_CustomAttributesCacheGenerator,
	StatusCode_t39_CustomAttributesCacheGenerator_InternalReceiveException,
	StatusCode_t39_CustomAttributesCacheGenerator_TcpRouterResponseOk,
	StatusCode_t39_CustomAttributesCacheGenerator_TcpRouterResponseNodeIdUnknown,
	StatusCode_t39_CustomAttributesCacheGenerator_TcpRouterResponseEndpointUnknown,
	StatusCode_t39_CustomAttributesCacheGenerator_TcpRouterResponseNodeNotReady,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_U3CProtocolU3Ek__BackingField,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_get_Protocol_m17998,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_set_Protocol_m17999,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_get_State_m18000,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m18001,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m18002,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m18003,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_m18004,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m18005,
	IPhotonSocket_t4855_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__7_m18016,
	U3CU3Ec__DisplayClass3_t4868_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass5_t4869_CustomAttributesCacheGenerator,
	SimulationItem_t4870_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField,
	SimulationItem_t4870_CustomAttributesCacheGenerator_SimulationItem_get_Delay_m18024,
	SimulationItem_t4870_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m18025,
	NetworkSimulationSet_t703_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField,
	NetworkSimulationSet_t703_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField,
	NetworkSimulationSet_t703_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m18031,
	NetworkSimulationSet_t703_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m18032,
	NetworkSimulationSet_t703_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m18033,
	NetworkSimulationSet_t703_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m18034,
	OperationResponse_t23_CustomAttributesCacheGenerator,
	EventData_t22_CustomAttributesCacheGenerator,
	SupportClass_t678_CustomAttributesCacheGenerator_CSU24U3CU3E9__CachedAnonymousMethodDelegate4,
	SupportClass_t678_CustomAttributesCacheGenerator_SupportClass_U3C_cctorU3Eb__3_m18151,
	U3CU3Ec__DisplayClass1_t4885_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass3_t4887_CustomAttributesCacheGenerator,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_m18173,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_m18174,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_m18175,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m18176,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_m18177,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m18178,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m18179,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_m18180,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m18181,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_m18182,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m18183,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_m18184,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m3305,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m18185,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m3306,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m18186,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m3303,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m18187,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_m3304,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m18188,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m3302,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m18189,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3301,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m18190,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m18191,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m18192,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m18193,
	TrafficStatsGameLevel_t707_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m18194,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m18205,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m18206,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m18207,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m18208,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_m18209,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m18210,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_m18211,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m18212,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_m18213,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m18214,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_m18215,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m18216,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m18217,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m18218,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_m18219,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m18220,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m18221,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m18222,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m18223,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m18224,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_m18225,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m18226,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m18230,
	TrafficStats_t709_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_m18231,
	U3CPrivateImplementationDetailsU3EU7BFD8D965DU2D3FBBU2D4B9BU2DBB9CU2D5E659CC66C0EU7D_t4895_CustomAttributesCacheGenerator,
};
