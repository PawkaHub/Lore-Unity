#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BasicClient
struct BasicClient_t3587;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t3586;
// System.Net.WebRequest
struct WebRequest_t1361;
// System.Net.ICredentials
struct ICredentials_t2526;
// System.Byte[]
struct ByteU5BU5D_t25;

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m15371 (BasicClient_t3587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3586 * BasicClient_Authenticate_m15372 (BasicClient_t3587 * __this, String_t* ___challenge, WebRequest_t1361 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t25* BasicClient_GetBytes_m15373 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3586 * BasicClient_InternalAuthenticate_m15374 (Object_t * __this /* static, unused */, WebRequest_t1361 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3586 * BasicClient_PreAuthenticate_m15375 (BasicClient_t3587 * __this, WebRequest_t1361 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m15376 (BasicClient_t3587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
