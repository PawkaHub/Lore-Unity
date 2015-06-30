#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupController
struct PickupController_t355;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t557;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupController::.ctor()
extern "C" void PickupController__ctor_m1356 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Awake()
extern "C" void PickupController_Awake_m1357 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Update()
extern "C" void PickupController_Update_m1358 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PickupController_OnPhotonSerializeView_m1359 (PickupController_t355 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::UpdateSmoothedMovementDirection()
extern "C" void PickupController_UpdateSmoothedMovementDirection_m1360 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyJumping()
extern "C" void PickupController_ApplyJumping_m1361 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyGravity()
extern "C" void PickupController_ApplyGravity_m1362 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::CalculateJumpVerticalSpeed(System.Single)
extern "C" float PickupController_CalculateJumpVerticalSpeed_m1363 (PickupController_t355 * __this, float ___targetJumpHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::DidJump()
extern "C" void PickupController_DidJump_m1364 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C" void PickupController_OnControllerColliderHit_m1365 (PickupController_t355 * __this, ControllerColliderHit_t557 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetSpeed()
extern "C" float PickupController_GetSpeed_m1366 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsJumping()
extern "C" bool PickupController_IsJumping_m1367 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGrounded()
extern "C" bool PickupController_IsGrounded_m1368 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupController::GetDirection()
extern "C" Vector3_t53  PickupController_GetDirection_m1369 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMovingBackwards()
extern "C" bool PickupController_IsMovingBackwards_m1370 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetLockCameraTimer()
extern "C" float PickupController_GetLockCameraTimer_m1371 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMoving()
extern "C" bool PickupController_IsMoving_m1372 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::HasJumpReachedApex()
extern "C" bool PickupController_HasJumpReachedApex_m1373 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGroundedWithTimeout()
extern "C" bool PickupController_IsGroundedWithTimeout_m1374 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Reset()
extern "C" void PickupController_Reset_m1375 (PickupController_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
