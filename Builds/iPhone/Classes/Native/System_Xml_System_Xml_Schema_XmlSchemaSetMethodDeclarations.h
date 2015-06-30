#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t2316;
// System.Xml.XmlNameTable
struct XmlNameTable_t2314;
// System.Xml.Schema.XmlSchema[]
struct XmlSchemaU5BU5D_t2535;

// System.Void System.Xml.Schema.XmlSchemaSet::.ctor()
extern "C" void XmlSchemaSet__ctor_m9868 (XmlSchemaSet_t2316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlSchemaSet__ctor_m9869 (XmlSchemaSet_t2316 * __this, XmlNameTable_t2314 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSet::get_Count()
extern "C" int32_t XmlSchemaSet_get_Count_m9870 (XmlSchemaSet_t2316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::CopyTo(System.Xml.Schema.XmlSchema[],System.Int32)
extern "C" void XmlSchemaSet_CopyTo_m9871 (XmlSchemaSet_t2316 * __this, XmlSchemaU5BU5D_t2535* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
