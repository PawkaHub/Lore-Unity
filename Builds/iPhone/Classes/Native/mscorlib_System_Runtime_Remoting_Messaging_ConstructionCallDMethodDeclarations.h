#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
struct ConstructionCallDictionary_t5430;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t5696;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ConstructionCallDictionary__ctor_m21457 (ConstructionCallDictionary_t5430 * __this, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern "C" void ConstructionCallDictionary__cctor_m21458 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m21459 (ConstructionCallDictionary_t5430 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern "C" void ConstructionCallDictionary_SetMethodProperty_m21460 (ConstructionCallDictionary_t5430 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
