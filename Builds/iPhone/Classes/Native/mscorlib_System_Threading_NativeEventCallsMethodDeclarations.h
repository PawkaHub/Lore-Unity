﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.NativeEventCalls
struct NativeEventCalls_t5351;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.IntPtr System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Boolean&)
extern "C" IntPtr_t NativeEventCalls_CreateEvent_internal_m22049 (Object_t * __this /* static, unused */, bool ___manual, bool ___initial, String_t* ___name, bool* ___created, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.NativeEventCalls::SetEvent_internal(System.IntPtr)
extern "C" bool NativeEventCalls_SetEvent_internal_m22050 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.NativeEventCalls::ResetEvent_internal(System.IntPtr)
extern "C" bool NativeEventCalls_ResetEvent_internal_m22051 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.NativeEventCalls::CloseEvent_internal(System.IntPtr)
extern "C" void NativeEventCalls_CloseEvent_internal_m22052 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
