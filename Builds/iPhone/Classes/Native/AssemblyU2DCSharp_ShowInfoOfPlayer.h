#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.TextMesh
struct TextMesh_t555;
// UnityEngine.Font
struct Font_t556;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// ShowInfoOfPlayer
struct  ShowInfoOfPlayer_t557  : public MonoBehaviour_t357
{
	// UnityEngine.GameObject ShowInfoOfPlayer::textGo
	GameObject_t49 * ___textGo_2;
	// UnityEngine.TextMesh ShowInfoOfPlayer::tm
	TextMesh_t555 * ___tm_3;
	// System.Single ShowInfoOfPlayer::CharacterSize
	float ___CharacterSize_4;
	// UnityEngine.Font ShowInfoOfPlayer::font
	Font_t556 * ___font_5;
	// System.Boolean ShowInfoOfPlayer::DisableOnOwnObjects
	bool ___DisableOnOwnObjects_6;
};
