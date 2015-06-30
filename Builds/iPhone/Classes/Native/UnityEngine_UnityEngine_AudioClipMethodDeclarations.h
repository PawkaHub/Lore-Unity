#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip
struct AudioClip_t261;
// System.Single[]
struct SingleU5BU5D_t168;

// System.Single UnityEngine.AudioClip::get_length()
extern "C" float AudioClip_get_length_m5478 (AudioClip_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m13098 (AudioClip_t261 * __this, SingleU5BU5D_t168* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m13099 (AudioClip_t261 * __this, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
