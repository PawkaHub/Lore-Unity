#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3796;
// System.IO.TextReader
struct TextReader_t3795;
// System.Text.Encoding
struct Encoding_t680;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4459  : public Object_t
{
};
struct Console_t4459_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3796 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3796 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3795 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t680 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t680 * ___outputEncoding_4;
};
