#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SmoothSyncMovement
struct SmoothSyncMovement_t559;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;

// System.Void SmoothSyncMovement::.ctor()
extern "C" void SmoothSyncMovement__ctor_m2304 (SmoothSyncMovement_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::Awake()
extern "C" void SmoothSyncMovement_Awake_m2305 (SmoothSyncMovement_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void SmoothSyncMovement_OnPhotonSerializeView_m2306 (SmoothSyncMovement_t559 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::Update()
extern "C" void SmoothSyncMovement_Update_m2307 (SmoothSyncMovement_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
