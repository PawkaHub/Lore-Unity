#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Movement
struct Movement_t543;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Movement::.ctor()
extern "C" void Movement__ctor_m2300 (Movement_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::Awake()
extern "C" void Movement_Awake_m2301 (Movement_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::Start()
extern "C" void Movement_Start_m2302 (Movement_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::FixedUpdate()
extern "C" void Movement_FixedUpdate_m2303 (Movement_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::Move(System.Single,System.Single)
extern "C" void Movement_Move_m2304 (Movement_t543 * __this, float ___xMove, float ___zMove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::SyncedMovement()
extern "C" void Movement_SyncedMovement_m2305 (Movement_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::Update()
extern "C" void Movement_Update_m2306 (Movement_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::HandlePointMovement(UnityEngine.Vector3)
extern "C" void Movement_HandlePointMovement_m2307 (Movement_t543 * __this, Vector3_t53  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void Movement_OnPhotonSerializeView_m2308 (Movement_t543 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
