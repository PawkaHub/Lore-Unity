#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t519;
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t516;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformViewPositionControl::.ctor(PhotonTransformViewPositionModel)
extern "C" void PhotonTransformViewPositionControl__ctor_m2178 (PhotonTransformViewPositionControl_t519 * __this, PhotonTransformViewPositionModel_t516 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
extern "C" Vector3_t53  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_m2179 (PhotonTransformViewPositionControl_t519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C" void PhotonTransformViewPositionControl_SetSynchronizedValues_m2180 (PhotonTransformViewPositionControl_t519 * __this, Vector3_t53  ___speed, float ___turnSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
extern "C" Vector3_t53  PhotonTransformViewPositionControl_UpdatePosition_m2181 (PhotonTransformViewPositionControl_t519 * __this, Vector3_t53  ___currentPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetNetworkPosition()
extern "C" Vector3_t53  PhotonTransformViewPositionControl_GetNetworkPosition_m2182 (PhotonTransformViewPositionControl_t519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
extern "C" Vector3_t53  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_m2183 (PhotonTransformViewPositionControl_t519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_OnPhotonSerializeView_m2184 (PhotonTransformViewPositionControl_t519 * __this, Vector3_t53  ___currentPosition, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_SerializeData_m2185 (PhotonTransformViewPositionControl_t519 * __this, Vector3_t53  ___currentPosition, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::DeserializeData(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_DeserializeData_m2186 (PhotonTransformViewPositionControl_t519 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
