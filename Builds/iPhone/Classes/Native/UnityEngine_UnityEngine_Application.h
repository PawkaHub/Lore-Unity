#pragma once
#include <stdint.h>
// UnityEngine.Application/LogCallback
struct LogCallback_t721;
// UnityEngine.Application/LogCallback modreq(System.Runtime.CompilerServices.IsVolatile)
struct LogCallback_t721;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Application
struct  Application_t1853  : public Object_t
{
};
struct Application_t1853_StaticFields{
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t721 * ___s_LogCallbackHandler_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t721 * ___s_LogCallbackHandlerThreaded_1;
	// UnityEngine.Application/LogCallback modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Application::s_RegisterLogCallbackDeprecated
	LogCallback_t721 * ___s_RegisterLogCallbackDeprecated_2;
};
