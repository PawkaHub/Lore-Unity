#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPHostEntry
struct IPHostEntry_t4294;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t779;
// System.String[]
struct StringU5BU5D_t20;
// System.String
struct String_t;

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m14245 (IPHostEntry_t4294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t779* IPHostEntry_get_AddressList_m14246 (IPHostEntry_t4294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m14247 (IPHostEntry_t4294 * __this, IPAddressU5BU5D_t779* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m14248 (IPHostEntry_t4294 * __this, StringU5BU5D_t20* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m14249 (IPHostEntry_t4294 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
