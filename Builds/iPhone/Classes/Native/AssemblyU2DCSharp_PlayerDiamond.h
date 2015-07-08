#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// PhotonView
struct PhotonView_t353;
// UnityEngine.Renderer
struct Renderer_t103;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerDiamond
struct  PlayerDiamond_t412  : public MonoBehaviour_t47
{
	// UnityEngine.Transform PlayerDiamond::HeadTransform
	Transform_t54 * ___HeadTransform_2;
	// System.Single PlayerDiamond::HeightOffset
	float ___HeightOffset_3;
	// PhotonView PlayerDiamond::m_PhotonView
	PhotonView_t353 * ___m_PhotonView_4;
	// UnityEngine.Renderer PlayerDiamond::m_DiamondRenderer
	Renderer_t103 * ___m_DiamondRenderer_5;
	// System.Single PlayerDiamond::m_Rotation
	float ___m_Rotation_6;
	// System.Single PlayerDiamond::m_Height
	float ___m_Height_7;
};
