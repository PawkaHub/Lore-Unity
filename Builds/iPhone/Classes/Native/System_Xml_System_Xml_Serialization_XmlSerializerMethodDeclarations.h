#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t676;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3965;
// System.Type[]
struct TypeU5BU5D_t636;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t1715;
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t3964;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t3975;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t3985;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t3957;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t3999;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t4010;
// System.Object
struct Object_t;
// System.IO.TextReader
struct TextReader_t3795;
// System.Xml.XmlReader
struct XmlReader_t3998;
// System.IO.TextWriter
struct TextWriter_t3796;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t3934;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t3979;

// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type)
extern "C" void XmlSerializer__ctor_m2927 (XmlSerializer_t676 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlAttributeOverrides,System.Type[],System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" void XmlSerializer__ctor_m11969 (XmlSerializer_t676 * __this, Type_t * ___type, XmlAttributeOverrides_t3965 * ___overrides, TypeU5BU5D_t636* ___extraTypes, XmlRootAttribute_t1715 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.cctor()
extern "C" void XmlSerializer__cctor_m11970 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownAttribute(System.Xml.Serialization.XmlAttributeEventArgs)
extern "C" void XmlSerializer_OnUnknownAttribute_m11971 (XmlSerializer_t676 * __this, XmlAttributeEventArgs_t3964 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownElement(System.Xml.Serialization.XmlElementEventArgs)
extern "C" void XmlSerializer_OnUnknownElement_m11972 (XmlSerializer_t676 * __this, XmlElementEventArgs_t3975 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownNode(System.Xml.Serialization.XmlNodeEventArgs)
extern "C" void XmlSerializer_OnUnknownNode_m11973 (XmlSerializer_t676 * __this, XmlNodeEventArgs_t3985 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnreferencedObject(System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C" void XmlSerializer_OnUnreferencedObject_m11974 (XmlSerializer_t676 * __this, UnreferencedObjectEventArgs_t3957 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader()
extern "C" XmlSerializationReader_t3999 * XmlSerializer_CreateReader_m11975 (XmlSerializer_t676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter()
extern "C" XmlSerializationWriter_t4010 * XmlSerializer_CreateWriter_m11976 (XmlSerializer_t676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
extern "C" Object_t * XmlSerializer_Deserialize_m2930 (XmlSerializer_t676 * __this, TextReader_t3795 * ___textReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
extern "C" Object_t * XmlSerializer_Deserialize_m11977 (XmlSerializer_t676 * __this, XmlReader_t3998 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.Serialization.XmlSerializationReader)
extern "C" Object_t * XmlSerializer_Deserialize_m11978 (XmlSerializer_t676 * __this, XmlSerializationReader_t3999 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Object,System.Xml.Serialization.XmlSerializationWriter)
extern "C" void XmlSerializer_Serialize_m11979 (XmlSerializer_t676 * __this, Object_t * ___o, XmlSerializationWriter_t4010 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.IO.TextWriter,System.Object)
extern "C" void XmlSerializer_Serialize_m2934 (XmlSerializer_t676 * __this, TextWriter_t3796 * ___textWriter, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object,System.Xml.Serialization.XmlSerializerNamespaces)
extern "C" void XmlSerializer_Serialize_m11980 (XmlSerializer_t676 * __this, XmlWriter_t4008 * ___writer, Object_t * ___o, XmlSerializerNamespaces_t3934 * ___namespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter(System.Xml.Serialization.XmlMapping)
extern "C" XmlSerializationWriter_t4010 * XmlSerializer_CreateWriter_m11981 (XmlSerializer_t676 * __this, XmlMapping_t3979 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader(System.Xml.Serialization.XmlMapping)
extern "C" XmlSerializationReader_t3999 * XmlSerializer_CreateReader_m11982 (XmlSerializer_t676 * __this, XmlMapping_t3979 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::CheckGeneratedTypes(System.Xml.Serialization.XmlMapping)
extern "C" void XmlSerializer_CheckGeneratedTypes_m11983 (XmlSerializer_t676 * __this, XmlMapping_t3979 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
