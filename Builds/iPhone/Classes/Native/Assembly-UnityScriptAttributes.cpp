#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttribute.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern TypeInfo* DebuggableAttribute_t741_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
void g_AssemblyU2DUnityScript_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggableAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1576);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggableAttribute_t741 * tmp;
		tmp = (DebuggableAttribute_t741 *)il2cpp_codegen_object_new (DebuggableAttribute_t741_il2cpp_TypeInfo_var);
		DebuggableAttribute__ctor_m3382(tmp, 257, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t33 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t33 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m114(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m115(tmp, true, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_AssemblyU2DUnityScript_Assembly_AttributeGenerators[2] = 
{
	NULL,
	g_AssemblyU2DUnityScript_Assembly_CustomAttributesCacheGenerator,
};
