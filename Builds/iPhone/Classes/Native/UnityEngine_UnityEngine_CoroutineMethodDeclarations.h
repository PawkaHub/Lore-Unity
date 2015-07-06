#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t879;
struct Coroutine_t879_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m16155 (Coroutine_t879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m16156 (Coroutine_t879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m16157 (Coroutine_t879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t879_marshal(const Coroutine_t879& unmarshaled, Coroutine_t879_marshaled& marshaled);
void Coroutine_t879_marshal_back(const Coroutine_t879_marshaled& marshaled, Coroutine_t879& unmarshaled);
void Coroutine_t879_marshal_cleanup(Coroutine_t879_marshaled& marshaled);
