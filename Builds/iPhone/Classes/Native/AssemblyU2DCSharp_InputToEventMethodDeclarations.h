#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InputToEvent
struct InputToEvent_t504;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void InputToEvent::.ctor()
extern "C" void InputToEvent__ctor_m2173 (InputToEvent_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::get_goPointedAt()
extern "C" GameObject_t49 * InputToEvent_get_goPointedAt_m2174 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::set_goPointedAt(UnityEngine.GameObject)
extern "C" void InputToEvent_set_goPointedAt_m2175 (Object_t * __this /* static, unused */, GameObject_t49 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InputToEvent::get_DragVector()
extern "C" Vector2_t97  InputToEvent_get_DragVector_m2176 (InputToEvent_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Start()
extern "C" void InputToEvent_Start_m2177 (InputToEvent_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Update()
extern "C" void InputToEvent_Update_m2178 (InputToEvent_t504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Press(UnityEngine.Vector2)
extern "C" void InputToEvent_Press_m2179 (InputToEvent_t504 * __this, Vector2_t97  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Release(UnityEngine.Vector2)
extern "C" void InputToEvent_Release_m2180 (InputToEvent_t504 * __this, Vector2_t97  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::RaycastObject(UnityEngine.Vector2)
extern "C" GameObject_t49 * InputToEvent_RaycastObject_m2181 (InputToEvent_t504 * __this, Vector2_t97  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
