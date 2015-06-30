#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FacebookAuthenticationProvider
struct FacebookAuthenticationProvider_t1400;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1430;

// System.Void Parse.Internal.FacebookAuthenticationProvider::.ctor()
extern "C" void FacebookAuthenticationProvider__ctor_m6817 (FacebookAuthenticationProvider_t1400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AccessToken(System.String)
extern "C" void FacebookAuthenticationProvider_set_AccessToken_m6818 (FacebookAuthenticationProvider_t1400 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::Deauthenticate()
extern "C" void FacebookAuthenticationProvider_Deauthenticate_m6819 (FacebookAuthenticationProvider_t1400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::RestoreAuthentication(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" bool FacebookAuthenticationProvider_RestoreAuthentication_m6820 (FacebookAuthenticationProvider_t1400 * __this, Object_t* ___authData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AuthType()
extern "C" String_t* FacebookAuthenticationProvider_get_AuthType_m6821 (FacebookAuthenticationProvider_t1400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::.cctor()
extern "C" void FacebookAuthenticationProvider__cctor_m6822 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
