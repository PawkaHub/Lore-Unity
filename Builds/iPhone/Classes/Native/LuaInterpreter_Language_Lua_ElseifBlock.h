#pragma once
#include <stdint.h>
// Language.Lua.Expr
struct Expr_t3747;
// Language.Lua.Chunk
struct Chunk_t3745;
// System.Object
#include "mscorlib_System_Object.h"
// Language.Lua.ElseifBlock
struct  ElseifBlock_t3822  : public Object_t
{
	// Language.Lua.Expr Language.Lua.ElseifBlock::Condition
	Expr_t3747 * ___Condition_0;
	// Language.Lua.Chunk Language.Lua.ElseifBlock::ThenBlock
	Chunk_t3745 * ___ThenBlock_1;
};
