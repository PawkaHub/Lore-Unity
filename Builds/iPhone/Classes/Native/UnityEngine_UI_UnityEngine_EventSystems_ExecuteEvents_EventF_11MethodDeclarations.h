﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t801;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t773;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t634;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m4706(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t801 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m27193_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m31203(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t801 *, Object_t *, BaseEventData_t634 *, const MethodInfo*))EventFunction_1_Invoke_m27195_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m31204(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t801 *, Object_t *, BaseEventData_t634 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m27197_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m31205(__this, ___result, method) (( void (*) (EventFunction_1_t801 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m27199_gshared)(__this, ___result, method)
