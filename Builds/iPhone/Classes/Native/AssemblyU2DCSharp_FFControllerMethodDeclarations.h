#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FFController
struct FFController_t50;
// UnityEngine.Collider
struct Collider_t194;

// System.Void FFController::.ctor()
extern "C" void FFController__ctor_m167 (FFController_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::Start()
extern "C" void FFController_Start_m168 (FFController_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::Update()
extern "C" void FFController_Update_m169 (FFController_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::OnTriggerExit(UnityEngine.Collider)
extern "C" void FFController_OnTriggerExit_m170 (FFController_t50 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::OnGUI()
extern "C" void FFController_OnGUI_m171 (FFController_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::InitCamera()
extern "C" void FFController_InitCamera_m172 (FFController_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::InitRenderSetting()
extern "C" void FFController_InitRenderSetting_m173 (FFController_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::SwitchCamera()
extern "C" void FFController_SwitchCamera_m174 (FFController_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::HelpWindow(System.Int32)
extern "C" void FFController_HelpWindow_m175 (FFController_t50 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::DemoScenesWindow(System.Int32)
extern "C" void FFController_DemoScenesWindow_m176 (FFController_t50 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFController::InfoWindow(System.Int32)
extern "C" void FFController_InfoWindow_m177 (FFController_t50 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
