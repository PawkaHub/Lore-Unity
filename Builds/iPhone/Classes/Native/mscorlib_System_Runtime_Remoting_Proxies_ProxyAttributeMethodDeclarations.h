#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t5445;
// System.MarshalByRefObject
struct MarshalByRefObject_t4325;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t5446;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t5454;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t5414;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t5696;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C" MarshalByRefObject_t4325 * ProxyAttribute_CreateInstance_m21557 (ProxyAttribute_t5445 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C" RealProxy_t5446 * ProxyAttribute_CreateProxy_m21558 (ProxyAttribute_t5445 * __this, ObjRef_t5454 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t5414 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m21559 (ProxyAttribute_t5445 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m21560 (ProxyAttribute_t5445 * __this, Context_t5414 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
