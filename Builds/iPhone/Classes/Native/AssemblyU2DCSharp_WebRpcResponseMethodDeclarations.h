#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WebRpcResponse
struct WebRpcResponse_t441;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t440;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;

// System.Void WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
extern "C" void WebRpcResponse__ctor_m1785 (WebRpcResponse_t441 * __this, OperationResponse_t23 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_Name()
extern "C" String_t* WebRpcResponse_get_Name_m1786 (WebRpcResponse_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Name(System.String)
extern "C" void WebRpcResponse_set_Name_m1787 (WebRpcResponse_t441 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebRpcResponse::get_ReturnCode()
extern "C" int32_t WebRpcResponse_get_ReturnCode_m1788 (WebRpcResponse_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_ReturnCode(System.Int32)
extern "C" void WebRpcResponse_set_ReturnCode_m1789 (WebRpcResponse_t441 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_DebugMessage()
extern "C" String_t* WebRpcResponse_get_DebugMessage_m1790 (WebRpcResponse_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_DebugMessage(System.String)
extern "C" void WebRpcResponse_set_DebugMessage_m1791 (WebRpcResponse_t441 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::get_Parameters()
extern "C" Dictionary_2_t440 * WebRpcResponse_get_Parameters_m1792 (WebRpcResponse_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void WebRpcResponse_set_Parameters_m1793 (WebRpcResponse_t441 * __this, Dictionary_2_t440 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::ToStringFull()
extern "C" String_t* WebRpcResponse_ToStringFull_m1794 (WebRpcResponse_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
