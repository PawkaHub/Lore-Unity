#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t2375;
// System.Xml.XmlDocument
struct XmlDocument_t2373;
// System.Xml.XmlReader
struct XmlReader_t2374;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t598;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Collections.Hashtable
struct Hashtable_t1256;
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t2369;
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t2371;
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t2372;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t2366;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t468;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2301;
// System.Array
struct Array_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t2339;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_t2367;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t2537;
// System.Xml.XmlNode
struct XmlNode_t2457;
// System.Xml.XmlElement
struct XmlElement_t2350;

// System.Void System.Xml.Serialization.XmlSerializationReader::.ctor()
extern "C" void XmlSerializationReader__ctor_m10094 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::Initialize(System.Xml.XmlReader,System.Xml.Serialization.XmlSerializer)
extern "C" void XmlSerializationReader_Initialize_m10095 (XmlSerializationReader_t2375 * __this, XmlReader_t2374 * ___reader, XmlSerializer_t598 * ___eventSource, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::EnsureArrayList(System.Collections.ArrayList)
extern "C" ArrayList_t1188 * XmlSerializationReader_EnsureArrayList_m10096 (XmlSerializationReader_t2375 * __this, ArrayList_t1188 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::EnsureHashtable(System.Collections.Hashtable)
extern "C" Hashtable_t1256 * XmlSerializationReader_EnsureHashtable_m10097 (XmlSerializationReader_t2375 * __this, Hashtable_t1256 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::get_Document()
extern "C" XmlDocument_t2373 * XmlSerializationReader_get_Document_m10098 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::get_Reader()
extern "C" XmlReader_t2374 * XmlSerializationReader_get_Reader_m10099 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionFixup)
extern "C" void XmlSerializationReader_AddFixup_m10100 (XmlSerializationReader_t2375 * __this, CollectionFixup_t2369 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/Fixup)
extern "C" void XmlSerializationReader_AddFixup_m10101 (XmlSerializationReader_t2375 * __this, Fixup_t2371 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup)
extern "C" void XmlSerializationReader_AddFixup_m10102 (XmlSerializationReader_t2375 * __this, CollectionItemFixup_t2372 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddReadCallback(System.String,System.String,System.Type,System.Xml.Serialization.XmlSerializationReadCallback)
extern "C" void XmlSerializationReader_AddReadCallback_m10103 (XmlSerializationReader_t2375 * __this, String_t* ___name, String_t* ___ns, Type_t * ___type, XmlSerializationReadCallback_t2366 * ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddTarget(System.String,System.Object)
extern "C" void XmlSerializationReader_AddTarget_m10104 (XmlSerializationReader_t2375 * __this, String_t* ___id, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::CurrentTag()
extern "C" String_t* XmlSerializationReader_CurrentTag_m10105 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateReadOnlyCollectionException(System.String)
extern "C" Exception_t468 * XmlSerializationReader_CreateReadOnlyCollectionException_m10106 (XmlSerializationReader_t2375 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownConstantException(System.String,System.Type)
extern "C" Exception_t468 * XmlSerializationReader_CreateUnknownConstantException_m10107 (XmlSerializationReader_t2375 * __this, String_t* ___value, Type_t * ___enumType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownNodeException()
extern "C" Exception_t468 * XmlSerializationReader_CreateUnknownNodeException_m10108 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownTypeException(System.Xml.XmlQualifiedName)
extern "C" Exception_t468 * XmlSerializationReader_CreateUnknownTypeException_m10109 (XmlSerializationReader_t2375 * __this, XmlQualifiedName_t2301 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::EnsureArrayIndex(System.Array,System.Int32,System.Type)
extern "C" Array_t * XmlSerializationReader_EnsureArrayIndex_m10110 (XmlSerializationReader_t2375 * __this, Array_t * ___a, int32_t ___index, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::GetNullAttr()
extern "C" bool XmlSerializationReader_GetNullAttr_m10111 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::GetTarget(System.String)
extern "C" Object_t * XmlSerializationReader_GetTarget_m10112 (XmlSerializationReader_t2375 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::TargetReady(System.String)
extern "C" bool XmlSerializationReader_TargetReady_m10113 (XmlSerializationReader_t2375 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::GetXsiType()
extern "C" XmlQualifiedName_t2301 * XmlSerializationReader_GetXsiType_m10114 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::InitCallbacks()
// System.Void System.Xml.Serialization.XmlSerializationReader::InitIDs()
// System.Boolean System.Xml.Serialization.XmlSerializationReader::IsXmlnsAttribute(System.String)
extern "C" bool XmlSerializationReader_IsXmlnsAttribute_m10115 (XmlSerializationReader_t2375 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ParseWsdlArrayType(System.Xml.XmlAttribute)
extern "C" void XmlSerializationReader_ParseWsdlArrayType_m10116 (XmlSerializationReader_t2375 * __this, XmlAttribute_t2339 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadElementQualifiedName()
extern "C" XmlQualifiedName_t2301 * XmlSerializationReader_ReadElementQualifiedName_m10117 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadEndElement()
extern "C" void XmlSerializationReader_ReadEndElement_m10118 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadNull()
extern "C" bool XmlSerializationReader_ReadNull_m10119 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadNullableQualifiedName()
extern "C" XmlQualifiedName_t2301 * XmlSerializationReader_ReadNullableQualifiedName_m10120 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadNullableString()
extern "C" String_t* XmlSerializationReader_ReadNullableString_m10121 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement()
extern "C" Object_t * XmlSerializationReader_ReadReferencedElement_m10122 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo System.Xml.Serialization.XmlSerializationReader::GetCallbackInfo(System.Xml.XmlQualifiedName)
extern "C" WriteCallbackInfo_t2367 * XmlSerializationReader_GetCallbackInfo_m10123 (XmlSerializationReader_t2375 * __this, XmlQualifiedName_t2301 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement(System.String,System.String)
extern "C" Object_t * XmlSerializationReader_ReadReferencedElement_m10124 (XmlSerializationReader_t2375 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadList(System.Object&)
extern "C" bool XmlSerializationReader_ReadList_m10125 (XmlSerializationReader_t2375 * __this, Object_t ** ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadReferencedElements()
extern "C" void XmlSerializationReader_ReadReferencedElements_m10126 (XmlSerializationReader_t2375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m10127 (XmlSerializationReader_t2375 * __this, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m10128 (XmlSerializationReader_t2375 * __this, String_t* ___name, String_t* ___ns, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.Boolean,System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m10129 (XmlSerializationReader_t2375 * __this, String_t* ___name, String_t* ___ns, bool ___elementCanBeType, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.IXmlSerializable System.Xml.Serialization.XmlSerializationReader::ReadSerializable(System.Xml.Serialization.IXmlSerializable)
extern "C" Object_t * XmlSerializationReader_ReadSerializable_m10130 (XmlSerializationReader_t2375 * __this, Object_t * ___serializable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadString(System.String)
extern "C" String_t* XmlSerializationReader_ReadString_m10131 (XmlSerializationReader_t2375 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName)
extern "C" Object_t * XmlSerializationReader_ReadTypedPrimitive_m10132 (XmlSerializationReader_t2375 * __this, XmlQualifiedName_t2301 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName,System.Boolean)
extern "C" Object_t * XmlSerializationReader_ReadTypedPrimitive_m10133 (XmlSerializationReader_t2375 * __this, XmlQualifiedName_t2301 * ___qname, bool ___reportUnknown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.Serialization.XmlSerializationReader::ReadXmlNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlSerializationReader_ReadXmlNode_m10134 (XmlSerializationReader_t2375 * __this, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::ReadXmlDocument(System.Boolean)
extern "C" XmlDocument_t2373 * XmlSerializationReader_ReadXmlDocument_m10135 (XmlSerializationReader_t2375 * __this, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::ShrinkArray(System.Array,System.Int32,System.Type,System.Boolean)
extern "C" Array_t * XmlSerializationReader_ShrinkArray_m10136 (XmlSerializationReader_t2375 * __this, Array_t * ___a, int32_t ___length, Type_t * ___elementType, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ToXmlQualifiedName(System.String)
extern "C" XmlQualifiedName_t2301 * XmlSerializationReader_ToXmlQualifiedName_m10137 (XmlSerializationReader_t2375 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownAttribute(System.Object,System.Xml.XmlAttribute,System.String)
extern "C" void XmlSerializationReader_UnknownAttribute_m10138 (XmlSerializationReader_t2375 * __this, Object_t * ___o, XmlAttribute_t2339 * ___attr, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownElement(System.Object,System.Xml.XmlElement,System.String)
extern "C" void XmlSerializationReader_UnknownElement_m10139 (XmlSerializationReader_t2375 * __this, Object_t * ___o, XmlElement_t2350 * ___elem, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object)
extern "C" void XmlSerializationReader_UnknownNode_m10140 (XmlSerializationReader_t2375 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object,System.String)
extern "C" void XmlSerializationReader_UnknownNode_m10141 (XmlSerializationReader_t2375 * __this, Object_t * ___o, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::OnUnknownNode(System.Xml.XmlNode,System.Object,System.String)
extern "C" void XmlSerializationReader_OnUnknownNode_m10142 (XmlSerializationReader_t2375 * __this, XmlNode_t2457 * ___node, Object_t * ___o, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnreferencedObject(System.String,System.Object)
extern "C" void XmlSerializationReader_UnreferencedObject_m10143 (XmlSerializationReader_t2375 * __this, String_t* ___id, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
