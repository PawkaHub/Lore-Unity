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
extern TypeInfo* AssemblyCopyrightAttribute_t1370_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t1371_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t1372_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t1373_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t1375_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t1376_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t1378_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t1379_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t1380_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2743);
		AssemblyDescriptionAttribute_t1371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2744);
		AssemblyProductAttribute_t1372_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2745);
		AssemblyTitleAttribute_t1373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2746);
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		AssemblyCompanyAttribute_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2748);
		ComVisibleAttribute_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2749);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2750);
		AssemblyKeyFileAttribute_t1378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2751);
		AssemblyDelaySignAttribute_t1379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2752);
		NeutralResourcesLanguageAttribute_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2753);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t1370 * tmp;
		tmp = (AssemblyCopyrightAttribute_t1370 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t1370_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m6702(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t1371 * tmp;
		tmp = (AssemblyDescriptionAttribute_t1371 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t1371_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m6703(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t1372 * tmp;
		tmp = (AssemblyProductAttribute_t1372 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t1372_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m6704(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t1373 * tmp;
		tmp = (AssemblyTitleAttribute_t1373 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t1373_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m6705(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t1375 * tmp;
		tmp = (AssemblyCompanyAttribute_t1375 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t1375_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m6707(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t1376 * tmp;
		tmp = (ComVisibleAttribute_t1376 *)il2cpp_codegen_object_new (ComVisibleAttribute_t1376_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m6708(tmp, false, NULL);
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
		InternalsVisibleToAttribute_t1377 * tmp;
		tmp = (InternalsVisibleToAttribute_t1377 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1377_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6709(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t1378 * tmp;
		tmp = (AssemblyKeyFileAttribute_t1378 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t1378_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m6710(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t1379 * tmp;
		tmp = (AssemblyDelaySignAttribute_t1379 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t1379_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m6711(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t1380 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t1380 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t1380_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m6712(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger__ctor_m5715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger__ctor_m5717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger__ctor_m5719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_SetBit_m5726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_SetBit_m5727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_ToString_m5730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_ToString_m5731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m5741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m5745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_op_Equality_m5751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m5752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var;
void ModulusRing_t1180_CustomAttributesCacheGenerator_ModulusRing_Pow_m5699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2747);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1374 * tmp;
		tmp = (CLSCompliantAttribute_t1374 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1374_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m6706(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void ASN1_t1189_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PKCS12_t1214_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PKCS12_t1214_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PKCS12_t1214_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void PKCS12_t1214_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void X509Certificate_t1218_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void X509Certificate_t1218_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void X509Certificate_t1218_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void X509CertificateCollection_t1213_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t713_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t1223_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void X509Crl_t1225_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void X509Crl_t1225_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t1217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t1232_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t713_il2cpp_TypeInfo_var;
void KeyUsages_t1234_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t713_il2cpp_TypeInfo_var;
void CertTypes_t1236_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t1249_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void HttpsClientStream_t1269_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void HttpsClientStream_t1269_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void HttpsClientStream_t1269_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m6231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void HttpsClientStream_t1269_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m6232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void RSASslSignatureDeformatter_t1275_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void RSASslSignatureFormatter_t1277_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t34 * tmp;
		tmp = (CompilerGeneratedAttribute_t34 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m116(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t713_il2cpp_TypeInfo_var;
void SecurityProtocolType_t1280_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t1319_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
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
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger__ctor_m5715,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger__ctor_m5717,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger__ctor_m5719,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_SetBit_m5726,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_SetBit_m5727,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_ToString_m5730,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_ToString_m5731,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m5741,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m5745,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_op_Equality_m5751,
	BigInteger_t1179_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m5752,
	ModulusRing_t1180_CustomAttributesCacheGenerator_ModulusRing_Pow_m5699,
	ASN1_t1189_CustomAttributesCacheGenerator,
	PKCS12_t1214_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t1214_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t1214_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t1214_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t1218_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t1218_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t1218_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t1213_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t1223_CustomAttributesCacheGenerator,
	X509Crl_t1225_CustomAttributesCacheGenerator,
	X509Crl_t1225_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t1217_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t1232_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t1234_CustomAttributesCacheGenerator,
	CertTypes_t1236_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t1249_CustomAttributesCacheGenerator,
	HttpsClientStream_t1269_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t1269_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t1269_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m6231,
	HttpsClientStream_t1269_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m6232,
	RSASslSignatureDeformatter_t1275_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t1277_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t1280_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t1319_CustomAttributesCacheGenerator,
};
