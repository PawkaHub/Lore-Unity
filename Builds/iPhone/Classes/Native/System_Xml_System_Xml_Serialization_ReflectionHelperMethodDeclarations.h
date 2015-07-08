#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ReflectionHelper
struct ReflectionHelper_t3950;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t4003;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.Serialization.ReflectionHelper::.ctor()
extern "C" void ReflectionHelper__ctor_m11597 (ReflectionHelper_t3950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::.cctor()
extern "C" void ReflectionHelper__cctor_m11598 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterSchemaType(System.Xml.Serialization.XmlTypeMapping,System.String,System.String)
extern "C" void ReflectionHelper_RegisterSchemaType_m11599 (ReflectionHelper_t3950 * __this, XmlTypeMapping_t4003 * ___map, String_t* ___xmlType, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredSchemaType(System.String,System.String)
extern "C" XmlTypeMapping_t4003 * ReflectionHelper_GetRegisteredSchemaType_m11600 (ReflectionHelper_t3950 * __this, String_t* ___xmlType, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterClrType(System.Xml.Serialization.XmlTypeMapping,System.Type,System.String)
extern "C" void ReflectionHelper_RegisterClrType_m11601 (ReflectionHelper_t3950 * __this, XmlTypeMapping_t4003 * ___map, Type_t * ___type, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredClrType(System.Type,System.String)
extern "C" XmlTypeMapping_t4003 * ReflectionHelper_GetRegisteredClrType_m11602 (ReflectionHelper_t3950 * __this, Type_t * ___type, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::CheckSerializableType(System.Type,System.Boolean)
extern "C" void ReflectionHelper_CheckSerializableType_m11603 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___allowPrivateConstructors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
