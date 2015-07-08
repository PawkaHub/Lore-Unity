#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.CustomType
struct CustomType_t5115;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t743;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t744;

// System.Void ExitGames.Client.Photon.CustomType::.ctor(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C" void CustomType__ctor_m18486 (CustomType_t5115 * __this, Type_t * ___type, uint8_t ___code, SerializeStreamMethod_t743 * ___serializeFunction, DeserializeStreamMethod_t744 * ___deserializeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
