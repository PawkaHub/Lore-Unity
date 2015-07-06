#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.CustomType
struct CustomType_t4877;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t674;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t675;

// System.Void ExitGames.Client.Photon.CustomType::.ctor(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C" void CustomType__ctor_m18068 (CustomType_t4877 * __this, Type_t * ___type, uint8_t ___code, SerializeStreamMethod_t674 * ___serializeFunction, DeserializeStreamMethod_t675 * ___deserializeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
