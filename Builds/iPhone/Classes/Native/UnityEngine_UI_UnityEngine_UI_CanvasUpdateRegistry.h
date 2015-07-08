﻿#pragma once
#include <stdint.h>
// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t794;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
struct IndexedSet_1_t1127;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t1128;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t1129;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.UI.CanvasUpdateRegistry
struct  CanvasUpdateRegistry_t794  : public Object_t
{
	// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::m_PerformingLayoutUpdate
	bool ___m_PerformingLayoutUpdate_1;
	// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::m_PerformingGraphicUpdate
	bool ___m_PerformingGraphicUpdate_2;
	// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::m_LayoutRebuildQueue
	IndexedSet_1_t1127 * ___m_LayoutRebuildQueue_3;
	// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::m_GraphicRebuildQueue
	IndexedSet_1_t1127 * ___m_GraphicRebuildQueue_4;
};
struct CanvasUpdateRegistry_t794_StaticFields{
	// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::s_Instance
	CanvasUpdateRegistry_t794 * ___s_Instance_0;
	// System.Comparison`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::s_SortLayoutFunction
	Comparison_1_t1128 * ___s_SortLayoutFunction_5;
	// System.Predicate`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::<>f__am$cache6
	Predicate_1_t1129 * ___U3CU3Ef__amU24cache6_6;
	// System.Predicate`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::<>f__am$cache7
	Predicate_1_t1129 * ___U3CU3Ef__amU24cache7_7;
};
