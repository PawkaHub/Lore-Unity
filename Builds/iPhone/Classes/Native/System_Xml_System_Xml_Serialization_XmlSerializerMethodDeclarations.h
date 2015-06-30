#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t598;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t2341;
// System.Type[]
struct TypeU5BU5D_t562;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t1141;
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t2340;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t2351;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t2361;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t2334;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t2375;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t2386;
// System.Object
struct Object_t;
// System.IO.TextReader
struct TextReader_t2480;
// System.Xml.XmlReader
struct XmlReader_t2374;
// System.IO.TextWriter
struct TextWriter_t2521;
// System.Xml.XmlWriter
struct XmlWriter_t2384;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t2312;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2355;

// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type)
extern "C" void XmlSerializer__ctor_m2668 (XmlSerializer_t598 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlAttributeOverrides,System.Type[],System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C" void XmlSerializer__ctor_m10266 (XmlSerializer_t598 * __this, Type_t * ___type, XmlAttributeOverrides_t2341 * ___overrides, TypeU5BU5D_t562* ___extraTypes, XmlRootAttribute_t1141 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.cctor()
extern "C" void XmlSerializer__cctor_m10267 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownAttribute(System.Xml.Serialization.XmlAttributeEventArgs)
extern "C" void XmlSerializer_OnUnknownAttribute_m10268 (XmlSerializer_t598 * __this, XmlAttributeEventArgs_t2340 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownElement(System.Xml.Serialization.XmlElementEventArgs)
extern "C" void XmlSerializer_OnUnknownElement_m10269 (XmlSerializer_t598 * __this, XmlElementEventArgs_t2351 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownNode(System.Xml.Serialization.XmlNodeEventArgs)
extern "C" void XmlSerializer_OnUnknownNode_m10270 (XmlSerializer_t598 * __this, XmlNodeEventArgs_t2361 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnreferencedObject(System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C" void XmlSerializer_OnUnreferencedObject_m10271 (XmlSerializer_t598 * __this, UnreferencedObjectEventArgs_t2334 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader()
extern "C" XmlSerializationReader_t2375 * XmlSerializer_CreateReader_m10272 (XmlSerializer_t598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter()
extern "C" XmlSerializationWriter_t2386 * XmlSerializer_CreateWriter_m10273 (XmlSerializer_t598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
extern "C" Object_t * XmlSerializer_Deserialize_m2671 (XmlSerializer_t598 * __this, TextReader_t2480 * ___textReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
extern "C" Object_t * XmlSerializer_Deserialize_m10274 (XmlSerializer_t598 * __this, XmlReader_t2374 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.Serialization.XmlSerializationReader)
extern "C" Object_t * XmlSerializer_Deserialize_m10275 (XmlSerializer_t598 * __this, XmlSerializationReader_t2375 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Object,System.Xml.Serialization.XmlSerializationWriter)
extern "C" void XmlSerializer_Serialize_m10276 (XmlSerializer_t598 * __this, Object_t * ___o, XmlSerializationWriter_t2386 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.IO.TextWriter,System.Object)
extern "C" void XmlSerializer_Serialize_m2675 (XmlSerializer_t598 * __this, TextWriter_t2521 * ___textWriter, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object,System.Xml.Serialization.XmlSerializerNamespaces)
extern "C" void XmlSerializer_Serialize_m10277 (XmlSerializer_t598 * __this, XmlWriter_t2384 * ___writer, Object_t * ___o, XmlSerializerNamespaces_t2312 * ___namespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter(System.Xml.Serialization.XmlMapping)
extern "C" XmlSerializationWriter_t2386 * XmlSerializer_CreateWriter_m10278 (XmlSerializer_t598 * __this, XmlMapping_t2355 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader(System.Xml.Serialization.XmlMapping)
extern "C" XmlSerializationReader_t2375 * XmlSerializer_CreateReader_m10279 (XmlSerializer_t598 * __this, XmlMapping_t2355 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::CheckGeneratedTypes(System.Xml.Serialization.XmlMapping)
extern "C" void XmlSerializer_CheckGeneratedTypes_m10280 (XmlSerializer_t598 * __this, XmlMapping_t2355 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
