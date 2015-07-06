#pragma once
#include <stdint.h>
// Language.Lua.BaseExpr
struct BaseExpr_t3524;
// System.Collections.Generic.List`1<Language.Lua.Access>
struct List_1_t3544;
// Language.Lua.Term
#include "LuaInterpreter_Language_Lua_Term.h"
// Language.Lua.PrimaryExpr
struct  PrimaryExpr_t3545  : public Term_t3525
{
	// Language.Lua.BaseExpr Language.Lua.PrimaryExpr::Base
	BaseExpr_t3524 * ___Base_0;
	// System.Collections.Generic.List`1<Language.Lua.Access> Language.Lua.PrimaryExpr::Accesses
	List_1_t3544 * ___Accesses_1;
};
