#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t1277_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t1273_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t1279_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t1275_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t1278_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t3320_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t3321_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t3323_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t1277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2221);
		AssemblyDescriptionAttribute_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2217);
		AssemblyProductAttribute_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2220);
		AssemblyTitleAttribute_t1279_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2223);
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		AssemblyCompanyAttribute_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2219);
		ComVisibleAttribute_t1278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2222);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		AssemblyKeyFileAttribute_t3320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5715);
		AssemblyDelaySignAttribute_t3321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5716);
		NeutralResourcesLanguageAttribute_t3323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5718);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t1277 * tmp;
		tmp = (AssemblyCopyrightAttribute_t1277 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t1277_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m5518(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t1273 * tmp;
		tmp = (AssemblyDescriptionAttribute_t1273 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t1273_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m5514(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t1276 * tmp;
		tmp = (AssemblyProductAttribute_t1276 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t1276_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m5517(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t1279 * tmp;
		tmp = (AssemblyTitleAttribute_t1279 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t1279_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m5520(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t1275 * tmp;
		tmp = (AssemblyCompanyAttribute_t1275 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t1275_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m5516(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t1278 * tmp;
		tmp = (ComVisibleAttribute_t1278 *)il2cpp_codegen_object_new (ComVisibleAttribute_t1278_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m5519(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t33 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t33 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m114(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m115(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2732 * tmp;
		tmp = (InternalsVisibleToAttribute_t2732 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2732_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m9424(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t3320 * tmp;
		tmp = (AssemblyKeyFileAttribute_t3320 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t3320_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m10523(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t3321 * tmp;
		tmp = (AssemblyDelaySignAttribute_t3321 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t3321_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m10524(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t3323 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t3323 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t3323_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m10526(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger__ctor_m15682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger__ctor_m15684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger__ctor_m15686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_SetBit_m15693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_SetBit_m15694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_ToString_m15697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_ToString_m15698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m15708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m15712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_op_Equality_m15718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m15719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var;
void ModulusRing_t4553_CustomAttributesCacheGenerator_ModulusRing_Pow_m15666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3322 * tmp;
		tmp = (CLSCompliantAttribute_t3322 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3322_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m10525(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void ASN1_t4448_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PKCS12_t4485_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PKCS12_t4485_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PKCS12_t4485_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PKCS12_t4485_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void X509Certificate_t4341_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void X509Certificate_t4341_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void X509Certificate_t4341_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void X509CertificateCollection_t4443_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t831_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t4580_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void X509Crl_t4450_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void X509Crl_t4450_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t4473_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t4583_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t831_il2cpp_TypeInfo_var;
void KeyUsages_t4585_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t831_il2cpp_TypeInfo_var;
void CertTypes_t4587_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t1292_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t4599_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void HttpsClientStream_t4475_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void HttpsClientStream_t4475_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void HttpsClientStream_t4475_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m16148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void HttpsClientStream_t4475_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m16149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void RSASslSignatureDeformatter_t4617_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void RSASslSignatureFormatter_t4619_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t831_il2cpp_TypeInfo_var;
void SecurityProtocolType_t4530_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t4652_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger__ctor_m15682,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger__ctor_m15684,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger__ctor_m15686,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_SetBit_m15693,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_SetBit_m15694,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_ToString_m15697,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_ToString_m15698,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m15708,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m15712,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_op_Equality_m15718,
	BigInteger_t4552_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m15719,
	ModulusRing_t4553_CustomAttributesCacheGenerator_ModulusRing_Pow_m15666,
	ASN1_t4448_CustomAttributesCacheGenerator,
	PKCS12_t4485_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t4485_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t4485_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t4485_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t4341_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t4341_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t4341_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t4443_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t4580_CustomAttributesCacheGenerator,
	X509Crl_t4450_CustomAttributesCacheGenerator,
	X509Crl_t4450_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t4473_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t4583_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t4585_CustomAttributesCacheGenerator,
	CertTypes_t4587_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t4599_CustomAttributesCacheGenerator,
	HttpsClientStream_t4475_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t4475_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t4475_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m16148,
	HttpsClientStream_t4475_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m16149,
	RSASslSignatureDeformatter_t4617_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t4619_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t4530_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t4652_CustomAttributesCacheGenerator,
};
