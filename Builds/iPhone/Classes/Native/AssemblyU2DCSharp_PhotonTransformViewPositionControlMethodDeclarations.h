#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t492;
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t489;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformViewPositionControl::.ctor(PhotonTransformViewPositionModel)
extern "C" void PhotonTransformViewPositionControl__ctor_m2132 (PhotonTransformViewPositionControl_t492 * __this, PhotonTransformViewPositionModel_t489 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
extern "C" Vector3_t53  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_m2133 (PhotonTransformViewPositionControl_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C" void PhotonTransformViewPositionControl_SetSynchronizedValues_m2134 (PhotonTransformViewPositionControl_t492 * __this, Vector3_t53  ___speed, float ___turnSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
extern "C" Vector3_t53  PhotonTransformViewPositionControl_UpdatePosition_m2135 (PhotonTransformViewPositionControl_t492 * __this, Vector3_t53  ___currentPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetNetworkPosition()
extern "C" Vector3_t53  PhotonTransformViewPositionControl_GetNetworkPosition_m2136 (PhotonTransformViewPositionControl_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
extern "C" Vector3_t53  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_m2137 (PhotonTransformViewPositionControl_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_OnPhotonSerializeView_m2138 (PhotonTransformViewPositionControl_t492 * __this, Vector3_t53  ___currentPosition, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_SerializeData_m2139 (PhotonTransformViewPositionControl_t492 * __this, Vector3_t53  ___currentPosition, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::DeserializeData(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_DeserializeData_m2140 (PhotonTransformViewPositionControl_t492 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
