#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t520;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t517;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PhotonTransformViewRotationControl::.ctor(PhotonTransformViewRotationModel)
extern "C" void PhotonTransformViewRotationControl__ctor_m2188 (PhotonTransformViewRotationControl_t520 * __this, PhotonTransformViewRotationModel_t517 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
extern "C" Quaternion_t69  PhotonTransformViewRotationControl_GetRotation_m2189 (PhotonTransformViewRotationControl_t520 * __this, Quaternion_t69  ___currentRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewRotationControl_OnPhotonSerializeView_m2190 (PhotonTransformViewRotationControl_t520 * __this, Quaternion_t69  ___currentRotation, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
