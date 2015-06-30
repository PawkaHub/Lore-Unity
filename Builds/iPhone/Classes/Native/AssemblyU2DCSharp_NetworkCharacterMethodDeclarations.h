#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NetworkCharacter
struct NetworkCharacter_t381;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;

// System.Void NetworkCharacter::.ctor()
extern "C" void NetworkCharacter__ctor_m1495 (NetworkCharacter_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkCharacter::Update()
extern "C" void NetworkCharacter_Update_m1496 (NetworkCharacter_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkCharacter::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void NetworkCharacter_OnPhotonSerializeView_m1497 (NetworkCharacter_t381 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
