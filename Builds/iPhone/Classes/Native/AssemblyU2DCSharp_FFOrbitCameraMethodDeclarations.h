#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FFOrbitCamera
struct FFOrbitCamera_t57;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void FFOrbitCamera::.ctor()
extern "C" void FFOrbitCamera__ctor_m185 (FFOrbitCamera_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFOrbitCamera::Start()
extern "C" void FFOrbitCamera_Start_m186 (FFOrbitCamera_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFOrbitCamera::Update()
extern "C" void FFOrbitCamera_Update_m187 (FFOrbitCamera_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFOrbitCamera::LateUpdate()
extern "C" void FFOrbitCamera_LateUpdate_m188 (FFOrbitCamera_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFOrbitCamera::HandlePlayerInput()
extern "C" void FFOrbitCamera_HandlePlayerInput_m189 (FFOrbitCamera_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFOrbitCamera::CalculateDesiredPosition()
extern "C" void FFOrbitCamera_CalculateDesiredPosition_m190 (FFOrbitCamera_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 FFOrbitCamera::CalculatePosition(System.Single,System.Single,System.Single)
extern "C" Vector3_t53  FFOrbitCamera_CalculatePosition_m191 (FFOrbitCamera_t57 * __this, float ___rotationX, float ___rotationY, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFOrbitCamera::UpdatePosition()
extern "C" void FFOrbitCamera_UpdatePosition_m192 (FFOrbitCamera_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FFOrbitCamera::Reset()
extern "C" void FFOrbitCamera_Reset_m193 (FFOrbitCamera_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FFOrbitCamera::ClampAngle(System.Single,System.Single,System.Single)
extern "C" float FFOrbitCamera_ClampAngle_m194 (FFOrbitCamera_t57 * __this, float ___angle, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
