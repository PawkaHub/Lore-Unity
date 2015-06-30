#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AuthenticationValues
struct AuthenticationValues_t417;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t25;

// System.Void AuthenticationValues::.ctor()
extern "C" void AuthenticationValues__ctor_m1577 (AuthenticationValues_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::.ctor(System.String)
extern "C" void AuthenticationValues__ctor_m1578 (AuthenticationValues_t417 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object AuthenticationValues::get_AuthPostData()
extern "C" Object_t * AuthenticationValues_get_AuthPostData_m1579 (AuthenticationValues_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthPostData(System.Object)
extern "C" void AuthenticationValues_set_AuthPostData_m1580 (AuthenticationValues_t417 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_UserId()
extern "C" String_t* AuthenticationValues_get_UserId_m1581 (AuthenticationValues_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_UserId(System.String)
extern "C" void AuthenticationValues_set_UserId_m1582 (AuthenticationValues_t417 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.String)
extern "C" void AuthenticationValues_SetAuthPostData_m1583 (AuthenticationValues_t417 * __this, String_t* ___stringData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C" void AuthenticationValues_SetAuthPostData_m1584 (AuthenticationValues_t417 * __this, ByteU5BU5D_t25* ___byteData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C" void AuthenticationValues_AddAuthParameter_m1585 (AuthenticationValues_t417 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::ToString()
extern "C" String_t* AuthenticationValues_ToString_m1586 (AuthenticationValues_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
