#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t4535;
struct WebCamDevice_t4535_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m16980 (WebCamDevice_t4535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m16981 (WebCamDevice_t4535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t4535_marshal(const WebCamDevice_t4535& unmarshaled, WebCamDevice_t4535_marshaled& marshaled);
void WebCamDevice_t4535_marshal_back(const WebCamDevice_t4535_marshaled& marshaled, WebCamDevice_t4535& unmarshaled);
void WebCamDevice_t4535_marshal_cleanup(WebCamDevice_t4535_marshaled& marshaled);
