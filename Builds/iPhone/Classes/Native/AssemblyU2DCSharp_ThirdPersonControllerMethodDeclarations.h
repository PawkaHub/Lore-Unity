#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ThirdPersonController
struct ThirdPersonController_t399;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t631;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ThirdPersonController::.ctor()
extern "C" void ThirdPersonController__ctor_m1477 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Awake()
extern "C" void ThirdPersonController_Awake_m1478 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::UpdateSmoothedMovementDirection()
extern "C" void ThirdPersonController_UpdateSmoothedMovementDirection_m1479 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyJumping()
extern "C" void ThirdPersonController_ApplyJumping_m1480 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyGravity()
extern "C" void ThirdPersonController_ApplyGravity_m1481 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single)
extern "C" float ThirdPersonController_CalculateJumpVerticalSpeed_m1482 (ThirdPersonController_t399 * __this, float ___targetJumpHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::DidJump()
extern "C" void ThirdPersonController_DidJump_m1483 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Update()
extern "C" void ThirdPersonController_Update_m1484 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C" void ThirdPersonController_OnControllerColliderHit_m1485 (ThirdPersonController_t399 * __this, ControllerColliderHit_t631 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetSpeed()
extern "C" float ThirdPersonController_GetSpeed_m1486 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsJumping()
extern "C" bool ThirdPersonController_IsJumping_m1487 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGrounded()
extern "C" bool ThirdPersonController_IsGrounded_m1488 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonController::GetDirection()
extern "C" Vector3_t53  ThirdPersonController_GetDirection_m1489 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMovingBackwards()
extern "C" bool ThirdPersonController_IsMovingBackwards_m1490 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetLockCameraTimer()
extern "C" float ThirdPersonController_GetLockCameraTimer_m1491 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMoving()
extern "C" bool ThirdPersonController_IsMoving_m1492 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::HasJumpReachedApex()
extern "C" bool ThirdPersonController_HasJumpReachedApex_m1493 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGroundedWithTimeout()
extern "C" bool ThirdPersonController_IsGroundedWithTimeout_m1494 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Reset()
extern "C" void ThirdPersonController_Reset_m1495 (ThirdPersonController_t399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
