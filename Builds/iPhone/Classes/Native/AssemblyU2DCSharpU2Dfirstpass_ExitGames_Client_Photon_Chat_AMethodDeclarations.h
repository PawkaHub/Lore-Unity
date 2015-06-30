#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t7;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t25;

// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor()
extern "C" void AuthenticationValues__ctor_m71 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C" void AuthenticationValues__ctor_m72 (AuthenticationValues_t7 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C" Object_t * AuthenticationValues_get_AuthPostData_m73 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C" void AuthenticationValues_set_AuthPostData_m74 (AuthenticationValues_t7 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_UserId()
extern "C" String_t* AuthenticationValues_get_UserId_m75 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C" void AuthenticationValues_set_UserId_m76 (AuthenticationValues_t7 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern "C" void AuthenticationValues_SetAuthPostData_m77 (AuthenticationValues_t7 * __this, String_t* ___stringData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C" void AuthenticationValues_SetAuthPostData_m78 (AuthenticationValues_t7 * __this, ByteU5BU5D_t25* ___byteData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C" void AuthenticationValues_AddAuthParameter_m79 (AuthenticationValues_t7 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::ToString()
extern "C" String_t* AuthenticationValues_ToString_m80 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
