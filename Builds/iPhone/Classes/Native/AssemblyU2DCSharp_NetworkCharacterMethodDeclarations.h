#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NetworkCharacter
struct NetworkCharacter_t409;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;

// System.Void NetworkCharacter::.ctor()
extern "C" void NetworkCharacter__ctor_m1541 (NetworkCharacter_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkCharacter::Update()
extern "C" void NetworkCharacter_Update_m1542 (NetworkCharacter_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkCharacter::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void NetworkCharacter_OnPhotonSerializeView_m1543 (NetworkCharacter_t409 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
