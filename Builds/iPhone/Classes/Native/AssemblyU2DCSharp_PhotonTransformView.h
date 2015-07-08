#pragma once
#include <stdint.h>
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t516;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t517;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t518;
// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t519;
// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t520;
// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t521;
// PhotonView
struct PhotonView_t353;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PhotonTransformView
struct  PhotonTransformView_t391  : public MonoBehaviour_t47
{
	// PhotonTransformViewPositionModel PhotonTransformView::m_PositionModel
	PhotonTransformViewPositionModel_t516 * ___m_PositionModel_2;
	// PhotonTransformViewRotationModel PhotonTransformView::m_RotationModel
	PhotonTransformViewRotationModel_t517 * ___m_RotationModel_3;
	// PhotonTransformViewScaleModel PhotonTransformView::m_ScaleModel
	PhotonTransformViewScaleModel_t518 * ___m_ScaleModel_4;
	// PhotonTransformViewPositionControl PhotonTransformView::m_PositionControl
	PhotonTransformViewPositionControl_t519 * ___m_PositionControl_5;
	// PhotonTransformViewRotationControl PhotonTransformView::m_RotationControl
	PhotonTransformViewRotationControl_t520 * ___m_RotationControl_6;
	// PhotonTransformViewScaleControl PhotonTransformView::m_ScaleControl
	PhotonTransformViewScaleControl_t521 * ___m_ScaleControl_7;
	// PhotonView PhotonTransformView::m_PhotonView
	PhotonView_t353 * ___m_PhotonView_8;
	// System.Boolean PhotonTransformView::m_ReceivedNetworkUpdate
	bool ___m_ReceivedNetworkUpdate_9;
};
