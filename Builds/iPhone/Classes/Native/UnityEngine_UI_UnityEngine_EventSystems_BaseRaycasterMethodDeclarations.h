﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t1996;
// UnityEngine.Camera
struct Camera_t356;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t633;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t2001;

// System.Void UnityEngine.EventSystems.BaseRaycaster::.ctor()
extern "C" void BaseRaycaster__ctor_m8352 (BaseRaycaster_t1996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
// UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera()
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_priority()
extern "C" int32_t BaseRaycaster_get_priority_m8353 (BaseRaycaster_t1996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_sortOrderPriority()
extern "C" int32_t BaseRaycaster_get_sortOrderPriority_m8354 (BaseRaycaster_t1996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_renderOrderPriority()
extern "C" int32_t BaseRaycaster_get_renderOrderPriority_m8355 (BaseRaycaster_t1996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnEnable()
extern "C" void BaseRaycaster_OnEnable_m8356 (BaseRaycaster_t1996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnDisable()
extern "C" void BaseRaycaster_OnDisable_m8357 (BaseRaycaster_t1996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;