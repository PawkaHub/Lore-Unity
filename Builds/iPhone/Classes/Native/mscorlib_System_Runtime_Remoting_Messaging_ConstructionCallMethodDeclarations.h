#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t5428;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t5398;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.IList
struct IList_t4165;
// System.Collections.IDictionary
struct IDictionary_t634;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m21443 (ConstructionCall_t5428 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall__ctor_m21444 (ConstructionCall_t5428 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern "C" void ConstructionCall_InitDictionary_m21445 (ConstructionCall_t5428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m21446 (ConstructionCall_t5428 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern "C" Type_t * ConstructionCall_get_ActivationType_m21447 (ConstructionCall_t5428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m21448 (ConstructionCall_t5428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m21449 (ConstructionCall_t5428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m21450 (ConstructionCall_t5428 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t21* ConstructionCall_get_CallSiteActivationAttributes_m21451 (ConstructionCall_t5428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m21452 (ConstructionCall_t5428 * __this, ObjectU5BU5D_t21* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern "C" Object_t * ConstructionCall_get_ContextProperties_m21453 (ConstructionCall_t5428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern "C" void ConstructionCall_InitMethodProperty_m21454 (ConstructionCall_t5428 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall_GetObjectData_m21455 (ConstructionCall_t5428 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m21456 (ConstructionCall_t5428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
