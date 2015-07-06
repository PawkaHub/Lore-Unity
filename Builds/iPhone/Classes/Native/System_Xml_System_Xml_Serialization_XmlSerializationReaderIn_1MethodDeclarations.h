#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t3762;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t3741;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3765;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t3745;
// System.Xml.Serialization.ClassMap
struct ClassMap_t3763;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t3782;
// System.Xml.Serialization.TypeData
struct TypeData_t3716;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t3783;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
extern "C" void XmlSerializationReaderInterpreter__ctor_m11432 (XmlSerializationReaderInterpreter_t3762 * __this, XmlMapping_t3741 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.cctor()
extern "C" void XmlSerializationReaderInterpreter__cctor_m11433 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitCallbacks()
extern "C" void XmlSerializationReaderInterpreter_InitCallbacks_m11434 (XmlSerializationReaderInterpreter_t3762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitIDs()
extern "C" void XmlSerializationReaderInterpreter_InitIDs_m11435 (XmlSerializationReaderInterpreter_t3762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot()
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadRoot_m11436 (XmlSerializationReaderInterpreter_t3762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEncodedObject(System.Xml.Serialization.XmlTypeMapping)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadEncodedObject_m11437 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMessage(System.Xml.Serialization.XmlMembersMapping)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadMessage_m11438 (XmlSerializationReaderInterpreter_t3762 * __this, XmlMembersMapping_t3745 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot(System.Xml.Serialization.XmlTypeMapping)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadRoot_m11439 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___rootMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObject(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadObject_m11440 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, bool ___isNullable, bool ___checkType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstance(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadClassInstance_m11441 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, bool ___isNullable, bool ___checkType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstanceMembers(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C" void XmlSerializationReaderInterpreter_ReadClassInstanceMembers_m11442 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_ReadAttributeMembers_m11443 (XmlSerializationReaderInterpreter_t3762 * __this, ClassMap_t3763 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_ReadMembers_m11444 (XmlSerializationReaderInterpreter_t3762 * __this, ClassMap_t3763 * ___map, Object_t * ___ob, bool ___isValueList, bool ___readByOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetListMembersDefaults(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_SetListMembersDefaults_m11445 (XmlSerializationReaderInterpreter_t3762 * __this, ClassMap_t3763 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FixupMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_FixupMembers_m11446 (XmlSerializationReaderInterpreter_t3762 * __this, ClassMap_t3763 * ___map, Object_t * ___obfixup, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownAttribute(System.Object)
extern "C" void XmlSerializationReaderInterpreter_ProcessUnknownAttribute_m11447 (XmlSerializationReaderInterpreter_t3762 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownElement(System.Object)
extern "C" void XmlSerializationReaderInterpreter_ProcessUnknownElement_m11448 (XmlSerializationReaderInterpreter_t3762 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReaderInterpreter::IsReadOnly(System.Xml.Serialization.XmlTypeMapMember,System.Xml.Serialization.TypeData,System.Object,System.Boolean)
extern "C" bool XmlSerializationReaderInterpreter_IsReadOnly_m11449 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapMember_t3782 * ___member, TypeData_t3716 * ___memType, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_SetMemberValue_m11450 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapMember_t3782 * ___member, Object_t * ___ob, Object_t * ___value, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValueFromAttr(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_SetMemberValueFromAttr_m11451 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapMember_t3782 * ___member, Object_t * ___ob, Object_t * ___value, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_GetMemberValue_m11452 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapMember_t3782 * ___member, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObjectElement(System.Xml.Serialization.XmlTypeMapElementInfo)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadObjectElement_m11453 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapElementInfo_t3783 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveValue(System.Xml.Serialization.XmlTypeMapElementInfo)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadPrimitiveValue_m11454 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapElementInfo_t3783 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetValueFromXmlString(System.String,System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlTypeMapping)
extern "C" Object_t * XmlSerializationReaderInterpreter_GetValueFromXmlString_m11455 (XmlSerializationReaderInterpreter_t3762 * __this, String_t* ___value, TypeData_t3716 * ___typeData, XmlTypeMapping_t3765 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Object,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadListElement_m11456 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, bool ___isNullable, Object_t * ___list, bool ___canCreateInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListString(System.Xml.Serialization.XmlTypeMapping,System.String)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadListString_m11457 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, String_t* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::AddListValue(System.Xml.Serialization.TypeData,System.Object&,System.Int32,System.Object,System.Boolean)
extern "C" void XmlSerializationReaderInterpreter_AddListValue_m11458 (XmlSerializationReaderInterpreter_t3762 * __this, TypeData_t3716 * ___listType, Object_t ** ___list, int32_t ___index, Object_t * ___value, bool ___canCreateInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateInstance(System.Type)
extern "C" Object_t * XmlSerializationReaderInterpreter_CreateInstance_m11459 (XmlSerializationReaderInterpreter_t3762 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateList(System.Type)
extern "C" Object_t * XmlSerializationReaderInterpreter_CreateList_m11460 (XmlSerializationReaderInterpreter_t3762 * __this, Type_t * ___listType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::InitializeList(System.Xml.Serialization.TypeData)
extern "C" Object_t * XmlSerializationReaderInterpreter_InitializeList_m11461 (XmlSerializationReaderInterpreter_t3762 * __this, TypeData_t3716 * ___listType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FillList(System.Object,System.Object)
extern "C" void XmlSerializationReaderInterpreter_FillList_m11462 (XmlSerializationReaderInterpreter_t3762 * __this, Object_t * ___list, Object_t * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::CopyEnumerableList(System.Object,System.Object)
extern "C" void XmlSerializationReaderInterpreter_CopyEnumerableList_m11463 (XmlSerializationReaderInterpreter_t3762 * __this, Object_t * ___source, Object_t * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNodeElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadXmlNodeElement_m11464 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNode(System.Xml.Serialization.TypeData,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadXmlNode_m11465 (XmlSerializationReaderInterpreter_t3762 * __this, TypeData_t3716 * ___type, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadPrimitiveElement_m11466 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadEnumElement_m11467 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetEnumValue(System.Xml.Serialization.XmlTypeMapping,System.String)
extern "C" Object_t * XmlSerializationReaderInterpreter_GetEnumValue_m11468 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlSerializableElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C" Object_t * XmlSerializationReaderInterpreter_ReadXmlSerializableElement_m11469 (XmlSerializationReaderInterpreter_t3762 * __this, XmlTypeMapping_t3765 * ___typeMap, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
