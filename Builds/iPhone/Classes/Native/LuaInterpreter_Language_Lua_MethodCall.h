#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Language.Lua.Args
struct Args_t3767;
// Language.Lua.Access
#include "LuaInterpreter_Language_Lua_Access.h"
// Language.Lua.MethodCall
struct  MethodCall_t3772  : public Access_t3761
{
	// System.String Language.Lua.MethodCall::Method
	String_t* ___Method_0;
	// Language.Lua.Args Language.Lua.MethodCall::Args
	Args_t3767 * ___Args_1;
};
