#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilter.h"
// Metadata Definition System.Reflection.MemberFilter
extern TypeInfo MemberFilter_t3829_il2cpp_TypeInfo;
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilterMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo MemberFilter_t3829_MemberFilter__ctor_m21592_ParameterInfos[] = 
{
	{"object", 0, 134225072, 0, &Object_t_0_0_0},
	{"method", 1, 134225073, 0, &IntPtr_t_0_0_0},
};
extern const Il2CppType Void_t35_0_0_0;
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern const MethodInfo MemberFilter__ctor_m21592_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MemberFilter__ctor_m21592/* method */
	, &MemberFilter_t3829_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, MemberFilter_t3829_MemberFilter__ctor_m21592_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5974/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MemberFilter_t3829_MemberFilter_Invoke_m21593_ParameterInfos[] = 
{
	{"m", 0, 134225074, 0, &MemberInfo_t_0_0_0},
	{"filterCriteria", 1, 134225075, 0, &Object_t_0_0_0},
};
extern const Il2CppType Boolean_t30_0_0_0;
extern void* RuntimeInvoker_Boolean_t30_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern const MethodInfo MemberFilter_Invoke_m21593_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&MemberFilter_Invoke_m21593/* method */
	, &MemberFilter_t3829_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t30_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t30_Object_t_Object_t/* invoker_method */
	, MemberFilter_t3829_MemberFilter_Invoke_m21593_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5975/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MemberFilter_t3829_MemberFilter_BeginInvoke_m21594_ParameterInfos[] = 
{
	{"m", 0, 134225076, 0, &MemberInfo_t_0_0_0},
	{"filterCriteria", 1, 134225077, 0, &Object_t_0_0_0},
	{"callback", 2, 134225078, 0, &AsyncCallback_t449_0_0_0},
	{"object", 3, 134225079, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t448_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo MemberFilter_BeginInvoke_m21594_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&MemberFilter_BeginInvoke_m21594/* method */
	, &MemberFilter_t3829_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MemberFilter_t3829_MemberFilter_BeginInvoke_m21594_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5976/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo MemberFilter_t3829_MemberFilter_EndInvoke_m21595_ParameterInfos[] = 
{
	{"result", 0, 134225080, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t30_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern const MethodInfo MemberFilter_EndInvoke_m21595_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&MemberFilter_EndInvoke_m21595/* method */
	, &MemberFilter_t3829_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t30_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t30_Object_t/* invoker_method */
	, MemberFilter_t3829_MemberFilter_EndInvoke_m21595_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5977/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MemberFilter_t3829_MethodInfos[] =
{
	&MemberFilter__ctor_m21592_MethodInfo,
	&MemberFilter_Invoke_m21593_MethodInfo,
	&MemberFilter_BeginInvoke_m21594_MethodInfo,
	&MemberFilter_EndInvoke_m21595_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m3368_MethodInfo;
extern const MethodInfo Object_Finalize_m127_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m3369_MethodInfo;
extern const MethodInfo Object_ToString_m129_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m3370_MethodInfo;
extern const MethodInfo MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo;
extern const MethodInfo Delegate_Clone_m3372_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m3373_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m3374_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m3375_MethodInfo;
extern const MethodInfo MemberFilter_Invoke_m21593_MethodInfo;
extern const MethodInfo MemberFilter_BeginInvoke_m21594_MethodInfo;
extern const MethodInfo MemberFilter_EndInvoke_m21595_MethodInfo;
static const Il2CppMethodReference MemberFilter_t3829_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&MemberFilter_Invoke_m21593_MethodInfo,
	&MemberFilter_BeginInvoke_m21594_MethodInfo,
	&MemberFilter_EndInvoke_m21595_MethodInfo,
};
static bool MemberFilter_t3829_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICloneable_t736_0_0_0;
extern const Il2CppType ISerializable_t737_0_0_0;
static Il2CppInterfaceOffsetPair MemberFilter_t3829_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MemberFilter_t3829_0_0_0;
extern const Il2CppType MemberFilter_t3829_1_0_0;
extern const Il2CppType MulticastDelegate_t451_0_0_0;
struct MemberFilter_t3829;
const Il2CppTypeDefinitionMetadata MemberFilter_t3829_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MemberFilter_t3829_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, MemberFilter_t3829_VTable/* vtableMethods */
	, MemberFilter_t3829_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo MemberFilter_t3829_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MemberFilter"/* name */
	, "System.Reflection"/* namespaze */
	, MemberFilter_t3829_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MemberFilter_t3829_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 990/* custom_attributes_cache */
	, &MemberFilter_t3829_0_0_0/* byval_arg */
	, &MemberFilter_t3829_1_0_0/* this_arg */
	, &MemberFilter_t3829_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_MemberFilter_t3829/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MemberFilter_t3829)/* instance_size */
	, sizeof (MemberFilter_t3829)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
// Metadata Definition System.Reflection.TypeFilter
extern TypeInfo TypeFilter_t4031_il2cpp_TypeInfo;
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo TypeFilter_t4031_TypeFilter__ctor_m21596_ParameterInfos[] = 
{
	{"object", 0, 134225081, 0, &Object_t_0_0_0},
	{"method", 1, 134225082, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern const MethodInfo TypeFilter__ctor_m21596_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeFilter__ctor_m21596/* method */
	, &TypeFilter_t4031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, TypeFilter_t4031_TypeFilter__ctor_m21596_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5978/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TypeFilter_t4031_TypeFilter_Invoke_m21597_ParameterInfos[] = 
{
	{"m", 0, 134225083, 0, &Type_t_0_0_0},
	{"filterCriteria", 1, 134225084, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t30_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern const MethodInfo TypeFilter_Invoke_m21597_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&TypeFilter_Invoke_m21597/* method */
	, &TypeFilter_t4031_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t30_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t30_Object_t_Object_t/* invoker_method */
	, TypeFilter_t4031_TypeFilter_Invoke_m21597_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5979/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TypeFilter_t4031_TypeFilter_BeginInvoke_m21598_ParameterInfos[] = 
{
	{"m", 0, 134225085, 0, &Type_t_0_0_0},
	{"filterCriteria", 1, 134225086, 0, &Object_t_0_0_0},
	{"callback", 2, 134225087, 0, &AsyncCallback_t449_0_0_0},
	{"object", 3, 134225088, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo TypeFilter_BeginInvoke_m21598_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&TypeFilter_BeginInvoke_m21598/* method */
	, &TypeFilter_t4031_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, TypeFilter_t4031_TypeFilter_BeginInvoke_m21598_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5980/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo TypeFilter_t4031_TypeFilter_EndInvoke_m21599_ParameterInfos[] = 
{
	{"result", 0, 134225089, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t30_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern const MethodInfo TypeFilter_EndInvoke_m21599_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&TypeFilter_EndInvoke_m21599/* method */
	, &TypeFilter_t4031_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t30_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t30_Object_t/* invoker_method */
	, TypeFilter_t4031_TypeFilter_EndInvoke_m21599_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5981/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TypeFilter_t4031_MethodInfos[] =
{
	&TypeFilter__ctor_m21596_MethodInfo,
	&TypeFilter_Invoke_m21597_MethodInfo,
	&TypeFilter_BeginInvoke_m21598_MethodInfo,
	&TypeFilter_EndInvoke_m21599_MethodInfo,
	NULL
};
extern const MethodInfo TypeFilter_Invoke_m21597_MethodInfo;
extern const MethodInfo TypeFilter_BeginInvoke_m21598_MethodInfo;
extern const MethodInfo TypeFilter_EndInvoke_m21599_MethodInfo;
static const Il2CppMethodReference TypeFilter_t4031_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&TypeFilter_Invoke_m21597_MethodInfo,
	&TypeFilter_BeginInvoke_m21598_MethodInfo,
	&TypeFilter_EndInvoke_m21599_MethodInfo,
};
static bool TypeFilter_t4031_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TypeFilter_t4031_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TypeFilter_t4031_0_0_0;
extern const Il2CppType TypeFilter_t4031_1_0_0;
struct TypeFilter_t4031;
const Il2CppTypeDefinitionMetadata TypeFilter_t4031_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeFilter_t4031_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, TypeFilter_t4031_VTable/* vtableMethods */
	, TypeFilter_t4031_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo TypeFilter_t4031_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeFilter"/* name */
	, "System.Reflection"/* namespaze */
	, TypeFilter_t4031_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TypeFilter_t4031_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 991/* custom_attributes_cache */
	, &TypeFilter_t4031_0_0_0/* byval_arg */
	, &TypeFilter_t4031_1_0_0/* this_arg */
	, &TypeFilter_t4031_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_TypeFilter_t4031/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeFilter_t4031)/* instance_size */
	, sizeof (TypeFilter_t4031)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// Metadata Definition System.Runtime.Remoting.Messaging.HeaderHandler
extern TypeInfo HeaderHandler_t4340_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo HeaderHandler_t4340_HeaderHandler__ctor_m21600_ParameterInfos[] = 
{
	{"object", 0, 134225090, 0, &Object_t_0_0_0},
	{"method", 1, 134225091, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo HeaderHandler__ctor_m21600_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&HeaderHandler__ctor_m21600/* method */
	, &HeaderHandler_t4340_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, HeaderHandler_t4340_HeaderHandler__ctor_m21600_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5982/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HeaderU5BU5D_t4339_0_0_0;
extern const Il2CppType HeaderU5BU5D_t4339_0_0_0;
static const ParameterInfo HeaderHandler_t4340_HeaderHandler_Invoke_m21601_ParameterInfos[] = 
{
	{"headers", 0, 134225092, 0, &HeaderU5BU5D_t4339_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern const MethodInfo HeaderHandler_Invoke_m21601_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&HeaderHandler_Invoke_m21601/* method */
	, &HeaderHandler_t4340_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4340_HeaderHandler_Invoke_m21601_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5983/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HeaderU5BU5D_t4339_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo HeaderHandler_t4340_HeaderHandler_BeginInvoke_m21602_ParameterInfos[] = 
{
	{"headers", 0, 134225093, 0, &HeaderU5BU5D_t4339_0_0_0},
	{"callback", 1, 134225094, 0, &AsyncCallback_t449_0_0_0},
	{"object", 2, 134225095, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern const MethodInfo HeaderHandler_BeginInvoke_m21602_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&HeaderHandler_BeginInvoke_m21602/* method */
	, &HeaderHandler_t4340_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4340_HeaderHandler_BeginInvoke_m21602_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5984/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo HeaderHandler_t4340_HeaderHandler_EndInvoke_m21603_ParameterInfos[] = 
{
	{"result", 0, 134225096, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo HeaderHandler_EndInvoke_m21603_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&HeaderHandler_EndInvoke_m21603/* method */
	, &HeaderHandler_t4340_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4340_HeaderHandler_EndInvoke_m21603_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5985/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* HeaderHandler_t4340_MethodInfos[] =
{
	&HeaderHandler__ctor_m21600_MethodInfo,
	&HeaderHandler_Invoke_m21601_MethodInfo,
	&HeaderHandler_BeginInvoke_m21602_MethodInfo,
	&HeaderHandler_EndInvoke_m21603_MethodInfo,
	NULL
};
extern const MethodInfo HeaderHandler_Invoke_m21601_MethodInfo;
extern const MethodInfo HeaderHandler_BeginInvoke_m21602_MethodInfo;
extern const MethodInfo HeaderHandler_EndInvoke_m21603_MethodInfo;
static const Il2CppMethodReference HeaderHandler_t4340_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&HeaderHandler_Invoke_m21601_MethodInfo,
	&HeaderHandler_BeginInvoke_m21602_MethodInfo,
	&HeaderHandler_EndInvoke_m21603_MethodInfo,
};
static bool HeaderHandler_t4340_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair HeaderHandler_t4340_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType HeaderHandler_t4340_0_0_0;
extern const Il2CppType HeaderHandler_t4340_1_0_0;
struct HeaderHandler_t4340;
const Il2CppTypeDefinitionMetadata HeaderHandler_t4340_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, HeaderHandler_t4340_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, HeaderHandler_t4340_VTable/* vtableMethods */
	, HeaderHandler_t4340_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo HeaderHandler_t4340_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "HeaderHandler"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, HeaderHandler_t4340_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &HeaderHandler_t4340_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 992/* custom_attributes_cache */
	, &HeaderHandler_t4340_0_0_0/* byval_arg */
	, &HeaderHandler_t4340_1_0_0/* this_arg */
	, &HeaderHandler_t4340_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_HeaderHandler_t4340/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HeaderHandler_t4340)/* instance_size */
	, sizeof (HeaderHandler_t4340)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStart.h"
// Metadata Definition System.Threading.ParameterizedThreadStart
extern TypeInfo ParameterizedThreadStart_t1671_il2cpp_TypeInfo;
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStartMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t1671_ParameterizedThreadStart__ctor_m7649_ParameterInfos[] = 
{
	{"object", 0, 134225097, 0, &Object_t_0_0_0},
	{"method", 1, 134225098, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ParameterizedThreadStart__ctor_m7649_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ParameterizedThreadStart__ctor_m7649/* method */
	, &ParameterizedThreadStart_t1671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, ParameterizedThreadStart_t1671_ParameterizedThreadStart__ctor_m7649_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5986/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t1671_ParameterizedThreadStart_Invoke_m21604_ParameterInfos[] = 
{
	{"obj", 0, 134225099, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern const MethodInfo ParameterizedThreadStart_Invoke_m21604_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_Invoke_m21604/* method */
	, &ParameterizedThreadStart_t1671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, ParameterizedThreadStart_t1671_ParameterizedThreadStart_Invoke_m21604_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5987/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t1671_ParameterizedThreadStart_BeginInvoke_m21605_ParameterInfos[] = 
{
	{"obj", 0, 134225100, 0, &Object_t_0_0_0},
	{"callback", 1, 134225101, 0, &AsyncCallback_t449_0_0_0},
	{"object", 2, 134225102, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo ParameterizedThreadStart_BeginInvoke_m21605_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_BeginInvoke_m21605/* method */
	, &ParameterizedThreadStart_t1671_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ParameterizedThreadStart_t1671_ParameterizedThreadStart_BeginInvoke_m21605_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5988/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t1671_ParameterizedThreadStart_EndInvoke_m21606_ParameterInfos[] = 
{
	{"result", 0, 134225103, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern const MethodInfo ParameterizedThreadStart_EndInvoke_m21606_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_EndInvoke_m21606/* method */
	, &ParameterizedThreadStart_t1671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, ParameterizedThreadStart_t1671_ParameterizedThreadStart_EndInvoke_m21606_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5989/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ParameterizedThreadStart_t1671_MethodInfos[] =
{
	&ParameterizedThreadStart__ctor_m7649_MethodInfo,
	&ParameterizedThreadStart_Invoke_m21604_MethodInfo,
	&ParameterizedThreadStart_BeginInvoke_m21605_MethodInfo,
	&ParameterizedThreadStart_EndInvoke_m21606_MethodInfo,
	NULL
};
extern const MethodInfo ParameterizedThreadStart_Invoke_m21604_MethodInfo;
extern const MethodInfo ParameterizedThreadStart_BeginInvoke_m21605_MethodInfo;
extern const MethodInfo ParameterizedThreadStart_EndInvoke_m21606_MethodInfo;
static const Il2CppMethodReference ParameterizedThreadStart_t1671_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&ParameterizedThreadStart_Invoke_m21604_MethodInfo,
	&ParameterizedThreadStart_BeginInvoke_m21605_MethodInfo,
	&ParameterizedThreadStart_EndInvoke_m21606_MethodInfo,
};
static bool ParameterizedThreadStart_t1671_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ParameterizedThreadStart_t1671_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ParameterizedThreadStart_t1671_0_0_0;
extern const Il2CppType ParameterizedThreadStart_t1671_1_0_0;
struct ParameterizedThreadStart_t1671;
const Il2CppTypeDefinitionMetadata ParameterizedThreadStart_t1671_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ParameterizedThreadStart_t1671_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, ParameterizedThreadStart_t1671_VTable/* vtableMethods */
	, ParameterizedThreadStart_t1671_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ParameterizedThreadStart_t1671_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ParameterizedThreadStart"/* name */
	, "System.Threading"/* namespaze */
	, ParameterizedThreadStart_t1671_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ParameterizedThreadStart_t1671_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 993/* custom_attributes_cache */
	, &ParameterizedThreadStart_t1671_0_0_0/* byval_arg */
	, &ParameterizedThreadStart_t1671_1_0_0/* this_arg */
	, &ParameterizedThreadStart_t1671_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ParameterizedThreadStart_t1671/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ParameterizedThreadStart_t1671)/* instance_size */
	, sizeof (ParameterizedThreadStart_t1671)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallback.h"
// Metadata Definition System.Threading.SendOrPostCallback
extern TypeInfo SendOrPostCallback_t1682_il2cpp_TypeInfo;
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t1682_SendOrPostCallback__ctor_m7697_ParameterInfos[] = 
{
	{"object", 0, 134225104, 0, &Object_t_0_0_0},
	{"method", 1, 134225105, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo SendOrPostCallback__ctor_m7697_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SendOrPostCallback__ctor_m7697/* method */
	, &SendOrPostCallback_t1682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, SendOrPostCallback_t1682_SendOrPostCallback__ctor_m7697_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5990/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t1682_SendOrPostCallback_Invoke_m21607_ParameterInfos[] = 
{
	{"state", 0, 134225106, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern const MethodInfo SendOrPostCallback_Invoke_m21607_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&SendOrPostCallback_Invoke_m21607/* method */
	, &SendOrPostCallback_t1682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, SendOrPostCallback_t1682_SendOrPostCallback_Invoke_m21607_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5991/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t1682_SendOrPostCallback_BeginInvoke_m21608_ParameterInfos[] = 
{
	{"state", 0, 134225107, 0, &Object_t_0_0_0},
	{"callback", 1, 134225108, 0, &AsyncCallback_t449_0_0_0},
	{"object", 2, 134225109, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo SendOrPostCallback_BeginInvoke_m21608_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&SendOrPostCallback_BeginInvoke_m21608/* method */
	, &SendOrPostCallback_t1682_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SendOrPostCallback_t1682_SendOrPostCallback_BeginInvoke_m21608_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5992/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo SendOrPostCallback_t1682_SendOrPostCallback_EndInvoke_m21609_ParameterInfos[] = 
{
	{"result", 0, 134225110, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo SendOrPostCallback_EndInvoke_m21609_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&SendOrPostCallback_EndInvoke_m21609/* method */
	, &SendOrPostCallback_t1682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, SendOrPostCallback_t1682_SendOrPostCallback_EndInvoke_m21609_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5993/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SendOrPostCallback_t1682_MethodInfos[] =
{
	&SendOrPostCallback__ctor_m7697_MethodInfo,
	&SendOrPostCallback_Invoke_m21607_MethodInfo,
	&SendOrPostCallback_BeginInvoke_m21608_MethodInfo,
	&SendOrPostCallback_EndInvoke_m21609_MethodInfo,
	NULL
};
extern const MethodInfo SendOrPostCallback_Invoke_m21607_MethodInfo;
extern const MethodInfo SendOrPostCallback_BeginInvoke_m21608_MethodInfo;
extern const MethodInfo SendOrPostCallback_EndInvoke_m21609_MethodInfo;
static const Il2CppMethodReference SendOrPostCallback_t1682_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&SendOrPostCallback_Invoke_m21607_MethodInfo,
	&SendOrPostCallback_BeginInvoke_m21608_MethodInfo,
	&SendOrPostCallback_EndInvoke_m21609_MethodInfo,
};
static bool SendOrPostCallback_t1682_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair SendOrPostCallback_t1682_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SendOrPostCallback_t1682_0_0_0;
extern const Il2CppType SendOrPostCallback_t1682_1_0_0;
struct SendOrPostCallback_t1682;
const Il2CppTypeDefinitionMetadata SendOrPostCallback_t1682_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SendOrPostCallback_t1682_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, SendOrPostCallback_t1682_VTable/* vtableMethods */
	, SendOrPostCallback_t1682_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SendOrPostCallback_t1682_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SendOrPostCallback"/* name */
	, "System.Threading"/* namespaze */
	, SendOrPostCallback_t1682_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SendOrPostCallback_t1682_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SendOrPostCallback_t1682_0_0_0/* byval_arg */
	, &SendOrPostCallback_t1682_1_0_0/* this_arg */
	, &SendOrPostCallback_t1682_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_SendOrPostCallback_t1682/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SendOrPostCallback_t1682)/* instance_size */
	, sizeof (SendOrPostCallback_t1682)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStart.h"
// Metadata Definition System.Threading.ThreadStart
extern TypeInfo ThreadStart_t3173_il2cpp_TypeInfo;
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStartMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ThreadStart_t3173_ThreadStart__ctor_m14410_ParameterInfos[] = 
{
	{"object", 0, 134225111, 0, &Object_t_0_0_0},
	{"method", 1, 134225112, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ThreadStart__ctor_m14410_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ThreadStart__ctor_m14410/* method */
	, &ThreadStart_t3173_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, ThreadStart_t3173_ThreadStart__ctor_m14410_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5994/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::Invoke()
extern const MethodInfo ThreadStart_Invoke_m21610_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ThreadStart_Invoke_m21610/* method */
	, &ThreadStart_t3173_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5995/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ThreadStart_t3173_ThreadStart_BeginInvoke_m21611_ParameterInfos[] = 
{
	{"callback", 0, 134225113, 0, &AsyncCallback_t449_0_0_0},
	{"object", 1, 134225114, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern const MethodInfo ThreadStart_BeginInvoke_m21611_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ThreadStart_BeginInvoke_m21611/* method */
	, &ThreadStart_t3173_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ThreadStart_t3173_ThreadStart_BeginInvoke_m21611_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5996/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo ThreadStart_t3173_ThreadStart_EndInvoke_m21612_ParameterInfos[] = 
{
	{"result", 0, 134225115, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern const MethodInfo ThreadStart_EndInvoke_m21612_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ThreadStart_EndInvoke_m21612/* method */
	, &ThreadStart_t3173_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, ThreadStart_t3173_ThreadStart_EndInvoke_m21612_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5997/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ThreadStart_t3173_MethodInfos[] =
{
	&ThreadStart__ctor_m14410_MethodInfo,
	&ThreadStart_Invoke_m21610_MethodInfo,
	&ThreadStart_BeginInvoke_m21611_MethodInfo,
	&ThreadStart_EndInvoke_m21612_MethodInfo,
	NULL
};
extern const MethodInfo ThreadStart_Invoke_m21610_MethodInfo;
extern const MethodInfo ThreadStart_BeginInvoke_m21611_MethodInfo;
extern const MethodInfo ThreadStart_EndInvoke_m21612_MethodInfo;
static const Il2CppMethodReference ThreadStart_t3173_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&ThreadStart_Invoke_m21610_MethodInfo,
	&ThreadStart_BeginInvoke_m21611_MethodInfo,
	&ThreadStart_EndInvoke_m21612_MethodInfo,
};
static bool ThreadStart_t3173_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ThreadStart_t3173_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ThreadStart_t3173_0_0_0;
extern const Il2CppType ThreadStart_t3173_1_0_0;
struct ThreadStart_t3173;
const Il2CppTypeDefinitionMetadata ThreadStart_t3173_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ThreadStart_t3173_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, ThreadStart_t3173_VTable/* vtableMethods */
	, ThreadStart_t3173_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ThreadStart_t3173_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadStart"/* name */
	, "System.Threading"/* namespaze */
	, ThreadStart_t3173_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ThreadStart_t3173_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 994/* custom_attributes_cache */
	, &ThreadStart_t3173_0_0_0/* byval_arg */
	, &ThreadStart_t3173_1_0_0/* this_arg */
	, &ThreadStart_t3173_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ThreadStart_t3173/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ThreadStart_t3173)/* instance_size */
	, sizeof (ThreadStart_t3173)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallback.h"
// Metadata Definition System.Threading.WaitCallback
extern TypeInfo WaitCallback_t574_il2cpp_TypeInfo;
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo WaitCallback_t574_WaitCallback__ctor_m2470_ParameterInfos[] = 
{
	{"object", 0, 134225116, 0, &Object_t_0_0_0},
	{"method", 1, 134225117, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo WaitCallback__ctor_m2470_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WaitCallback__ctor_m2470/* method */
	, &WaitCallback_t574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, WaitCallback_t574_WaitCallback__ctor_m2470_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5998/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WaitCallback_t574_WaitCallback_Invoke_m21613_ParameterInfos[] = 
{
	{"state", 0, 134225118, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern const MethodInfo WaitCallback_Invoke_m21613_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&WaitCallback_Invoke_m21613/* method */
	, &WaitCallback_t574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, WaitCallback_t574_WaitCallback_Invoke_m21613_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5999/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WaitCallback_t574_WaitCallback_BeginInvoke_m21614_ParameterInfos[] = 
{
	{"state", 0, 134225119, 0, &Object_t_0_0_0},
	{"callback", 1, 134225120, 0, &AsyncCallback_t449_0_0_0},
	{"object", 2, 134225121, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo WaitCallback_BeginInvoke_m21614_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&WaitCallback_BeginInvoke_m21614/* method */
	, &WaitCallback_t574_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, WaitCallback_t574_WaitCallback_BeginInvoke_m21614_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6000/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo WaitCallback_t574_WaitCallback_EndInvoke_m21615_ParameterInfos[] = 
{
	{"result", 0, 134225122, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo WaitCallback_EndInvoke_m21615_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&WaitCallback_EndInvoke_m21615/* method */
	, &WaitCallback_t574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, WaitCallback_t574_WaitCallback_EndInvoke_m21615_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6001/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WaitCallback_t574_MethodInfos[] =
{
	&WaitCallback__ctor_m2470_MethodInfo,
	&WaitCallback_Invoke_m21613_MethodInfo,
	&WaitCallback_BeginInvoke_m21614_MethodInfo,
	&WaitCallback_EndInvoke_m21615_MethodInfo,
	NULL
};
extern const MethodInfo WaitCallback_Invoke_m21613_MethodInfo;
extern const MethodInfo WaitCallback_BeginInvoke_m21614_MethodInfo;
extern const MethodInfo WaitCallback_EndInvoke_m21615_MethodInfo;
static const Il2CppMethodReference WaitCallback_t574_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&WaitCallback_Invoke_m21613_MethodInfo,
	&WaitCallback_BeginInvoke_m21614_MethodInfo,
	&WaitCallback_EndInvoke_m21615_MethodInfo,
};
static bool WaitCallback_t574_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair WaitCallback_t574_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType WaitCallback_t574_0_0_0;
extern const Il2CppType WaitCallback_t574_1_0_0;
struct WaitCallback_t574;
const Il2CppTypeDefinitionMetadata WaitCallback_t574_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WaitCallback_t574_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, WaitCallback_t574_VTable/* vtableMethods */
	, WaitCallback_t574_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WaitCallback_t574_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "WaitCallback"/* name */
	, "System.Threading"/* namespaze */
	, WaitCallback_t574_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WaitCallback_t574_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 995/* custom_attributes_cache */
	, &WaitCallback_t574_0_0_0/* byval_arg */
	, &WaitCallback_t574_1_0_0/* this_arg */
	, &WaitCallback_t574_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_WaitCallback_t574/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WaitCallback_t574)/* instance_size */
	, sizeof (WaitCallback_t574)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Action`1
extern TypeInfo Action_1_t4470_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Action_1_t4470_Il2CppGenericContainer;
extern TypeInfo Action_1_t4470_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Action_1_t4470_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Action_1_t4470_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Action_1_t4470_Il2CppGenericParametersArray[1] = 
{
	&Action_1_t4470_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Action_1_t4470_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Action_1_t4470_il2cpp_TypeInfo, 1, 0, Action_1_t4470_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Action_1_t4470_Action_1__ctor_m22306_ParameterInfos[] = 
{
	{"object", 0, 134225123, 0, &Object_t_0_0_0},
	{"method", 1, 134225124, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Action`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Action_1__ctor_m22306_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Action_1_t4470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4470_Action_1__ctor_m22306_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6002/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t4470_gp_0_0_0_0;
extern const Il2CppType Action_1_t4470_gp_0_0_0_0;
static const ParameterInfo Action_1_t4470_Action_1_Invoke_m22307_ParameterInfos[] = 
{
	{"obj", 0, 134225125, 0, &Action_1_t4470_gp_0_0_0_0},
};
// System.Void System.Action`1::Invoke(T)
extern const MethodInfo Action_1_Invoke_m22307_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Action_1_t4470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4470_Action_1_Invoke_m22307_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6003/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t4470_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Action_1_t4470_Action_1_BeginInvoke_m22308_ParameterInfos[] = 
{
	{"obj", 0, 134225126, 0, &Action_1_t4470_gp_0_0_0_0},
	{"callback", 1, 134225127, 0, &AsyncCallback_t449_0_0_0},
	{"object", 2, 134225128, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Action_1_BeginInvoke_m22308_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Action_1_t4470_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4470_Action_1_BeginInvoke_m22308_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6004/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo Action_1_t4470_Action_1_EndInvoke_m22309_ParameterInfos[] = 
{
	{"result", 0, 134225129, 0, &IAsyncResult_t448_0_0_0},
};
// System.Void System.Action`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Action_1_EndInvoke_m22309_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Action_1_t4470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4470_Action_1_EndInvoke_m22309_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6005/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Action_1_t4470_MethodInfos[] =
{
	&Action_1__ctor_m22306_MethodInfo,
	&Action_1_Invoke_m22307_MethodInfo,
	&Action_1_BeginInvoke_m22308_MethodInfo,
	&Action_1_EndInvoke_m22309_MethodInfo,
	NULL
};
extern const MethodInfo Action_1_Invoke_m22307_MethodInfo;
extern const MethodInfo Action_1_BeginInvoke_m22308_MethodInfo;
extern const MethodInfo Action_1_EndInvoke_m22309_MethodInfo;
static const Il2CppMethodReference Action_1_t4470_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&Action_1_Invoke_m22307_MethodInfo,
	&Action_1_BeginInvoke_m22308_MethodInfo,
	&Action_1_EndInvoke_m22309_MethodInfo,
};
static bool Action_1_t4470_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Action_1_t4470_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Action_1_t4470_0_0_0;
extern const Il2CppType Action_1_t4470_1_0_0;
struct Action_1_t4470;
const Il2CppTypeDefinitionMetadata Action_1_t4470_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Action_1_t4470_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, Action_1_t4470_VTable/* vtableMethods */
	, Action_1_t4470_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Action_1_t4470_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Action`1"/* name */
	, "System"/* namespaze */
	, Action_1_t4470_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Action_1_t4470_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Action_1_t4470_0_0_0/* byval_arg */
	, &Action_1_t4470_1_0_0/* this_arg */
	, &Action_1_t4470_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Action_1_t4470_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializer.h"
// Metadata Definition System.AppDomainInitializer
extern TypeInfo AppDomainInitializer_t4276_il2cpp_TypeInfo;
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t4276_AppDomainInitializer__ctor_m21616_ParameterInfos[] = 
{
	{"object", 0, 134225130, 0, &Object_t_0_0_0},
	{"method", 1, 134225131, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AppDomainInitializer__ctor_m21616_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AppDomainInitializer__ctor_m21616/* method */
	, &AppDomainInitializer_t4276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, AppDomainInitializer_t4276_AppDomainInitializer__ctor_m21616_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6006/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t20_0_0_0;
extern const Il2CppType StringU5BU5D_t20_0_0_0;
static const ParameterInfo AppDomainInitializer_t4276_AppDomainInitializer_Invoke_m21617_ParameterInfos[] = 
{
	{"args", 0, 134225132, 0, &StringU5BU5D_t20_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern const MethodInfo AppDomainInitializer_Invoke_m21617_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AppDomainInitializer_Invoke_m21617/* method */
	, &AppDomainInitializer_t4276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AppDomainInitializer_t4276_AppDomainInitializer_Invoke_m21617_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6007/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t20_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t4276_AppDomainInitializer_BeginInvoke_m21618_ParameterInfos[] = 
{
	{"args", 0, 134225133, 0, &StringU5BU5D_t20_0_0_0},
	{"callback", 1, 134225134, 0, &AsyncCallback_t449_0_0_0},
	{"object", 2, 134225135, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern const MethodInfo AppDomainInitializer_BeginInvoke_m21618_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_BeginInvoke_m21618/* method */
	, &AppDomainInitializer_t4276_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AppDomainInitializer_t4276_AppDomainInitializer_BeginInvoke_m21618_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6008/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo AppDomainInitializer_t4276_AppDomainInitializer_EndInvoke_m21619_ParameterInfos[] = 
{
	{"result", 0, 134225136, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern const MethodInfo AppDomainInitializer_EndInvoke_m21619_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_EndInvoke_m21619/* method */
	, &AppDomainInitializer_t4276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AppDomainInitializer_t4276_AppDomainInitializer_EndInvoke_m21619_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6009/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AppDomainInitializer_t4276_MethodInfos[] =
{
	&AppDomainInitializer__ctor_m21616_MethodInfo,
	&AppDomainInitializer_Invoke_m21617_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m21618_MethodInfo,
	&AppDomainInitializer_EndInvoke_m21619_MethodInfo,
	NULL
};
extern const MethodInfo AppDomainInitializer_Invoke_m21617_MethodInfo;
extern const MethodInfo AppDomainInitializer_BeginInvoke_m21618_MethodInfo;
extern const MethodInfo AppDomainInitializer_EndInvoke_m21619_MethodInfo;
static const Il2CppMethodReference AppDomainInitializer_t4276_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&AppDomainInitializer_Invoke_m21617_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m21618_MethodInfo,
	&AppDomainInitializer_EndInvoke_m21619_MethodInfo,
};
static bool AppDomainInitializer_t4276_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AppDomainInitializer_t4276_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AppDomainInitializer_t4276_0_0_0;
extern const Il2CppType AppDomainInitializer_t4276_1_0_0;
struct AppDomainInitializer_t4276;
const Il2CppTypeDefinitionMetadata AppDomainInitializer_t4276_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AppDomainInitializer_t4276_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, AppDomainInitializer_t4276_VTable/* vtableMethods */
	, AppDomainInitializer_t4276_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AppDomainInitializer_t4276_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AppDomainInitializer"/* name */
	, "System"/* namespaze */
	, AppDomainInitializer_t4276_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AppDomainInitializer_t4276_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 996/* custom_attributes_cache */
	, &AppDomainInitializer_t4276_0_0_0/* byval_arg */
	, &AppDomainInitializer_t4276_1_0_0/* this_arg */
	, &AppDomainInitializer_t4276_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AppDomainInitializer_t4276/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AppDomainInitializer_t4276)/* instance_size */
	, sizeof (AppDomainInitializer_t4276)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandler.h"
// Metadata Definition System.AssemblyLoadEventHandler
extern TypeInfo AssemblyLoadEventHandler_t4273_il2cpp_TypeInfo;
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4273_AssemblyLoadEventHandler__ctor_m21620_ParameterInfos[] = 
{
	{"object", 0, 134225137, 0, &Object_t_0_0_0},
	{"method", 1, 134225138, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AssemblyLoadEventHandler__ctor_m21620_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler__ctor_m21620/* method */
	, &AssemblyLoadEventHandler_t4273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, AssemblyLoadEventHandler_t4273_AssemblyLoadEventHandler__ctor_m21620_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6010/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4279_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4279_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4273_AssemblyLoadEventHandler_Invoke_m21621_ParameterInfos[] = 
{
	{"sender", 0, 134225139, 0, &Object_t_0_0_0},
	{"args", 1, 134225140, 0, &AssemblyLoadEventArgs_t4279_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m21621_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_Invoke_m21621/* method */
	, &AssemblyLoadEventHandler_t4273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4273_AssemblyLoadEventHandler_Invoke_m21621_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6011/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4279_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4273_AssemblyLoadEventHandler_BeginInvoke_m21622_ParameterInfos[] = 
{
	{"sender", 0, 134225141, 0, &Object_t_0_0_0},
	{"args", 1, 134225142, 0, &AssemblyLoadEventArgs_t4279_0_0_0},
	{"callback", 2, 134225143, 0, &AsyncCallback_t449_0_0_0},
	{"object", 3, 134225144, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m21622_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_BeginInvoke_m21622/* method */
	, &AssemblyLoadEventHandler_t4273_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4273_AssemblyLoadEventHandler_BeginInvoke_m21622_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6012/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4273_AssemblyLoadEventHandler_EndInvoke_m21623_ParameterInfos[] = 
{
	{"result", 0, 134225145, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m21623_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_EndInvoke_m21623/* method */
	, &AssemblyLoadEventHandler_t4273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4273_AssemblyLoadEventHandler_EndInvoke_m21623_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6013/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AssemblyLoadEventHandler_t4273_MethodInfos[] =
{
	&AssemblyLoadEventHandler__ctor_m21620_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m21621_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m21622_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m21623_MethodInfo,
	NULL
};
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m21621_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m21622_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m21623_MethodInfo;
static const Il2CppMethodReference AssemblyLoadEventHandler_t4273_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m21621_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m21622_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m21623_MethodInfo,
};
static bool AssemblyLoadEventHandler_t4273_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AssemblyLoadEventHandler_t4273_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AssemblyLoadEventHandler_t4273_0_0_0;
extern const Il2CppType AssemblyLoadEventHandler_t4273_1_0_0;
struct AssemblyLoadEventHandler_t4273;
const Il2CppTypeDefinitionMetadata AssemblyLoadEventHandler_t4273_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AssemblyLoadEventHandler_t4273_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, AssemblyLoadEventHandler_t4273_VTable/* vtableMethods */
	, AssemblyLoadEventHandler_t4273_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AssemblyLoadEventHandler_t4273_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AssemblyLoadEventHandler"/* name */
	, "System"/* namespaze */
	, AssemblyLoadEventHandler_t4273_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AssemblyLoadEventHandler_t4273_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 997/* custom_attributes_cache */
	, &AssemblyLoadEventHandler_t4273_0_0_0/* byval_arg */
	, &AssemblyLoadEventHandler_t4273_1_0_0/* this_arg */
	, &AssemblyLoadEventHandler_t4273_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t4273/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AssemblyLoadEventHandler_t4273)/* instance_size */
	, sizeof (AssemblyLoadEventHandler_t4273)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Comparison`1
extern TypeInfo Comparison_1_t4471_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Comparison_1_t4471_Il2CppGenericContainer;
extern TypeInfo Comparison_1_t4471_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Comparison_1_t4471_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Comparison_1_t4471_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Comparison_1_t4471_Il2CppGenericParametersArray[1] = 
{
	&Comparison_1_t4471_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Comparison_1_t4471_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Comparison_1_t4471_il2cpp_TypeInfo, 1, 0, Comparison_1_t4471_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Comparison_1_t4471_Comparison_1__ctor_m22310_ParameterInfos[] = 
{
	{"object", 0, 134225146, 0, &Object_t_0_0_0},
	{"method", 1, 134225147, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Comparison`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Comparison_1__ctor_m22310_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Comparison_1_t4471_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4471_Comparison_1__ctor_m22310_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6014/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Comparison_1_t4471_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4471_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4471_gp_0_0_0_0;
static const ParameterInfo Comparison_1_t4471_Comparison_1_Invoke_m22311_ParameterInfos[] = 
{
	{"x", 0, 134225148, 0, &Comparison_1_t4471_gp_0_0_0_0},
	{"y", 1, 134225149, 0, &Comparison_1_t4471_gp_0_0_0_0},
};
extern const Il2CppType Int32_t29_0_0_0;
// System.Int32 System.Comparison`1::Invoke(T,T)
extern const MethodInfo Comparison_1_Invoke_m22311_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4471_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4471_Comparison_1_Invoke_m22311_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6015/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Comparison_1_t4471_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4471_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Comparison_1_t4471_Comparison_1_BeginInvoke_m22312_ParameterInfos[] = 
{
	{"x", 0, 134225150, 0, &Comparison_1_t4471_gp_0_0_0_0},
	{"y", 1, 134225151, 0, &Comparison_1_t4471_gp_0_0_0_0},
	{"callback", 2, 134225152, 0, &AsyncCallback_t449_0_0_0},
	{"object", 3, 134225153, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern const MethodInfo Comparison_1_BeginInvoke_m22312_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4471_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4471_Comparison_1_BeginInvoke_m22312_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6016/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo Comparison_1_t4471_Comparison_1_EndInvoke_m22313_ParameterInfos[] = 
{
	{"result", 0, 134225154, 0, &IAsyncResult_t448_0_0_0},
};
// System.Int32 System.Comparison`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Comparison_1_EndInvoke_m22313_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4471_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4471_Comparison_1_EndInvoke_m22313_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6017/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Comparison_1_t4471_MethodInfos[] =
{
	&Comparison_1__ctor_m22310_MethodInfo,
	&Comparison_1_Invoke_m22311_MethodInfo,
	&Comparison_1_BeginInvoke_m22312_MethodInfo,
	&Comparison_1_EndInvoke_m22313_MethodInfo,
	NULL
};
extern const MethodInfo Comparison_1_Invoke_m22311_MethodInfo;
extern const MethodInfo Comparison_1_BeginInvoke_m22312_MethodInfo;
extern const MethodInfo Comparison_1_EndInvoke_m22313_MethodInfo;
static const Il2CppMethodReference Comparison_1_t4471_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&Comparison_1_Invoke_m22311_MethodInfo,
	&Comparison_1_BeginInvoke_m22312_MethodInfo,
	&Comparison_1_EndInvoke_m22313_MethodInfo,
};
static bool Comparison_1_t4471_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Comparison_1_t4471_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Comparison_1_t4471_0_0_0;
extern const Il2CppType Comparison_1_t4471_1_0_0;
struct Comparison_1_t4471;
const Il2CppTypeDefinitionMetadata Comparison_1_t4471_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Comparison_1_t4471_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, Comparison_1_t4471_VTable/* vtableMethods */
	, Comparison_1_t4471_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Comparison_1_t4471_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparison`1"/* name */
	, "System"/* namespaze */
	, Comparison_1_t4471_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Comparison_1_t4471_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Comparison_1_t4471_0_0_0/* byval_arg */
	, &Comparison_1_t4471_1_0_0/* this_arg */
	, &Comparison_1_t4471_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Comparison_1_t4471_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Converter`2
extern TypeInfo Converter_2_t4472_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Converter_2_t4472_Il2CppGenericContainer;
extern TypeInfo Converter_2_t4472_gp_TInput_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t4472_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t4472_Il2CppGenericContainer, NULL, "TInput", 0, 0 };
extern TypeInfo Converter_2_t4472_gp_TOutput_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t4472_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t4472_Il2CppGenericContainer, NULL, "TOutput", 1, 0 };
static const Il2CppGenericParameter* Converter_2_t4472_Il2CppGenericParametersArray[2] = 
{
	&Converter_2_t4472_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull,
	&Converter_2_t4472_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Converter_2_t4472_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Converter_2_t4472_il2cpp_TypeInfo, 2, 0, Converter_2_t4472_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Converter_2_t4472_Converter_2__ctor_m22314_ParameterInfos[] = 
{
	{"object", 0, 134225155, 0, &Object_t_0_0_0},
	{"method", 1, 134225156, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Converter`2::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Converter_2__ctor_m22314_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Converter_2_t4472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4472_Converter_2__ctor_m22314_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6018/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Converter_2_t4472_gp_0_0_0_0;
extern const Il2CppType Converter_2_t4472_gp_0_0_0_0;
static const ParameterInfo Converter_2_t4472_Converter_2_Invoke_m22315_ParameterInfos[] = 
{
	{"input", 0, 134225157, 0, &Converter_2_t4472_gp_0_0_0_0},
};
extern const Il2CppType Converter_2_t4472_gp_1_0_0_0;
// TOutput System.Converter`2::Invoke(TInput)
extern const MethodInfo Converter_2_Invoke_m22315_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Converter_2_t4472_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t4472_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4472_Converter_2_Invoke_m22315_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6019/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Converter_2_t4472_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Converter_2_t4472_Converter_2_BeginInvoke_m22316_ParameterInfos[] = 
{
	{"input", 0, 134225158, 0, &Converter_2_t4472_gp_0_0_0_0},
	{"callback", 1, 134225159, 0, &AsyncCallback_t449_0_0_0},
	{"object", 2, 134225160, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Converter`2::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern const MethodInfo Converter_2_BeginInvoke_m22316_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t4472_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4472_Converter_2_BeginInvoke_m22316_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6020/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo Converter_2_t4472_Converter_2_EndInvoke_m22317_ParameterInfos[] = 
{
	{"result", 0, 134225161, 0, &IAsyncResult_t448_0_0_0},
};
// TOutput System.Converter`2::EndInvoke(System.IAsyncResult)
extern const MethodInfo Converter_2_EndInvoke_m22317_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t4472_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t4472_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4472_Converter_2_EndInvoke_m22317_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6021/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Converter_2_t4472_MethodInfos[] =
{
	&Converter_2__ctor_m22314_MethodInfo,
	&Converter_2_Invoke_m22315_MethodInfo,
	&Converter_2_BeginInvoke_m22316_MethodInfo,
	&Converter_2_EndInvoke_m22317_MethodInfo,
	NULL
};
extern const MethodInfo Converter_2_Invoke_m22315_MethodInfo;
extern const MethodInfo Converter_2_BeginInvoke_m22316_MethodInfo;
extern const MethodInfo Converter_2_EndInvoke_m22317_MethodInfo;
static const Il2CppMethodReference Converter_2_t4472_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&Converter_2_Invoke_m22315_MethodInfo,
	&Converter_2_BeginInvoke_m22316_MethodInfo,
	&Converter_2_EndInvoke_m22317_MethodInfo,
};
static bool Converter_2_t4472_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Converter_2_t4472_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Converter_2_t4472_0_0_0;
extern const Il2CppType Converter_2_t4472_1_0_0;
struct Converter_2_t4472;
const Il2CppTypeDefinitionMetadata Converter_2_t4472_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Converter_2_t4472_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, Converter_2_t4472_VTable/* vtableMethods */
	, Converter_2_t4472_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Converter_2_t4472_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t4472_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Converter_2_t4472_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Converter_2_t4472_0_0_0/* byval_arg */
	, &Converter_2_t4472_1_0_0/* this_arg */
	, &Converter_2_t4472_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Converter_2_t4472_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.EventHandler`1
extern TypeInfo EventHandler_1_t4473_il2cpp_TypeInfo;
extern const Il2CppGenericContainer EventHandler_1_t4473_Il2CppGenericContainer;
extern TypeInfo EventHandler_1_t4473_gp_TEventArgs_0_il2cpp_TypeInfo;
extern const Il2CppType EventArgs_t877_0_0_0;
static const Il2CppType* EventHandler_1_t4473_gp_TEventArgs_0_il2cpp_TypeInfo_constraints[] = { 
&EventArgs_t877_0_0_0 /* System.EventArgs */, 
 NULL };
extern const Il2CppGenericParameter EventHandler_1_t4473_gp_TEventArgs_0_il2cpp_TypeInfo_GenericParamFull = { &EventHandler_1_t4473_Il2CppGenericContainer, EventHandler_1_t4473_gp_TEventArgs_0_il2cpp_TypeInfo_constraints, "TEventArgs", 0, 0 };
static const Il2CppGenericParameter* EventHandler_1_t4473_Il2CppGenericParametersArray[1] = 
{
	&EventHandler_1_t4473_gp_TEventArgs_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer EventHandler_1_t4473_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&EventHandler_1_t4473_il2cpp_TypeInfo, 1, 0, EventHandler_1_t4473_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_1_t4473_EventHandler_1__ctor_m22318_ParameterInfos[] = 
{
	{"object", 0, 134225162, 0, &Object_t_0_0_0},
	{"method", 1, 134225163, 0, &IntPtr_t_0_0_0},
};
// System.Void System.EventHandler`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler_1__ctor_m22318_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &EventHandler_1_t4473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4473_EventHandler_1__ctor_m22318_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6022/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventHandler_1_t4473_gp_0_0_0_0;
extern const Il2CppType EventHandler_1_t4473_gp_0_0_0_0;
static const ParameterInfo EventHandler_1_t4473_EventHandler_1_Invoke_m22319_ParameterInfos[] = 
{
	{"sender", 0, 134225164, 0, &Object_t_0_0_0},
	{"e", 1, 134225165, 0, &EventHandler_1_t4473_gp_0_0_0_0},
};
// System.Void System.EventHandler`1::Invoke(System.Object,TEventArgs)
extern const MethodInfo EventHandler_1_Invoke_m22319_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4473_EventHandler_1_Invoke_m22319_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6023/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventHandler_1_t4473_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_1_t4473_EventHandler_1_BeginInvoke_m22320_ParameterInfos[] = 
{
	{"sender", 0, 134225166, 0, &Object_t_0_0_0},
	{"e", 1, 134225167, 0, &EventHandler_1_t4473_gp_0_0_0_0},
	{"callback", 2, 134225168, 0, &AsyncCallback_t449_0_0_0},
	{"object", 3, 134225169, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.EventHandler`1::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_1_BeginInvoke_m22320_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4473_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4473_EventHandler_1_BeginInvoke_m22320_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6024/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo EventHandler_1_t4473_EventHandler_1_EndInvoke_m22321_ParameterInfos[] = 
{
	{"result", 0, 134225170, 0, &IAsyncResult_t448_0_0_0},
};
// System.Void System.EventHandler`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_1_EndInvoke_m22321_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4473_EventHandler_1_EndInvoke_m22321_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6025/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* EventHandler_1_t4473_MethodInfos[] =
{
	&EventHandler_1__ctor_m22318_MethodInfo,
	&EventHandler_1_Invoke_m22319_MethodInfo,
	&EventHandler_1_BeginInvoke_m22320_MethodInfo,
	&EventHandler_1_EndInvoke_m22321_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_1_Invoke_m22319_MethodInfo;
extern const MethodInfo EventHandler_1_BeginInvoke_m22320_MethodInfo;
extern const MethodInfo EventHandler_1_EndInvoke_m22321_MethodInfo;
static const Il2CppMethodReference EventHandler_1_t4473_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&EventHandler_1_Invoke_m22319_MethodInfo,
	&EventHandler_1_BeginInvoke_m22320_MethodInfo,
	&EventHandler_1_EndInvoke_m22321_MethodInfo,
};
static bool EventHandler_1_t4473_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair EventHandler_1_t4473_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_1_t4473_0_0_0;
extern const Il2CppType EventHandler_1_t4473_1_0_0;
struct EventHandler_1_t4473;
const Il2CppTypeDefinitionMetadata EventHandler_1_t4473_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_1_t4473_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, EventHandler_1_t4473_VTable/* vtableMethods */
	, EventHandler_1_t4473_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_1_t4473_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler`1"/* name */
	, "System"/* namespaze */
	, EventHandler_1_t4473_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_1_t4473_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &EventHandler_1_t4473_0_0_0/* byval_arg */
	, &EventHandler_1_t4473_1_0_0/* this_arg */
	, &EventHandler_1_t4473_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &EventHandler_1_t4473_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// Metadata Definition System.EventHandler
extern TypeInfo EventHandler_t874_il2cpp_TypeInfo;
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_t874_EventHandler__ctor_m5274_ParameterInfos[] = 
{
	{"object", 0, 134225171, 0, &Object_t_0_0_0},
	{"method", 1, 134225172, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler__ctor_m5274_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EventHandler__ctor_m5274/* method */
	, &EventHandler_t874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, EventHandler_t874_EventHandler__ctor_m5274_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6026/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventArgs_t877_0_0_0;
static const ParameterInfo EventHandler_t874_EventHandler_Invoke_m21624_ParameterInfos[] = 
{
	{"sender", 0, 134225173, 0, &Object_t_0_0_0},
	{"e", 1, 134225174, 0, &EventArgs_t877_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern const MethodInfo EventHandler_Invoke_m21624_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&EventHandler_Invoke_m21624/* method */
	, &EventHandler_t874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t/* invoker_method */
	, EventHandler_t874_EventHandler_Invoke_m21624_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6027/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventArgs_t877_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_t874_EventHandler_BeginInvoke_m21625_ParameterInfos[] = 
{
	{"sender", 0, 134225175, 0, &Object_t_0_0_0},
	{"e", 1, 134225176, 0, &EventArgs_t877_0_0_0},
	{"callback", 2, 134225177, 0, &AsyncCallback_t449_0_0_0},
	{"object", 3, 134225178, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_BeginInvoke_m21625_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&EventHandler_BeginInvoke_m21625/* method */
	, &EventHandler_t874_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, EventHandler_t874_EventHandler_BeginInvoke_m21625_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6028/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo EventHandler_t874_EventHandler_EndInvoke_m21626_ParameterInfos[] = 
{
	{"result", 0, 134225179, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_EndInvoke_m21626_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&EventHandler_EndInvoke_m21626/* method */
	, &EventHandler_t874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, EventHandler_t874_EventHandler_EndInvoke_m21626_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6029/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* EventHandler_t874_MethodInfos[] =
{
	&EventHandler__ctor_m5274_MethodInfo,
	&EventHandler_Invoke_m21624_MethodInfo,
	&EventHandler_BeginInvoke_m21625_MethodInfo,
	&EventHandler_EndInvoke_m21626_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_Invoke_m21624_MethodInfo;
extern const MethodInfo EventHandler_BeginInvoke_m21625_MethodInfo;
extern const MethodInfo EventHandler_EndInvoke_m21626_MethodInfo;
static const Il2CppMethodReference EventHandler_t874_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&EventHandler_Invoke_m21624_MethodInfo,
	&EventHandler_BeginInvoke_m21625_MethodInfo,
	&EventHandler_EndInvoke_m21626_MethodInfo,
};
static bool EventHandler_t874_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair EventHandler_t874_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_t874_0_0_0;
extern const Il2CppType EventHandler_t874_1_0_0;
struct EventHandler_t874;
const Il2CppTypeDefinitionMetadata EventHandler_t874_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_t874_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, EventHandler_t874_VTable/* vtableMethods */
	, EventHandler_t874_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_t874_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler"/* name */
	, "System"/* namespaze */
	, EventHandler_t874_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_t874_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 998/* custom_attributes_cache */
	, &EventHandler_t874_0_0_0/* byval_arg */
	, &EventHandler_t874_1_0_0/* this_arg */
	, &EventHandler_t874_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_EventHandler_t874/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EventHandler_t874)/* instance_size */
	, sizeof (EventHandler_t874)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Predicate`1
extern TypeInfo Predicate_1_t4474_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Predicate_1_t4474_Il2CppGenericContainer;
extern TypeInfo Predicate_1_t4474_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Predicate_1_t4474_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Predicate_1_t4474_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Predicate_1_t4474_Il2CppGenericParametersArray[1] = 
{
	&Predicate_1_t4474_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Predicate_1_t4474_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Predicate_1_t4474_il2cpp_TypeInfo, 1, 0, Predicate_1_t4474_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Predicate_1_t4474_Predicate_1__ctor_m22322_ParameterInfos[] = 
{
	{"object", 0, 134225180, 0, &Object_t_0_0_0},
	{"method", 1, 134225181, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Predicate`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Predicate_1__ctor_m22322_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Predicate_1_t4474_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4474_Predicate_1__ctor_m22322_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6030/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Predicate_1_t4474_gp_0_0_0_0;
extern const Il2CppType Predicate_1_t4474_gp_0_0_0_0;
static const ParameterInfo Predicate_1_t4474_Predicate_1_Invoke_m22323_ParameterInfos[] = 
{
	{"obj", 0, 134225182, 0, &Predicate_1_t4474_gp_0_0_0_0},
};
// System.Boolean System.Predicate`1::Invoke(T)
extern const MethodInfo Predicate_1_Invoke_m22323_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4474_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t30_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4474_Predicate_1_Invoke_m22323_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6031/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Predicate_1_t4474_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Predicate_1_t4474_Predicate_1_BeginInvoke_m22324_ParameterInfos[] = 
{
	{"obj", 0, 134225183, 0, &Predicate_1_t4474_gp_0_0_0_0},
	{"callback", 1, 134225184, 0, &AsyncCallback_t449_0_0_0},
	{"object", 2, 134225185, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Predicate_1_BeginInvoke_m22324_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4474_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4474_Predicate_1_BeginInvoke_m22324_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6032/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo Predicate_1_t4474_Predicate_1_EndInvoke_m22325_ParameterInfos[] = 
{
	{"result", 0, 134225186, 0, &IAsyncResult_t448_0_0_0},
};
// System.Boolean System.Predicate`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Predicate_1_EndInvoke_m22325_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4474_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t30_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4474_Predicate_1_EndInvoke_m22325_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6033/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Predicate_1_t4474_MethodInfos[] =
{
	&Predicate_1__ctor_m22322_MethodInfo,
	&Predicate_1_Invoke_m22323_MethodInfo,
	&Predicate_1_BeginInvoke_m22324_MethodInfo,
	&Predicate_1_EndInvoke_m22325_MethodInfo,
	NULL
};
extern const MethodInfo Predicate_1_Invoke_m22323_MethodInfo;
extern const MethodInfo Predicate_1_BeginInvoke_m22324_MethodInfo;
extern const MethodInfo Predicate_1_EndInvoke_m22325_MethodInfo;
static const Il2CppMethodReference Predicate_1_t4474_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&Predicate_1_Invoke_m22323_MethodInfo,
	&Predicate_1_BeginInvoke_m22324_MethodInfo,
	&Predicate_1_EndInvoke_m22325_MethodInfo,
};
static bool Predicate_1_t4474_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Predicate_1_t4474_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Predicate_1_t4474_0_0_0;
extern const Il2CppType Predicate_1_t4474_1_0_0;
struct Predicate_1_t4474;
const Il2CppTypeDefinitionMetadata Predicate_1_t4474_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Predicate_1_t4474_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, Predicate_1_t4474_VTable/* vtableMethods */
	, Predicate_1_t4474_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Predicate_1_t4474_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Predicate`1"/* name */
	, "System"/* namespaze */
	, Predicate_1_t4474_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Predicate_1_t4474_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Predicate_1_t4474_0_0_0/* byval_arg */
	, &Predicate_1_t4474_1_0_0/* this_arg */
	, &Predicate_1_t4474_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Predicate_1_t4474_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
// Metadata Definition System.ResolveEventHandler
extern TypeInfo ResolveEventHandler_t4274_il2cpp_TypeInfo;
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t4274_ResolveEventHandler__ctor_m21627_ParameterInfos[] = 
{
	{"object", 0, 134225187, 0, &Object_t_0_0_0},
	{"method", 1, 134225188, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ResolveEventHandler__ctor_m21627_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ResolveEventHandler__ctor_m21627/* method */
	, &ResolveEventHandler_t4274_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, ResolveEventHandler_t4274_ResolveEventHandler__ctor_m21627_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6034/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ResolveEventArgs_t4325_0_0_0;
extern const Il2CppType ResolveEventArgs_t4325_0_0_0;
static const ParameterInfo ResolveEventHandler_t4274_ResolveEventHandler_Invoke_m21628_ParameterInfos[] = 
{
	{"sender", 0, 134225189, 0, &Object_t_0_0_0},
	{"args", 1, 134225190, 0, &ResolveEventArgs_t4325_0_0_0},
};
extern const Il2CppType Assembly_t1601_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern const MethodInfo ResolveEventHandler_Invoke_m21628_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ResolveEventHandler_Invoke_m21628/* method */
	, &ResolveEventHandler_t4274_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t1601_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4274_ResolveEventHandler_Invoke_m21628_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6035/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ResolveEventArgs_t4325_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t4274_ResolveEventHandler_BeginInvoke_m21629_ParameterInfos[] = 
{
	{"sender", 0, 134225191, 0, &Object_t_0_0_0},
	{"args", 1, 134225192, 0, &ResolveEventArgs_t4325_0_0_0},
	{"callback", 2, 134225193, 0, &AsyncCallback_t449_0_0_0},
	{"object", 3, 134225194, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo ResolveEventHandler_BeginInvoke_m21629_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_BeginInvoke_m21629/* method */
	, &ResolveEventHandler_t4274_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4274_ResolveEventHandler_BeginInvoke_m21629_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6036/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo ResolveEventHandler_t4274_ResolveEventHandler_EndInvoke_m21630_ParameterInfos[] = 
{
	{"result", 0, 134225195, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo ResolveEventHandler_EndInvoke_m21630_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_EndInvoke_m21630/* method */
	, &ResolveEventHandler_t4274_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t1601_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4274_ResolveEventHandler_EndInvoke_m21630_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6037/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ResolveEventHandler_t4274_MethodInfos[] =
{
	&ResolveEventHandler__ctor_m21627_MethodInfo,
	&ResolveEventHandler_Invoke_m21628_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m21629_MethodInfo,
	&ResolveEventHandler_EndInvoke_m21630_MethodInfo,
	NULL
};
extern const MethodInfo ResolveEventHandler_Invoke_m21628_MethodInfo;
extern const MethodInfo ResolveEventHandler_BeginInvoke_m21629_MethodInfo;
extern const MethodInfo ResolveEventHandler_EndInvoke_m21630_MethodInfo;
static const Il2CppMethodReference ResolveEventHandler_t4274_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&ResolveEventHandler_Invoke_m21628_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m21629_MethodInfo,
	&ResolveEventHandler_EndInvoke_m21630_MethodInfo,
};
static bool ResolveEventHandler_t4274_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ResolveEventHandler_t4274_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ResolveEventHandler_t4274_0_0_0;
extern const Il2CppType ResolveEventHandler_t4274_1_0_0;
struct ResolveEventHandler_t4274;
const Il2CppTypeDefinitionMetadata ResolveEventHandler_t4274_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ResolveEventHandler_t4274_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, ResolveEventHandler_t4274_VTable/* vtableMethods */
	, ResolveEventHandler_t4274_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ResolveEventHandler_t4274_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ResolveEventHandler"/* name */
	, "System"/* namespaze */
	, ResolveEventHandler_t4274_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ResolveEventHandler_t4274_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 999/* custom_attributes_cache */
	, &ResolveEventHandler_t4274_0_0_0/* byval_arg */
	, &ResolveEventHandler_t4274_1_0_0/* this_arg */
	, &ResolveEventHandler_t4274_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ResolveEventHandler_t4274/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ResolveEventHandler_t4274)/* instance_size */
	, sizeof (ResolveEventHandler_t4274)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// Metadata Definition System.UnhandledExceptionEventHandler
extern TypeInfo UnhandledExceptionEventHandler_t4275_il2cpp_TypeInfo;
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4275_UnhandledExceptionEventHandler__ctor_m21631_ParameterInfos[] = 
{
	{"object", 0, 134225196, 0, &Object_t_0_0_0},
	{"method", 1, 134225197, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo UnhandledExceptionEventHandler__ctor_m21631_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler__ctor_m21631/* method */
	, &UnhandledExceptionEventHandler_t4275_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4275_UnhandledExceptionEventHandler__ctor_m21631_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6038/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4335_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4335_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4275_UnhandledExceptionEventHandler_Invoke_m21632_ParameterInfos[] = 
{
	{"sender", 0, 134225198, 0, &Object_t_0_0_0},
	{"e", 1, 134225199, 0, &UnhandledExceptionEventArgs_t4335_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m21632_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_Invoke_m21632/* method */
	, &UnhandledExceptionEventHandler_t4275_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4275_UnhandledExceptionEventHandler_Invoke_m21632_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6039/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4335_0_0_0;
extern const Il2CppType AsyncCallback_t449_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4275_UnhandledExceptionEventHandler_BeginInvoke_m21633_ParameterInfos[] = 
{
	{"sender", 0, 134225200, 0, &Object_t_0_0_0},
	{"e", 1, 134225201, 0, &UnhandledExceptionEventArgs_t4335_0_0_0},
	{"callback", 2, 134225202, 0, &AsyncCallback_t449_0_0_0},
	{"object", 3, 134225203, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m21633_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_BeginInvoke_m21633/* method */
	, &UnhandledExceptionEventHandler_t4275_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t448_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4275_UnhandledExceptionEventHandler_BeginInvoke_m21633_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6040/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t448_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4275_UnhandledExceptionEventHandler_EndInvoke_m21634_ParameterInfos[] = 
{
	{"result", 0, 134225204, 0, &IAsyncResult_t448_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m21634_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_EndInvoke_m21634/* method */
	, &UnhandledExceptionEventHandler_t4275_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4275_UnhandledExceptionEventHandler_EndInvoke_m21634_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6041/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnhandledExceptionEventHandler_t4275_MethodInfos[] =
{
	&UnhandledExceptionEventHandler__ctor_m21631_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m21632_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m21633_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m21634_MethodInfo,
	NULL
};
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m21632_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m21633_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m21634_MethodInfo;
static const Il2CppMethodReference UnhandledExceptionEventHandler_t4275_VTable[] =
{
	&MulticastDelegate_Equals_m3368_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&MulticastDelegate_GetHashCode_m3369_MethodInfo,
	&Object_ToString_m129_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m3371_MethodInfo,
	&Delegate_Clone_m3372_MethodInfo,
	&MulticastDelegate_GetObjectData_m3370_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3373_MethodInfo,
	&MulticastDelegate_CombineImpl_m3374_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3375_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m21632_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m21633_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m21634_MethodInfo,
};
static bool UnhandledExceptionEventHandler_t4275_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UnhandledExceptionEventHandler_t4275_InterfacesOffsets[] = 
{
	{ &ICloneable_t736_0_0_0, 4},
	{ &ISerializable_t737_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnhandledExceptionEventHandler_t4275_0_0_0;
extern const Il2CppType UnhandledExceptionEventHandler_t4275_1_0_0;
struct UnhandledExceptionEventHandler_t4275;
const Il2CppTypeDefinitionMetadata UnhandledExceptionEventHandler_t4275_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnhandledExceptionEventHandler_t4275_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t451_0_0_0/* parent */
	, UnhandledExceptionEventHandler_t4275_VTable/* vtableMethods */
	, UnhandledExceptionEventHandler_t4275_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UnhandledExceptionEventHandler_t4275_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnhandledExceptionEventHandler"/* name */
	, "System"/* namespaze */
	, UnhandledExceptionEventHandler_t4275_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnhandledExceptionEventHandler_t4275_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 1000/* custom_attributes_cache */
	, &UnhandledExceptionEventHandler_t4275_0_0_0/* byval_arg */
	, &UnhandledExceptionEventHandler_t4275_1_0_0/* this_arg */
	, &UnhandledExceptionEventHandler_t4275_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t4275/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnhandledExceptionEventHandler_t4275)/* instance_size */
	, sizeof (UnhandledExceptionEventHandler_t4275)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$56
extern TypeInfo U24ArrayTypeU2456_t4341_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2456_t4341_MethodInfos[] =
{
	NULL
};
extern const MethodInfo ValueType_Equals_m3365_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m3366_MethodInfo;
extern const MethodInfo ValueType_ToString_m3367_MethodInfo;
static const Il2CppMethodReference U24ArrayTypeU2456_t4341_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2456_t4341_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2456_t4341_0_0_0;
extern const Il2CppType U24ArrayTypeU2456_t4341_1_0_0;
extern const Il2CppType ValueType_t724_0_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t4361_il2cpp_TypeInfo;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t4361_0_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2456_t4341_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2456_t4341_VTable/* vtableMethods */
	, U24ArrayTypeU2456_t4341_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2456_t4341_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$56"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2456_t4341_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2456_t4341_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2456_t4341_0_0_0/* byval_arg */
	, &U24ArrayTypeU2456_t4341_1_0_0/* this_arg */
	, &U24ArrayTypeU2456_t4341_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2456_t4341_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t4341_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t4341_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2456_t4341)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2456_t4341)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2456_t4341_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$24
extern TypeInfo U24ArrayTypeU2424_t4342_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2424_t4342_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2424_t4342_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2424_t4342_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2424_t4342_0_0_0;
extern const Il2CppType U24ArrayTypeU2424_t4342_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2424_t4342_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2424_t4342_VTable/* vtableMethods */
	, U24ArrayTypeU2424_t4342_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2424_t4342_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$24"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2424_t4342_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2424_t4342_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2424_t4342_0_0_0/* byval_arg */
	, &U24ArrayTypeU2424_t4342_1_0_0/* this_arg */
	, &U24ArrayTypeU2424_t4342_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2424_t4342_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t4342_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t4342_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2424_t4342)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2424_t4342)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2424_t4342_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$16
extern TypeInfo U24ArrayTypeU2416_t4343_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2416_t4343_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2416_t4343_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2416_t4343_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2416_t4343_0_0_0;
extern const Il2CppType U24ArrayTypeU2416_t4343_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2416_t4343_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2416_t4343_VTable/* vtableMethods */
	, U24ArrayTypeU2416_t4343_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2416_t4343_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$16"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2416_t4343_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2416_t4343_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2416_t4343_0_0_0/* byval_arg */
	, &U24ArrayTypeU2416_t4343_1_0_0/* this_arg */
	, &U24ArrayTypeU2416_t4343_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2416_t4343_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t4343_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t4343_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2416_t4343)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2416_t4343)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2416_t4343_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$120
extern TypeInfo U24ArrayTypeU24120_t4344_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24120_t4344_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24120_t4344_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU24120_t4344_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24120_t4344_0_0_0;
extern const Il2CppType U24ArrayTypeU24120_t4344_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24120_t4344_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU24120_t4344_VTable/* vtableMethods */
	, U24ArrayTypeU24120_t4344_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24120_t4344_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$120"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24120_t4344_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24120_t4344_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24120_t4344_0_0_0/* byval_arg */
	, &U24ArrayTypeU24120_t4344_1_0_0/* this_arg */
	, &U24ArrayTypeU24120_t4344_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24120_t4344_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t4344_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t4344_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24120_t4344)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24120_t4344)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24120_t4344_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$3132
extern TypeInfo U24ArrayTypeU243132_t4345_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU243132_t4345_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU243132_t4345_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU243132_t4345_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU243132_t4345_0_0_0;
extern const Il2CppType U24ArrayTypeU243132_t4345_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU243132_t4345_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU243132_t4345_VTable/* vtableMethods */
	, U24ArrayTypeU243132_t4345_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU243132_t4345_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$3132"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU243132_t4345_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU243132_t4345_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU243132_t4345_0_0_0/* byval_arg */
	, &U24ArrayTypeU243132_t4345_1_0_0/* this_arg */
	, &U24ArrayTypeU243132_t4345_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU243132_t4345_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t4345_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t4345_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU243132_t4345)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU243132_t4345)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU243132_t4345_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$20
extern TypeInfo U24ArrayTypeU2420_t4346_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2420_t4346_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2420_t4346_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2420_t4346_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2420_t4346_0_0_0;
extern const Il2CppType U24ArrayTypeU2420_t4346_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2420_t4346_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2420_t4346_VTable/* vtableMethods */
	, U24ArrayTypeU2420_t4346_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2420_t4346_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$20"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2420_t4346_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2420_t4346_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2420_t4346_0_0_0/* byval_arg */
	, &U24ArrayTypeU2420_t4346_1_0_0/* this_arg */
	, &U24ArrayTypeU2420_t4346_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2420_t4346_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t4346_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t4346_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2420_t4346)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2420_t4346)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2420_t4346_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$32
extern TypeInfo U24ArrayTypeU2432_t4347_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2432_t4347_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2432_t4347_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2432_t4347_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2432_t4347_0_0_0;
extern const Il2CppType U24ArrayTypeU2432_t4347_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2432_t4347_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2432_t4347_VTable/* vtableMethods */
	, U24ArrayTypeU2432_t4347_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2432_t4347_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$32"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2432_t4347_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2432_t4347_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2432_t4347_0_0_0/* byval_arg */
	, &U24ArrayTypeU2432_t4347_1_0_0/* this_arg */
	, &U24ArrayTypeU2432_t4347_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2432_t4347_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t4347_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t4347_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2432_t4347)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2432_t4347)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2432_t4347_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$48
extern TypeInfo U24ArrayTypeU2448_t4348_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2448_t4348_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2448_t4348_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2448_t4348_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2448_t4348_0_0_0;
extern const Il2CppType U24ArrayTypeU2448_t4348_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2448_t4348_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2448_t4348_VTable/* vtableMethods */
	, U24ArrayTypeU2448_t4348_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2448_t4348_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$48"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2448_t4348_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2448_t4348_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2448_t4348_0_0_0/* byval_arg */
	, &U24ArrayTypeU2448_t4348_1_0_0/* this_arg */
	, &U24ArrayTypeU2448_t4348_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2448_t4348_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t4348_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t4348_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2448_t4348)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2448_t4348)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2448_t4348_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$64
extern TypeInfo U24ArrayTypeU2464_t4349_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2464_t4349_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2464_t4349_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2464_t4349_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2464_t4349_0_0_0;
extern const Il2CppType U24ArrayTypeU2464_t4349_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2464_t4349_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2464_t4349_VTable/* vtableMethods */
	, U24ArrayTypeU2464_t4349_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2464_t4349_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$64"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2464_t4349_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2464_t4349_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2464_t4349_0_0_0/* byval_arg */
	, &U24ArrayTypeU2464_t4349_1_0_0/* this_arg */
	, &U24ArrayTypeU2464_t4349_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2464_t4349_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t4349_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t4349_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2464_t4349)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2464_t4349)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2464_t4349_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
extern TypeInfo U24ArrayTypeU2412_t4350_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2412_t4350_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2412_t4350_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2412_t4350_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2412_t4350_0_0_0;
extern const Il2CppType U24ArrayTypeU2412_t4350_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2412_t4350_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2412_t4350_VTable/* vtableMethods */
	, U24ArrayTypeU2412_t4350_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2412_t4350_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2412_t4350_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2412_t4350_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2412_t4350_0_0_0/* byval_arg */
	, &U24ArrayTypeU2412_t4350_1_0_0/* this_arg */
	, &U24ArrayTypeU2412_t4350_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2412_t4350_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t4350_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t4350_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2412_t4350)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2412_t4350)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2412_t4350_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$136
extern TypeInfo U24ArrayTypeU24136_t4351_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24136_t4351_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24136_t4351_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU24136_t4351_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24136_t4351_0_0_0;
extern const Il2CppType U24ArrayTypeU24136_t4351_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24136_t4351_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU24136_t4351_VTable/* vtableMethods */
	, U24ArrayTypeU24136_t4351_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24136_t4351_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$136"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24136_t4351_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24136_t4351_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24136_t4351_0_0_0/* byval_arg */
	, &U24ArrayTypeU24136_t4351_1_0_0/* this_arg */
	, &U24ArrayTypeU24136_t4351_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24136_t4351_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t4351_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t4351_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24136_t4351)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24136_t4351)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24136_t4351_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$72
extern TypeInfo U24ArrayTypeU2472_t4352_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2472_t4352_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2472_t4352_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2472_t4352_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2472_t4352_0_0_0;
extern const Il2CppType U24ArrayTypeU2472_t4352_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2472_t4352_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2472_t4352_VTable/* vtableMethods */
	, U24ArrayTypeU2472_t4352_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2472_t4352_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$72"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2472_t4352_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2472_t4352_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2472_t4352_0_0_0/* byval_arg */
	, &U24ArrayTypeU2472_t4352_1_0_0/* this_arg */
	, &U24ArrayTypeU2472_t4352_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2472_t4352_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t4352_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t4352_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2472_t4352)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2472_t4352)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2472_t4352_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$124
extern TypeInfo U24ArrayTypeU24124_t4353_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24124_t4353_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24124_t4353_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU24124_t4353_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24124_t4353_0_0_0;
extern const Il2CppType U24ArrayTypeU24124_t4353_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24124_t4353_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU24124_t4353_VTable/* vtableMethods */
	, U24ArrayTypeU24124_t4353_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24124_t4353_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$124"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24124_t4353_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24124_t4353_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24124_t4353_0_0_0/* byval_arg */
	, &U24ArrayTypeU24124_t4353_1_0_0/* this_arg */
	, &U24ArrayTypeU24124_t4353_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24124_t4353_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t4353_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t4353_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24124_t4353)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24124_t4353)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24124_t4353_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$96
extern TypeInfo U24ArrayTypeU2496_t4354_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2496_t4354_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2496_t4354_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2496_t4354_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2496_t4354_0_0_0;
extern const Il2CppType U24ArrayTypeU2496_t4354_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2496_t4354_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2496_t4354_VTable/* vtableMethods */
	, U24ArrayTypeU2496_t4354_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2496_t4354_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$96"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2496_t4354_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2496_t4354_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2496_t4354_0_0_0/* byval_arg */
	, &U24ArrayTypeU2496_t4354_1_0_0/* this_arg */
	, &U24ArrayTypeU2496_t4354_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2496_t4354_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t4354_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t4354_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2496_t4354)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2496_t4354)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2496_t4354_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$2048
extern TypeInfo U24ArrayTypeU242048_t4355_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU242048_t4355_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU242048_t4355_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU242048_t4355_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU242048_t4355_0_0_0;
extern const Il2CppType U24ArrayTypeU242048_t4355_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU242048_t4355_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU242048_t4355_VTable/* vtableMethods */
	, U24ArrayTypeU242048_t4355_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU242048_t4355_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$2048"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU242048_t4355_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU242048_t4355_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU242048_t4355_0_0_0/* byval_arg */
	, &U24ArrayTypeU242048_t4355_1_0_0/* this_arg */
	, &U24ArrayTypeU242048_t4355_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU242048_t4355_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t4355_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t4355_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU242048_t4355)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU242048_t4355)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU242048_t4355_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$256
extern TypeInfo U24ArrayTypeU24256_t4356_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24256_t4356_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24256_t4356_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU24256_t4356_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24256_t4356_0_0_0;
extern const Il2CppType U24ArrayTypeU24256_t4356_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24256_t4356_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU24256_t4356_VTable/* vtableMethods */
	, U24ArrayTypeU24256_t4356_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24256_t4356_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$256"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24256_t4356_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24256_t4356_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24256_t4356_0_0_0/* byval_arg */
	, &U24ArrayTypeU24256_t4356_1_0_0/* this_arg */
	, &U24ArrayTypeU24256_t4356_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24256_t4356_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t4356_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t4356_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24256_t4356)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24256_t4356)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24256_t4356_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$1024
extern TypeInfo U24ArrayTypeU241024_t4357_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU241024_t4357_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU241024_t4357_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU241024_t4357_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU241024_t4357_0_0_0;
extern const Il2CppType U24ArrayTypeU241024_t4357_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU241024_t4357_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU241024_t4357_VTable/* vtableMethods */
	, U24ArrayTypeU241024_t4357_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU241024_t4357_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$1024"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU241024_t4357_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU241024_t4357_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU241024_t4357_0_0_0/* byval_arg */
	, &U24ArrayTypeU241024_t4357_1_0_0/* this_arg */
	, &U24ArrayTypeU241024_t4357_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU241024_t4357_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t4357_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t4357_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU241024_t4357)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU241024_t4357)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU241024_t4357_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$640
extern TypeInfo U24ArrayTypeU24640_t4358_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24640_t4358_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24640_t4358_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU24640_t4358_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24640_t4358_0_0_0;
extern const Il2CppType U24ArrayTypeU24640_t4358_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24640_t4358_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU24640_t4358_VTable/* vtableMethods */
	, U24ArrayTypeU24640_t4358_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24640_t4358_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$640"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24640_t4358_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24640_t4358_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24640_t4358_0_0_0/* byval_arg */
	, &U24ArrayTypeU24640_t4358_1_0_0/* this_arg */
	, &U24ArrayTypeU24640_t4358_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24640_t4358_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t4358_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t4358_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24640_t4358)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24640_t4358)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24640_t4358_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
extern TypeInfo U24ArrayTypeU24128_t4359_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24128_t4359_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24128_t4359_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU24128_t4359_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24128_t4359_0_0_0;
extern const Il2CppType U24ArrayTypeU24128_t4359_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24128_t4359_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU24128_t4359_VTable/* vtableMethods */
	, U24ArrayTypeU24128_t4359_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24128_t4359_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24128_t4359_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24128_t4359_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24128_t4359_0_0_0/* byval_arg */
	, &U24ArrayTypeU24128_t4359_1_0_0/* this_arg */
	, &U24ArrayTypeU24128_t4359_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24128_t4359_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t4359_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t4359_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24128_t4359)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24128_t4359)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24128_t4359_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$52
extern TypeInfo U24ArrayTypeU2452_t4360_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2452_t4360_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2452_t4360_VTable[] =
{
	&ValueType_Equals_m3365_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&ValueType_GetHashCode_m3366_MethodInfo,
	&ValueType_ToString_m3367_MethodInfo,
};
static bool U24ArrayTypeU2452_t4360_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2452_t4360_0_0_0;
extern const Il2CppType U24ArrayTypeU2452_t4360_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2452_t4360_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t724_0_0_0/* parent */
	, U24ArrayTypeU2452_t4360_VTable/* vtableMethods */
	, U24ArrayTypeU2452_t4360_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2452_t4360_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$52"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2452_t4360_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2452_t4360_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2452_t4360_0_0_0/* byval_arg */
	, &U24ArrayTypeU2452_t4360_1_0_0/* this_arg */
	, &U24ArrayTypeU2452_t4360_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2452_t4360_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t4360_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t4360_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2452_t4360)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2452_t4360)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2452_t4360_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// Metadata Definition <PrivateImplementationDetails>
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
static const MethodInfo* U3CPrivateImplementationDetailsU3E_t4361_MethodInfos[] =
{
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t4361_il2cpp_TypeInfo__nestedTypes[20] =
{
	&U24ArrayTypeU2456_t4341_0_0_0,
	&U24ArrayTypeU2424_t4342_0_0_0,
	&U24ArrayTypeU2416_t4343_0_0_0,
	&U24ArrayTypeU24120_t4344_0_0_0,
	&U24ArrayTypeU243132_t4345_0_0_0,
	&U24ArrayTypeU2420_t4346_0_0_0,
	&U24ArrayTypeU2432_t4347_0_0_0,
	&U24ArrayTypeU2448_t4348_0_0_0,
	&U24ArrayTypeU2464_t4349_0_0_0,
	&U24ArrayTypeU2412_t4350_0_0_0,
	&U24ArrayTypeU24136_t4351_0_0_0,
	&U24ArrayTypeU2472_t4352_0_0_0,
	&U24ArrayTypeU24124_t4353_0_0_0,
	&U24ArrayTypeU2496_t4354_0_0_0,
	&U24ArrayTypeU242048_t4355_0_0_0,
	&U24ArrayTypeU24256_t4356_0_0_0,
	&U24ArrayTypeU241024_t4357_0_0_0,
	&U24ArrayTypeU24640_t4358_0_0_0,
	&U24ArrayTypeU24128_t4359_0_0_0,
	&U24ArrayTypeU2452_t4360_0_0_0,
};
extern const MethodInfo Object_Equals_m126_MethodInfo;
extern const MethodInfo Object_GetHashCode_m128_MethodInfo;
static const Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t4361_VTable[] =
{
	&Object_Equals_m126_MethodInfo,
	&Object_Finalize_m127_MethodInfo,
	&Object_GetHashCode_m128_MethodInfo,
	&Object_ToString_m129_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t4361_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t4361_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t4361;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t4361_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t4361_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t4361_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t4361_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2693/* fieldStart */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t4361_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t4361_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t4361_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 1001/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t4361_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t4361_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t4361_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t4361)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t4361)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t4361_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 52/* field_count */
	, 0/* event_count */
	, 20/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
