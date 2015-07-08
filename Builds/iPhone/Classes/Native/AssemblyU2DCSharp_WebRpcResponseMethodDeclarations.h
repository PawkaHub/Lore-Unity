#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WebRpcResponse
struct WebRpcResponse_t469;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t468;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;

// System.Void WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
extern "C" void WebRpcResponse__ctor_m1831 (WebRpcResponse_t469 * __this, OperationResponse_t23 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_Name()
extern "C" String_t* WebRpcResponse_get_Name_m1832 (WebRpcResponse_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Name(System.String)
extern "C" void WebRpcResponse_set_Name_m1833 (WebRpcResponse_t469 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebRpcResponse::get_ReturnCode()
extern "C" int32_t WebRpcResponse_get_ReturnCode_m1834 (WebRpcResponse_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_ReturnCode(System.Int32)
extern "C" void WebRpcResponse_set_ReturnCode_m1835 (WebRpcResponse_t469 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_DebugMessage()
extern "C" String_t* WebRpcResponse_get_DebugMessage_m1836 (WebRpcResponse_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_DebugMessage(System.String)
extern "C" void WebRpcResponse_set_DebugMessage_m1837 (WebRpcResponse_t469 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::get_Parameters()
extern "C" Dictionary_2_t468 * WebRpcResponse_get_Parameters_m1838 (WebRpcResponse_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void WebRpcResponse_set_Parameters_m1839 (WebRpcResponse_t469 * __this, Dictionary_2_t468 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::ToStringFull()
extern "C" String_t* WebRpcResponse_ToStringFull_m1840 (WebRpcResponse_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
