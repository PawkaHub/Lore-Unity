#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t494;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t491;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformViewScaleControl::.ctor(PhotonTransformViewScaleModel)
extern "C" void PhotonTransformViewScaleControl__ctor_m2146 (PhotonTransformViewScaleControl_t494 * __this, PhotonTransformViewScaleModel_t491 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
extern "C" Vector3_t53  PhotonTransformViewScaleControl_GetScale_m2147 (PhotonTransformViewScaleControl_t494 * __this, Vector3_t53  ___currentScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewScaleControl_OnPhotonSerializeView_m2148 (PhotonTransformViewScaleControl_t494 * __this, Vector3_t53  ___currentScale, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
