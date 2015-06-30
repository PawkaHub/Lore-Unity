#pragma once
#include <stdint.h>
// Language.Lua.FunctionName
struct FunctionName_t2585;
// Language.Lua.FunctionBody
struct FunctionBody_t2586;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.Function
struct  Function_t2587  : public Statement_t2576
{
	// Language.Lua.FunctionName Language.Lua.Function::Name
	FunctionName_t2585 * ___Name_0;
	// Language.Lua.FunctionBody Language.Lua.Function::Body
	FunctionBody_t2586 * ___Body_1;
};
