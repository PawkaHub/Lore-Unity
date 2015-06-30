#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ReflectionHelper
struct ReflectionHelper_t2327;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t2379;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.Serialization.ReflectionHelper::.ctor()
extern "C" void ReflectionHelper__ctor_m9894 (ReflectionHelper_t2327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::.cctor()
extern "C" void ReflectionHelper__cctor_m9895 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterSchemaType(System.Xml.Serialization.XmlTypeMapping,System.String,System.String)
extern "C" void ReflectionHelper_RegisterSchemaType_m9896 (ReflectionHelper_t2327 * __this, XmlTypeMapping_t2379 * ___map, String_t* ___xmlType, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredSchemaType(System.String,System.String)
extern "C" XmlTypeMapping_t2379 * ReflectionHelper_GetRegisteredSchemaType_m9897 (ReflectionHelper_t2327 * __this, String_t* ___xmlType, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterClrType(System.Xml.Serialization.XmlTypeMapping,System.Type,System.String)
extern "C" void ReflectionHelper_RegisterClrType_m9898 (ReflectionHelper_t2327 * __this, XmlTypeMapping_t2379 * ___map, Type_t * ___type, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredClrType(System.Type,System.String)
extern "C" XmlTypeMapping_t2379 * ReflectionHelper_GetRegisteredClrType_m9899 (ReflectionHelper_t2327 * __this, Type_t * ___type, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::CheckSerializableType(System.Type,System.Boolean)
extern "C" void ReflectionHelper_CheckSerializableType_m9900 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___allowPrivateConstructors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
