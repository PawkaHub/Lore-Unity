#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Language.Lua.Args
struct Args_t2601;
// Language.Lua.Access
#include "LuaInterpreter_Language_Lua_Access.h"
// Language.Lua.MethodCall
struct  MethodCall_t2606  : public Access_t2595
{
	// System.String Language.Lua.MethodCall::Method
	String_t* ___Method_0;
	// Language.Lua.Args Language.Lua.MethodCall::Args
	Args_t2601 * ___Args_1;
};
