#pragma once
#include <stdint.h>
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t4107;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t4108;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3937;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t455;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t4109  : public Object_t
{
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t4107* ___decls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_1;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t4108* ___scopes_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_3;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_4;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_5;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t3937 * ___nameTable_6;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_7;
};
struct XmlNamespaceManager_t4109_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_t455 * ___U3CU3Ef__switchU24map28_8;
};
