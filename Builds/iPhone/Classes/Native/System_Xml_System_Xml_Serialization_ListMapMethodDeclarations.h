#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ListMap
struct ListMap_t3789;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t3784;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t3783;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.ListMap::.ctor()
extern "C" void ListMap__ctor_m11700 (ListMap_t3789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::set_ChoiceMember(System.String)
extern "C" void ListMap_set_ChoiceMember_m11701 (ListMap_t3789 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.ListMap::get_ItemInfo()
extern "C" XmlTypeMapElementInfoList_t3784 * ListMap_get_ItemInfo_m11702 (ListMap_t3789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::set_ItemInfo(System.Xml.Serialization.XmlTypeMapElementInfoList)
extern "C" void ListMap_set_ItemInfo_m11703 (ListMap_t3789 * __this, XmlTypeMapElementInfoList_t3784 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindElement(System.Object,System.Int32,System.Object)
extern "C" XmlTypeMapElementInfo_t3783 * ListMap_FindElement_m11704 (ListMap_t3789 * __this, Object_t * ___ob, int32_t ___index, Object_t * ___memberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindElement(System.String,System.String)
extern "C" XmlTypeMapElementInfo_t3783 * ListMap_FindElement_m11705 (ListMap_t3789 * __this, String_t* ___elementName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindTextElement()
extern "C" XmlTypeMapElementInfo_t3783 * ListMap_FindTextElement_m11706 (ListMap_t3789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::GetArrayType(System.Int32,System.String&,System.String&)
extern "C" void ListMap_GetArrayType_m11707 (ListMap_t3789 * __this, int32_t ___itemCount, String_t** ___localName, String_t** ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ListMap::Equals(System.Object)
extern "C" bool ListMap_Equals_m11708 (ListMap_t3789 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.ListMap::GetHashCode()
extern "C" int32_t ListMap_GetHashCode_m11709 (ListMap_t3789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
