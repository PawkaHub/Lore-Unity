﻿#pragma once
#include <stdint.h>
// Language.Lua.ParserInput`1<System.Char>
struct ParserInput_1_t3817;
// System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct List_1_t3818;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3819;
// System.Collections.Generic.Dictionary`2<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>
struct Dictionary_2_t3820;
// System.Object
#include "mscorlib_System_Object.h"
// Language.Lua.Parser
struct  Parser_t3738  : public Object_t
{
	// System.Int32 Language.Lua.Parser::position
	int32_t ___position_0;
	// Language.Lua.ParserInput`1<System.Char> Language.Lua.Parser::Input
	Object_t* ___Input_1;
	// System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>> Language.Lua.Parser::Errors
	List_1_t3818 * ___Errors_2;
	// System.Collections.Generic.Stack`1<System.Int32> Language.Lua.Parser::ErrorStack
	Stack_1_t3819 * ___ErrorStack_3;
	// System.Collections.Generic.Dictionary`2<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>> Language.Lua.Parser::ParsingResults
	Dictionary_2_t3820 * ___ParsingResults_4;
};
