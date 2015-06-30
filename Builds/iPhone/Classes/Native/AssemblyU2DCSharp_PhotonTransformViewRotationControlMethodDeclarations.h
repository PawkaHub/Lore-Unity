#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t493;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t490;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PhotonTransformViewRotationControl::.ctor(PhotonTransformViewRotationModel)
extern "C" void PhotonTransformViewRotationControl__ctor_m2142 (PhotonTransformViewRotationControl_t493 * __this, PhotonTransformViewRotationModel_t490 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
extern "C" Quaternion_t69  PhotonTransformViewRotationControl_GetRotation_m2143 (PhotonTransformViewRotationControl_t493 * __this, Quaternion_t69  ___currentRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewRotationControl_OnPhotonSerializeView_m2144 (PhotonTransformViewRotationControl_t493 * __this, Quaternion_t69  ___currentRotation, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
