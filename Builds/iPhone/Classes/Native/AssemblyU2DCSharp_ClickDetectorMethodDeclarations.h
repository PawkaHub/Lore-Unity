﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ClickDetector
struct ClickDetector_t378;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void ClickDetector::.ctor()
extern "C" void ClickDetector__ctor_m1482 (ClickDetector_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ClickDetector::Update()
extern "C" void ClickDetector_Update_m1483 (ClickDetector_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ClickDetector::RaycastObject(UnityEngine.Vector2)
extern "C" GameObject_t49 * ClickDetector_RaycastObject_m1484 (ClickDetector_t378 * __this, Vector2_t97  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;