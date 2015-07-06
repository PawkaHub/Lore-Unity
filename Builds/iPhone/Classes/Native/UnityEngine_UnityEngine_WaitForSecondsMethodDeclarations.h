#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t629;
struct WaitForSeconds_t629_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m2791 (WaitForSeconds_t629 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t629_marshal(const WaitForSeconds_t629& unmarshaled, WaitForSeconds_t629_marshaled& marshaled);
void WaitForSeconds_t629_marshal_back(const WaitForSeconds_t629_marshaled& marshaled, WaitForSeconds_t629& unmarshaled);
void WaitForSeconds_t629_marshal_cleanup(WaitForSeconds_t629_marshaled& marshaled);
