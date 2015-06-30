#pragma once
#include <stdint.h>
// ParticlePlayground.MathManipulatorProperty
struct MathManipulatorProperty_t116;
// UnityEngine.Gradient
struct Gradient_t117;
struct Gradient_t117_marshaled;
// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundTransformC>
struct List_1_t118;
// ParticlePlayground.WorldObject
struct WorldObject_t104;
// ParticlePlayground.SkinnedWorldObject
struct SkinnedWorldObject_t109;
// ParticlePlayground.ParticleStateC
struct ParticleStateC_t94;
// PlaygroundSplines.PlaygroundSpline
struct PlaygroundSpline_t67;
// System.Int32[]
struct Int32U5BU5D_t119;
// UnityEngine.AnimationCurve
struct AnimationCurve_t98;
struct AnimationCurve_t98_marshaled;
// ParticlePlayground.SimplexNoise
struct SimplexNoise_t120;
// System.Object
#include "mscorlib_System_Object.h"
// ParticlePlayground.MANIPULATORPROPERTYTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_MANIPULATORPROPERTYTYPE.h"
// ParticlePlayground.MANIPULATORPROPERTYTRANSITIONC
#include "AssemblyU2DCSharp_ParticlePlayground_MANIPULATORPROPERTYTRAN.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// ParticlePlayground.SPLINETARGETMETHOD
#include "AssemblyU2DCSharp_ParticlePlayground_SPLINETARGETMETHOD.h"
// ParticlePlayground.TARGETSORTINGC
#include "AssemblyU2DCSharp_ParticlePlayground_TARGETSORTINGC.h"
// ParticlePlayground.TURBULENCETYPE
#include "AssemblyU2DCSharp_ParticlePlayground_TURBULENCETYPE.h"
// ParticlePlayground.ManipulatorPropertyC
struct  ManipulatorPropertyC_t110  : public Object_t
{
	// ParticlePlayground.MANIPULATORPROPERTYTYPEC ParticlePlayground.ManipulatorPropertyC::type
	int32_t ___type_0;
	// ParticlePlayground.MANIPULATORPROPERTYTRANSITIONC ParticlePlayground.ManipulatorPropertyC::transition
	int32_t ___transition_1;
	// ParticlePlayground.MathManipulatorProperty ParticlePlayground.ManipulatorPropertyC::mathProperty
	MathManipulatorProperty_t116 * ___mathProperty_2;
	// UnityEngine.Vector3 ParticlePlayground.ManipulatorPropertyC::velocity
	Vector3_t53  ___velocity_3;
	// UnityEngine.Vector3 ParticlePlayground.ManipulatorPropertyC::localVelocity
	Vector3_t53  ___localVelocity_4;
	// UnityEngine.Color ParticlePlayground.ManipulatorPropertyC::color
	Color_t121  ___color_5;
	// UnityEngine.Gradient ParticlePlayground.ManipulatorPropertyC::lifetimeColor
	Gradient_t117 * ___lifetimeColor_6;
	// System.Single ParticlePlayground.ManipulatorPropertyC::size
	float ___size_7;
	// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundTransformC> ParticlePlayground.ManipulatorPropertyC::targets
	List_1_t118 * ___targets_8;
	// System.Int32 ParticlePlayground.ManipulatorPropertyC::targetPointer
	int32_t ___targetPointer_9;
	// ParticlePlayground.WorldObject ParticlePlayground.ManipulatorPropertyC::meshTarget
	WorldObject_t104 * ___meshTarget_10;
	// ParticlePlayground.SkinnedWorldObject ParticlePlayground.ManipulatorPropertyC::skinnedMeshTarget
	SkinnedWorldObject_t109 * ___skinnedMeshTarget_11;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::meshTargetIsProcedural
	bool ___meshTargetIsProcedural_12;
	// UnityEngine.Matrix4x4 ParticlePlayground.ManipulatorPropertyC::meshTargetMatrix
	Matrix4x4_t68  ___meshTargetMatrix_13;
	// ParticlePlayground.ParticleStateC ParticlePlayground.ManipulatorPropertyC::stateTarget
	ParticleStateC_t94 * ___stateTarget_14;
	// PlaygroundSplines.PlaygroundSpline ParticlePlayground.ManipulatorPropertyC::splineTarget
	PlaygroundSpline_t67 * ___splineTarget_15;
	// ParticlePlayground.SPLINETARGETMETHOD ParticlePlayground.ManipulatorPropertyC::splineTargetMethod
	int32_t ___splineTargetMethod_16;
	// System.Single ParticlePlayground.ManipulatorPropertyC::splineTimeOffset
	float ___splineTimeOffset_17;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::splineTargetIsReady
	bool ___splineTargetIsReady_18;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::useLocalRotation
	bool ___useLocalRotation_19;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::onlyColorInRange
	bool ___onlyColorInRange_20;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::keepColorAlphas
	bool ___keepColorAlphas_21;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::onlyPositionInRange
	bool ___onlyPositionInRange_22;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::onlySizeInRange
	bool ___onlySizeInRange_23;
	// System.Single ParticlePlayground.ManipulatorPropertyC::zeroVelocityStrength
	float ___zeroVelocityStrength_24;
	// System.Single ParticlePlayground.ManipulatorPropertyC::strength
	float ___strength_25;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::unfolded
	bool ___unfolded_26;
	// ParticlePlayground.TARGETSORTINGC ParticlePlayground.ManipulatorPropertyC::targetSorting
	int32_t ___targetSorting_27;
	// System.Int32[] ParticlePlayground.ManipulatorPropertyC::targetSortingList
	Int32U5BU5D_t119* ___targetSortingList_28;
	// ParticlePlayground.TARGETSORTINGC ParticlePlayground.ManipulatorPropertyC::previousTargetSorting
	int32_t ___previousTargetSorting_29;
	// ParticlePlayground.TURBULENCETYPE ParticlePlayground.ManipulatorPropertyC::turbulenceType
	int32_t ___turbulenceType_30;
	// System.Single ParticlePlayground.ManipulatorPropertyC::turbulenceTimeScale
	float ___turbulenceTimeScale_31;
	// System.Single ParticlePlayground.ManipulatorPropertyC::turbulenceScale
	float ___turbulenceScale_32;
	// System.Boolean ParticlePlayground.ManipulatorPropertyC::turbulenceApplyLifetimeStrength
	bool ___turbulenceApplyLifetimeStrength_33;
	// UnityEngine.AnimationCurve ParticlePlayground.ManipulatorPropertyC::turbulenceLifetimeStrength
	AnimationCurve_t98 * ___turbulenceLifetimeStrength_34;
	// ParticlePlayground.SimplexNoise ParticlePlayground.ManipulatorPropertyC::turbulenceSimplex
	SimplexNoise_t120 * ___turbulenceSimplex_35;
};
