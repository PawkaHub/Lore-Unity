#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ThirdPersonController
struct ThirdPersonController_t371;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t575;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ThirdPersonController::.ctor()
extern "C" void ThirdPersonController__ctor_m1431 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Awake()
extern "C" void ThirdPersonController_Awake_m1432 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::UpdateSmoothedMovementDirection()
extern "C" void ThirdPersonController_UpdateSmoothedMovementDirection_m1433 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyJumping()
extern "C" void ThirdPersonController_ApplyJumping_m1434 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyGravity()
extern "C" void ThirdPersonController_ApplyGravity_m1435 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single)
extern "C" float ThirdPersonController_CalculateJumpVerticalSpeed_m1436 (ThirdPersonController_t371 * __this, float ___targetJumpHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::DidJump()
extern "C" void ThirdPersonController_DidJump_m1437 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Update()
extern "C" void ThirdPersonController_Update_m1438 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C" void ThirdPersonController_OnControllerColliderHit_m1439 (ThirdPersonController_t371 * __this, ControllerColliderHit_t575 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetSpeed()
extern "C" float ThirdPersonController_GetSpeed_m1440 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsJumping()
extern "C" bool ThirdPersonController_IsJumping_m1441 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGrounded()
extern "C" bool ThirdPersonController_IsGrounded_m1442 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonController::GetDirection()
extern "C" Vector3_t53  ThirdPersonController_GetDirection_m1443 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMovingBackwards()
extern "C" bool ThirdPersonController_IsMovingBackwards_m1444 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetLockCameraTimer()
extern "C" float ThirdPersonController_GetLockCameraTimer_m1445 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMoving()
extern "C" bool ThirdPersonController_IsMoving_m1446 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::HasJumpReachedApex()
extern "C" bool ThirdPersonController_HasJumpReachedApex_m1447 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGroundedWithTimeout()
extern "C" bool ThirdPersonController_IsGroundedWithTimeout_m1448 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Reset()
extern "C" void ThirdPersonController_Reset_m1449 (ThirdPersonController_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
