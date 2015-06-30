#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation/Enumerator
struct Enumerator_t2806;
// System.Object
struct Object_t;
// UnityEngine.Animation
struct Animation_t298;

// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" void Enumerator__ctor_m13133 (Enumerator_t2806 * __this, Animation_t298 * ___outer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m13134 (Enumerator_t2806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m13135 (Enumerator_t2806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
