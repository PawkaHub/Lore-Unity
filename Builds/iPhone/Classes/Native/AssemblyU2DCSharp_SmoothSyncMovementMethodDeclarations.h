#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SmoothSyncMovement
struct SmoothSyncMovement_t532;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;

// System.Void SmoothSyncMovement::.ctor()
extern "C" void SmoothSyncMovement__ctor_m2258 (SmoothSyncMovement_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::Awake()
extern "C" void SmoothSyncMovement_Awake_m2259 (SmoothSyncMovement_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void SmoothSyncMovement_OnPhotonSerializeView_m2260 (SmoothSyncMovement_t532 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::Update()
extern "C" void SmoothSyncMovement_Update_m2261 (SmoothSyncMovement_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
