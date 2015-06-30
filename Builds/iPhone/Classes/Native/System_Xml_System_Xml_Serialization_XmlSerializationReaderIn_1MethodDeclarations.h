#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t2376;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2355;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t2379;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t2359;
// System.Xml.Serialization.ClassMap
struct ClassMap_t2377;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t2396;
// System.Xml.Serialization.TypeData
struct TypeData_t2331;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t2397;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
extern "C" void XmlSerializationReaderInterpreter__ctor_m10148 (XmlSerializationReaderInterpreter_t2376 * __this, XmlMapping_t2355 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.cctor()
extern "C" void XmlSerializationReaderInterpreter__cctor_m10149 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitCallbacks()
extern "C" void XmlSerializationReaderInterpreter_InitCallbacks_m10150 (XmlSerializationReaderInterpreter_t2376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitIDs()
extern "C" void XmlSerializationReaderInterpreter_InitIDs_m10151 (XmlSerializationReaderInterpreter_t2376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot()
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadRoot_m10152 (XmlSerializationReaderInterpreter_t2376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEncodedObject(System.Xml.Serialization.XmlTypeMapping)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadEncodedObject_m10153 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMessage(System.Xml.Serialization.XmlMembersMapping)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadMessage_m10154 (XmlSerializationReaderInterpreter_t2376 * __this, XmlMembersMapping_t2359 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot(System.Xml.Serialization.XmlTypeMapping)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadRoot_m10155 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___rootMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObject(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadObject_m10156 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, bool ___isNullable, bool ___checkType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstance(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadClassInstance_m10157 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, bool ___isNullable, bool ___checkType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstanceMembers(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C" void XmlSerializationReaderInterpreter_ReadClassInstanceMembers_m10158 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_ReadAttributeMembers_m10159 (XmlSerializationReaderInterpreter_t2376 * __this, ClassMap_t2377 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_ReadMembers_m10160 (XmlSerializationReaderInterpreter_t2376 * __this, ClassMap_t2377 * ___map, Object_t * ___ob, bool ___isValueList, bool ___readByOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetListMembersDefaults(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_SetListMembersDefaults_m10161 (XmlSerializationReaderInterpreter_t2376 * __this, ClassMap_t2377 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FixupMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_FixupMembers_m10162 (XmlSerializationReaderInterpreter_t2376 * __this, ClassMap_t2377 * ___map, Object_t * ___obfixup, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownAttribute(System.Object)
extern "C" void XmlSerializationReaderInterpreter_ProcessUnknownAttribute_m10163 (XmlSerializationReaderInterpreter_t2376 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownElement(System.Object)
extern "C" void XmlSerializationReaderInterpreter_ProcessUnknownElement_m10164 (XmlSerializationReaderInterpreter_t2376 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReaderInterpreter::IsReadOnly(System.Xml.Serialization.XmlTypeMapMember,System.Xml.Serialization.TypeData,System.Object,System.Boolean)
extern "C" bool XmlSerializationReaderInterpreter_IsReadOnly_m10165 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapMember_t2396 * ___member, TypeData_t2331 * ___memType, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_SetMemberValue_m10166 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapMember_t2396 * ___member, Object_t * ___ob, Object_t * ___value, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValueFromAttr(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_SetMemberValueFromAttr_m10167 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapMember_t2396 * ___member, Object_t * ___ob, Object_t * ___value, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_GetMemberValue_m10168 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapMember_t2396 * ___member, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObjectElement(System.Xml.Serialization.XmlTypeMapElementInfo)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadObjectElement_m10169 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapElementInfo_t2397 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveValue(System.Xml.Serialization.XmlTypeMapElementInfo)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadPrimitiveValue_m10170 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapElementInfo_t2397 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetValueFromXmlString(System.String,System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlTypeMapping)
extern "C" Object_t * XmlSerializationReaderInterpreter_GetValueFromXmlString_m10171 (XmlSerializationReaderInterpreter_t2376 * __this, String_t* ___value, TypeData_t2331 * ___typeData, XmlTypeMapping_t2379 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Object,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadListElement_m10172 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, bool ___isNullable, Object_t * ___list, bool ___canCreateInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListString(System.Xml.Serialization.XmlTypeMapping,System.String)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadListString_m10173 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, String_t* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::AddListValue(System.Xml.Serialization.TypeData,System.Object&,System.Int32,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_AddListValue_m10174 (XmlSerializationReaderInterpreter_t2376 * __this, TypeData_t2331 * ___listType, Object_t ** ___list, int32_t ___index, Object_t * ___value, bool ___canCreateInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateInstance(System.Type)
extern "C" Object_t * XmlSerializationReaderInterpreter_CreateInstance_m10175 (XmlSerializationReaderInterpreter_t2376 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateList(System.Type)
extern "C" Object_t * XmlSerializationReaderInterpreter_CreateList_m10176 (XmlSerializationReaderInterpreter_t2376 * __this, Type_t * ___listType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::InitializeList(System.Xml.Serialization.TypeData)
extern "C" Object_t * XmlSerializationReaderInterpreter_InitializeList_m10177 (XmlSerializationReaderInterpreter_t2376 * __this, TypeData_t2331 * ___listType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FillList(System.Object,System.Object)
extern "C" void XmlSerializationReaderInterpreter_FillList_m10178 (XmlSerializationReaderInterpreter_t2376 * __this, Object_t * ___list, Object_t * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::CopyEnumerableList(System.Object,System.Object)
extern "C" void XmlSerializationReaderInterpreter_CopyEnumerableList_m10179 (XmlSerializationReaderInterpreter_t2376 * __this, Object_t * ___source, Object_t * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNodeElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadXmlNodeElement_m10180 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNode(System.Xml.Serialization.TypeData,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadXmlNode_m10181 (XmlSerializationReaderInterpreter_t2376 * __this, TypeData_t2331 * ___type, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadPrimitiveElement_m10182 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadEnumElement_m10183 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetEnumValue(System.Xml.Serialization.XmlTypeMapping,System.String)
extern "C" Object_t * XmlSerializationReaderInterpreter_GetEnumValue_m10184 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlSerializableElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadXmlSerializableElement_m10185 (XmlSerializationReaderInterpreter_t2376 * __this, XmlTypeMapping_t2379 * ___typeMap, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
