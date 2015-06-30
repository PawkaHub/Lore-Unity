#pragma once
#include <stdint.h>
// Language.Lua.FunctionBody
struct FunctionBody_t2586;
// Language.Lua.Term
#include "LuaInterpreter_Language_Lua_Term.h"
// Language.Lua.FunctionValue
struct  FunctionValue_t2603  : public Term_t2597
{
	// Language.Lua.FunctionBody Language.Lua.FunctionValue::Body
	FunctionBody_t2586 * ___Body_0;
};
