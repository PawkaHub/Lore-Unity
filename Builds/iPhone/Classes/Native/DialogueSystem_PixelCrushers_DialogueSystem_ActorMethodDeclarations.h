#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Actor
struct Actor_t1109;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ChatMapper.Actor
struct Actor_t1160;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.Actor::.ctor()
extern "C" void Actor__ctor_m5508 (Actor_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Actor::.ctor(PixelCrushers.DialogueSystem.Actor)
extern "C" void Actor__ctor_m5509 (Actor_t1109 * __this, Actor_t1109 * ___sourceActor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Actor::.ctor(PixelCrushers.DialogueSystem.ChatMapper.Actor)
extern "C" void Actor__ctor_m5510 (Actor_t1109 * __this, Actor_t1160 * ___chatMapperActor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Actor::get_IsPlayer()
extern "C" bool Actor_get_IsPlayer_m5511 (Actor_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Actor::set_IsPlayer(System.Boolean)
extern "C" void Actor_set_IsPlayer_m5512 (Actor_t1109 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Actor::get_TextureName()
extern "C" String_t* Actor_get_TextureName_m5513 (Actor_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Actor::set_TextureName(System.String)
extern "C" void Actor_set_TextureName_m5514 (Actor_t1109 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Actor::Assign(PixelCrushers.DialogueSystem.ChatMapper.Actor)
extern "C" void Actor_Assign_m5515 (Actor_t1109 * __this, Actor_t1160 * ___chatMapperActor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.Actor::GetPortraitTexture(System.Int32)
extern "C" Texture2D_t90 * Actor_GetPortraitTexture_m5516 (Actor_t1109 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Actor::LookupTextureName()
extern "C" String_t* Actor_LookupTextureName_m5517 (Actor_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Actor::SetTextureName(System.String)
extern "C" void Actor_SetTextureName_m5518 (Actor_t1109 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
