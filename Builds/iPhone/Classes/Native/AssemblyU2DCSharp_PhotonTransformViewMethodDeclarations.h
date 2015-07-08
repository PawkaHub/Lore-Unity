#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformView
struct PhotonTransformView_t391;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformView::.ctor()
extern "C" void PhotonTransformView__ctor_m2169 (PhotonTransformView_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Awake()
extern "C" void PhotonTransformView_Awake_m2170 (PhotonTransformView_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Update()
extern "C" void PhotonTransformView_Update_m2171 (PhotonTransformView_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdatePosition()
extern "C" void PhotonTransformView_UpdatePosition_m2172 (PhotonTransformView_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateRotation()
extern "C" void PhotonTransformView_UpdateRotation_m2173 (PhotonTransformView_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateScale()
extern "C" void PhotonTransformView_UpdateScale_m2174 (PhotonTransformView_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C" void PhotonTransformView_SetSynchronizedValues_m2175 (PhotonTransformView_t391 * __this, Vector3_t53  ___speed, float ___turnSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformView_OnPhotonSerializeView_m2176 (PhotonTransformView_t391 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::DoDrawEstimatedPositionError()
extern "C" void PhotonTransformView_DoDrawEstimatedPositionError_m2177 (PhotonTransformView_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
