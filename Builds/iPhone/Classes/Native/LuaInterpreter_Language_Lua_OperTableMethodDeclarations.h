#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.OperTable
struct OperTable_t3781;
// System.String
struct String_t;

// System.Void Language.Lua.OperTable::.ctor()
extern "C" void OperTable__ctor_m11018 (OperTable_t3781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.OperTable::.cctor()
extern "C" void OperTable__cctor_m11019 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.OperTable::Contains(System.String)
extern "C" bool OperTable_Contains_m11020 (Object_t * __this /* static, unused */, String_t* ___oper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.OperTable::IsPrior(System.String,System.String)
extern "C" bool OperTable_IsPrior_m11021 (Object_t * __this /* static, unused */, String_t* ___operLeft, String_t* ___operRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
