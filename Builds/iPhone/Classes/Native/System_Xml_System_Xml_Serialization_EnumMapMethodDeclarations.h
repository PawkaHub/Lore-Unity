#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.EnumMap
struct EnumMap_t4038;
// System.String[]
struct StringU5BU5D_t20;
// System.Int64[]
struct Int64U5BU5D_t4037;
// System.Xml.Serialization.EnumMap/EnumMapMember[]
struct EnumMapMemberU5BU5D_t4036;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.EnumMap::.ctor(System.Xml.Serialization.EnumMap/EnumMapMember[],System.Boolean)
extern "C" void EnumMap__ctor_m12133 (EnumMap_t4038 * __this, EnumMapMemberU5BU5D_t4036* ___members, bool ___isFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.EnumMap::get_IsFlags()
extern "C" bool EnumMap_get_IsFlags_m12134 (EnumMap_t4038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_EnumNames()
extern "C" StringU5BU5D_t20* EnumMap_get_EnumNames_m12135 (EnumMap_t4038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_XmlNames()
extern "C" StringU5BU5D_t20* EnumMap_get_XmlNames_m12136 (EnumMap_t4038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] System.Xml.Serialization.EnumMap::get_Values()
extern "C" Int64U5BU5D_t4037* EnumMap_get_Values_m12137 (EnumMap_t4038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetXmlName(System.String,System.Object)
extern "C" String_t* EnumMap_GetXmlName_m12138 (EnumMap_t4038 * __this, String_t* ___typeName, Object_t * ___enumValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetEnumName(System.String,System.String)
extern "C" String_t* EnumMap_GetEnumName_m12139 (EnumMap_t4038 * __this, String_t* ___typeName, String_t* ___xmlName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
