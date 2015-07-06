#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t297;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" bool NavMeshAgent_SetDestination_m2966 (NavMeshAgent_t297 * __this, Vector3_t53  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m16961 (Object_t * __this /* static, unused */, NavMeshAgent_t297 * ___self, Vector3_t53 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.NavMeshAgent::get_remainingDistance()
extern "C" float NavMeshAgent_get_remainingDistance_m2959 (NavMeshAgent_t297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
