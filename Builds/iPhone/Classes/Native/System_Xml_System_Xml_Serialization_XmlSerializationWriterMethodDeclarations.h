#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t2386;
// System.Xml.XmlWriter
struct XmlWriter_t2384;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t2312;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t2381;
// System.Exception
struct Exception_t468;
// System.Object
struct Object_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2301;
// System.Xml.XmlNode
struct XmlNode_t2457;
// System.Xml.Serialization.TypeData
struct TypeData_t2331;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t2537;
// System.Collections.ICollection
struct ICollection_t661;

// System.Void System.Xml.Serialization.XmlSerializationWriter::.ctor()
extern "C" void XmlSerializationWriter__ctor_m10187 (XmlSerializationWriter_t2386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::Initialize(System.Xml.XmlWriter,System.Xml.Serialization.XmlSerializerNamespaces)
extern "C" void XmlSerializationWriter_Initialize_m10188 (XmlSerializationWriter_t2386 * __this, XmlWriter_t2384 * ___writer, XmlSerializerNamespaces_t2312 * ___nss, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriter System.Xml.Serialization.XmlSerializationWriter::get_Writer()
extern "C" XmlWriter_t2384 * XmlSerializationWriter_get_Writer_m10189 (XmlSerializationWriter_t2386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::AddWriteCallback(System.Type,System.String,System.String,System.Xml.Serialization.XmlSerializationWriteCallback)
extern "C" void XmlSerializationWriter_AddWriteCallback_m10190 (XmlSerializationWriter_t2386 * __this, Type_t * ___type, String_t* ___typeName, String_t* ___typeNs, XmlSerializationWriteCallback_t2381 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownAnyElementException(System.String,System.String)
extern "C" Exception_t468 * XmlSerializationWriter_CreateUnknownAnyElementException_m10191 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownTypeException(System.Object)
extern "C" Exception_t468 * XmlSerializationWriter_CreateUnknownTypeException_m10192 (XmlSerializationWriter_t2386 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownTypeException(System.Type)
extern "C" Exception_t468 * XmlSerializationWriter_CreateUnknownTypeException_m10193 (XmlSerializationWriter_t2386 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::FromXmlQualifiedName(System.Xml.XmlQualifiedName)
extern "C" String_t* XmlSerializationWriter_FromXmlQualifiedName_m10194 (XmlSerializationWriter_t2386 * __this, XmlQualifiedName_t2301 * ___xmlQualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetId(System.Object,System.Boolean)
extern "C" String_t* XmlSerializationWriter_GetId_m10195 (XmlSerializationWriter_t2386 * __this, Object_t * ___o, bool ___addToReferencesList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriter::AlreadyQueued(System.Object)
extern "C" bool XmlSerializationWriter_AlreadyQueued_m10196 (XmlSerializationWriter_t2386 * __this, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetNamespacePrefix(System.String)
extern "C" String_t* XmlSerializationWriter_GetNamespacePrefix_m10197 (XmlSerializationWriter_t2386 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetQualifiedName(System.String,System.String)
extern "C" String_t* XmlSerializationWriter_GetQualifiedName_m10198 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::InitCallbacks()
// System.Void System.Xml.Serialization.XmlSerializationWriter::TopLevelElement()
extern "C" void XmlSerializationWriter_TopLevelElement_m10199 (XmlSerializationWriter_t2386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteAttribute(System.String,System.String,System.String)
extern "C" void XmlSerializationWriter_WriteAttribute_m10200 (XmlSerializationWriter_t2386 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteAttribute(System.String,System.String,System.String,System.String)
extern "C" void XmlSerializationWriter_WriteAttribute_m10201 (XmlSerializationWriter_t2386 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXmlNode(System.Xml.XmlNode)
extern "C" void XmlSerializationWriter_WriteXmlNode_m10202 (XmlSerializationWriter_t2386 * __this, XmlNode_t2457 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementEncoded(System.Xml.XmlNode,System.String,System.String,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriter_WriteElementEncoded_m10203 (XmlSerializationWriter_t2386 * __this, XmlNode_t2457 * ___node, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementLiteral(System.Xml.XmlNode,System.String,System.String,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriter_WriteElementLiteral_m10204 (XmlSerializationWriter_t2386 * __this, XmlNode_t2457 * ___node, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementQualifiedName(System.String,System.String,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteElementQualifiedName_m10205 (XmlSerializationWriter_t2386 * __this, String_t* ___localName, String_t* ___ns, XmlQualifiedName_t2301 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementQualifiedName(System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteElementQualifiedName_m10206 (XmlSerializationWriter_t2386 * __this, String_t* ___localName, String_t* ___ns, XmlQualifiedName_t2301 * ___value, XmlQualifiedName_t2301 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementString(System.String,System.String,System.String)
extern "C" void XmlSerializationWriter_WriteElementString_m10207 (XmlSerializationWriter_t2386 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementString(System.String,System.String,System.String,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteElementString_m10208 (XmlSerializationWriter_t2386 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, XmlQualifiedName_t2301 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteEndElement()
extern "C" void XmlSerializationWriter_WriteEndElement_m10209 (XmlSerializationWriter_t2386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteEndElement(System.Object)
extern "C" void XmlSerializationWriter_WriteEndElement_m10210 (XmlSerializationWriter_t2386 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNamespaceDeclarations(System.Xml.Serialization.XmlSerializerNamespaces)
extern "C" void XmlSerializationWriter_WriteNamespaceDeclarations_m10211 (XmlSerializationWriter_t2386 * __this, XmlSerializerNamespaces_t2312 * ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableQualifiedNameEncoded(System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteNullableQualifiedNameEncoded_m10212 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, XmlQualifiedName_t2301 * ___value, XmlQualifiedName_t2301 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableQualifiedNameLiteral(System.String,System.String,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteNullableQualifiedNameLiteral_m10213 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, XmlQualifiedName_t2301 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableStringEncoded(System.String,System.String,System.String,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteNullableStringEncoded_m10214 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, String_t* ___value, XmlQualifiedName_t2301 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableStringLiteral(System.String,System.String,System.String)
extern "C" void XmlSerializationWriter_WriteNullableStringLiteral_m10215 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullTagEncoded(System.String,System.String)
extern "C" void XmlSerializationWriter_WriteNullTagEncoded_m10216 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullTagLiteral(System.String,System.String)
extern "C" void XmlSerializationWriter_WriteNullTagLiteral_m10217 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WritePotentiallyReferencingElement(System.String,System.String,System.Object,System.Type,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriter_WritePotentiallyReferencingElement_m10218 (XmlSerializationWriter_t2386 * __this, String_t* ___n, String_t* ___ns, Object_t * ___o, Type_t * ___ambientType, bool ___suppressReference, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteReferencedElements()
extern "C" void XmlSerializationWriter_WriteReferencedElements_m10219 (XmlSerializationWriter_t2386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriter::IsPrimitiveArray(System.Xml.Serialization.TypeData)
extern "C" bool XmlSerializationWriter_IsPrimitiveArray_m10220 (XmlSerializationWriter_t2386 * __this, TypeData_t2331 * ___td, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteArray(System.Object,System.Xml.Serialization.TypeData)
extern "C" void XmlSerializationWriter_WriteArray_m10221 (XmlSerializationWriter_t2386 * __this, Object_t * ___o, TypeData_t2331 * ___td, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteReferencingElement(System.String,System.String,System.Object,System.Boolean)
extern "C" void XmlSerializationWriter_WriteReferencingElement_m10222 (XmlSerializationWriter_t2386 * __this, String_t* ___n, String_t* ___ns, Object_t * ___o, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::CheckReferenceQueue()
extern "C" void XmlSerializationWriter_CheckReferenceQueue_m10223 (XmlSerializationWriter_t2386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteSerializable(System.Xml.Serialization.IXmlSerializable,System.String,System.String,System.Boolean)
extern "C" void XmlSerializationWriter_WriteSerializable_m10224 (XmlSerializationWriter_t2386 * __this, Object_t * ___serializable, String_t* ___name, String_t* ___ns, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteSerializable(System.Xml.Serialization.IXmlSerializable,System.String,System.String,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriter_WriteSerializable_m10225 (XmlSerializationWriter_t2386 * __this, Object_t * ___serializable, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartDocument()
extern "C" void XmlSerializationWriter_WriteStartDocument_m10226 (XmlSerializationWriter_t2386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String)
extern "C" void XmlSerializationWriter_WriteStartElement_m10227 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Boolean)
extern "C" void XmlSerializationWriter_WriteStartElement_m10228 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, bool ___writePrefixed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object)
extern "C" void XmlSerializationWriter_WriteStartElement_m10229 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object,System.Boolean)
extern "C" void XmlSerializationWriter_WriteStartElement_m10230 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___writePrefixed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object,System.Boolean,System.Collections.ICollection)
extern "C" void XmlSerializationWriter_WriteStartElement_m10231 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___writePrefixed, Object_t * ___namespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteTypedPrimitive(System.String,System.String,System.Object,System.Boolean)
extern "C" void XmlSerializationWriter_WriteTypedPrimitive_m10232 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteValue(System.String)
extern "C" void XmlSerializationWriter_WriteValue_m10233 (XmlSerializationWriter_t2386 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXmlAttribute(System.Xml.XmlNode,System.Object)
extern "C" void XmlSerializationWriter_WriteXmlAttribute_m10234 (XmlSerializationWriter_t2386 * __this, XmlNode_t2457 * ___node, Object_t * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXsiType(System.String,System.String)
extern "C" void XmlSerializationWriter_WriteXsiType_m10235 (XmlSerializationWriter_t2386 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
