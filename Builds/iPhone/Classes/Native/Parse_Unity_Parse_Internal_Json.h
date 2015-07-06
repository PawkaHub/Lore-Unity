#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t665;
// System.Text.RegularExpressions.Regex
struct Regex_t1424;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1192;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.Internal.Json
struct  Json_t1512  : public Object_t
{
};
struct Json_t1512_StaticFields{
	// System.String Parse.Internal.Json::startOfString
	String_t* ___startOfString_0;
	// System.Char Parse.Internal.Json::startObject
	uint16_t ___startObject_1;
	// System.Char Parse.Internal.Json::endObject
	uint16_t ___endObject_2;
	// System.Char Parse.Internal.Json::startArray
	uint16_t ___startArray_3;
	// System.Char Parse.Internal.Json::endArray
	uint16_t ___endArray_4;
	// System.Char Parse.Internal.Json::valueSeparator
	uint16_t ___valueSeparator_5;
	// System.Char Parse.Internal.Json::nameSeparator
	uint16_t ___nameSeparator_6;
	// System.Char[] Parse.Internal.Json::falseValue
	CharU5BU5D_t665* ___falseValue_7;
	// System.Char[] Parse.Internal.Json::trueValue
	CharU5BU5D_t665* ___trueValue_8;
	// System.Char[] Parse.Internal.Json::nullValue
	CharU5BU5D_t665* ___nullValue_9;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::numberValue
	Regex_t1424 * ___numberValue_10;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::stringValue
	Regex_t1424 * ___stringValue_11;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::escapePattern
	Regex_t1424 * ___escapePattern_12;
	// System.Text.RegularExpressions.MatchEvaluator Parse.Internal.Json::CS$<>9__CachedAnonymousMethodDelegate1
	MatchEvaluator_t1192 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_13;
};
