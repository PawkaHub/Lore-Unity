#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BasicClient
struct BasicClient_t4258;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t4257;
// System.Net.WebRequest
struct WebRequest_t4184;
// System.Net.ICredentials
struct ICredentials_t4150;
// System.Byte[]
struct ByteU5BU5D_t25;

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m13843 (BasicClient_t4258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4257 * BasicClient_Authenticate_m13844 (BasicClient_t4258 * __this, String_t* ___challenge, WebRequest_t4184 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t25* BasicClient_GetBytes_m13845 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4257 * BasicClient_InternalAuthenticate_m13846 (Object_t * __this /* static, unused */, WebRequest_t4184 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4257 * BasicClient_PreAuthenticate_m13847 (BasicClient_t4258 * __this, WebRequest_t4184 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m13848 (BasicClient_t4258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
