#pragma once
#include <stdint.h>
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t489;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t490;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t491;
// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t492;
// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t493;
// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t494;
// PhotonView
struct PhotonView_t325;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PhotonTransformView
struct  PhotonTransformView_t363  : public MonoBehaviour_t47
{
	// PhotonTransformViewPositionModel PhotonTransformView::m_PositionModel
	PhotonTransformViewPositionModel_t489 * ___m_PositionModel_2;
	// PhotonTransformViewRotationModel PhotonTransformView::m_RotationModel
	PhotonTransformViewRotationModel_t490 * ___m_RotationModel_3;
	// PhotonTransformViewScaleModel PhotonTransformView::m_ScaleModel
	PhotonTransformViewScaleModel_t491 * ___m_ScaleModel_4;
	// PhotonTransformViewPositionControl PhotonTransformView::m_PositionControl
	PhotonTransformViewPositionControl_t492 * ___m_PositionControl_5;
	// PhotonTransformViewRotationControl PhotonTransformView::m_RotationControl
	PhotonTransformViewRotationControl_t493 * ___m_RotationControl_6;
	// PhotonTransformViewScaleControl PhotonTransformView::m_ScaleControl
	PhotonTransformViewScaleControl_t494 * ___m_ScaleControl_7;
	// PhotonView PhotonTransformView::m_PhotonView
	PhotonView_t325 * ___m_PhotonView_8;
	// System.Boolean PhotonTransformView::m_ReceivedNetworkUpdate
	bool ___m_ReceivedNetworkUpdate_9;
};
