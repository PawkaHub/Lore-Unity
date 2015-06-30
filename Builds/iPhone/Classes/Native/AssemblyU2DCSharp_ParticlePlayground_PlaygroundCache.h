#pragma once
#include <stdint.h>
// System.Single[]
struct SingleU5BU5D_t168;
// System.Boolean[]
struct BooleanU5BU5D_t31;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Object
#include "mscorlib_System_Object.h"
// ParticlePlayground.PlaygroundCache
struct  PlaygroundCache_t167  : public Object_t
{
	// System.Single[] ParticlePlayground.PlaygroundCache::initialSize
	SingleU5BU5D_t168* ___initialSize_0;
	// System.Single[] ParticlePlayground.PlaygroundCache::size
	SingleU5BU5D_t168* ___size_1;
	// System.Single[] ParticlePlayground.PlaygroundCache::rotation
	SingleU5BU5D_t168* ___rotation_2;
	// System.Single[] ParticlePlayground.PlaygroundCache::life
	SingleU5BU5D_t168* ___life_3;
	// System.Single[] ParticlePlayground.PlaygroundCache::lifetimeSubtraction
	SingleU5BU5D_t168* ___lifetimeSubtraction_4;
	// System.Single[] ParticlePlayground.PlaygroundCache::birth
	SingleU5BU5D_t168* ___birth_5;
	// System.Single[] ParticlePlayground.PlaygroundCache::birthDelay
	SingleU5BU5D_t168* ___birthDelay_6;
	// System.Single[] ParticlePlayground.PlaygroundCache::death
	SingleU5BU5D_t168* ___death_7;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::emission
	BooleanU5BU5D_t31* ___emission_8;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::rebirth
	BooleanU5BU5D_t31* ___rebirth_9;
	// System.Single[] ParticlePlayground.PlaygroundCache::lifetimeOffset
	SingleU5BU5D_t168* ___lifetimeOffset_10;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::velocity
	Vector3U5BU5D_t92* ___velocity_11;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::initialVelocity
	Vector3U5BU5D_t92* ___initialVelocity_12;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::initialLocalVelocity
	Vector3U5BU5D_t92* ___initialLocalVelocity_13;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::position
	Vector3U5BU5D_t92* ___position_14;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::targetPosition
	Vector3U5BU5D_t92* ___targetPosition_15;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::targetDirection
	Vector3U5BU5D_t92* ___targetDirection_16;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::previousTargetPosition
	Vector3U5BU5D_t92* ___previousTargetPosition_17;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::previousParticlePosition
	Vector3U5BU5D_t92* ___previousParticlePosition_18;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::collisionParticlePosition
	Vector3U5BU5D_t92* ___collisionParticlePosition_19;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::localSpaceMovementCompensation
	Vector3U5BU5D_t92* ___localSpaceMovementCompensation_20;
	// UnityEngine.Vector3[] ParticlePlayground.PlaygroundCache::scatterPosition
	Vector3U5BU5D_t92* ___scatterPosition_21;
	// System.Single[] ParticlePlayground.PlaygroundCache::initialRotation
	SingleU5BU5D_t168* ___initialRotation_22;
	// System.Single[] ParticlePlayground.PlaygroundCache::rotationSpeed
	SingleU5BU5D_t168* ___rotationSpeed_23;
	// UnityEngine.Color32[] ParticlePlayground.PlaygroundCache::color
	Color32U5BU5D_t91* ___color_24;
	// UnityEngine.Color32[] ParticlePlayground.PlaygroundCache::scriptedColor
	Color32U5BU5D_t91* ___scriptedColor_25;
	// UnityEngine.Color32[] ParticlePlayground.PlaygroundCache::initialColor
	Color32U5BU5D_t91* ___initialColor_26;
	// System.Int32[] ParticlePlayground.PlaygroundCache::lifetimeColorId
	Int32U5BU5D_t119* ___lifetimeColorId_27;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::noForce
	BooleanU5BU5D_t31* ___noForce_28;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::isNonBirthed
	BooleanU5BU5D_t31* ___isNonBirthed_29;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::isFirstLoop
	BooleanU5BU5D_t31* ___isFirstLoop_30;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::simulate
	BooleanU5BU5D_t31* ___simulate_31;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::isCalculatedThisFrame
	BooleanU5BU5D_t31* ___isCalculatedThisFrame_32;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::changedByProperty
	BooleanU5BU5D_t31* ___changedByProperty_33;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::changedByPropertyColor
	BooleanU5BU5D_t31* ___changedByPropertyColor_34;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::changedByPropertyColorLerp
	BooleanU5BU5D_t31* ___changedByPropertyColorLerp_35;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::changedByPropertyColorKeepAlpha
	BooleanU5BU5D_t31* ___changedByPropertyColorKeepAlpha_36;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::changedByPropertySize
	BooleanU5BU5D_t31* ___changedByPropertySize_37;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::changedByPropertyTarget
	BooleanU5BU5D_t31* ___changedByPropertyTarget_38;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::changedByPropertyDeath
	BooleanU5BU5D_t31* ___changedByPropertyDeath_39;
	// System.Int32[] ParticlePlayground.PlaygroundCache::propertyTarget
	Int32U5BU5D_t119* ___propertyTarget_40;
	// System.Int32[] ParticlePlayground.PlaygroundCache::propertyId
	Int32U5BU5D_t119* ___propertyId_41;
	// System.Int32[] ParticlePlayground.PlaygroundCache::propertyColorId
	Int32U5BU5D_t119* ___propertyColorId_42;
	// System.Int32[] ParticlePlayground.PlaygroundCache::manipulatorId
	Int32U5BU5D_t119* ___manipulatorId_43;
	// System.Int32[] ParticlePlayground.PlaygroundCache::excludeFromManipulatorId
	Int32U5BU5D_t119* ___excludeFromManipulatorId_44;
	// System.Boolean[] ParticlePlayground.PlaygroundCache::isMasked
	BooleanU5BU5D_t31* ___isMasked_45;
	// System.Single[] ParticlePlayground.PlaygroundCache::maskAlpha
	SingleU5BU5D_t168* ___maskAlpha_46;
	// System.Int32[] ParticlePlayground.PlaygroundCache::maskSorting
	Int32U5BU5D_t119* ___maskSorting_47;
};
