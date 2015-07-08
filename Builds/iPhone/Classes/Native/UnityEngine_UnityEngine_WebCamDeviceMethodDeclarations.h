#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t4773;
struct WebCamDevice_t4773_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m17399 (WebCamDevice_t4773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m17400 (WebCamDevice_t4773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t4773_marshal(const WebCamDevice_t4773& unmarshaled, WebCamDevice_t4773_marshaled& marshaled);
void WebCamDevice_t4773_marshal_back(const WebCamDevice_t4773_marshaled& marshaled, WebCamDevice_t4773& unmarshaled);
void WebCamDevice_t4773_marshal_cleanup(WebCamDevice_t4773_marshaled& marshaled);
