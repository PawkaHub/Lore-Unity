#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t60;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FFTestParticles
struct  FFTestParticles_t61  : public MonoBehaviour_t47
{
	// UnityEngine.GameObject[] FFTestParticles::m_PrefabListFire
	GameObjectU5BU5D_t60* ___m_PrefabListFire_2;
	// UnityEngine.GameObject[] FFTestParticles::m_PrefabListWater
	GameObjectU5BU5D_t60* ___m_PrefabListWater_3;
	// UnityEngine.GameObject[] FFTestParticles::m_PrefabListWind
	GameObjectU5BU5D_t60* ___m_PrefabListWind_4;
	// UnityEngine.GameObject[] FFTestParticles::m_PrefabListEarth
	GameObjectU5BU5D_t60* ___m_PrefabListEarth_5;
	// UnityEngine.GameObject[] FFTestParticles::m_PrefabListLight
	GameObjectU5BU5D_t60* ___m_PrefabListLight_6;
	// UnityEngine.GameObject[] FFTestParticles::m_PrefabListDarkness
	GameObjectU5BU5D_t60* ___m_PrefabListDarkness_7;
	// System.Int32 FFTestParticles::m_CurrentElementIndex
	int32_t ___m_CurrentElementIndex_8;
	// System.Int32 FFTestParticles::m_CurrentParticleIndex
	int32_t ___m_CurrentParticleIndex_9;
	// System.String FFTestParticles::m_ElementName
	String_t* ___m_ElementName_10;
	// System.String FFTestParticles::m_ParticleName
	String_t* ___m_ParticleName_11;
	// UnityEngine.GameObject[] FFTestParticles::m_CurrentElementList
	GameObjectU5BU5D_t60* ___m_CurrentElementList_12;
	// UnityEngine.GameObject FFTestParticles::m_CurrentParticle
	GameObject_t49 * ___m_CurrentParticle_13;
};
