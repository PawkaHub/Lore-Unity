#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.MonoBehaviour
struct MonoBehaviour_t329;
// PhotonView
struct PhotonView_t325;

// System.Void Photon.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m1718 (MonoBehaviour_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView Photon.MonoBehaviour::get_photonView()
extern "C" PhotonView_t325 * MonoBehaviour_get_photonView_m1719 (MonoBehaviour_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView Photon.MonoBehaviour::get_networkView()
extern "C" PhotonView_t325 * MonoBehaviour_get_networkView_m1720 (MonoBehaviour_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
