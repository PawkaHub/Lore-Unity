#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t4011;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t3979;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t4003;
// System.String
struct String_t;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t3983;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Xml.Serialization.ClassMap
struct ClassMap_t4001;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t4020;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t4021;
// System.Type
struct Type_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3954;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3923;
// System.Xml.Serialization.ListMap
struct ListMap_t4027;
// System.Text.StringBuilder
struct StringBuilder_t696;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t4029;

// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
extern "C" void XmlSerializationWriterInterpreter__ctor_m11942 (XmlSerializationWriterInterpreter_t4011 * __this, XmlMapping_t3979 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::InitCallbacks()
extern "C" void XmlSerializationWriterInterpreter_InitCallbacks_m11943 (XmlSerializationWriterInterpreter_t4011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteRoot(System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteRoot_m11944 (XmlSerializationWriterInterpreter_t4011 * __this, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WriteObject_m11945 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, bool ___isNullable, bool ___needType, bool ___writeWrappingElem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMessage(System.Xml.Serialization.XmlMembersMapping,System.Object[])
extern "C" void XmlSerializationWriterInterpreter_WriteMessage_m11946 (XmlSerializationWriterInterpreter_t4011 * __this, XmlMembersMapping_t3983 * ___membersMap, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C" void XmlSerializationWriterInterpreter_WriteObjectElement_m11947 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementAttributes(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteObjectElementAttributes_m11948 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementElements(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteObjectElementElements_m11949 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WriteMembers_m11950 (XmlSerializationWriterInterpreter_t4011 * __this, ClassMap_t4001 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WriteAttributeMembers_m11951 (XmlSerializationWriterInterpreter_t4011 * __this, ClassMap_t4001 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteElementMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WriteElementMembers_m11952 (XmlSerializationWriterInterpreter_t4011 * __this, ClassMap_t4001 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C" Object_t * XmlSerializationWriterInterpreter_GetMemberValue_m11953 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapMember_t4020 * ___member, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriterInterpreter::MemberHasValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C" bool XmlSerializationWriterInterpreter_MemberHasValue_m11954 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapMember_t4020 * ___member, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMemberElement(System.Xml.Serialization.XmlTypeMapElementInfo,System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteMemberElement_m11955 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapElementInfo_t4021 * ___elem, Object_t * ___memberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::ImplicitConvert(System.Object,System.Type)
extern "C" Object_t * XmlSerializationWriterInterpreter_ImplicitConvert_m11956 (XmlSerializationWriterInterpreter_t4011 * __this, Object_t * ___obj, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueLiteral(System.Object,System.String,System.String,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WritePrimitiveValueLiteral_m11957 (XmlSerializationWriterInterpreter_t4011 * __this, Object_t * ___memberValue, String_t* ___name, String_t* ___ns, XmlTypeMapping_t4003 * ___mappedType, TypeData_t3954 * ___typeData, bool ___wrapped, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueEncoded(System.Object,System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WritePrimitiveValueEncoded_m11958 (XmlSerializationWriterInterpreter_t4011 * __this, Object_t * ___memberValue, String_t* ___name, String_t* ___ns, XmlQualifiedName_t3923 * ___xsiType, XmlTypeMapping_t4003 * ___mappedType, TypeData_t3954 * ___typeData, bool ___wrapped, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C" void XmlSerializationWriterInterpreter_WriteListElement_m11959 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListContent(System.Object,System.Xml.Serialization.TypeData,System.Xml.Serialization.ListMap,System.Object,System.Text.StringBuilder)
extern "C" void XmlSerializationWriterInterpreter_WriteListContent_m11960 (XmlSerializationWriterInterpreter_t4011 * __this, Object_t * ___container, TypeData_t3954 * ___listType, ListMap_t4027 * ___map, Object_t * ___ob, StringBuilder_t696 * ___targetString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlSerializationWriterInterpreter::GetListCount(System.Xml.Serialization.TypeData,System.Object)
extern "C" int32_t XmlSerializationWriterInterpreter_GetListCount_m11961 (XmlSerializationWriterInterpreter_t4011 * __this, TypeData_t3954 * ___listType, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAnyElementContent(System.Xml.Serialization.XmlTypeMapMemberAnyElement,System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteAnyElementContent_m11962 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapMemberAnyElement_t4029 * ___member, Object_t * ___memberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C" void XmlSerializationWriterInterpreter_WritePrimitiveElement_m11963 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C" void XmlSerializationWriterInterpreter_WriteEnumElement_m11964 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetStringValue(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Object)
extern "C" String_t* XmlSerializationWriterInterpreter_GetStringValue_m11965 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, TypeData_t3954 * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetEnumXmlValue(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C" String_t* XmlSerializationWriterInterpreter_GetEnumXmlValue_m11966 (XmlSerializationWriterInterpreter_t4011 * __this, XmlTypeMapping_t4003 * ___typeMap, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
