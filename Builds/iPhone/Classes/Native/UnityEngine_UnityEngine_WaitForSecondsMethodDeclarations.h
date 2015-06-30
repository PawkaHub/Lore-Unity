#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t608;
struct WaitForSeconds_t608_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m2704 (WaitForSeconds_t608 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t608_marshal(const WaitForSeconds_t608& unmarshaled, WaitForSeconds_t608_marshaled& marshaled);
void WaitForSeconds_t608_marshal_back(const WaitForSeconds_t608_marshaled& marshaled, WaitForSeconds_t608& unmarshaled);
void WaitForSeconds_t608_marshal_cleanup(WaitForSeconds_t608_marshaled& marshaled);
