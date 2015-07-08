#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t5455;
// System.MarshalByRefObject
struct MarshalByRefObject_t4325;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t5454;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m21588 (ClientIdentity_t5455 * __this, String_t* ___objectUri, ObjRef_t5454 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t4325 * ClientIdentity_get_ClientProxy_m21589 (ClientIdentity_t5455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m21590 (ClientIdentity_t5455 * __this, MarshalByRefObject_t4325 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t5454 * ClientIdentity_CreateObjRef_m21591 (ClientIdentity_t5455 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m21592 (ClientIdentity_t5455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
