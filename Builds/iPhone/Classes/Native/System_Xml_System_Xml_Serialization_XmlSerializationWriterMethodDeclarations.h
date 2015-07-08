#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t4010;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t3934;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t4005;
// System.Exception
struct Exception_t496;
// System.Object
struct Object_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3923;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t4161;
// System.Collections.ICollection
struct ICollection_t749;

// System.Void System.Xml.Serialization.XmlSerializationWriter::.ctor()
extern "C" void XmlSerializationWriter__ctor_m11890 (XmlSerializationWriter_t4010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::Initialize(System.Xml.XmlWriter,System.Xml.Serialization.XmlSerializerNamespaces)
extern "C" void XmlSerializationWriter_Initialize_m11891 (XmlSerializationWriter_t4010 * __this, XmlWriter_t4008 * ___writer, XmlSerializerNamespaces_t3934 * ___nss, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriter System.Xml.Serialization.XmlSerializationWriter::get_Writer()
extern "C" XmlWriter_t4008 * XmlSerializationWriter_get_Writer_m11892 (XmlSerializationWriter_t4010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::AddWriteCallback(System.Type,System.String,System.String,System.Xml.Serialization.XmlSerializationWriteCallback)
extern "C" void XmlSerializationWriter_AddWriteCallback_m11893 (XmlSerializationWriter_t4010 * __this, Type_t * ___type, String_t* ___typeName, String_t* ___typeNs, XmlSerializationWriteCallback_t4005 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownAnyElementException(System.String,System.String)
extern "C" Exception_t496 * XmlSerializationWriter_CreateUnknownAnyElementException_m11894 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownTypeException(System.Object)
extern "C" Exception_t496 * XmlSerializationWriter_CreateUnknownTypeException_m11895 (XmlSerializationWriter_t4010 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownTypeException(System.Type)
extern "C" Exception_t496 * XmlSerializationWriter_CreateUnknownTypeException_m11896 (XmlSerializationWriter_t4010 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::FromXmlQualifiedName(System.Xml.XmlQualifiedName)
extern "C" String_t* XmlSerializationWriter_FromXmlQualifiedName_m11897 (XmlSerializationWriter_t4010 * __this, XmlQualifiedName_t3923 * ___xmlQualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetId(System.Object,System.Boolean)
extern "C" String_t* XmlSerializationWriter_GetId_m11898 (XmlSerializationWriter_t4010 * __this, Object_t * ___o, bool ___addToReferencesList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriter::AlreadyQueued(System.Object)
extern "C" bool XmlSerializationWriter_AlreadyQueued_m11899 (XmlSerializationWriter_t4010 * __this, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetNamespacePrefix(System.String)
extern "C" String_t* XmlSerializationWriter_GetNamespacePrefix_m11900 (XmlSerializationWriter_t4010 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetQualifiedName(System.String,System.String)
extern "C" String_t* XmlSerializationWriter_GetQualifiedName_m11901 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::InitCallbacks()
// System.Void System.Xml.Serialization.XmlSerializationWriter::TopLevelElement()
extern "C" void XmlSerializationWriter_TopLevelElement_m11902 (XmlSerializationWriter_t4010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteAttribute(System.String,System.String,System.String)
extern "C" void XmlSerializationWriter_WriteAttribute_m11903 (XmlSerializationWriter_t4010 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteAttribute(System.String,System.String,System.String,System.String)
extern "C" void XmlSerializationWriter_WriteAttribute_m11904 (XmlSerializationWriter_t4010 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXmlNode(System.Xml.XmlNode)
extern "C" void XmlSerializationWriter_WriteXmlNode_m11905 (XmlSerializationWriter_t4010 * __this, XmlNode_t4081 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementEncoded(System.Xml.XmlNode,System.String,System.String,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriter_WriteElementEncoded_m11906 (XmlSerializationWriter_t4010 * __this, XmlNode_t4081 * ___node, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementLiteral(System.Xml.XmlNode,System.String,System.String,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriter_WriteElementLiteral_m11907 (XmlSerializationWriter_t4010 * __this, XmlNode_t4081 * ___node, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementQualifiedName(System.String,System.String,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteElementQualifiedName_m11908 (XmlSerializationWriter_t4010 * __this, String_t* ___localName, String_t* ___ns, XmlQualifiedName_t3923 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementQualifiedName(System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteElementQualifiedName_m11909 (XmlSerializationWriter_t4010 * __this, String_t* ___localName, String_t* ___ns, XmlQualifiedName_t3923 * ___value, XmlQualifiedName_t3923 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementString(System.String,System.String,System.String)
extern "C" void XmlSerializationWriter_WriteElementString_m11910 (XmlSerializationWriter_t4010 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementString(System.String,System.String,System.String,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteElementString_m11911 (XmlSerializationWriter_t4010 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, XmlQualifiedName_t3923 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteEndElement()
extern "C" void XmlSerializationWriter_WriteEndElement_m11912 (XmlSerializationWriter_t4010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteEndElement(System.Object)
extern "C" void XmlSerializationWriter_WriteEndElement_m11913 (XmlSerializationWriter_t4010 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNamespaceDeclarations(System.Xml.Serialization.XmlSerializerNamespaces)
extern "C" void XmlSerializationWriter_WriteNamespaceDeclarations_m11914 (XmlSerializationWriter_t4010 * __this, XmlSerializerNamespaces_t3934 * ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableQualifiedNameEncoded(System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteNullableQualifiedNameEncoded_m11915 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, XmlQualifiedName_t3923 * ___value, XmlQualifiedName_t3923 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableQualifiedNameLiteral(System.String,System.String,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteNullableQualifiedNameLiteral_m11916 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, XmlQualifiedName_t3923 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableStringEncoded(System.String,System.String,System.String,System.Xml.XmlQualifiedName)
extern "C" void XmlSerializationWriter_WriteNullableStringEncoded_m11917 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, String_t* ___value, XmlQualifiedName_t3923 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableStringLiteral(System.String,System.String,System.String)
extern "C" void XmlSerializationWriter_WriteNullableStringLiteral_m11918 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullTagEncoded(System.String,System.String)
extern "C" void XmlSerializationWriter_WriteNullTagEncoded_m11919 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullTagLiteral(System.String,System.String)
extern "C" void XmlSerializationWriter_WriteNullTagLiteral_m11920 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WritePotentiallyReferencingElement(System.String,System.String,System.Object,System.Type,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriter_WritePotentiallyReferencingElement_m11921 (XmlSerializationWriter_t4010 * __this, String_t* ___n, String_t* ___ns, Object_t * ___o, Type_t * ___ambientType, bool ___suppressReference, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteReferencedElements()
extern "C" void XmlSerializationWriter_WriteReferencedElements_m11922 (XmlSerializationWriter_t4010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriter::IsPrimitiveArray(System.Xml.Serialization.TypeData)
extern "C" bool XmlSerializationWriter_IsPrimitiveArray_m11923 (XmlSerializationWriter_t4010 * __this, TypeData_t3954 * ___td, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteArray(System.Object,System.Xml.Serialization.TypeData)
extern "C" void XmlSerializationWriter_WriteArray_m11924 (XmlSerializationWriter_t4010 * __this, Object_t * ___o, TypeData_t3954 * ___td, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteReferencingElement(System.String,System.String,System.Object,System.Boolean)
extern "C" void XmlSerializationWriter_WriteReferencingElement_m11925 (XmlSerializationWriter_t4010 * __this, String_t* ___n, String_t* ___ns, Object_t * ___o, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::CheckReferenceQueue()
extern "C" void XmlSerializationWriter_CheckReferenceQueue_m11926 (XmlSerializationWriter_t4010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteSerializable(System.Xml.Serialization.IXmlSerializable,System.String,System.String,System.Boolean)
extern "C" void XmlSerializationWriter_WriteSerializable_m11927 (XmlSerializationWriter_t4010 * __this, Object_t * ___serializable, String_t* ___name, String_t* ___ns, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteSerializable(System.Xml.Serialization.IXmlSerializable,System.String,System.String,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriter_WriteSerializable_m11928 (XmlSerializationWriter_t4010 * __this, Object_t * ___serializable, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartDocument()
extern "C" void XmlSerializationWriter_WriteStartDocument_m11929 (XmlSerializationWriter_t4010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String)
extern "C" void XmlSerializationWriter_WriteStartElement_m11930 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Boolean)
extern "C" void XmlSerializationWriter_WriteStartElement_m11931 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, bool ___writePrefixed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object)
extern "C" void XmlSerializationWriter_WriteStartElement_m11932 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object,System.Boolean)
extern "C" void XmlSerializationWriter_WriteStartElement_m11933 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___writePrefixed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object,System.Boolean,System.Collections.ICollection)
extern "C" void XmlSerializationWriter_WriteStartElement_m11934 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___writePrefixed, Object_t * ___namespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteTypedPrimitive(System.String,System.String,System.Object,System.Boolean)
extern "C" void XmlSerializationWriter_WriteTypedPrimitive_m11935 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteValue(System.String)
extern "C" void XmlSerializationWriter_WriteValue_m11936 (XmlSerializationWriter_t4010 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXmlAttribute(System.Xml.XmlNode,System.Object)
extern "C" void XmlSerializationWriter_WriteXmlAttribute_m11937 (XmlSerializationWriter_t4010 * __this, XmlNode_t4081 * ___node, Object_t * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXsiType(System.String,System.String)
extern "C" void XmlSerializationWriter_WriteXsiType_m11938 (XmlSerializationWriter_t4010 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
