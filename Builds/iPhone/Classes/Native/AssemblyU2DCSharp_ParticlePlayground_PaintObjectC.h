#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<ParticlePlayground.PaintPositionC>
struct List_1_t84;
// ParticlePlayground.PlaygroundBrushC
struct PlaygroundBrushC_t85;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ParticlePlayground.COLLISIONTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_COLLISIONTYPEC.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// ParticlePlayground.PaintObjectC
struct  PaintObjectC_t86  : public Object_t
{
	// System.Collections.Generic.List`1<ParticlePlayground.PaintPositionC> ParticlePlayground.PaintObjectC::paintPositions
	List_1_t84 * ___paintPositions_0;
	// System.Int32 ParticlePlayground.PaintObjectC::positionLength
	int32_t ___positionLength_1;
	// UnityEngine.Vector3 ParticlePlayground.PaintObjectC::lastPaintPosition
	Vector3_t53  ___lastPaintPosition_2;
	// ParticlePlayground.COLLISIONTYPEC ParticlePlayground.PaintObjectC::collisionType
	int32_t ___collisionType_3;
	// System.Single ParticlePlayground.PaintObjectC::minDepth
	float ___minDepth_4;
	// System.Single ParticlePlayground.PaintObjectC::maxDepth
	float ___maxDepth_5;
	// System.Single ParticlePlayground.PaintObjectC::spacing
	float ___spacing_6;
	// UnityEngine.LayerMask ParticlePlayground.PaintObjectC::layerMask
	LayerMask_t87  ___layerMask_7;
	// ParticlePlayground.PlaygroundBrushC ParticlePlayground.PaintObjectC::brush
	PlaygroundBrushC_t85 * ___brush_8;
	// System.Boolean ParticlePlayground.PaintObjectC::exceedMaxStopsPaint
	bool ___exceedMaxStopsPaint_9;
	// System.Boolean ParticlePlayground.PaintObjectC::initialized
	bool ___initialized_10;
};
