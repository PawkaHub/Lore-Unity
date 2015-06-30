#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1188;
// Mono.Xml.DTDEntityBase
#include "System_Xml_Mono_Xml_DTDEntityBase.h"
// Mono.Xml.DTDEntityDeclaration
struct  DTDEntityDeclaration_t2436  : public DTDEntityBase_t2435
{
	// System.String Mono.Xml.DTDEntityDeclaration::entityValue
	String_t* ___entityValue_15;
	// System.String Mono.Xml.DTDEntityDeclaration::notationName
	String_t* ___notationName_16;
	// System.Collections.ArrayList Mono.Xml.DTDEntityDeclaration::ReferencingEntities
	ArrayList_t1188 * ___ReferencingEntities_17;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::scanned
	bool ___scanned_18;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::recursed
	bool ___recursed_19;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::hasExternalReference
	bool ___hasExternalReference_20;
};
