#pragma once
#include <stdint.h>
// Language.Lua.Expr
struct Expr_t2581;
// Language.Lua.Chunk
struct Chunk_t2579;
// System.Object
#include "mscorlib_System_Object.h"
// Language.Lua.ElseifBlock
struct  ElseifBlock_t2654  : public Object_t
{
	// Language.Lua.Expr Language.Lua.ElseifBlock::Condition
	Expr_t2581 * ___Condition_0;
	// Language.Lua.Chunk Language.Lua.ElseifBlock::ThenBlock
	Chunk_t2579 * ___ThenBlock_1;
};
