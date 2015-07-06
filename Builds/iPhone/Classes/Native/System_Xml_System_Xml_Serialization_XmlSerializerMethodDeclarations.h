#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t619;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3727;
// System.Type[]
struct TypeU5BU5D_t580;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t1458;
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t3726;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t3737;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t3747;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t3719;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t3761;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t3772;
// System.Object
struct Object_t;
// System.IO.TextReader
struct TextReader_t3557;
// System.Xml.XmlReader
struct XmlReader_t3760;
// System.IO.TextWriter
struct TextWriter_t3558;
// System.Xml.XmlWriter
struct XmlWriter_t3770;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t3696;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t3741;

// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type)
extern "C" void XmlSerializer__ctor_m2755 (XmlSerializer_t619 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlAttributeOverrides,System.Type[],System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" void XmlSerializer__ctor_m11550 (XmlSerializer_t619 * __this, Type_t * ___type, XmlAttributeOverrides_t3727 * ___overrides, TypeU5BU5D_t580* ___extraTypes, XmlRootAttribute_t1458 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.cctor()
extern "C" void XmlSerializer__cctor_m11551 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownAttribute(System.Xml.Serialization.XmlAttributeEventArgs)
extern "C" void XmlSerializer_OnUnknownAttribute_m11552 (XmlSerializer_t619 * __this, XmlAttributeEventArgs_t3726 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownElement(System.Xml.Serialization.XmlElementEventArgs)
extern "C" void XmlSerializer_OnUnknownElement_m11553 (XmlSerializer_t619 * __this, XmlElementEventArgs_t3737 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownNode(System.Xml.Serialization.XmlNodeEventArgs)
extern "C" void XmlSerializer_OnUnknownNode_m11554 (XmlSerializer_t619 * __this, XmlNodeEventArgs_t3747 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnreferencedObject(System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C" void XmlSerializer_OnUnreferencedObject_m11555 (XmlSerializer_t619 * __this, UnreferencedObjectEventArgs_t3719 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader()
extern "C" XmlSerializationReader_t3761 * XmlSerializer_CreateReader_m11556 (XmlSerializer_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter()
extern "C" XmlSerializationWriter_t3772 * XmlSerializer_CreateWriter_m11557 (XmlSerializer_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
extern "C" Object_t * XmlSerializer_Deserialize_m2758 (XmlSerializer_t619 * __this, TextReader_t3557 * ___textReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
extern "C" Object_t * XmlSerializer_Deserialize_m11558 (XmlSerializer_t619 * __this, XmlReader_t3760 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.Serialization.XmlSerializationReader)
extern "C" Object_t * XmlSerializer_Deserialize_m11559 (XmlSerializer_t619 * __this, XmlSerializationReader_t3761 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Object,System.Xml.Serialization.XmlSerializationWriter)
extern "C" void XmlSerializer_Serialize_m11560 (XmlSerializer_t619 * __this, Object_t * ___o, XmlSerializationWriter_t3772 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.IO.TextWriter,System.Object)
extern "C" void XmlSerializer_Serialize_m2762 (XmlSerializer_t619 * __this, TextWriter_t3558 * ___textWriter, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object,System.Xml.Serialization.XmlSerializerNamespaces)
extern "C" void XmlSerializer_Serialize_m11561 (XmlSerializer_t619 * __this, XmlWriter_t3770 * ___writer, Object_t * ___o, XmlSerializerNamespaces_t3696 * ___namespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter(System.Xml.Serialization.XmlMapping)
extern "C" XmlSerializationWriter_t3772 * XmlSerializer_CreateWriter_m11562 (XmlSerializer_t619 * __this, XmlMapping_t3741 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader(System.Xml.Serialization.XmlMapping)
extern "C" XmlSerializationReader_t3761 * XmlSerializer_CreateReader_m11563 (XmlSerializer_t619 * __this, XmlMapping_t3741 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::CheckGeneratedTypes(System.Xml.Serialization.XmlMapping)
extern "C" void XmlSerializer_CheckGeneratedTypes_m11564 (XmlSerializer_t619 * __this, XmlMapping_t3741 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
