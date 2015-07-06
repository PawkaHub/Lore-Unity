#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.FileLib
struct FileLib_t3556;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;
// System.String
struct String_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Language.Lua.Library.FileLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void FileLib_RegisterModule_m10642 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.FileLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void FileLib_RegisterFunctions_m10643 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::close(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * FileLib_close_m10644 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::read(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * FileLib_read_m10645 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::lines(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * FileLib_lines_m10646 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::seek(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * FileLib_seek_m10647 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.SeekOrigin Language.Lua.Library.FileLib::GetSeekOrigin(System.String)
extern "C" int32_t FileLib_GetSeekOrigin_m10648 (Object_t * __this /* static, unused */, String_t* ___whence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::write(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * FileLib_write_m10649 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.FileLib::flush(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * FileLib_flush_m10650 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
