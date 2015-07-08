#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t3999;
// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.XmlReader
struct XmlReader_t3998;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t676;
// System.Collections.ArrayList
struct ArrayList_t3935;
// System.Collections.Hashtable
struct Hashtable_t1909;
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t3993;
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t3995;
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t3996;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t3990;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t496;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3923;
// System.Array
struct Array_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t3963;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_t3991;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t4161;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.XmlElement
struct XmlElement_t3974;

// System.Void System.Xml.Serialization.XmlSerializationReader::.ctor()
extern "C" void XmlSerializationReader__ctor_m11797 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::Initialize(System.Xml.XmlReader,System.Xml.Serialization.XmlSerializer)
extern "C" void XmlSerializationReader_Initialize_m11798 (XmlSerializationReader_t3999 * __this, XmlReader_t3998 * ___reader, XmlSerializer_t676 * ___eventSource, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::EnsureArrayList(System.Collections.ArrayList)
extern "C" ArrayList_t3935 * XmlSerializationReader_EnsureArrayList_m11799 (XmlSerializationReader_t3999 * __this, ArrayList_t3935 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::EnsureHashtable(System.Collections.Hashtable)
extern "C" Hashtable_t1909 * XmlSerializationReader_EnsureHashtable_m11800 (XmlSerializationReader_t3999 * __this, Hashtable_t1909 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::get_Document()
extern "C" XmlDocument_t3997 * XmlSerializationReader_get_Document_m11801 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::get_Reader()
extern "C" XmlReader_t3998 * XmlSerializationReader_get_Reader_m11802 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionFixup)
extern "C" void XmlSerializationReader_AddFixup_m11803 (XmlSerializationReader_t3999 * __this, CollectionFixup_t3993 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/Fixup)
extern "C" void XmlSerializationReader_AddFixup_m11804 (XmlSerializationReader_t3999 * __this, Fixup_t3995 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup)
extern "C" void XmlSerializationReader_AddFixup_m11805 (XmlSerializationReader_t3999 * __this, CollectionItemFixup_t3996 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddReadCallback(System.String,System.String,System.Type,System.Xml.Serialization.XmlSerializationReadCallback)
extern "C" void XmlSerializationReader_AddReadCallback_m11806 (XmlSerializationReader_t3999 * __this, String_t* ___name, String_t* ___ns, Type_t * ___type, XmlSerializationReadCallback_t3990 * ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddTarget(System.String,System.Object)
extern "C" void XmlSerializationReader_AddTarget_m11807 (XmlSerializationReader_t3999 * __this, String_t* ___id, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::CurrentTag()
extern "C" String_t* XmlSerializationReader_CurrentTag_m11808 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateReadOnlyCollectionException(System.String)
extern "C" Exception_t496 * XmlSerializationReader_CreateReadOnlyCollectionException_m11809 (XmlSerializationReader_t3999 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownConstantException(System.String,System.Type)
extern "C" Exception_t496 * XmlSerializationReader_CreateUnknownConstantException_m11810 (XmlSerializationReader_t3999 * __this, String_t* ___value, Type_t * ___enumType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownNodeException()
extern "C" Exception_t496 * XmlSerializationReader_CreateUnknownNodeException_m11811 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownTypeException(System.Xml.XmlQualifiedName)
extern "C" Exception_t496 * XmlSerializationReader_CreateUnknownTypeException_m11812 (XmlSerializationReader_t3999 * __this, XmlQualifiedName_t3923 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::EnsureArrayIndex(System.Array,System.Int32,System.Type)
extern "C" Array_t * XmlSerializationReader_EnsureArrayIndex_m11813 (XmlSerializationReader_t3999 * __this, Array_t * ___a, int32_t ___index, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::GetNullAttr()
extern "C" bool XmlSerializationReader_GetNullAttr_m11814 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::GetTarget(System.String)
extern "C" Object_t * XmlSerializationReader_GetTarget_m11815 (XmlSerializationReader_t3999 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::TargetReady(System.String)
extern "C" bool XmlSerializationReader_TargetReady_m11816 (XmlSerializationReader_t3999 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::GetXsiType()
extern "C" XmlQualifiedName_t3923 * XmlSerializationReader_GetXsiType_m11817 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::InitCallbacks()
// System.Void System.Xml.Serialization.XmlSerializationReader::InitIDs()
// System.Boolean System.Xml.Serialization.XmlSerializationReader::IsXmlnsAttribute(System.String)
extern "C" bool XmlSerializationReader_IsXmlnsAttribute_m11818 (XmlSerializationReader_t3999 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ParseWsdlArrayType(System.Xml.XmlAttribute)
extern "C" void XmlSerializationReader_ParseWsdlArrayType_m11819 (XmlSerializationReader_t3999 * __this, XmlAttribute_t3963 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadElementQualifiedName()
extern "C" XmlQualifiedName_t3923 * XmlSerializationReader_ReadElementQualifiedName_m11820 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadEndElement()
extern "C" void XmlSerializationReader_ReadEndElement_m11821 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadNull()
extern "C" bool XmlSerializationReader_ReadNull_m11822 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadNullableQualifiedName()
extern "C" XmlQualifiedName_t3923 * XmlSerializationReader_ReadNullableQualifiedName_m11823 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadNullableString()
extern "C" String_t* XmlSerializationReader_ReadNullableString_m11824 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement()
extern "C" Object_t * XmlSerializationReader_ReadReferencedElement_m11825 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo System.Xml.Serialization.XmlSerializationReader::GetCallbackInfo(System.Xml.XmlQualifiedName)
extern "C" WriteCallbackInfo_t3991 * XmlSerializationReader_GetCallbackInfo_m11826 (XmlSerializationReader_t3999 * __this, XmlQualifiedName_t3923 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement(System.String,System.String)
extern "C" Object_t * XmlSerializationReader_ReadReferencedElement_m11827 (XmlSerializationReader_t3999 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadList(System.Object&)
extern "C" bool XmlSerializationReader_ReadList_m11828 (XmlSerializationReader_t3999 * __this, Object_t ** ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadReferencedElements()
extern "C" void XmlSerializationReader_ReadReferencedElements_m11829 (XmlSerializationReader_t3999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m11830 (XmlSerializationReader_t3999 * __this, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m11831 (XmlSerializationReader_t3999 * __this, String_t* ___name, String_t* ___ns, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.Boolean,System.String&)
extern "C" Object_t * XmlSerializationReader_ReadReferencingElement_m11832 (XmlSerializationReader_t3999 * __this, String_t* ___name, String_t* ___ns, bool ___elementCanBeType, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.IXmlSerializable System.Xml.Serialization.XmlSerializationReader::ReadSerializable(System.Xml.Serialization.IXmlSerializable)
extern "C" Object_t * XmlSerializationReader_ReadSerializable_m11833 (XmlSerializationReader_t3999 * __this, Object_t * ___serializable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadString(System.String)
extern "C" String_t* XmlSerializationReader_ReadString_m11834 (XmlSerializationReader_t3999 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName)
extern "C" Object_t * XmlSerializationReader_ReadTypedPrimitive_m11835 (XmlSerializationReader_t3999 * __this, XmlQualifiedName_t3923 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName,System.Boolean)
extern "C" Object_t * XmlSerializationReader_ReadTypedPrimitive_m11836 (XmlSerializationReader_t3999 * __this, XmlQualifiedName_t3923 * ___qname, bool ___reportUnknown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.Serialization.XmlSerializationReader::ReadXmlNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlSerializationReader_ReadXmlNode_m11837 (XmlSerializationReader_t3999 * __this, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::ReadXmlDocument(System.Boolean)
extern "C" XmlDocument_t3997 * XmlSerializationReader_ReadXmlDocument_m11838 (XmlSerializationReader_t3999 * __this, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::ShrinkArray(System.Array,System.Int32,System.Type,System.Boolean)
extern "C" Array_t * XmlSerializationReader_ShrinkArray_m11839 (XmlSerializationReader_t3999 * __this, Array_t * ___a, int32_t ___length, Type_t * ___elementType, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ToXmlQualifiedName(System.String)
extern "C" XmlQualifiedName_t3923 * XmlSerializationReader_ToXmlQualifiedName_m11840 (XmlSerializationReader_t3999 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownAttribute(System.Object,System.Xml.XmlAttribute,System.String)
extern "C" void XmlSerializationReader_UnknownAttribute_m11841 (XmlSerializationReader_t3999 * __this, Object_t * ___o, XmlAttribute_t3963 * ___attr, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownElement(System.Object,System.Xml.XmlElement,System.String)
extern "C" void XmlSerializationReader_UnknownElement_m11842 (XmlSerializationReader_t3999 * __this, Object_t * ___o, XmlElement_t3974 * ___elem, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object)
extern "C" void XmlSerializationReader_UnknownNode_m11843 (XmlSerializationReader_t3999 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object,System.String)
extern "C" void XmlSerializationReader_UnknownNode_m11844 (XmlSerializationReader_t3999 * __this, Object_t * ___o, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::OnUnknownNode(System.Xml.XmlNode,System.Object,System.String)
extern "C" void XmlSerializationReader_OnUnknownNode_m11845 (XmlSerializationReader_t3999 * __this, XmlNode_t4081 * ___node, Object_t * ___o, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnreferencedObject(System.String,System.Object)
extern "C" void XmlSerializationReader_UnreferencedObject_m11846 (XmlSerializationReader_t3999 * __this, String_t* ___id, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
