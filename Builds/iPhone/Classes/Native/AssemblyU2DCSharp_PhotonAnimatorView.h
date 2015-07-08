#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t214;
// PhotonStreamQueue
struct PhotonStreamQueue_t485;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t512;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t513;
// PhotonView
struct PhotonView_t353;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PhotonAnimatorView
struct  PhotonAnimatorView_t377  : public MonoBehaviour_t47
{
	// UnityEngine.Animator PhotonAnimatorView::m_Animator
	Animator_t214 * ___m_Animator_2;
	// PhotonStreamQueue PhotonAnimatorView::m_StreamQueue
	PhotonStreamQueue_t485 * ___m_StreamQueue_3;
	// System.Boolean PhotonAnimatorView::ShowLayerWeightsInspector
	bool ___ShowLayerWeightsInspector_4;
	// System.Boolean PhotonAnimatorView::ShowParameterInspector
	bool ___ShowParameterInspector_5;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::m_SynchronizeParameters
	List_1_t512 * ___m_SynchronizeParameters_6;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::m_SynchronizeLayers
	List_1_t513 * ___m_SynchronizeLayers_7;
	// UnityEngine.Vector3 PhotonAnimatorView::m_ReceiverPosition
	Vector3_t53  ___m_ReceiverPosition_8;
	// System.Single PhotonAnimatorView::m_LastDeserializeTime
	float ___m_LastDeserializeTime_9;
	// System.Boolean PhotonAnimatorView::m_WasSynchronizeTypeChanged
	bool ___m_WasSynchronizeTypeChanged_10;
	// PhotonView PhotonAnimatorView::m_PhotonView
	PhotonView_t353 * ___m_PhotonView_11;
};
