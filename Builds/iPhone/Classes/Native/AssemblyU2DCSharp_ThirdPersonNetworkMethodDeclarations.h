#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ThirdPersonNetwork
struct ThirdPersonNetwork_t374;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;

// System.Void ThirdPersonNetwork::.ctor()
extern "C" void ThirdPersonNetwork__ctor_m1450 (ThirdPersonNetwork_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonNetwork::Awake()
extern "C" void ThirdPersonNetwork_Awake_m1451 (ThirdPersonNetwork_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonNetwork::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void ThirdPersonNetwork_OnPhotonSerializeView_m1452 (ThirdPersonNetwork_t374 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonNetwork::Update()
extern "C" void ThirdPersonNetwork_Update_m1453 (ThirdPersonNetwork_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
