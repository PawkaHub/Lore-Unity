#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.SocketAddress
struct SocketAddress_t4079;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
extern "C" void SocketAddress__ctor_m13906 (SocketAddress_t4079 * __this, int32_t ___family, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
extern "C" int32_t SocketAddress_get_Family_m13907 (SocketAddress_t4079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.SocketAddress::get_Size()
extern "C" int32_t SocketAddress_get_Size_m13908 (SocketAddress_t4079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern "C" uint8_t SocketAddress_get_Item_m13909 (SocketAddress_t4079 * __this, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.SocketAddress::set_Item(System.Int32,System.Byte)
extern "C" void SocketAddress_set_Item_m13910 (SocketAddress_t4079 * __this, int32_t ___offset, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.SocketAddress::ToString()
extern "C" String_t* SocketAddress_ToString_m13911 (SocketAddress_t4079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.SocketAddress::Equals(System.Object)
extern "C" bool SocketAddress_Equals_m13912 (SocketAddress_t4079 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.SocketAddress::GetHashCode()
extern "C" int32_t SocketAddress_GetHashCode_m13913 (SocketAddress_t4079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
