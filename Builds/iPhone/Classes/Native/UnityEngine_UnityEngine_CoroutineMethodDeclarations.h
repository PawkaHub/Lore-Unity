#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t2059;
struct Coroutine_t2059_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m12276 (Coroutine_t2059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m12277 (Coroutine_t2059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m12278 (Coroutine_t2059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t2059_marshal(const Coroutine_t2059& unmarshaled, Coroutine_t2059_marshaled& marshaled);
void Coroutine_t2059_marshal_back(const Coroutine_t2059_marshaled& marshaled, Coroutine_t2059& unmarshaled);
void Coroutine_t2059_marshal_cleanup(Coroutine_t2059_marshaled& marshaled);
