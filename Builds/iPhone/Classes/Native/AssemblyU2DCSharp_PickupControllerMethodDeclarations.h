#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupController
struct PickupController_t383;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t631;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupController::.ctor()
extern "C" void PickupController__ctor_m1402 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Awake()
extern "C" void PickupController_Awake_m1403 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Update()
extern "C" void PickupController_Update_m1404 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PickupController_OnPhotonSerializeView_m1405 (PickupController_t383 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::UpdateSmoothedMovementDirection()
extern "C" void PickupController_UpdateSmoothedMovementDirection_m1406 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyJumping()
extern "C" void PickupController_ApplyJumping_m1407 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyGravity()
extern "C" void PickupController_ApplyGravity_m1408 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::CalculateJumpVerticalSpeed(System.Single)
extern "C" float PickupController_CalculateJumpVerticalSpeed_m1409 (PickupController_t383 * __this, float ___targetJumpHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::DidJump()
extern "C" void PickupController_DidJump_m1410 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C" void PickupController_OnControllerColliderHit_m1411 (PickupController_t383 * __this, ControllerColliderHit_t631 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetSpeed()
extern "C" float PickupController_GetSpeed_m1412 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsJumping()
extern "C" bool PickupController_IsJumping_m1413 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGrounded()
extern "C" bool PickupController_IsGrounded_m1414 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupController::GetDirection()
extern "C" Vector3_t53  PickupController_GetDirection_m1415 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMovingBackwards()
extern "C" bool PickupController_IsMovingBackwards_m1416 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetLockCameraTimer()
extern "C" float PickupController_GetLockCameraTimer_m1417 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMoving()
extern "C" bool PickupController_IsMoving_m1418 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::HasJumpReachedApex()
extern "C" bool PickupController_HasJumpReachedApex_m1419 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGroundedWithTimeout()
extern "C" bool PickupController_IsGroundedWithTimeout_m1420 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Reset()
extern "C" void PickupController_Reset_m1421 (PickupController_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
