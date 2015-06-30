#pragma once
#include <stdint.h>
// System.String
struct String_t;
// ParticlePlayground.PlaygroundParticlesC
struct PlaygroundParticlesC_t126;
// ParticlePlayground.PlaygroundTransformC
struct PlaygroundTransformC_t112;
// UnityEngine.Material
struct Material_t48;
// System.Object
#include "mscorlib_System_Object.h"
// ParticlePlayground.INDIVIDUALTRANSITIONTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_INDIVIDUALTRANSITIONTYP.h"
// ParticlePlayground.PlaygroundSave
struct  PlaygroundSave_t164  : public Object_t
{
	// System.String ParticlePlayground.PlaygroundSave::name
	String_t* ___name_0;
	// System.Single ParticlePlayground.PlaygroundSave::time
	float ___time_1;
	// System.Single ParticlePlayground.PlaygroundSave::lifetime
	float ___lifetime_2;
	// System.Int32 ParticlePlayground.PlaygroundSave::particleCount
	int32_t ___particleCount_3;
	// System.Single ParticlePlayground.PlaygroundSave::version
	float ___version_4;
	// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundSave::settings
	PlaygroundParticlesC_t126 * ___settings_5;
	// ParticlePlayground.PlaygroundTransformC ParticlePlayground.PlaygroundSave::transform
	PlaygroundTransformC_t112 * ___transform_6;
	// UnityEngine.Material ParticlePlayground.PlaygroundSave::material
	Material_t48 * ___material_7;
	// System.Int32 ParticlePlayground.PlaygroundSave::loadMode
	int32_t ___loadMode_8;
	// System.Boolean ParticlePlayground.PlaygroundSave::loadTransform
	bool ___loadTransform_9;
	// System.Boolean ParticlePlayground.PlaygroundSave::loadMaterial
	bool ___loadMaterial_10;
	// System.Boolean ParticlePlayground.PlaygroundSave::setMaterialAfterTransition
	bool ___setMaterialAfterTransition_11;
	// System.Single ParticlePlayground.PlaygroundSave::transitionMultiplier
	float ___transitionMultiplier_12;
	// ParticlePlayground.INDIVIDUALTRANSITIONTYPEC ParticlePlayground.PlaygroundSave::transitionType
	int32_t ___transitionType_13;
	// System.Boolean ParticlePlayground.PlaygroundSave::unfolded
	bool ___unfolded_14;
	// System.Boolean ParticlePlayground.PlaygroundSave::isLoading
	bool ___isLoading_15;
	// System.Boolean ParticlePlayground.PlaygroundSave::isSaving
	bool ___isSaving_16;
};
