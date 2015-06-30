#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t602;
// System.Char[]
struct CharU5BU5D_t646;
// System.IO.Stream
struct Stream_t1271;
// System.IO.TextWriter
struct TextWriter_t2521;
// System.IO.StringWriter
struct StringWriter_t2522;
// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t2485;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t2523;
// System.Collections.Stack
struct Stack_t2442;
// System.Collections.ArrayList
struct ArrayList_t1188;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t427;
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriter.h"
// System.Xml.XmlTextWriter/XmlDeclState
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclState.h"
// System.Xml.NewLineHandling
#include "System_Xml_System_Xml_NewLineHandling.h"
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.NamespaceHandling
#include "System_Xml_System_Xml_NamespaceHandling.h"
// System.Xml.XmlTextWriter
struct  XmlTextWriter_t2524  : public XmlWriter_t2384
{
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_t1271 * ___base_stream_4;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t2521 * ___source_5;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t2521 * ___writer_6;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t2522 * ___preserver_7;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name_8;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns_9;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment_10;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream_11;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding_12;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_13;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state_14;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity_15;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling_16;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity_17;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state_18;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state_19;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t2485 * ___nsmanager_20;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count_21;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_t2523* ___elements_22;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t2442 * ___new_local_namespaces_23;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t1188 * ___explicit_nsdecls_24;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling_25;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent_26;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count_27;
	// System.Char System.Xml.XmlTextWriter::indent_char
	uint16_t ___indent_char_28;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string_29;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline_30;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes_31;
	// System.Char System.Xml.XmlTextWriter::quote_char
	uint16_t ___quote_char_32;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2_33;
};
struct XmlTextWriter_t2524_StaticFields{
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t602 * ___unmarked_utf8encoding_1;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t646* ___escaped_text_chars_2;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t646* ___escaped_attr_chars_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map53
	Dictionary_2_t427 * ___U3CU3Ef__switchU24map53_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map54
	Dictionary_2_t427 * ___U3CU3Ef__switchU24map54_35;
};
