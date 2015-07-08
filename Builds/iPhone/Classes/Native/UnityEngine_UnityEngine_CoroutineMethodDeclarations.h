#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t589;
struct Coroutine_t589_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m16574 (Coroutine_t589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m16575 (Coroutine_t589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m16576 (Coroutine_t589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t589_marshal(const Coroutine_t589& unmarshaled, Coroutine_t589_marshaled& marshaled);
void Coroutine_t589_marshal_back(const Coroutine_t589_marshaled& marshaled, Coroutine_t589& unmarshaled);
void Coroutine_t589_marshal_cleanup(Coroutine_t589_marshaled& marshaled);
