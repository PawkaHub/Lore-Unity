#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t686;
struct WaitForSeconds_t686_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m2963 (WaitForSeconds_t686 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t686_marshal(const WaitForSeconds_t686& unmarshaled, WaitForSeconds_t686_marshaled& marshaled);
void WaitForSeconds_t686_marshal_back(const WaitForSeconds_t686_marshaled& marshaled, WaitForSeconds_t686& unmarshaled);
void WaitForSeconds_t686_marshal_cleanup(WaitForSeconds_t686_marshaled& marshaled);
