#pragma once
#include <stdint.h>
// Language.Lua.FunctionName
struct FunctionName_t3513;
// Language.Lua.FunctionBody
struct FunctionBody_t3514;
// Language.Lua.Statement
#include "LuaInterpreter_Language_Lua_Statement.h"
// Language.Lua.Function
struct  Function_t3515  : public Statement_t3504
{
	// Language.Lua.FunctionName Language.Lua.Function::Name
	FunctionName_t3513 * ___Name_0;
	// Language.Lua.FunctionBody Language.Lua.Function::Body
	FunctionBody_t3514 * ___Body_1;
};
