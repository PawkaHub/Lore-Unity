#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t2387;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2355;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t2379;
// System.String
struct String_t;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t2359;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Xml.Serialization.ClassMap
struct ClassMap_t2377;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t2396;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t2397;
// System.Type
struct Type_t;
// System.Xml.Serialization.TypeData
struct TypeData_t2331;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2301;
// System.Xml.Serialization.ListMap
struct ListMap_t2403;
// System.Text.StringBuilder
struct StringBuilder_t619;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t2405;

// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
extern "C" void XmlSerializationWriterInterpreter__ctor_m10239 (XmlSerializationWriterInterpreter_t2387 * __this, XmlMapping_t2355 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::InitCallbacks()
extern "C" void XmlSerializationWriterInterpreter_InitCallbacks_m10240 (XmlSerializationWriterInterpreter_t2387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteRoot(System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteRoot_m10241 (XmlSerializationWriterInterpreter_t2387 * __this, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WriteObject_m10242 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, bool ___isNullable, bool ___needType, bool ___writeWrappingElem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMessage(System.Xml.Serialization.XmlMembersMapping,System.Object[])
extern "C" void XmlSerializationWriterInterpreter_WriteMessage_m10243 (XmlSerializationWriterInterpreter_t2387 * __this, XmlMembersMapping_t2359 * ___membersMap, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C" void XmlSerializationWriterInterpreter_WriteObjectElement_m10244 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementAttributes(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteObjectElementAttributes_m10245 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementElements(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteObjectElementElements_m10246 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WriteMembers_m10247 (XmlSerializationWriterInterpreter_t2387 * __this, ClassMap_t2377 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WriteAttributeMembers_m10248 (XmlSerializationWriterInterpreter_t2387 * __this, ClassMap_t2377 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteElementMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WriteElementMembers_m10249 (XmlSerializationWriterInterpreter_t2387 * __this, ClassMap_t2377 * ___map, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C" Object_t * XmlSerializationWriterInterpreter_GetMemberValue_m10250 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapMember_t2396 * ___member, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriterInterpreter::MemberHasValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C" bool XmlSerializationWriterInterpreter_MemberHasValue_m10251 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapMember_t2396 * ___member, Object_t * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMemberElement(System.Xml.Serialization.XmlTypeMapElementInfo,System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteMemberElement_m10252 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapElementInfo_t2397 * ___elem, Object_t * ___memberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::ImplicitConvert(System.Object,System.Type)
extern "C" Object_t * XmlSerializationWriterInterpreter_ImplicitConvert_m10253 (XmlSerializationWriterInterpreter_t2387 * __this, Object_t * ___obj, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueLiteral(System.Object,System.String,System.String,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WritePrimitiveValueLiteral_m10254 (XmlSerializationWriterInterpreter_t2387 * __this, Object_t * ___memberValue, String_t* ___name, String_t* ___ns, XmlTypeMapping_t2379 * ___mappedType, TypeData_t2331 * ___typeData, bool ___wrapped, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueEncoded(System.Object,System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
extern "C" void XmlSerializationWriterInterpreter_WritePrimitiveValueEncoded_m10255 (XmlSerializationWriterInterpreter_t2387 * __this, Object_t * ___memberValue, String_t* ___name, String_t* ___ns, XmlQualifiedName_t2301 * ___xsiType, XmlTypeMapping_t2379 * ___mappedType, TypeData_t2331 * ___typeData, bool ___wrapped, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C" void XmlSerializationWriterInterpreter_WriteListElement_m10256 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListContent(System.Object,System.Xml.Serialization.TypeData,System.Xml.Serialization.ListMap,System.Object,System.Text.StringBuilder)
extern "C" void XmlSerializationWriterInterpreter_WriteListContent_m10257 (XmlSerializationWriterInterpreter_t2387 * __this, Object_t * ___container, TypeData_t2331 * ___listType, ListMap_t2403 * ___map, Object_t * ___ob, StringBuilder_t619 * ___targetString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlSerializationWriterInterpreter::GetListCount(System.Xml.Serialization.TypeData,System.Object)
extern "C" int32_t XmlSerializationWriterInterpreter_GetListCount_m10258 (XmlSerializationWriterInterpreter_t2387 * __this, TypeData_t2331 * ___listType, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAnyElementContent(System.Xml.Serialization.XmlTypeMapMemberAnyElement,System.Object)
extern "C" void XmlSerializationWriterInterpreter_WriteAnyElementContent_m10259 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapMemberAnyElement_t2405 * ___member, Object_t * ___memberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C" void XmlSerializationWriterInterpreter_WritePrimitiveElement_m10260 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C" void XmlSerializationWriterInterpreter_WriteEnumElement_m10261 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetStringValue(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Object)
extern "C" String_t* XmlSerializationWriterInterpreter_GetStringValue_m10262 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, TypeData_t2331 * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetEnumXmlValue(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C" String_t* XmlSerializationWriterInterpreter_GetEnumXmlValue_m10263 (XmlSerializationWriterInterpreter_t2387 * __this, XmlTypeMapping_t2379 * ___typeMap, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
