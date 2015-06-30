#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidTimeZoneException
struct InvalidTimeZoneException_t3219;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidTimeZoneException::.ctor()
extern "C" void InvalidTimeZoneException__ctor_m14615 (InvalidTimeZoneException_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.String)
extern "C" void InvalidTimeZoneException__ctor_m14616 (InvalidTimeZoneException_t3219 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidTimeZoneException__ctor_m14617 (InvalidTimeZoneException_t3219 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
