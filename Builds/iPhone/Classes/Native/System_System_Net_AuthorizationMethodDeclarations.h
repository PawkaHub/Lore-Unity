#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Authorization
struct Authorization_t4019;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t4018;

// System.Void System.Net.Authorization::.ctor(System.String)
extern "C" void Authorization__ctor_m13418 (Authorization_t4019 * __this, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean)
extern "C" void Authorization__ctor_m13419 (Authorization_t4019 * __this, String_t* ___token, bool ___complete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean,System.String)
extern "C" void Authorization__ctor_m13420 (Authorization_t4019 * __this, String_t* ___token, bool ___complete, String_t* ___connectionGroupId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Authorization::get_Message()
extern "C" String_t* Authorization_get_Message_m13421 (Authorization_t4019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C" bool Authorization_get_Complete_m13422 (Authorization_t4019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C" Object_t * Authorization_get_Module_m13423 (Authorization_t4019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C" void Authorization_set_Module_m13424 (Authorization_t4019 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
