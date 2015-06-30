#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.CustomType
struct CustomType_t3150;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t655;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t656;

// System.Void ExitGames.Client.Photon.CustomType::.ctor(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C" void CustomType__ctor_m14201 (CustomType_t3150 * __this, Type_t * ___type, uint8_t ___code, SerializeStreamMethod_t655 * ___serializeFunction, DeserializeStreamMethod_t656 * ___deserializeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
