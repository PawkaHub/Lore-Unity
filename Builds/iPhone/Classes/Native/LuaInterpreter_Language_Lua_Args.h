#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t2574;
// Language.Lua.StringLiteral
struct StringLiteral_t2618;
// Language.Lua.TableConstructor
struct TableConstructor_t2620;
// System.Object
#include "mscorlib_System_Object.h"
// Language.Lua.Args
struct  Args_t2601  : public Object_t
{
	// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Args::ArgList
	List_1_t2574 * ___ArgList_0;
	// Language.Lua.StringLiteral Language.Lua.Args::String
	StringLiteral_t2618 * ___String_1;
	// Language.Lua.TableConstructor Language.Lua.Args::Table
	TableConstructor_t2620 * ___Table_2;
};
