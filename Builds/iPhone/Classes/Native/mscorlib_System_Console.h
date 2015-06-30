#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t2521;
// System.IO.TextReader
struct TextReader_t2480;
// System.Text.Encoding
struct Encoding_t602;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t3763  : public Object_t
{
};
struct Console_t3763_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t2521 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t2521 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t2480 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t602 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t602 * ___outputEncoding_4;
};
