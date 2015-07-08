#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Dns
struct Dns_t781;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// System.Net.IPHostEntry
struct IPHostEntry_t4294;
// System.Net.IPAddress
struct IPAddress_t780;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t779;

// System.Void System.Net.Dns::.cctor()
extern "C" void Dns__cctor_m13971 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByName_internal_m13972 (Object_t * __this /* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t20** ___h_aliases, StringU5BU5D_t20** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByAddr_internal_m13973 (Object_t * __this /* static, unused */, String_t* ___addr, String_t** ___h_name, StringU5BU5D_t20** ___h_aliases, StringU5BU5D_t20** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C" IPHostEntry_t4294 * Dns_hostent_to_IPHostEntry_m13974 (Object_t * __this /* static, unused */, String_t* ___h_name, StringU5BU5D_t20* ___h_aliases, StringU5BU5D_t20* ___h_addrlist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C" IPHostEntry_t4294 * Dns_GetHostByAddressFromString_m13975 (Object_t * __this /* static, unused */, String_t* ___address, bool ___parse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C" IPHostEntry_t4294 * Dns_GetHostEntry_m13976 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C" IPHostEntry_t4294 * Dns_GetHostEntry_m13977 (Object_t * __this /* static, unused */, IPAddress_t780 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C" IPAddressU5BU5D_t779* Dns_GetHostAddresses_m3552 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C" IPHostEntry_t4294 * Dns_GetHostByName_m13978 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
