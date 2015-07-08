#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t521;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t518;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformViewScaleControl::.ctor(PhotonTransformViewScaleModel)
extern "C" void PhotonTransformViewScaleControl__ctor_m2192 (PhotonTransformViewScaleControl_t521 * __this, PhotonTransformViewScaleModel_t518 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
extern "C" Vector3_t53  PhotonTransformViewScaleControl_GetScale_m2193 (PhotonTransformViewScaleControl_t521 * __this, Vector3_t53  ___currentScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewScaleControl_OnPhotonSerializeView_m2194 (PhotonTransformViewScaleControl_t521 * __this, Vector3_t53  ___currentScale, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
