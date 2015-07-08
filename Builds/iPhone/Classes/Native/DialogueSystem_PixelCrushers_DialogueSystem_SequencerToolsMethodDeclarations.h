#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SequencerTools
struct SequencerTools_t1474;
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t49;
// System.String[]
struct StringU5BU5D_t20;
// UnityEngine.AudioSource
struct AudioSource_t262;

// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerTools::GetSubject(System.String,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
extern "C" Transform_t54 * SequencerTools_GetSubject_m6569 (Object_t * __this /* static, unused */, String_t* ___specifier, Transform_t54 * ___speaker, Transform_t54 * ___listener, Transform_t54 * ___defaultSubject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PixelCrushers.DialogueSystem.SequencerTools::FindSpecifier(System.String)
extern "C" GameObject_t49 * SequencerTools_FindSpecifier_m6570 (Object_t * __this /* static, unused */, String_t* ___specifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.SequencerTools::GetDefaultCameraAngle(UnityEngine.Transform)
extern "C" String_t* SequencerTools_GetDefaultCameraAngle_m6571 (Object_t * __this /* static, unused */, Transform_t54 * ___subject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.SequencerTools::GetParameter(System.String[],System.Int32,System.String)
extern "C" String_t* SequencerTools_GetParameter_m6572 (Object_t * __this /* static, unused */, StringU5BU5D_t20* ___parameters, int32_t ___i, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.SequencerTools::GetParameterAsFloat(System.String[],System.Int32,System.Single)
extern "C" float SequencerTools_GetParameterAsFloat_m6573 (Object_t * __this /* static, unused */, StringU5BU5D_t20* ___parameters, int32_t ___i, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.SequencerTools::GetParameterAsInt(System.String[],System.Int32,System.Int32)
extern "C" int32_t SequencerTools_GetParameterAsInt_m6574 (Object_t * __this /* static, unused */, StringU5BU5D_t20* ___parameters, int32_t ___i, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerTools::GetParameterAsBool(System.String[],System.Int32,System.Boolean)
extern "C" bool SequencerTools_GetParameterAsBool_m6575 (Object_t * __this /* static, unused */, StringU5BU5D_t20* ___parameters, int32_t ___i, bool ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource PixelCrushers.DialogueSystem.SequencerTools::GetAudioSource(UnityEngine.Transform)
extern "C" AudioSource_t262 * SequencerTools_GetAudioSource_m6576 (Object_t * __this /* static, unused */, Transform_t54 * ___subject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerTools::IsAudioMuted()
extern "C" bool SequencerTools_IsAudioMuted_m6577 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
