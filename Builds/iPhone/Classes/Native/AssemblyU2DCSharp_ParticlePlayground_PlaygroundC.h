#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t77;
// ParticlePlayground.PlaygroundC
struct PlaygroundC_t75;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.GameObject
struct GameObject_t49;
// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundParticlesC>
struct List_1_t79;
// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>
struct List_1_t80;
// System.Random
struct Random_t81;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t82;
// ParticlePlayground.OnPlaygroundParticle
struct OnPlaygroundParticle_t83;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ParticlePlayground.PIXELMODEC
#include "AssemblyU2DCSharp_ParticlePlayground_PIXELMODEC.h"
// ParticlePlayground.ThreadMethod
#include "AssemblyU2DCSharp_ParticlePlayground_ThreadMethod.h"
// ParticlePlayground.ThreadMethodComponent
#include "AssemblyU2DCSharp_ParticlePlayground_ThreadMethodComponent.h"
// ParticlePlayground.PlaygroundC
struct  PlaygroundC_t75  : public MonoBehaviour_t47
{
	// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundParticlesC> ParticlePlayground.PlaygroundC::particleSystems
	List_1_t79 * ___particleSystems_23;
	// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC> ParticlePlayground.PlaygroundC::manipulators
	List_1_t80 * ___manipulators_24;
	// System.Int32 ParticlePlayground.PlaygroundC::paintMaxPositions
	int32_t ___paintMaxPositions_25;
	// System.Boolean ParticlePlayground.PlaygroundC::calculate
	bool ___calculate_26;
	// ParticlePlayground.PIXELMODEC ParticlePlayground.PlaygroundC::pixelFilterMode
	int32_t ___pixelFilterMode_27;
	// System.Boolean ParticlePlayground.PlaygroundC::autoGroup
	bool ___autoGroup_28;
	// System.Boolean ParticlePlayground.PlaygroundC::buildZeroAlphaPixels
	bool ___buildZeroAlphaPixels_29;
	// System.Boolean ParticlePlayground.PlaygroundC::drawGizmos
	bool ___drawGizmos_30;
	// System.Boolean ParticlePlayground.PlaygroundC::drawSourcePositions
	bool ___drawSourcePositions_31;
	// System.Boolean ParticlePlayground.PlaygroundC::showShuriken
	bool ___showShuriken_32;
	// System.Boolean ParticlePlayground.PlaygroundC::paintToolbox
	bool ___paintToolbox_33;
	// System.Single ParticlePlayground.PlaygroundC::collisionPlaneScale
	float ___collisionPlaneScale_34;
	// System.Boolean ParticlePlayground.PlaygroundC::showSnapshotsInHierarchy
	bool ___showSnapshotsInHierarchy_35;
	// System.Boolean ParticlePlayground.PlaygroundC::drawWireframe
	bool ___drawWireframe_36;
	// System.Boolean ParticlePlayground.PlaygroundC::drawSplinePreview
	bool ___drawSplinePreview_37;
	// ParticlePlayground.ThreadMethod ParticlePlayground.PlaygroundC::threadMethod
	int32_t ___threadMethod_38;
	// ParticlePlayground.ThreadMethodComponent ParticlePlayground.PlaygroundC::skinnedMeshThreadMethod
	int32_t ___skinnedMeshThreadMethod_39;
	// ParticlePlayground.ThreadMethodComponent ParticlePlayground.PlaygroundC::turbulenceThreadMethod
	int32_t ___turbulenceThreadMethod_40;
	// System.Int32 ParticlePlayground.PlaygroundC::maxThreads
	int32_t ___maxThreads_41;
	// System.Boolean ParticlePlayground.PlaygroundC::isDoneThread
	bool ___isDoneThread_42;
	// System.Boolean ParticlePlayground.PlaygroundC::isDoneThreadLocal
	bool ___isDoneThreadLocal_43;
	// System.Boolean ParticlePlayground.PlaygroundC::isDoneThreadSkinned
	bool ___isDoneThreadSkinned_44;
	// System.Boolean ParticlePlayground.PlaygroundC::isDoneThreadTurbulence
	bool ___isDoneThreadTurbulence_45;
	// System.Int32 ParticlePlayground.PlaygroundC::threads
	int32_t ___threads_46;
	// System.Object ParticlePlayground.PlaygroundC::locker
	Object_t * ___locker_50;
	// System.Object ParticlePlayground.PlaygroundC::lockerLocal
	Object_t * ___lockerLocal_51;
	// System.Int32 ParticlePlayground.PlaygroundC::frameCount
	int32_t ___frameCount_52;
	// System.Boolean ParticlePlayground.PlaygroundC::isReady
	bool ___isReady_53;
	// System.Boolean ParticlePlayground.PlaygroundC::hasActiveParticleSystems
	bool ___hasActiveParticleSystems_54;
	// System.Boolean ParticlePlayground.PlaygroundC::hasLocalNoThreads
	bool ___hasLocalNoThreads_55;
	// System.Boolean ParticlePlayground.PlaygroundC::hasLocalOnePerSystem
	bool ___hasLocalOnePerSystem_56;
	// System.Boolean ParticlePlayground.PlaygroundC::hasLocalOneForAll
	bool ___hasLocalOneForAll_57;
	// System.Boolean ParticlePlayground.PlaygroundC::hasActiveSkinnedMeshes
	bool ___hasActiveSkinnedMeshes_58;
	// System.Boolean ParticlePlayground.PlaygroundC::hasActiveTurbulence
	bool ___hasActiveTurbulence_59;
	// System.Boolean ParticlePlayground.PlaygroundC::isFirstUnsafeAutomaticFrames
	bool ___isFirstUnsafeAutomaticFrames_60;
	// System.Int32 ParticlePlayground.PlaygroundC::threadAggregatorRuns
	int32_t ___threadAggregatorRuns_61;
	// System.Collections.Generic.List`1<System.Int32> ParticlePlayground.PlaygroundC::activeSystems
	List_1_t82 * ___activeSystems_62;
	// ParticlePlayground.ThreadMethod ParticlePlayground.PlaygroundC::previousThreadMethod
	int32_t ___previousThreadMethod_63;
	// ParticlePlayground.ThreadMethodComponent ParticlePlayground.PlaygroundC::previousSkinnedMeshThreadMethod
	int32_t ___previousSkinnedMeshThreadMethod_64;
	// ParticlePlayground.ThreadMethodComponent ParticlePlayground.PlaygroundC::previousTurbulenceThreadMethod
	int32_t ___previousTurbulenceThreadMethod_65;
};
struct PlaygroundC_t75_StaticFields{
	// System.Int32 ParticlePlayground.PlaygroundC::meshQuantity
	int32_t ___meshQuantity_2;
	// System.Int32 ParticlePlayground.PlaygroundC::particlesQuantity
	int32_t ___particlesQuantity_3;
	// System.Single ParticlePlayground.PlaygroundC::version
	float ___version_4;
	// System.String ParticlePlayground.PlaygroundC::specialVersion
	String_t* ___specialVersion_5;
	// System.Single ParticlePlayground.PlaygroundC::globalTime
	float ___globalTime_6;
	// System.Single ParticlePlayground.PlaygroundC::lastTimeUpdated
	float ___lastTimeUpdated_7;
	// System.Single ParticlePlayground.PlaygroundC::globalDeltaTime
	float ___globalDeltaTime_8;
	// System.Single ParticlePlayground.PlaygroundC::globalTimescale
	float ___globalTimescale_9;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundC::initialTargetPosition
	Vector3_t53  ___initialTargetPosition_10;
	// System.Int32 ParticlePlayground.PlaygroundC::skinnedUpdateRate
	int32_t ___skinnedUpdateRate_11;
	// System.Boolean ParticlePlayground.PlaygroundC::triggerSceneRepaint
	bool ___triggerSceneRepaint_12;
	// System.Single ParticlePlayground.PlaygroundC::collisionSleepVelocity
	float ___collisionSleepVelocity_13;
	// System.Int32 ParticlePlayground.PlaygroundC::unsafeAutomaticThreadFrames
	int32_t ___unsafeAutomaticThreadFrames_14;
	// UnityEngine.Plane[] ParticlePlayground.PlaygroundC::frustumPlanes
	PlaneU5BU5D_t77* ___frustumPlanes_15;
	// System.Boolean ParticlePlayground.PlaygroundC::particleEventBirthInitialized
	bool ___particleEventBirthInitialized_16;
	// System.Boolean ParticlePlayground.PlaygroundC::particleEventDeathInitialized
	bool ___particleEventDeathInitialized_17;
	// System.Boolean ParticlePlayground.PlaygroundC::particleEventCollisionInitialized
	bool ___particleEventCollisionInitialized_18;
	// System.Boolean ParticlePlayground.PlaygroundC::particleEventTimeInitialized
	bool ___particleEventTimeInitialized_19;
	// ParticlePlayground.PlaygroundC ParticlePlayground.PlaygroundC::reference
	PlaygroundC_t75 * ___reference_20;
	// UnityEngine.Transform ParticlePlayground.PlaygroundC::referenceTransform
	Transform_t54 * ___referenceTransform_21;
	// UnityEngine.GameObject ParticlePlayground.PlaygroundC::referenceGameObject
	GameObject_t49 * ___referenceGameObject_22;
	// System.Int32 ParticlePlayground.PlaygroundC::processorCount
	int32_t ___processorCount_47;
	// System.Int32 ParticlePlayground.PlaygroundC::activeThreads
	int32_t ___activeThreads_48;
	// System.Random ParticlePlayground.PlaygroundC::random
	Random_t81 * ___random_49;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.PlaygroundC::particleEventBirth
	OnPlaygroundParticle_t83 * ___particleEventBirth_66;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.PlaygroundC::particleEventDeath
	OnPlaygroundParticle_t83 * ___particleEventDeath_67;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.PlaygroundC::particleEventCollision
	OnPlaygroundParticle_t83 * ___particleEventCollision_68;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.PlaygroundC::particleEventTime
	OnPlaygroundParticle_t83 * ___particleEventTime_69;
};
