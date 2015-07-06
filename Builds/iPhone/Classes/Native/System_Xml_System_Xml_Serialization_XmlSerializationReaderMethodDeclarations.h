#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t3761;
// System.Xml.XmlDocument
struct XmlDocument_t3759;
// System.Xml.XmlReader
struct XmlReader_t3760;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t619;
// System.Collections.ArrayList
struct ArrayList_t3697;
// System.Collections.Hashtable
struct Hashtable_t1658;
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t3755;
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t3757;
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t3758;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t3752;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t468;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3685;
// System.Array
struct Array_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t3725;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_t3753;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t3923;
// System.Xml.XmlNode
struct XmlNode_t3843;
// System.Xml.XmlElement
struct XmlElement_t3736;

// System.Void System.Xml.Serialization.XmlSerializationReader::.ctor()
extern "C" void XmlSerializationReader__ctor_m11378 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::Initialize(System.Xml.XmlReader,System.Xml.Serialization.XmlSerializer)
extern "C" void XmlSerializationReader_Initialize_m11379 (XmlSerializationReader_t3761 * __this, XmlReader_t3760 * ___reader, XmlSerializer_t619 * ___eventSource, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::EnsureArrayList(System.Collections.ArrayList)
extern "C" ArrayList_t3697 * XmlSerializationReader_EnsureArrayList_m11380 (XmlSerializationReader_t3761 * __this, ArrayList_t3697 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::EnsureHashtable(System.Collections.Hashtable)
extern "C" Hashtable_t1658 * XmlSerializationReader_EnsureHashtable_m11381 (XmlSerializationReader_t3761 * __this, Hashtable_t1658 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::get_Document()
extern "C" XmlDocument_t3759 * XmlSerializationReader_get_Document_m11382 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::get_Reader()
extern "C" XmlReader_t3760 * XmlSerializationReader_get_Reader_m11383 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionFixup)
extern "C" void XmlSerializationReader_AddFixup_m11384 (XmlSerializationReader_t3761 * __this, CollectionFixup_t3755 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/Fixup)
extern "C" void XmlSerializationReader_AddFixup_m11385 (XmlSerializationReader_t3761 * __this, Fixup_t3757 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup)
extern "C" void XmlSerializationReader_AddFixup_m11386 (XmlSerializationReader_t3761 * __this, CollectionItemFixup_t3758 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddReadCallback(System.String,System.String,System.Type,System.Xml.Serialization.XmlSerializationReadCallback)
extern "C" void XmlSerializationReader_AddReadCallback_m11387 (XmlSerializationReader_t3761 * __this, String_t* ___name, String_t* ___ns, Type_t * ___type, XmlSerializationReadCallback_t3752 * ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddTarget(System.String,System.Object)
extern "C" void XmlSerializationReader_AddTarget_m11388 (XmlSerializationReader_t3761 * __this, String_t* ___id, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::CurrentTag()
extern "C" String_t* XmlSerializationReader_CurrentTag_m11389 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateReadOnlyCollectionException(System.String)
extern "C" Exception_t468 * XmlSerializationReader_CreateReadOnlyCollectionException_m11390 (XmlSerializationReader_t3761 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownConstantException(System.String,System.Type)
extern "C" Exception_t468 * XmlSerializationReader_CreateUnknownConstantException_m11391 (XmlSerializationReader_t3761 * __this, String_t* ___value, Type_t * ___enumType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownNodeException()
extern "C" Exception_t468 * XmlSerializationReader_CreateUnknownNodeException_m11392 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownTypeException(System.Xml.XmlQualifiedName)
extern "C" Exception_t468 * XmlSerializationReader_CreateUnknownTypeException_m11393 (XmlSerializationReader_t3761 * __this, XmlQualifiedName_t3685 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::EnsureArrayIndex(System.Array,System.Int32,System.Type)
extern "C" Array_t * XmlSerializationReader_EnsureArrayIndex_m11394 (XmlSerializationReader_t3761 * __this, Array_t * ___a, int32_t ___index, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::GetNullAttr()
extern "C" bool XmlSerializationReader_GetNullAttr_m11395 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::GetTarget(System.String)
extern "C" Object_t * XmlSerializationReader_GetTarget_m11396 (XmlSerializationReader_t3761 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::TargetReady(System.String)
extern "C" bool XmlSerializationReader_TargetReady_m11397 (XmlSerializationReader_t3761 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::GetXsiType()
extern "C" XmlQualifiedName_t3685 * XmlSerializationReader_GetXsiType_m11398 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::InitCallbacks()
// System.Void System.Xml.Serialization.XmlSerializationReader::InitIDs()
// System.Boolean System.Xml.Serialization.XmlSerializationReader::IsXmlnsAttribute(System.String)
extern "C" bool XmlSerializationReader_IsXmlnsAttribute_m11399 (XmlSerializationReader_t3761 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ParseWsdlArrayType(System.Xml.XmlAttribute)
extern "C" void XmlSerializationReader_ParseWsdlArrayType_m11400 (XmlSerializationReader_t3761 * __this, XmlAttribute_t3725 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadElementQualifiedName()
extern "C" XmlQualifiedName_t3685 * XmlSerializationReader_ReadElementQualifiedName_m11401 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadEndElement()
extern "C" void XmlSerializationReader_ReadEndElement_m11402 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadNull()
extern "C" bool XmlSerializationReader_ReadNull_m11403 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadNullableQualifiedName()
extern "C" XmlQualifiedName_t3685 * XmlSerializationReader_ReadNullableQualifiedName_m11404 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadNullableString()
extern "C" String_t* XmlSerializationReader_ReadNullableString_m11405 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement()
extern "C" Object_t * XmlSerializationReader_ReadReferencedElement_m11406 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo System.Xml.Serialization.XmlSerializationReader::GetCallbackInfo(System.Xml.XmlQualifiedName)
extern "C" WriteCallbackInfo_t3753 * XmlSerializationReader_GetCallbackInfo_m11407 (XmlSerializationReader_t3761 * __this, XmlQualifiedName_t3685 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement(System.String,System.String)
extern "C" Object_t * XmlSerializationReader_ReadReferencedElement_m11408 (XmlSerializationReader_t3761 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadList(System.Object&)
extern "C" bool XmlSerializationReader_ReadList_m11409 (XmlSerializationReader_t3761 * __this, Object_t ** ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadReferencedElements()
extern "C" void XmlSerializationReader_ReadReferencedElements_m11410 (XmlSerializationReader_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m11411 (XmlSerializationReader_t3761 * __this, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m11412 (XmlSerializationReader_t3761 * __this, String_t* ___name, String_t* ___ns, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.Boolean,System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m11413 (XmlSerializationReader_t3761 * __this, String_t* ___name, String_t* ___ns, bool ___elementCanBeType, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.IXmlSerializable System.Xml.Serialization.XmlSerializationReader::ReadSerializable(System.Xml.Serialization.IXmlSerializable)
extern "C" Object_t * XmlSerializationReader_ReadSerializable_m11414 (XmlSerializationReader_t3761 * __this, Object_t * ___serializable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadString(System.String)
extern "C" String_t* XmlSerializationReader_ReadString_m11415 (XmlSerializationReader_t3761 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName)
extern "C" Object_t * XmlSerializationReader_ReadTypedPrimitive_m11416 (XmlSerializationReader_t3761 * __this, XmlQualifiedName_t3685 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName,System.Boolean)
extern "C" Object_t * XmlSerializationReader_ReadTypedPrimitive_m11417 (XmlSerializationReader_t3761 * __this, XmlQualifiedName_t3685 * ___qname, bool ___reportUnknown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.Serialization.XmlSerializationReader::ReadXmlNode(System.Boolean)
extern "C" XmlNode_t3843 * XmlSerializationReader_ReadXmlNode_m11418 (XmlSerializationReader_t3761 * __this, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::ReadXmlDocument(System.Boolean)
extern "C" XmlDocument_t3759 * XmlSerializationReader_ReadXmlDocument_m11419 (XmlSerializationReader_t3761 * __this, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::ShrinkArray(System.Array,System.Int32,System.Type,System.Boolean)
extern "C" Array_t * XmlSerializationReader_ShrinkArray_m11420 (XmlSerializationReader_t3761 * __this, Array_t * ___a, int32_t ___length, Type_t * ___elementType, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ToXmlQualifiedName(System.String)
extern "C" XmlQualifiedName_t3685 * XmlSerializationReader_ToXmlQualifiedName_m11421 (XmlSerializationReader_t3761 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownAttribute(System.Object,System.Xml.XmlAttribute,System.String)
extern "C" void XmlSerializationReader_UnknownAttribute_m11422 (XmlSerializationReader_t3761 * __this, Object_t * ___o, XmlAttribute_t3725 * ___attr, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownElement(System.Object,System.Xml.XmlElement,System.String)
extern "C" void XmlSerializationReader_UnknownElement_m11423 (XmlSerializationReader_t3761 * __this, Object_t * ___o, XmlElement_t3736 * ___elem, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object)
extern "C" void XmlSerializationReader_UnknownNode_m11424 (XmlSerializationReader_t3761 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object,System.String)
extern "C" void XmlSerializationReader_UnknownNode_m11425 (XmlSerializationReader_t3761 * __this, Object_t * ___o, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::OnUnknownNode(System.Xml.XmlNode,System.Object,System.String)
extern "C" void XmlSerializationReader_OnUnknownNode_m11426 (XmlSerializationReader_t3761 * __this, XmlNode_t3843 * ___node, Object_t * ___o, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnreferencedObject(System.String,System.Object)
extern "C" void XmlSerializationReader_UnreferencedObject_m11427 (XmlSerializationReader_t3761 * __this, String_t* ___id, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
