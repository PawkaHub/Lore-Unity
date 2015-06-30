#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Language.Lua.Term
struct Term_t2597;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t427;
// Language.Lua.Term
#include "LuaInterpreter_Language_Lua_Term.h"
// Language.Lua.Operation
struct  Operation_t2610  : public Term_t2597
{
	// System.String Language.Lua.Operation::Operator
	String_t* ___Operator_0;
	// Language.Lua.Term Language.Lua.Operation::LeftOperand
	Term_t2597 * ___LeftOperand_1;
	// Language.Lua.Term Language.Lua.Operation::RightOperand
	Term_t2597 * ___RightOperand_2;
};
struct Operation_t2610_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Language.Lua.Operation::<>f__switch$map0
	Dictionary_2_t427 * ___U3CU3Ef__switchU24map0_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Language.Lua.Operation::<>f__switch$map1
	Dictionary_2_t427 * ___U3CU3Ef__switchU24map1_4;
};
