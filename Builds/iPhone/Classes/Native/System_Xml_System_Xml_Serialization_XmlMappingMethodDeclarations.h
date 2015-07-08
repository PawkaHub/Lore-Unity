#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlMapping
struct XmlMapping_t3979;
// System.String
struct String_t;
// System.Xml.Serialization.ObjectMap
struct ObjectMap_t3978;
// System.Collections.ArrayList
struct ArrayList_t3935;
// System.Xml.Serialization.SerializationSource
struct SerializationSource_t3952;
// System.Xml.Serialization.SerializationFormat
#include "System_Xml_System_Xml_Serialization_SerializationFormat.h"

// System.Void System.Xml.Serialization.XmlMapping::.ctor(System.String,System.String)
extern "C" void XmlMapping__ctor_m11726 (XmlMapping_t3979 * __this, String_t* ___elementName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlMapping::get_ElementName()
extern "C" String_t* XmlMapping_get_ElementName_m11727 (XmlMapping_t3979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlMapping::get_Namespace()
extern "C" String_t* XmlMapping_get_Namespace_m11728 (XmlMapping_t3979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlMapping::SetKey(System.String)
extern "C" void XmlMapping_SetKey_m11729 (XmlMapping_t3979 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.ObjectMap System.Xml.Serialization.XmlMapping::get_ObjectMap()
extern "C" ObjectMap_t3978 * XmlMapping_get_ObjectMap_m11730 (XmlMapping_t3979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlMapping::set_ObjectMap(System.Xml.Serialization.ObjectMap)
extern "C" void XmlMapping_set_ObjectMap_m11731 (XmlMapping_t3979 * __this, ObjectMap_t3978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlMapping::get_RelatedMaps()
extern "C" ArrayList_t3935 * XmlMapping_get_RelatedMaps_m11732 (XmlMapping_t3979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlMapping::set_RelatedMaps(System.Collections.ArrayList)
extern "C" void XmlMapping_set_RelatedMaps_m11733 (XmlMapping_t3979 * __this, ArrayList_t3935 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlMapping::get_Format()
extern "C" int32_t XmlMapping_get_Format_m11734 (XmlMapping_t3979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlMapping::set_Format(System.Xml.Serialization.SerializationFormat)
extern "C" void XmlMapping_set_Format_m11735 (XmlMapping_t3979 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SerializationSource System.Xml.Serialization.XmlMapping::get_Source()
extern "C" SerializationSource_t3952 * XmlMapping_get_Source_m11736 (XmlMapping_t3979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlMapping::set_Source(System.Xml.Serialization.SerializationSource)
extern "C" void XmlMapping_set_Source_m11737 (XmlMapping_t3979 * __this, SerializationSource_t3952 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
