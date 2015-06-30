#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t197;
// PhotonAnimatorView
struct PhotonAnimatorView_t349;
// UnityEngine.Animator
struct Animator_t214;
// Photon.PunBehaviour
#include "AssemblyU2DCSharp_Photon_PunBehaviour.h"
// DemoMecanimGUI
struct  DemoMecanimGUI_t350  : public PunBehaviour_t351
{
	// UnityEngine.GUISkin DemoMecanimGUI::Skin
	GUISkin_t197 * ___Skin_2;
	// PhotonAnimatorView DemoMecanimGUI::m_AnimatorView
	PhotonAnimatorView_t349 * ___m_AnimatorView_3;
	// UnityEngine.Animator DemoMecanimGUI::m_RemoteAnimator
	Animator_t214 * ___m_RemoteAnimator_4;
	// System.Single DemoMecanimGUI::m_SlideIn
	float ___m_SlideIn_5;
	// System.Single DemoMecanimGUI::m_FoundPlayerSlideIn
	float ___m_FoundPlayerSlideIn_6;
	// System.Boolean DemoMecanimGUI::m_IsOpen
	bool ___m_IsOpen_7;
};
