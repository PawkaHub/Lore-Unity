#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlTypeSerializationSource
struct XmlTypeSerializationSource_t2330;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t1141;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t2341;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t562;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlTypeSerializationSource::.ctor(System.Type,System.Xml.Serialization.XmlRootAttribute,System.Xml.Serialization.XmlAttributeOverrides,System.String,System.Type[])
extern "C" void XmlTypeSerializationSource__ctor_m9905 (XmlTypeSerializationSource_t2330 * __this, Type_t * ___type, XmlRootAttribute_t1141 * ___root, XmlAttributeOverrides_t2341 * ___attributeOverrides, String_t* ___namspace, TypeU5BU5D_t562* ___includedTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeSerializationSource::Equals(System.Object)
extern "C" bool XmlTypeSerializationSource_Equals_m9906 (XmlTypeSerializationSource_t2330 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeSerializationSource::GetHashCode()
extern "C" int32_t XmlTypeSerializationSource_GetHashCode_m9907 (XmlTypeSerializationSource_t2330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
