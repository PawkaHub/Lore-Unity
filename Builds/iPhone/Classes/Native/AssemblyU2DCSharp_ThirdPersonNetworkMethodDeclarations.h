#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ThirdPersonNetwork
struct ThirdPersonNetwork_t402;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;

// System.Void ThirdPersonNetwork::.ctor()
extern "C" void ThirdPersonNetwork__ctor_m1496 (ThirdPersonNetwork_t402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonNetwork::Awake()
extern "C" void ThirdPersonNetwork_Awake_m1497 (ThirdPersonNetwork_t402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonNetwork::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void ThirdPersonNetwork_OnPhotonSerializeView_m1498 (ThirdPersonNetwork_t402 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonNetwork::Update()
extern "C" void ThirdPersonNetwork_Update_m1499 (ThirdPersonNetwork_t402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
