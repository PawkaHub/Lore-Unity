﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserContext
struct XmlParserContext_t4121;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;
// System.Text.Encoding
struct Encoding_t680;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t4109;
// System.Xml.XmlNameTable
struct XmlNameTable_t3937;
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C" void XmlParserContext__ctor_m12769 (XmlParserContext_t4121 * __this, XmlNameTable_t3937 * ___nt, XmlNamespaceManager_t4109 * ___nsMgr, String_t* ___xmlLang, int32_t ___xmlSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C" void XmlParserContext__ctor_m12770 (XmlParserContext_t4121 * __this, XmlNameTable_t3937 * ___nt, XmlNamespaceManager_t4109 * ___nsMgr, String_t* ___docTypeName, String_t* ___pubId, String_t* ___sysId, String_t* ___internalSubset, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t680 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C" void XmlParserContext__ctor_m12771 (XmlParserContext_t4121 * __this, XmlNameTable_t3937 * ___nt, XmlNamespaceManager_t4109 * ___nsMgr, DTDObjectModel_t4040 * ___dtd, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t680 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C" String_t* XmlParserContext_get_BaseURI_m12772 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C" void XmlParserContext_set_BaseURI_m12773 (XmlParserContext_t4121 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C" void XmlParserContext_set_DocTypeName_m12774 (XmlParserContext_t4121 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C" DTDObjectModel_t4040 * XmlParserContext_get_Dtd_m12775 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C" void XmlParserContext_set_Dtd_m12776 (XmlParserContext_t4121 * __this, DTDObjectModel_t4040 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C" void XmlParserContext_set_Encoding_m12777 (XmlParserContext_t4121 * __this, Encoding_t680 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C" String_t* XmlParserContext_get_InternalSubset_m12778 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C" void XmlParserContext_set_InternalSubset_m12779 (XmlParserContext_t4121 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C" XmlNamespaceManager_t4109 * XmlParserContext_get_NamespaceManager_m12780 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C" XmlNameTable_t3937 * XmlParserContext_get_NameTable_m12781 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C" void XmlParserContext_set_PublicId_m12782 (XmlParserContext_t4121 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C" void XmlParserContext_set_SystemId_m12783 (XmlParserContext_t4121 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C" String_t* XmlParserContext_get_XmlLang_m12784 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C" void XmlParserContext_set_XmlLang_m12785 (XmlParserContext_t4121 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C" int32_t XmlParserContext_get_XmlSpace_m12786 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C" void XmlParserContext_set_XmlSpace_m12787 (XmlParserContext_t4121 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PushScope()
extern "C" void XmlParserContext_PushScope_m12788 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PopScope()
extern "C" void XmlParserContext_PopScope_m12789 (XmlParserContext_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
