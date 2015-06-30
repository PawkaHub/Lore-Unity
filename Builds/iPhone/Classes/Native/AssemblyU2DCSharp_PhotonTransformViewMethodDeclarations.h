#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformView
struct PhotonTransformView_t363;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformView::.ctor()
extern "C" void PhotonTransformView__ctor_m2123 (PhotonTransformView_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Awake()
extern "C" void PhotonTransformView_Awake_m2124 (PhotonTransformView_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Update()
extern "C" void PhotonTransformView_Update_m2125 (PhotonTransformView_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdatePosition()
extern "C" void PhotonTransformView_UpdatePosition_m2126 (PhotonTransformView_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateRotation()
extern "C" void PhotonTransformView_UpdateRotation_m2127 (PhotonTransformView_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateScale()
extern "C" void PhotonTransformView_UpdateScale_m2128 (PhotonTransformView_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C" void PhotonTransformView_SetSynchronizedValues_m2129 (PhotonTransformView_t363 * __this, Vector3_t53  ___speed, float ___turnSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformView_OnPhotonSerializeView_m2130 (PhotonTransformView_t363 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::DoDrawEstimatedPositionError()
extern "C" void PhotonTransformView_DoDrawEstimatedPositionError_m2131 (PhotonTransformView_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
