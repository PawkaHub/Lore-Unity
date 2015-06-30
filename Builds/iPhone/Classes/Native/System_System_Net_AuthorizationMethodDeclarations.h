#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Authorization
struct Authorization_t3586;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3585;

// System.Void System.Net.Authorization::.ctor(System.String)
extern "C" void Authorization__ctor_m15364 (Authorization_t3586 * __this, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean)
extern "C" void Authorization__ctor_m15365 (Authorization_t3586 * __this, String_t* ___token, bool ___complete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean,System.String)
extern "C" void Authorization__ctor_m15366 (Authorization_t3586 * __this, String_t* ___token, bool ___complete, String_t* ___connectionGroupId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Authorization::get_Message()
extern "C" String_t* Authorization_get_Message_m15367 (Authorization_t3586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C" bool Authorization_get_Complete_m15368 (Authorization_t3586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C" Object_t * Authorization_get_Module_m15369 (Authorization_t3586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C" void Authorization_set_Module_m15370 (Authorization_t3586 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
