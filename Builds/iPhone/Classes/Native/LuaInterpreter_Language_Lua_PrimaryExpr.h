#pragma once
#include <stdint.h>
// Language.Lua.BaseExpr
struct BaseExpr_t3762;
// System.Collections.Generic.List`1<Language.Lua.Access>
struct List_1_t3782;
// Language.Lua.Term
#include "LuaInterpreter_Language_Lua_Term.h"
// Language.Lua.PrimaryExpr
struct  PrimaryExpr_t3783  : public Term_t3763
{
	// Language.Lua.BaseExpr Language.Lua.PrimaryExpr::Base
	BaseExpr_t3762 * ___Base_0;
	// System.Collections.Generic.List`1<Language.Lua.Access> Language.Lua.PrimaryExpr::Accesses
	List_1_t3782 * ___Accesses_1;
};
