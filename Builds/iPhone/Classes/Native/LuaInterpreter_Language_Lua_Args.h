#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3740;
// Language.Lua.StringLiteral
struct StringLiteral_t3784;
// Language.Lua.TableConstructor
struct TableConstructor_t3786;
// System.Object
#include "mscorlib_System_Object.h"
// Language.Lua.Args
struct  Args_t3767  : public Object_t
{
	// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Args::ArgList
	List_1_t3740 * ___ArgList_0;
	// Language.Lua.StringLiteral Language.Lua.Args::String
	StringLiteral_t3784 * ___String_1;
	// Language.Lua.TableConstructor Language.Lua.Args::Table
	TableConstructor_t3786 * ___Table_2;
};
