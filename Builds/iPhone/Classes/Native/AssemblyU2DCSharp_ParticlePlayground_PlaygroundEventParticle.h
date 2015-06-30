#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Collider
struct Collider_t194;
// UnityEngine.Collider2D
struct Collider2D_t195;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// ParticlePlayground.PlaygroundEventParticle
struct  PlaygroundEventParticle_t114  : public Object_t
{
	// System.Single ParticlePlayground.PlaygroundEventParticle::initialSize
	float ___initialSize_0;
	// System.Single ParticlePlayground.PlaygroundEventParticle::size
	float ___size_1;
	// System.Single ParticlePlayground.PlaygroundEventParticle::rotation
	float ___rotation_2;
	// System.Single ParticlePlayground.PlaygroundEventParticle::life
	float ___life_3;
	// System.Single ParticlePlayground.PlaygroundEventParticle::totalLifetime
	float ___totalLifetime_4;
	// System.Single ParticlePlayground.PlaygroundEventParticle::birth
	float ___birth_5;
	// System.Single ParticlePlayground.PlaygroundEventParticle::birthDelay
	float ___birthDelay_6;
	// System.Single ParticlePlayground.PlaygroundEventParticle::death
	float ___death_7;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::emission
	bool ___emission_8;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::rebirth
	bool ___rebirth_9;
	// System.Single ParticlePlayground.PlaygroundEventParticle::lifetimeOffset
	float ___lifetimeOffset_10;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::velocity
	Vector3_t53  ___velocity_11;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::initialVelocity
	Vector3_t53  ___initialVelocity_12;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::initialLocalVelocity
	Vector3_t53  ___initialLocalVelocity_13;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::position
	Vector3_t53  ___position_14;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::targetPosition
	Vector3_t53  ___targetPosition_15;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::targetDirection
	Vector3_t53  ___targetDirection_16;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::previousTargetPosition
	Vector3_t53  ___previousTargetPosition_17;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::previousParticlePosition
	Vector3_t53  ___previousParticlePosition_18;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::collisionParticlePosition
	Vector3_t53  ___collisionParticlePosition_19;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::localSpaceMovementCompensation
	Vector3_t53  ___localSpaceMovementCompensation_20;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventParticle::scatterPosition
	Vector3_t53  ___scatterPosition_21;
	// System.Single ParticlePlayground.PlaygroundEventParticle::initialRotation
	float ___initialRotation_22;
	// System.Single ParticlePlayground.PlaygroundEventParticle::rotationSpeed
	float ___rotationSpeed_23;
	// UnityEngine.Color32 ParticlePlayground.PlaygroundEventParticle::color
	Color32_t89  ___color_24;
	// UnityEngine.Color32 ParticlePlayground.PlaygroundEventParticle::scriptedColor
	Color32_t89  ___scriptedColor_25;
	// UnityEngine.Color32 ParticlePlayground.PlaygroundEventParticle::initialColor
	Color32_t89  ___initialColor_26;
	// System.Int32 ParticlePlayground.PlaygroundEventParticle::lifetimeColorId
	int32_t ___lifetimeColorId_27;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::noForce
	bool ___noForce_28;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::isNonBirthed
	bool ___isNonBirthed_29;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::isFirstLoop
	bool ___isFirstLoop_30;
	// System.Int32 ParticlePlayground.PlaygroundEventParticle::particleId
	int32_t ___particleId_31;
	// System.Int32 ParticlePlayground.PlaygroundEventParticle::particleSystemId
	int32_t ___particleSystemId_32;
	// System.Int32 ParticlePlayground.PlaygroundEventParticle::manipulatorId
	int32_t ___manipulatorId_33;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::changedByProperty
	bool ___changedByProperty_34;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::changedByPropertyColor
	bool ___changedByPropertyColor_35;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::changedByPropertyColorLerp
	bool ___changedByPropertyColorLerp_36;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::changedByPropertyColorKeepAlpha
	bool ___changedByPropertyColorKeepAlpha_37;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::changedByPropertySize
	bool ___changedByPropertySize_38;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::changedByPropertyTarget
	bool ___changedByPropertyTarget_39;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::changedByPropertyDeath
	bool ___changedByPropertyDeath_40;
	// System.Int32 ParticlePlayground.PlaygroundEventParticle::propertyTarget
	int32_t ___propertyTarget_41;
	// System.Int32 ParticlePlayground.PlaygroundEventParticle::propertyId
	int32_t ___propertyId_42;
	// System.Int32 ParticlePlayground.PlaygroundEventParticle::propertyColorId
	int32_t ___propertyColorId_43;
	// System.Int32 ParticlePlayground.PlaygroundEventParticle::excludeFromManipulatorId
	int32_t ___excludeFromManipulatorId_44;
	// System.Boolean ParticlePlayground.PlaygroundEventParticle::isMasked
	bool ___isMasked_45;
	// System.Single ParticlePlayground.PlaygroundEventParticle::maskAlpha
	float ___maskAlpha_46;
	// UnityEngine.Transform ParticlePlayground.PlaygroundEventParticle::collisionTransform
	Transform_t54 * ___collisionTransform_47;
	// UnityEngine.Collider ParticlePlayground.PlaygroundEventParticle::collisionCollider
	Collider_t194 * ___collisionCollider_48;
	// UnityEngine.Collider2D ParticlePlayground.PlaygroundEventParticle::collisionCollider2D
	Collider2D_t195 * ___collisionCollider2D_49;
};
