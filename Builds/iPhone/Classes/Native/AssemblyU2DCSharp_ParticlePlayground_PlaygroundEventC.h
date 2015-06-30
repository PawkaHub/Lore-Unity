#pragma once
#include <stdint.h>
// ParticlePlayground.PlaygroundParticlesC
struct PlaygroundParticlesC_t126;
// ParticlePlayground.OnPlaygroundParticle
struct OnPlaygroundParticle_t83;
// System.Object
#include "mscorlib_System_Object.h"
// ParticlePlayground.EVENTBROADCASTC
#include "AssemblyU2DCSharp_ParticlePlayground_EVENTBROADCASTC.h"
// ParticlePlayground.EVENTTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_EVENTTYPEC.h"
// ParticlePlayground.EVENTINHERITANCEC
#include "AssemblyU2DCSharp_ParticlePlayground_EVENTINHERITANCEC.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// ParticlePlayground.PlaygroundEventC
struct  PlaygroundEventC_t127  : public Object_t
{
	// System.Boolean ParticlePlayground.PlaygroundEventC::enabled
	bool ___enabled_0;
	// System.Boolean ParticlePlayground.PlaygroundEventC::sendToManager
	bool ___sendToManager_1;
	// System.Boolean ParticlePlayground.PlaygroundEventC::initializedTarget
	bool ___initializedTarget_2;
	// System.Boolean ParticlePlayground.PlaygroundEventC::initializedEvent
	bool ___initializedEvent_3;
	// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundEventC::target
	PlaygroundParticlesC_t126 * ___target_4;
	// ParticlePlayground.EVENTBROADCASTC ParticlePlayground.PlaygroundEventC::broadcastType
	int32_t ___broadcastType_5;
	// ParticlePlayground.EVENTTYPEC ParticlePlayground.PlaygroundEventC::eventType
	int32_t ___eventType_6;
	// ParticlePlayground.EVENTINHERITANCEC ParticlePlayground.PlaygroundEventC::eventInheritancePosition
	int32_t ___eventInheritancePosition_7;
	// ParticlePlayground.EVENTINHERITANCEC ParticlePlayground.PlaygroundEventC::eventInheritanceVelocity
	int32_t ___eventInheritanceVelocity_8;
	// ParticlePlayground.EVENTINHERITANCEC ParticlePlayground.PlaygroundEventC::eventInheritanceColor
	int32_t ___eventInheritanceColor_9;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventC::eventPosition
	Vector3_t53  ___eventPosition_10;
	// UnityEngine.Vector3 ParticlePlayground.PlaygroundEventC::eventVelocity
	Vector3_t53  ___eventVelocity_11;
	// UnityEngine.Color32 ParticlePlayground.PlaygroundEventC::eventColor
	Color32_t89  ___eventColor_12;
	// System.Single ParticlePlayground.PlaygroundEventC::eventTime
	float ___eventTime_13;
	// System.Single ParticlePlayground.PlaygroundEventC::collisionThreshold
	float ___collisionThreshold_14;
	// System.Single ParticlePlayground.PlaygroundEventC::velocityMultiplier
	float ___velocityMultiplier_15;
	// System.Single ParticlePlayground.PlaygroundEventC::timer
	float ___timer_16;
	// ParticlePlayground.OnPlaygroundParticle ParticlePlayground.PlaygroundEventC::particleEvent
	OnPlaygroundParticle_t83 * ___particleEvent_17;
};
