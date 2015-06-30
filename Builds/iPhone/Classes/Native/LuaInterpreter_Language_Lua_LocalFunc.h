#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Language.Lua.FunctionBody
struct FunctionBody_t2586;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.LocalFunc
struct  LocalFunc_t2590  : public Statement_t2576
{
	// System.String Language.Lua.LocalFunc::Name
	String_t* ___Name_0;
	// Language.Lua.FunctionBody Language.Lua.LocalFunc::Body
	FunctionBody_t2586 * ___Body_1;
};
