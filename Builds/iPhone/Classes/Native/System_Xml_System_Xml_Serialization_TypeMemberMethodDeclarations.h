#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.TypeMember
struct TypeMember_t3717;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.TypeMember::.ctor(System.Type,System.String)
extern "C" void TypeMember__ctor_m11212 (TypeMember_t3717 * __this, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.TypeMember::GetHashCode()
extern "C" int32_t TypeMember_GetHashCode_m11213 (TypeMember_t3717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeMember::Equals(System.Object)
extern "C" bool TypeMember_Equals_m11214 (TypeMember_t3717 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeMember::Equals(System.Xml.Serialization.TypeMember,System.Xml.Serialization.TypeMember)
extern "C" bool TypeMember_Equals_m11215 (Object_t * __this /* static, unused */, TypeMember_t3717 * ___tm1, TypeMember_t3717 * ___tm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeMember::ToString()
extern "C" String_t* TypeMember_ToString_m11216 (TypeMember_t3717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
