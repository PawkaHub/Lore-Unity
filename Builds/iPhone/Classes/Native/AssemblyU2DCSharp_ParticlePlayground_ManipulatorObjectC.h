#pragma once
#include <stdint.h>
// ParticlePlayground.ManipulatorPropertyC
struct ManipulatorPropertyC_t110;
// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>
struct List_1_t111;
// ParticlePlayground.PlaygroundTransformC
struct PlaygroundTransformC_t112;
// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorParticle>
struct List_1_t113;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;
// ParticlePlayground.OnPlaygroundParticle
struct OnPlaygroundParticle_t83;
// System.Object
#include "mscorlib_System_Object.h"
// ParticlePlayground.MANIPULATORTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_MANIPULATORTYPEC.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// ParticlePlayground.MANIPULATORSHAPEC
#include "AssemblyU2DCSharp_ParticlePlayground_MANIPULATORSHAPEC.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// ParticlePlayground.TrackingMethod
#include "AssemblyU2DCSharp_ParticlePlayground_TrackingMethod.h"
// ParticlePlayground.ManipulatorObjectC
struct  ManipulatorObjectC_t115  : public Object_t
{
	// ParticlePlayground.MANIPULATORTYPEC ParticlePlayground.ManipulatorObjectC::type
	int32_t ___type_0;
	// ParticlePlayground.ManipulatorPropertyC ParticlePlayground.ManipulatorObjectC::property
	ManipulatorPropertyC_t110 * ___property_1;
	// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC> ParticlePlayground.ManipulatorObjectC::properties
	List_1_t111 * ___properties_2;
	// UnityEngine.LayerMask ParticlePlayground.ManipulatorObjectC::affects
	LayerMask_t87  ___affects_3;
	// ParticlePlayground.PlaygroundTransformC ParticlePlayground.ManipulatorObjectC::transform
	PlaygroundTransformC_t112 * ___transform_4;
	// ParticlePlayground.MANIPULATORSHAPEC ParticlePlayground.ManipulatorObjectC::shape
	int32_t ___shape_5;
	// System.Single ParticlePlayground.ManipulatorObjectC::size
	float ___size_6;
	// UnityEngine.Bounds ParticlePlayground.ManipulatorObjectC::bounds
	Bounds_t56  ___bounds_7;
	// System.Single ParticlePlayground.ManipulatorObjectC::strength
	float ___strength_8;
	// System.Single ParticlePlayground.ManipulatorObjectC::strengthSmoothing
	float ___strengthSmoothing_9;
	// System.Single ParticlePlayground.ManipulatorObjectC::strengthDistanceEffect
	float ___strengthDistanceEffect_10;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::enabled
	bool ___enabled_11;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::inverseBounds
	bool ___inverseBounds_12;
	// System.Int32 ParticlePlayground.ManipulatorObjectC::manipulatorId
	int32_t ___manipulatorId_13;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::applyLifetimeFilter
	bool ___applyLifetimeFilter_14;
	// System.Single ParticlePlayground.ManipulatorObjectC::lifetimeFilterMinimum
	float ___lifetimeFilterMinimum_15;
	// System.Single ParticlePlayground.ManipulatorObjectC::lifetimeFilterMaximum
	float ___lifetimeFilterMaximum_16;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::applyParticleFilter
	bool ___applyParticleFilter_17;
	// System.Single ParticlePlayground.ManipulatorObjectC::particleFilterMinimum
	float ___particleFilterMinimum_18;
	// System.Single ParticlePlayground.ManipulatorObjectC::particleFilterMaximum
	float ___particleFilterMaximum_19;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::unfolded
	bool ___unfolded_20;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::trackParticles
	bool ___trackParticles_21;
	// ParticlePlayground.TrackingMethod ParticlePlayground.ManipulatorObjectC::trackingMethod
	int32_t ___trackingMethod_22;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::sendEventEnter
	bool ___sendEventEnter_23;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::sendEventExit
	bool ___sendEventExit_24;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::sendEventBirth
	bool ___sendEventBirth_25;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::sendEventDeath
	bool ___sendEventDeath_26;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::sendEventCollision
	bool ___sendEventCollision_27;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::sendEventsUnfolded
	bool ___sendEventsUnfolded_28;
	// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorParticle> ParticlePlayground.ManipulatorObjectC::particles
	List_1_t113 * ___particles_29;
	// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorParticle> ParticlePlayground.ManipulatorObjectC::nonAffectedParticles
	List_1_t113 * ___nonAffectedParticles_30;
	// ParticlePlayground.PlaygroundEventParticle ParticlePlayground.ManipulatorObjectC::manipulatorEventParticle
	PlaygroundEventParticle_t114 * ___manipulatorEventParticle_31;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::initializedEventEnter
	bool ___initializedEventEnter_32;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::initializedEventExit
	bool ___initializedEventExit_33;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::initializedEventBirth
	bool ___initializedEventBirth_34;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::initializedEventDeath
	bool ___initializedEventDeath_35;
	// System.Boolean ParticlePlayground.ManipulatorObjectC::initializedEventCollision
	bool ___initializedEventCollision_36;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.ManipulatorObjectC::particleEventEnter
	OnPlaygroundParticle_t83 * ___particleEventEnter_37;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.ManipulatorObjectC::particleEventExit
	OnPlaygroundParticle_t83 * ___particleEventExit_38;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.ManipulatorObjectC::particleEventBirth
	OnPlaygroundParticle_t83 * ___particleEventBirth_39;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.ManipulatorObjectC::particleEventDeath
	OnPlaygroundParticle_t83 * ___particleEventDeath_40;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.ManipulatorObjectC::particleEventCollision
	OnPlaygroundParticle_t83 * ___particleEventCollision_41;
};
