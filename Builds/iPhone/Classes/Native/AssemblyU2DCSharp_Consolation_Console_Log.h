#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// Consolation.Console/Log
struct  Log_t563 
{
	// System.String Consolation.Console/Log::message
	String_t* ___message_0;
	// System.String Consolation.Console/Log::stackTrace
	String_t* ___stackTrace_1;
	// UnityEngine.LogType Consolation.Console/Log::type
	int32_t ___type_2;
};
// Native definition for marshalling of: Consolation.Console/Log
struct Log_t563_marshaled
{
	char* ___message_0;
	char* ___stackTrace_1;
	int32_t ___type_2;
};
