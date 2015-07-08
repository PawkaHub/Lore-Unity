#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t4079;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t3974;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t4096;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t4093;
// System.Xml.XmlNameTable
struct XmlNameTable_t3937;
// System.Xml.XmlResolver
struct XmlResolver_t3938;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4080;
// System.Xml.XmlImplementation
struct XmlImplementation_t4092;
// System.Xml.XmlAttribute
struct XmlAttribute_t3963;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t4084;
// System.Xml.XmlComment
struct XmlComment_t4088;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t4095;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t4098;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t4123;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t4128;
// System.Xml.XmlText
struct XmlText_t4130;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t4152;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t4091;
// System.Xml.XmlReader
struct XmlReader_t3998;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C" void XmlDocument__ctor_m12470 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C" void XmlDocument__ctor_m12471 (XmlDocument_t3997 * __this, XmlImplementation_t4092 * ___imp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlDocument__ctor_m12472 (XmlDocument_t3997 * __this, XmlNameTable_t3937 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C" void XmlDocument__ctor_m12473 (XmlDocument_t3997 * __this, XmlImplementation_t4092 * ___impl, XmlNameTable_t3937 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C" void XmlDocument__cctor_m12474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t4079 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m12475 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m12476 (XmlDocument_t3997 * __this, XmlLinkedNode_t4079 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C" String_t* XmlDocument_get_BaseURI_m12477 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C" XmlElement_t3974 * XmlDocument_get_DocumentElement_m12478 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C" XmlDocumentType_t4096 * XmlDocument_get_DocumentType_m12479 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C" bool XmlDocument_get_IsReadOnly_m12480 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C" String_t* XmlDocument_get_LocalName_m12481 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C" String_t* XmlDocument_get_Name_m12482 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C" XmlNameEntryCache_t4093 * XmlDocument_get_NameCache_m12483 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C" XmlNameTable_t3937 * XmlDocument_get_NameTable_m12484 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C" int32_t XmlDocument_get_NodeType_m12485 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C" XmlDocument_t3997 * XmlDocument_get_OwnerDocument_m12486 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C" bool XmlDocument_get_PreserveWhitespace_m12487 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C" XmlResolver_t3938 * XmlDocument_get_Resolver_m12488 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C" String_t* XmlDocument_get_XmlLang_m12489 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C" int32_t XmlDocument_get_XmlSpace_m12490 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C" XmlNode_t4081 * XmlDocument_get_ParentNode_m12491 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlDocument_set_SchemaInfo_m12492 (XmlDocument_t3997 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C" void XmlDocument_AddIdenticalAttribute_m12493 (XmlDocument_t3997 * __this, XmlAttribute_t3963 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlDocument_CloneNode_m12494 (XmlDocument_t3997 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C" XmlAttribute_t3963 * XmlDocument_CreateAttribute_m12495 (XmlDocument_t3997 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C" XmlAttribute_t3963 * XmlDocument_CreateAttribute_m12496 (XmlDocument_t3997 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C" XmlAttribute_t3963 * XmlDocument_CreateAttribute_m12497 (XmlDocument_t3997 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C" XmlCDataSection_t4084 * XmlDocument_CreateCDataSection_m12498 (XmlDocument_t3997 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C" XmlComment_t4088 * XmlDocument_CreateComment_m12499 (XmlDocument_t3997 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C" XmlDocumentFragment_t4095 * XmlDocument_CreateDocumentFragment_m12500 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C" XmlDocumentType_t4096 * XmlDocument_CreateDocumentType_m12501 (XmlDocument_t3997 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C" XmlDocumentType_t4096 * XmlDocument_CreateDocumentType_m12502 (XmlDocument_t3997 * __this, DTDObjectModel_t4040 * ___dtd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C" XmlElement_t3974 * XmlDocument_CreateElement_m12503 (XmlDocument_t3997 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C" XmlElement_t3974 * XmlDocument_CreateElement_m12504 (XmlDocument_t3997 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___nameAtomized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C" XmlEntityReference_t4098 * XmlDocument_CreateEntityReference_m12505 (XmlDocument_t3997 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C" XmlProcessingInstruction_t4123 * XmlDocument_CreateProcessingInstruction_m12506 (XmlDocument_t3997 * __this, String_t* ___target, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C" XmlSignificantWhitespace_t4128 * XmlDocument_CreateSignificantWhitespace_m12507 (XmlDocument_t3997 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C" XmlText_t4130 * XmlDocument_CreateTextNode_m12508 (XmlDocument_t3997 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C" XmlWhitespace_t4152 * XmlDocument_CreateWhitespace_m12509 (XmlDocument_t3997 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C" XmlDeclaration_t4091 * XmlDocument_CreateXmlDeclaration_m12510 (XmlDocument_t3997 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C" XmlAttribute_t3963 * XmlDocument_GetIdenticalAttribute_m12511 (XmlDocument_t3997 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t4081 * XmlDocument_ImportNode_m12512 (XmlDocument_t3997 * __this, XmlNode_t4081 * ___node, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanged_m12513 (XmlDocument_t3997 * __this, XmlNode_t4081 * ___node, XmlNode_t4081 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanging_m12514 (XmlDocument_t3997 * __this, XmlNode_t4081 * ___node, XmlNode_t4081 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserted_m12515 (XmlDocument_t3997 * __this, XmlNode_t4081 * ___node, XmlNode_t4081 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserting_m12516 (XmlDocument_t3997 * __this, XmlNode_t4081 * ___node, XmlNode_t4081 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoved_m12517 (XmlDocument_t3997 * __this, XmlNode_t4081 * ___node, XmlNode_t4081 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoving_m12518 (XmlDocument_t3997 * __this, XmlNode_t4081 * ___node, XmlNode_t4081 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C" void XmlDocument_ParseName_m12519 (XmlDocument_t3997 * __this, String_t* ___name, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C" XmlAttribute_t3963 * XmlDocument_ReadAttributeNode_m12520 (XmlDocument_t3997 * __this, XmlReader_t3998 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C" void XmlDocument_ReadAttributeNodeValue_m12521 (XmlDocument_t3997 * __this, XmlReader_t3998 * ___reader, XmlAttribute_t3963 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C" XmlNode_t4081 * XmlDocument_ReadNode_m12522 (XmlDocument_t3997 * __this, XmlReader_t3998 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C" XmlNode_t4081 * XmlDocument_ReadNodeCore_m12523 (XmlDocument_t3997 * __this, XmlReader_t3998 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C" String_t* XmlDocument_MakeReaderErrorMessage_m12524 (XmlDocument_t3997 * __this, String_t* ___message, XmlReader_t3998 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C" void XmlDocument_RemoveIdenticalAttribute_m12525 (XmlDocument_t3997 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlDocument_WriteContentTo_m12526 (XmlDocument_t3997 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlDocument_WriteTo_m12527 (XmlDocument_t3997 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C" void XmlDocument_AddDefaultNameTableKeys_m12528 (XmlDocument_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C" void XmlDocument_CheckIdTableUpdate_m12529 (XmlDocument_t3997 * __this, XmlAttribute_t3963 * ___attr, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
