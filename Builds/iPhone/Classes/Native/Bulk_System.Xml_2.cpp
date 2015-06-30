#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Xml.XmlImplementation
#include "System_Xml_System_Xml_XmlImplementation.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// System.Xml.XmlImplementation
#include "System_Xml_System_Xml_XmlImplementationMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Xml.NameTable
#include "System_Xml_System_Xml_NameTable.h"
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Xml.XmlDocument
#include "System_Xml_System_Xml_XmlDocument.h"
// System.Xml.NameTable
#include "System_Xml_System_Xml_NameTableMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Xml.XmlDocument
#include "System_Xml_System_Xml_XmlDocumentMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Xml.XmlImplementation::.ctor()
extern TypeInfo* NameTable_t2448_il2cpp_TypeInfo_var;
extern "C" void XmlImplementation__ctor_m10916 (XmlImplementation_t2467 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NameTable_t2448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4616);
		s_Il2CppMethodIntialized = true;
	}
	{
		NameTable_t2448 * L_0 = (NameTable_t2448 *)il2cpp_codegen_object_new (NameTable_t2448_il2cpp_TypeInfo_var);
		NameTable__ctor_m10627(L_0, /*hidden argument*/NULL);
		XmlImplementation__ctor_m10917(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlImplementation::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlImplementation__ctor_m10917 (XmlImplementation_t2467 * __this, XmlNameTable_t2314 * ___nameTable, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		XmlNameTable_t2314 * L_0 = ___nameTable;
		__this->___InternalNameTable_0 = L_0;
		return;
	}
}
// System.Xml.XmlDocument System.Xml.XmlImplementation::CreateDocument()
extern TypeInfo* XmlDocument_t2373_il2cpp_TypeInfo_var;
extern "C" XmlDocument_t2373 * XmlImplementation_CreateDocument_m10918 (XmlImplementation_t2467 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlDocument_t2373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4681);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlDocument_t2373 * L_0 = (XmlDocument_t2373 *)il2cpp_codegen_object_new (XmlDocument_t2373_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m10767(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlStreamReader
#include "System_Xml_System_Xml_XmlStreamReader.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlStreamReader
#include "System_Xml_System_Xml_XmlStreamReaderMethodDeclarations.h"

// System.Xml.XmlInputStream
#include "System_Xml_System_Xml_XmlInputStream.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.String
#include "mscorlib_System_String.h"
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Xml.XmlInputStream
#include "System_Xml_System_Xml_XmlInputStreamMethodDeclarations.h"
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReaderMethodDeclarations.h"
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlExceptionMethodDeclarations.h"


// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern TypeInfo* XmlInputStream_t2476_il2cpp_TypeInfo_var;
extern "C" void XmlStreamReader__ctor_m10919 (XmlStreamReader_t2477 * __this, XmlInputStream_t2476 * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlInputStream_t2476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4776);
		s_Il2CppMethodIntialized = true;
	}
	XmlInputStream_t2476 * G_B2_0 = {0};
	XmlStreamReader_t2477 * G_B2_1 = {0};
	XmlInputStream_t2476 * G_B1_0 = {0};
	XmlStreamReader_t2477 * G_B1_1 = {0};
	Encoding_t602 * G_B3_0 = {0};
	XmlInputStream_t2476 * G_B3_1 = {0};
	XmlStreamReader_t2477 * G_B3_2 = {0};
	{
		XmlInputStream_t2476 * L_0 = ___input;
		XmlInputStream_t2476 * L_1 = ___input;
		NullCheck(L_1);
		Encoding_t602 * L_2 = XmlInputStream_get_ActualEncoding_m10942(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_2)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0018;
		}
	}
	{
		XmlInputStream_t2476 * L_3 = ___input;
		NullCheck(L_3);
		Encoding_t602 * L_4 = XmlInputStream_get_ActualEncoding_m10942(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_t2476_il2cpp_TypeInfo_var);
		Encoding_t602 * L_5 = ((XmlInputStream_t2476_StaticFields*)XmlInputStream_t2476_il2cpp_TypeInfo_var->static_fields)->___StrictUTF8_1;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001d:
	{
		NullCheck(G_B3_2);
		NonBlockingStreamReader__ctor_m10925(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		XmlInputStream_t2476 * L_6 = ___input;
		__this->___input_12 = L_6;
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern TypeInfo* XmlInputStream_t2476_il2cpp_TypeInfo_var;
extern "C" void XmlStreamReader__ctor_m10920 (XmlStreamReader_t2477 * __this, Stream_t1271 * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlInputStream_t2476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4776);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t1271 * L_0 = ___input;
		XmlInputStream_t2476 * L_1 = (XmlInputStream_t2476 *)il2cpp_codegen_object_new (XmlInputStream_t2476_il2cpp_TypeInfo_var);
		XmlInputStream__ctor_m10936(L_1, L_0, /*hidden argument*/NULL);
		XmlStreamReader__ctor_m10919(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::.cctor()
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern TypeInfo* XmlStreamReader_t2477_il2cpp_TypeInfo_var;
extern "C" void XmlStreamReader__cctor_m10921 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		XmlStreamReader_t2477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4748);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlException_t2474 * L_0 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_0, (String_t*) &_stringLiteral2641, /*hidden argument*/NULL);
		((XmlStreamReader_t2477_StaticFields*)XmlStreamReader_t2477_il2cpp_TypeInfo_var->static_fields)->___invalidDataException_13 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::Close()
extern "C" void XmlStreamReader_Close_m10922 (XmlStreamReader_t2477 * __this, const MethodInfo* method)
{
	{
		XmlInputStream_t2476 * L_0 = (__this->___input_12);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Xml.XmlInputStream::Close() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* XmlStreamReader_t2477_il2cpp_TypeInfo_var;
extern "C" int32_t XmlStreamReader_Read_m10923 (XmlStreamReader_t2477 * __this, CharU5BU5D_t646* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		XmlStreamReader_t2477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4748);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			CharU5BU5D_t646* L_0 = ___dest_buffer;
			int32_t L_1 = ___index;
			int32_t L_2 = ___count;
			int32_t L_3 = NonBlockingStreamReader_Read_m10932(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			goto IL_0020;
		}

IL_000f:
		{
			; // IL_000f: leave IL_0020
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t1126_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0014:
	{ // begin catch(System.ArgumentException)
		IL2CPP_RUNTIME_CLASS_INIT(XmlStreamReader_t2477_il2cpp_TypeInfo_var);
		XmlException_t2474 * L_4 = ((XmlStreamReader_t2477_StaticFields*)XmlStreamReader_t2477_il2cpp_TypeInfo_var->static_fields)->___invalidDataException_13;
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0020;
	} // end catch (depth: 1)

IL_0020:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
extern "C" void XmlStreamReader_Dispose_m10924 (XmlStreamReader_t2477 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		NonBlockingStreamReader_Dispose_m10928(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void System.Xml.XmlStreamReader::Close() */, __this);
	}

IL_0013:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Byte
#include "mscorlib_System_Byte.h"
// System.Text.Decoder
#include "mscorlib_System_Text_Decoder.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
// System.Text.Decoder
#include "mscorlib_System_Text_DecoderMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void System.Xml.NonBlockingStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern TypeInfo* TextReader_t2480_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" void NonBlockingStreamReader__ctor_m10925 (NonBlockingStreamReader_t2478 * __this, Stream_t1271 * ___stream, Encoding_t602 * ___encoding, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextReader_t2480_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4777);
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t2480_il2cpp_TypeInfo_var);
		TextReader__ctor_m11569(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)1024);
		Stream_t1271 * L_0 = ___stream;
		__this->___base_stream_8 = L_0;
		int32_t L_1 = V_0;
		__this->___input_buffer_1 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, L_1));
		int32_t L_2 = V_0;
		__this->___buffer_size_5 = L_2;
		Encoding_t602 * L_3 = ___encoding;
		__this->___encoding_6 = L_3;
		Encoding_t602 * L_4 = ___encoding;
		NullCheck(L_4);
		Decoder_t2479 * L_5 = (Decoder_t2479 *)VirtFuncInvoker0< Decoder_t2479 * >::Invoke(15 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, L_4);
		__this->___decoder_7 = L_5;
		Encoding_t602 * L_6 = ___encoding;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_6, L_7);
		__this->___decoded_buffer_2 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, L_8));
		__this->___decoded_count_3 = 0;
		__this->___pos_4 = 0;
		return;
	}
}
// System.Text.Encoding System.Xml.NonBlockingStreamReader::get_Encoding()
extern "C" Encoding_t602 * NonBlockingStreamReader_get_Encoding_m10926 (NonBlockingStreamReader_t2478 * __this, const MethodInfo* method)
{
	{
		Encoding_t602 * L_0 = (__this->___encoding_6);
		return L_0;
	}
}
// System.Void System.Xml.NonBlockingStreamReader::Close()
extern "C" void NonBlockingStreamReader_Close_m10927 (NonBlockingStreamReader_t2478 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean) */, __this, 1);
		return;
	}
}
// System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean)
extern "C" void NonBlockingStreamReader_Dispose_m10928 (NonBlockingStreamReader_t2478 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Stream_t1271 * L_1 = (__this->___base_stream_8);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Stream_t1271 * L_2 = (__this->___base_stream_8);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_2);
	}

IL_001c:
	{
		__this->___input_buffer_1 = (ByteU5BU5D_t25*)NULL;
		__this->___decoded_buffer_2 = (CharU5BU5D_t646*)NULL;
		__this->___encoding_6 = (Encoding_t602 *)NULL;
		__this->___decoder_7 = (Decoder_t2479 *)NULL;
		__this->___base_stream_8 = (Stream_t1271 *)NULL;
		bool L_3 = ___disposing;
		TextReader_Dispose_m11570(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.NonBlockingStreamReader::ReadBuffer()
extern "C" int32_t NonBlockingStreamReader_ReadBuffer_m10929 (NonBlockingStreamReader_t2478 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___pos_4 = 0;
		V_0 = 0;
		__this->___decoded_count_3 = 0;
		V_1 = 0;
	}

IL_0012:
	{
		Stream_t1271 * L_0 = (__this->___base_stream_8);
		ByteU5BU5D_t25* L_1 = (__this->___input_buffer_1);
		int32_t L_2 = (__this->___buffer_size_5);
		NullCheck(L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		return 0;
	}

IL_0033:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->___buffer_size_5);
		__this->___mayBlock_9 = ((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		int32_t L_7 = (__this->___decoded_count_3);
		Decoder_t2479 * L_8 = (__this->___decoder_7);
		ByteU5BU5D_t25* L_9 = (__this->___input_buffer_1);
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		CharU5BU5D_t646* L_12 = (__this->___decoded_buffer_2);
		NullCheck(L_8);
		int32_t L_13 = (int32_t)VirtFuncInvoker5< int32_t, ByteU5BU5D_t25*, int32_t, int32_t, CharU5BU5D_t646*, int32_t >::Invoke(4 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_8, L_9, L_10, L_11, L_12, 0);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_7+(int32_t)L_13));
		V_1 = 0;
		int32_t L_14 = (__this->___decoded_count_3);
		if (!L_14)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_15 = (__this->___decoded_count_3);
		return L_15;
	}
}
// System.Int32 System.Xml.NonBlockingStreamReader::Peek()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern "C" int32_t NonBlockingStreamReader_Peek_m10930 (NonBlockingStreamReader_t2478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t1271 * L_0 = (__this->___base_stream_8);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11571(L_1, (String_t*) &_stringLiteral2642, (String_t*) &_stringLiteral2643, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0044;
		}
	}
	{
		bool L_4 = (__this->___mayBlock_9);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_5 = NonBlockingStreamReader_ReadBuffer_m10929(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (-1);
	}

IL_0044:
	{
		CharU5BU5D_t646* L_6 = (__this->___decoded_buffer_2);
		int32_t L_7 = (__this->___pos_4);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_6, L_8));
	}
}
// System.Int32 System.Xml.NonBlockingStreamReader::Read()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern "C" int32_t NonBlockingStreamReader_Read_m10931 (NonBlockingStreamReader_t2478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Stream_t1271 * L_0 = (__this->___base_stream_8);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11571(L_1, (String_t*) &_stringLiteral2642, (String_t*) &_stringLiteral2643, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_4 = NonBlockingStreamReader_ReadBuffer_m10929(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		return (-1);
	}

IL_0039:
	{
		CharU5BU5D_t646* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___pos_4 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_9));
	}
}
// System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int32_t NonBlockingStreamReader_Read_m10932 (NonBlockingStreamReader_t2478 * __this, CharU5BU5D_t646* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B15_0 = 0;
	{
		Stream_t1271 * L_0 = (__this->___base_stream_8);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11571(L_1, (String_t*) &_stringLiteral2642, (String_t*) &_stringLiteral2643, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		CharU5BU5D_t646* L_2 = ___dest_buffer;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*) &_stringLiteral2644, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002c:
	{
		int32_t L_4 = ___index;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_5 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_5, (String_t*) &_stringLiteral2645, (String_t*) &_stringLiteral1373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0043:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_7 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_7, (String_t*) &_stringLiteral2646, (String_t*) &_stringLiteral1373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_005a:
	{
		int32_t L_8 = ___index;
		CharU5BU5D_t646* L_9 = ___dest_buffer;
		NullCheck(L_9);
		int32_t L_10 = ___count;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*) &_stringLiteral2647, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0070:
	{
		V_0 = 0;
		int32_t L_12 = (__this->___pos_4);
		int32_t L_13 = (__this->___decoded_count_3);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_14 = NonBlockingStreamReader_ReadBuffer_m10929(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_16 = V_0;
		G_B15_0 = L_16;
		goto IL_009c;
	}

IL_009b:
	{
		G_B15_0 = 0;
	}

IL_009c:
	{
		return G_B15_0;
	}

IL_009d:
	{
		int32_t L_17 = (__this->___decoded_count_3);
		int32_t L_18 = (__this->___pos_4);
		int32_t L_19 = ___count;
		int32_t L_20 = Math_Min_m11572(NULL /*static, unused*/, ((int32_t)((int32_t)L_17-(int32_t)L_18)), L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		CharU5BU5D_t646* L_21 = (__this->___decoded_buffer_2);
		int32_t L_22 = (__this->___pos_4);
		CharU5BU5D_t646* L_23 = ___dest_buffer;
		int32_t L_24 = ___index;
		int32_t L_25 = V_1;
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/NULL);
		int32_t L_26 = (__this->___pos_4);
		int32_t L_27 = V_1;
		__this->___pos_4 = ((int32_t)((int32_t)L_26+(int32_t)L_27));
		int32_t L_28 = ___index;
		int32_t L_29 = V_1;
		___index = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		int32_t L_30 = ___count;
		int32_t L_31 = V_1;
		___count = ((int32_t)((int32_t)L_30-(int32_t)L_31));
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)L_33));
		int32_t L_34 = V_0;
		return L_34;
	}
}
// System.Int32 System.Xml.NonBlockingStreamReader::FindNextEOL()
extern "C" int32_t NonBlockingStreamReader_FindNextEOL_m10933 (NonBlockingStreamReader_t2478 * __this, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		goto IL_0092;
	}

IL_0007:
	{
		CharU5BU5D_t646* L_0 = (__this->___decoded_buffer_2);
		int32_t L_1 = (__this->___pos_4);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		uint16_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_4 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_4+(int32_t)1));
		bool L_5 = (__this->___foundCR_11);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_6-(int32_t)2));
		goto IL_004b;
	}

IL_0043:
	{
		int32_t L_7 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_004b:
	{
		V_1 = G_B5_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		V_1 = 0;
	}

IL_0055:
	{
		__this->___foundCR_11 = 0;
		int32_t L_9 = V_1;
		return L_9;
	}

IL_005e:
	{
		bool L_10 = (__this->___foundCR_11);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		__this->___foundCR_11 = 0;
		int32_t L_11 = (__this->___pos_4);
		return ((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_0079:
	{
		uint16_t L_12 = V_0;
		__this->___foundCR_11 = ((((int32_t)L_12) == ((int32_t)((int32_t)13)))? 1 : 0);
		int32_t L_13 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0092:
	{
		int32_t L_14 = (__this->___pos_4);
		int32_t L_15 = (__this->___decoded_count_3);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.String System.Xml.NonBlockingStreamReader::ReadLine()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern "C" String_t* NonBlockingStreamReader_ReadLine_m10934 (NonBlockingStreamReader_t2478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t619 * V_2 = {0};
	StringBuilder_t619 * V_3 = {0};
	{
		Stream_t1271 * L_0 = (__this->___base_stream_8);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11571(L_1, (String_t*) &_stringLiteral2642, (String_t*) &_stringLiteral2643, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_4 = NonBlockingStreamReader_ReadBuffer_m10929(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0039:
	{
		int32_t L_5 = (__this->___pos_4);
		V_0 = L_5;
		int32_t L_6 = NonBlockingStreamReader_FindNextEOL_m10933(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->___decoded_count_3);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_006a;
		}
	}
	{
		CharU5BU5D_t646* L_11 = (__this->___decoded_buffer_2);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		String_t* L_15 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_15 = String_CreateString_m11524(L_15, L_11, L_12, ((int32_t)((int32_t)L_13-(int32_t)L_14)), /*hidden argument*/NULL);
		return L_15;
	}

IL_006a:
	{
		StringBuilder_t619 * L_16 = (__this->___line_builder_10);
		if (L_16)
		{
			goto IL_0085;
		}
	}
	{
		StringBuilder_t619 * L_17 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_17, /*hidden argument*/NULL);
		__this->___line_builder_10 = L_17;
		goto IL_0091;
	}

IL_0085:
	{
		StringBuilder_t619 * L_18 = (__this->___line_builder_10);
		NullCheck(L_18);
		StringBuilder_set_Length_m11520(L_18, 0, /*hidden argument*/NULL);
	}

IL_0091:
	{
		bool L_19 = (__this->___foundCR_11);
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_20 = (__this->___decoded_count_3);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_20-(int32_t)1));
	}

IL_00aa:
	{
		StringBuilder_t619 * L_21 = (__this->___line_builder_10);
		CharU5BU5D_t646* L_22 = (__this->___decoded_buffer_2);
		int32_t L_23 = V_0;
		int32_t L_24 = (__this->___decoded_count_3);
		int32_t L_25 = V_0;
		String_t* L_26 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_26 = String_CreateString_m11524(L_26, L_22, L_23, ((int32_t)((int32_t)L_24-(int32_t)L_25)), /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m2790(L_21, L_26, /*hidden argument*/NULL);
		int32_t L_27 = NonBlockingStreamReader_ReadBuffer_m10929(__this, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_011e;
		}
	}
	{
		StringBuilder_t619 * L_28 = (__this->___line_builder_10);
		NullCheck(L_28);
		int32_t L_29 = StringBuilder_get_Capacity_m11574(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_29) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0106;
		}
	}
	{
		StringBuilder_t619 * L_30 = (__this->___line_builder_10);
		V_2 = L_30;
		__this->___line_builder_10 = (StringBuilder_t619 *)NULL;
		StringBuilder_t619 * L_31 = V_2;
		StringBuilder_t619 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = StringBuilder_get_Length_m6646(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_34 = StringBuilder_ToString_m11519(L_31, 0, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_0106:
	{
		StringBuilder_t619 * L_35 = (__this->___line_builder_10);
		StringBuilder_t619 * L_36 = (__this->___line_builder_10);
		NullCheck(L_36);
		int32_t L_37 = StringBuilder_get_Length_m6646(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_38 = StringBuilder_ToString_m11519(L_35, 0, L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_011e:
	{
		int32_t L_39 = (__this->___pos_4);
		V_0 = L_39;
		int32_t L_40 = NonBlockingStreamReader_FindNextEOL_m10933(__this, /*hidden argument*/NULL);
		V_1 = L_40;
		int32_t L_41 = V_1;
		int32_t L_42 = (__this->___decoded_count_3);
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_43 = V_1;
		int32_t L_44 = V_0;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_01a3;
		}
	}
	{
		StringBuilder_t619 * L_45 = (__this->___line_builder_10);
		CharU5BU5D_t646* L_46 = (__this->___decoded_buffer_2);
		int32_t L_47 = V_0;
		int32_t L_48 = V_1;
		int32_t L_49 = V_0;
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_50 = String_CreateString_m11524(L_50, L_46, L_47, ((int32_t)((int32_t)L_48-(int32_t)L_49)), /*hidden argument*/NULL);
		NullCheck(L_45);
		StringBuilder_Append_m2790(L_45, L_50, /*hidden argument*/NULL);
		StringBuilder_t619 * L_51 = (__this->___line_builder_10);
		NullCheck(L_51);
		int32_t L_52 = StringBuilder_get_Capacity_m11574(L_51, /*hidden argument*/NULL);
		if ((((int32_t)L_52) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_018b;
		}
	}
	{
		StringBuilder_t619 * L_53 = (__this->___line_builder_10);
		V_3 = L_53;
		__this->___line_builder_10 = (StringBuilder_t619 *)NULL;
		StringBuilder_t619 * L_54 = V_3;
		StringBuilder_t619 * L_55 = V_3;
		NullCheck(L_55);
		int32_t L_56 = StringBuilder_get_Length_m6646(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		String_t* L_57 = StringBuilder_ToString_m11519(L_54, 0, L_56, /*hidden argument*/NULL);
		return L_57;
	}

IL_018b:
	{
		StringBuilder_t619 * L_58 = (__this->___line_builder_10);
		StringBuilder_t619 * L_59 = (__this->___line_builder_10);
		NullCheck(L_59);
		int32_t L_60 = StringBuilder_get_Length_m6646(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		String_t* L_61 = StringBuilder_ToString_m11519(L_58, 0, L_60, /*hidden argument*/NULL);
		return L_61;
	}

IL_01a3:
	{
		goto IL_0091;
	}
}
// System.String System.Xml.NonBlockingStreamReader::ReadToEnd()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" String_t* NonBlockingStreamReader_ReadToEnd_m10935 (NonBlockingStreamReader_t2478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t619 * V_0 = {0};
	int32_t V_1 = 0;
	CharU5BU5D_t646* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stream_t1271 * L_0 = (__this->___base_stream_8);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11571(L_1, (String_t*) &_stringLiteral2642, (String_t*) &_stringLiteral2643, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		StringBuilder_t619 * L_2 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t646* L_3 = (__this->___decoded_buffer_2);
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		V_2 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, L_4));
		goto IL_0040;
	}

IL_0036:
	{
		StringBuilder_t619 * L_5 = V_0;
		CharU5BU5D_t646* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_5);
		StringBuilder_Append_m11575(L_5, L_6, 0, L_7, /*hidden argument*/NULL);
	}

IL_0040:
	{
		CharU5BU5D_t646* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t646*, int32_t, int32_t >::Invoke(9 /* System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32) */, __this, L_8, 0, L_9);
		int32_t L_11 = L_10;
		V_3 = L_11;
		if (L_11)
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t619 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_12);
		return L_13;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int64
#include "mscorlib_System_Int64.h"
// System.Text.UTF8Encoding
#include "mscorlib_System_Text_UTF8Encoding.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Text.UTF8Encoding
#include "mscorlib_System_Text_UTF8EncodingMethodDeclarations.h"
// System.Xml.XmlChar
#include "System_Xml_System_Xml_XmlCharMethodDeclarations.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
extern TypeInfo* Stream_t1271_il2cpp_TypeInfo_var;
extern "C" void XmlInputStream__ctor_m10936 (XmlInputStream_t2476 * __this, Stream_t1271 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2731);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1271_il2cpp_TypeInfo_var);
		Stream__ctor_m6685(__this, /*hidden argument*/NULL);
		Stream_t1271 * L_0 = ___stream;
		XmlInputStream_Initialize_m10939(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlInputStream::.cctor()
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern TypeInfo* XmlInputStream_t2476_il2cpp_TypeInfo_var;
extern TypeInfo* UTF8Encoding_t2557_il2cpp_TypeInfo_var;
extern "C" void XmlInputStream__cctor_m10937 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		XmlInputStream_t2476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4776);
		UTF8Encoding_t2557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4778);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlException_t2474 * L_0 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_0, (String_t*) &_stringLiteral2648, /*hidden argument*/NULL);
		((XmlInputStream_t2476_StaticFields*)XmlInputStream_t2476_il2cpp_TypeInfo_var->static_fields)->___encodingException_7 = L_0;
		UTF8Encoding_t2557 * L_1 = (UTF8Encoding_t2557 *)il2cpp_codegen_object_new (UTF8Encoding_t2557_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m11576(L_1, 0, 1, /*hidden argument*/NULL);
		((XmlInputStream_t2476_StaticFields*)XmlInputStream_t2476_il2cpp_TypeInfo_var->static_fields)->___StrictUTF8_1 = L_1;
		return;
	}
}
// System.String System.Xml.XmlInputStream::GetStringFromBytes(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern "C" String_t* XmlInputStream_GetStringFromBytes_m10938 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_0 = Encoding_get_ASCII_m6581(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_1 = ___bytes;
		int32_t L_2 = ___index;
		int32_t L_3 = ___count;
		NullCheck(L_0);
		String_t* L_4 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void System.Xml.XmlInputStream::Initialize(System.IO.Stream)
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern TypeInfo* XmlInputStream_t2476_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" void XmlInputStream_Initialize_m10939 (XmlInputStream_t2476 * __this, Stream_t1271 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		XmlInputStream_t2476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4776);
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringBuilder_t619 * V_3 = {0};
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		__this->___buffer_4 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)64)));
		Stream_t1271 * L_0 = ___stream;
		__this->___stream_3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_t2476_il2cpp_TypeInfo_var);
		Encoding_t602 * L_1 = ((XmlInputStream_t2476_StaticFields*)XmlInputStream_t2476_il2cpp_TypeInfo_var->static_fields)->___StrictUTF8_1;
		__this->___enc_2 = L_1;
		Stream_t1271 * L_2 = ___stream;
		ByteU5BU5D_t25* L_3 = (__this->___buffer_4);
		ByteU5BU5D_t25* L_4 = (__this->___buffer_4);
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, (((int32_t)(((Array_t *)L_4)->max_length))));
		__this->___bufLength_5 = L_5;
		int32_t L_6 = (__this->___bufLength_5);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_7 = (__this->___bufLength_5);
		if (L_7)
		{
			goto IL_0052;
		}
	}

IL_0051:
	{
		return;
	}

IL_0052:
	{
		int32_t L_8 = XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		V_5 = L_9;
		int32_t L_10 = V_5;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)254))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)255))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_12 = V_5;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)60))))
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_13 = V_5;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)239))))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_027e;
	}

IL_008e:
	{
		int32_t L_14 = XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_00b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_16 = Encoding_get_Unicode_m2673(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___enc_2 = L_16;
		goto IL_00b7;
	}

IL_00b0:
	{
		__this->___bufPos_6 = 0;
	}

IL_00b7:
	{
		goto IL_028a;
	}

IL_00bc:
	{
		int32_t L_17 = XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00da;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_19 = Encoding_get_BigEndianUnicode_m6609(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___enc_2 = L_19;
		return;
	}

IL_00da:
	{
		__this->___bufPos_6 = 0;
		goto IL_028a;
	}

IL_00e6:
	{
		int32_t L_20 = XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		V_0 = L_20;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)187)))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_22 = XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		V_0 = L_22;
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)191))))
		{
			goto IL_0111;
		}
	}
	{
		__this->___bufPos_6 = 0;
	}

IL_0111:
	{
		goto IL_0135;
	}

IL_0116:
	{
		ByteU5BU5D_t25* L_24 = (__this->___buffer_4);
		int32_t L_25 = (__this->___bufPos_6);
		int32_t L_26 = ((int32_t)((int32_t)L_25-(int32_t)1));
		V_6 = L_26;
		__this->___bufPos_6 = L_26;
		int32_t L_27 = V_6;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_27);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_27)) = (uint8_t)((int32_t)239);
	}

IL_0135:
	{
		goto IL_028a;
	}

IL_013a:
	{
		int32_t L_28 = (__this->___bufLength_5);
		if ((((int32_t)L_28) < ((int32_t)5)))
		{
			goto IL_0272;
		}
	}
	{
		ByteU5BU5D_t25* L_29 = (__this->___buffer_4);
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_t2476_il2cpp_TypeInfo_var);
		String_t* L_30 = XmlInputStream_GetStringFromBytes_m10938(NULL /*static, unused*/, L_29, 1, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m2344(NULL /*static, unused*/, L_30, (String_t*) &_stringLiteral2649, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_32 = (__this->___bufPos_6);
		__this->___bufPos_6 = ((int32_t)((int32_t)L_32+(int32_t)4));
		int32_t L_33 = XmlInputStream_SkipWhitespace_m10941(__this, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)118)))))
		{
			goto IL_01ad;
		}
	}
	{
		goto IL_019f;
	}

IL_0184:
	{
		int32_t L_35 = XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		V_0 = L_35;
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_019f;
		}
	}
	{
		XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_019f:
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0184;
		}
	}

IL_01a6:
	{
		int32_t L_38 = XmlInputStream_SkipWhitespace_m10941(__this, /*hidden argument*/NULL);
		V_0 = L_38;
	}

IL_01ad:
	{
		int32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_40 = (__this->___bufLength_5);
		int32_t L_41 = (__this->___bufPos_6);
		V_1 = ((int32_t)((int32_t)L_40-(int32_t)L_41));
		int32_t L_42 = V_1;
		if ((((int32_t)L_42) < ((int32_t)7)))
		{
			goto IL_0272;
		}
	}
	{
		ByteU5BU5D_t25* L_43 = (__this->___buffer_4);
		int32_t L_44 = (__this->___bufPos_6);
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_t2476_il2cpp_TypeInfo_var);
		String_t* L_45 = XmlInputStream_GetStringFromBytes_m10938(NULL /*static, unused*/, L_43, L_44, 7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_op_Equality_m2344(NULL /*static, unused*/, L_45, (String_t*) &_stringLiteral2650, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_47 = (__this->___bufPos_6);
		__this->___bufPos_6 = ((int32_t)((int32_t)L_47+(int32_t)7));
		int32_t L_48 = XmlInputStream_SkipWhitespace_m10941(__this, /*hidden argument*/NULL);
		V_0 = L_48;
		int32_t L_49 = V_0;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)61))))
		{
			goto IL_020e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_t2476_il2cpp_TypeInfo_var);
		XmlException_t2474 * L_50 = ((XmlInputStream_t2476_StaticFields*)XmlInputStream_t2476_il2cpp_TypeInfo_var->static_fields)->___encodingException_7;
		il2cpp_codegen_raise_exception(L_50);
	}

IL_020e:
	{
		int32_t L_51 = XmlInputStream_SkipWhitespace_m10941(__this, /*hidden argument*/NULL);
		V_0 = L_51;
		int32_t L_52 = V_0;
		V_2 = L_52;
		StringBuilder_t619 * L_53 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_53, /*hidden argument*/NULL);
		V_3 = L_53;
	}

IL_021d:
	{
		int32_t L_54 = XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		V_0 = L_54;
		int32_t L_55 = V_0;
		int32_t L_56 = V_2;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_56))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_024b;
	}

IL_0230:
	{
		int32_t L_57 = V_0;
		if ((((int32_t)L_57) >= ((int32_t)0)))
		{
			goto IL_023d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_t2476_il2cpp_TypeInfo_var);
		XmlException_t2474 * L_58 = ((XmlInputStream_t2476_StaticFields*)XmlInputStream_t2476_il2cpp_TypeInfo_var->static_fields)->___encodingException_7;
		il2cpp_codegen_raise_exception(L_58);
	}

IL_023d:
	{
		StringBuilder_t619 * L_59 = V_3;
		int32_t L_60 = V_0;
		NullCheck(L_59);
		StringBuilder_Append_m5401(L_59, (((uint16_t)L_60)), /*hidden argument*/NULL);
		goto IL_021d;
	}

IL_024b:
	{
		StringBuilder_t619 * L_61 = V_3;
		NullCheck(L_61);
		String_t* L_62 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_61);
		V_4 = L_62;
		String_t* L_63 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_64 = XmlChar_IsValidIANAEncoding_m10690(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0265;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_t2476_il2cpp_TypeInfo_var);
		XmlException_t2474 * L_65 = ((XmlInputStream_t2476_StaticFields*)XmlInputStream_t2476_il2cpp_TypeInfo_var->static_fields)->___encodingException_7;
		il2cpp_codegen_raise_exception(L_65);
	}

IL_0265:
	{
		String_t* L_66 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_67 = Encoding_GetEncoding_m11577(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		__this->___enc_2 = L_67;
	}

IL_0272:
	{
		__this->___bufPos_6 = 0;
		goto IL_028a;
	}

IL_027e:
	{
		__this->___bufPos_6 = 0;
		goto IL_028a;
	}

IL_028a:
	{
		return;
	}
}
// System.Int32 System.Xml.XmlInputStream::ReadByteSpecial()
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" int32_t XmlInputStream_ReadByteSpecial_m10940 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___bufLength_5);
		int32_t L_1 = (__this->___bufPos_6);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		ByteU5BU5D_t25* L_2 = (__this->___buffer_4);
		int32_t L_3 = (__this->___bufPos_6);
		int32_t L_4 = L_3;
		V_2 = L_4;
		__this->___bufPos_6 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_6));
	}

IL_002a:
	{
		ByteU5BU5D_t25* L_7 = (__this->___buffer_4);
		NullCheck(L_7);
		V_0 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))*(int32_t)2))));
		ByteU5BU5D_t25* L_8 = (__this->___buffer_4);
		ByteU5BU5D_t25* L_9 = V_0;
		int32_t L_10 = (__this->___bufLength_5);
		Buffer_BlockCopy_m6567(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, 0, (Array_t *)(Array_t *)L_9, 0, L_10, /*hidden argument*/NULL);
		Stream_t1271 * L_11 = (__this->___stream_3);
		ByteU5BU5D_t25* L_12 = V_0;
		int32_t L_13 = (__this->___bufLength_5);
		ByteU5BU5D_t25* L_14 = (__this->___buffer_4);
		NullCheck(L_14);
		NullCheck(L_11);
		int32_t L_15 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, L_13, (((int32_t)(((Array_t *)L_14)->max_length))));
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0078;
		}
	}

IL_0076:
	{
		return (-1);
	}

IL_0078:
	{
		int32_t L_18 = (__this->___bufLength_5);
		int32_t L_19 = V_1;
		__this->___bufLength_5 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
		ByteU5BU5D_t25* L_20 = V_0;
		__this->___buffer_4 = L_20;
		ByteU5BU5D_t25* L_21 = (__this->___buffer_4);
		int32_t L_22 = (__this->___bufPos_6);
		int32_t L_23 = L_22;
		V_2 = L_23;
		__this->___bufPos_6 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_24);
		int32_t L_25 = L_24;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_25));
	}
}
// System.Int32 System.Xml.XmlInputStream::SkipWhitespace()
extern "C" int32_t XmlInputStream_SkipWhitespace_m10941 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;

IL_0000:
	{
		int32_t L_0 = XmlInputStream_ReadByteSpecial_m10940(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = (((uint16_t)L_1));
		uint16_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0039;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0027;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0027;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0034;
		}
	}

IL_0027:
	{
		uint16_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)32))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0048;
	}

IL_0034:
	{
		goto IL_0043;
	}

IL_0039:
	{
		goto IL_0043;
	}

IL_003e:
	{
		goto IL_0043;
	}

IL_0043:
	{
		goto IL_0000;
	}

IL_0048:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
	// Dead block : IL_004a: br IL_0000
}
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
extern "C" Encoding_t602 * XmlInputStream_get_ActualEncoding_m10942 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	{
		Encoding_t602 * L_0 = (__this->___enc_2);
		return L_0;
	}
}
// System.Boolean System.Xml.XmlInputStream::get_CanRead()
extern "C" bool XmlInputStream_get_CanRead_m10943 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___bufLength_5);
		int32_t L_1 = (__this->___bufPos_6);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		return 1;
	}

IL_0013:
	{
		Stream_t1271 * L_2 = (__this->___stream_3);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		return L_3;
	}
}
// System.Boolean System.Xml.XmlInputStream::get_CanSeek()
extern "C" bool XmlInputStream_get_CanSeek_m10944 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Xml.XmlInputStream::get_CanWrite()
extern "C" bool XmlInputStream_get_CanWrite_m10945 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int64 System.Xml.XmlInputStream::get_Length()
extern "C" int64_t XmlInputStream_get_Length_m10946 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	{
		Stream_t1271 * L_0 = (__this->___stream_3);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 System.Xml.XmlInputStream::get_Position()
extern "C" int64_t XmlInputStream_get_Position_m10947 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	{
		Stream_t1271 * L_0 = (__this->___stream_3);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		int32_t L_2 = (__this->___bufLength_5);
		int32_t L_3 = (__this->___bufPos_6);
		return ((int64_t)((int64_t)((int64_t)((int64_t)L_1-(int64_t)(((int64_t)L_2))))+(int64_t)(((int64_t)L_3))));
	}
}
// System.Void System.Xml.XmlInputStream::set_Position(System.Int64)
extern "C" void XmlInputStream_set_Position_m10948 (XmlInputStream_t2476 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		int32_t L_1 = (__this->___bufLength_5);
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)L_1)))))
		{
			goto IL_001a;
		}
	}
	{
		int64_t L_2 = ___value;
		__this->___bufPos_6 = (((int32_t)L_2));
		goto IL_002e;
	}

IL_001a:
	{
		Stream_t1271 * L_3 = (__this->___stream_3);
		int64_t L_4 = ___value;
		int32_t L_5 = (__this->___bufLength_5);
		NullCheck(L_3);
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_3, ((int64_t)((int64_t)L_4-(int64_t)(((int64_t)L_5)))));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Xml.XmlInputStream::Close()
extern "C" void XmlInputStream_Close_m10949 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	{
		Stream_t1271 * L_0 = (__this->___stream_3);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_0);
		return;
	}
}
// System.Void System.Xml.XmlInputStream::Flush()
extern "C" void XmlInputStream_Flush_m10950 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	{
		Stream_t1271 * L_0 = (__this->___stream_3);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t XmlInputStream_Read_m10951 (XmlInputStream_t2476 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___count;
		int32_t L_1 = (__this->___bufLength_5);
		int32_t L_2 = (__this->___bufPos_6);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2)))))
		{
			goto IL_003c;
		}
	}
	{
		ByteU5BU5D_t25* L_3 = (__this->___buffer_4);
		int32_t L_4 = (__this->___bufPos_6);
		ByteU5BU5D_t25* L_5 = ___buffer;
		int32_t L_6 = ___offset;
		int32_t L_7 = ___count;
		Buffer_BlockCopy_m6567(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, L_4, (Array_t *)(Array_t *)L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___bufPos_6);
		int32_t L_9 = ___count;
		__this->___bufPos_6 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		int32_t L_10 = ___count;
		V_0 = L_10;
		goto IL_0092;
	}

IL_003c:
	{
		int32_t L_11 = (__this->___bufLength_5);
		int32_t L_12 = (__this->___bufPos_6);
		V_1 = ((int32_t)((int32_t)L_11-(int32_t)L_12));
		int32_t L_13 = (__this->___bufLength_5);
		int32_t L_14 = (__this->___bufPos_6);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_t25* L_15 = (__this->___buffer_4);
		int32_t L_16 = (__this->___bufPos_6);
		ByteU5BU5D_t25* L_17 = ___buffer;
		int32_t L_18 = ___offset;
		int32_t L_19 = V_1;
		Buffer_BlockCopy_m6567(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, (Array_t *)(Array_t *)L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___bufPos_6);
		int32_t L_21 = V_1;
		__this->___bufPos_6 = ((int32_t)((int32_t)L_20+(int32_t)L_21));
	}

IL_007d:
	{
		int32_t L_22 = V_1;
		Stream_t1271 * L_23 = (__this->___stream_3);
		ByteU5BU5D_t25* L_24 = ___buffer;
		int32_t L_25 = ___offset;
		int32_t L_26 = V_1;
		int32_t L_27 = ___count;
		int32_t L_28 = V_1;
		NullCheck(L_23);
		int32_t L_29 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t25*, int32_t, int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, ((int32_t)((int32_t)L_25+(int32_t)L_26)), ((int32_t)((int32_t)L_27-(int32_t)L_28)));
		V_0 = ((int32_t)((int32_t)L_22+(int32_t)L_29));
	}

IL_0092:
	{
		int32_t L_30 = V_0;
		return L_30;
	}
}
// System.Int32 System.Xml.XmlInputStream::ReadByte()
extern "C" int32_t XmlInputStream_ReadByte_m10952 (XmlInputStream_t2476 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___bufLength_5);
		int32_t L_1 = (__this->___bufPos_6);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		ByteU5BU5D_t25* L_2 = (__this->___buffer_4);
		int32_t L_3 = (__this->___bufPos_6);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->___bufPos_6 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_6));
	}

IL_002a:
	{
		Stream_t1271 * L_7 = (__this->___stream_3);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.IO.Stream::ReadByte() */, L_7);
		return L_8;
	}
}
// System.Int64 System.Xml.XmlInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t XmlInputStream_Seek_m10953 (XmlInputStream_t2476 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___bufLength_5);
		int32_t L_1 = (__this->___bufPos_6);
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		int32_t L_2 = ___origin;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0041;
		}
	}
	{
		int64_t L_3 = ___offset;
		int32_t L_4 = V_0;
		if ((((int64_t)L_3) >= ((int64_t)(((int64_t)L_4)))))
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_t25* L_5 = (__this->___buffer_4);
		int32_t L_6 = (__this->___bufPos_6);
		int64_t L_7 = ___offset;
		if ((int64_t)(((int64_t)((int64_t)(((int64_t)L_6))+(int64_t)L_7))) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, (((intptr_t)((int64_t)((int64_t)(((int64_t)L_6))+(int64_t)L_7)))));
		intptr_t L_8 = (((intptr_t)((int64_t)((int64_t)(((int64_t)L_6))+(int64_t)L_7))));
		return (((int64_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_8))));
	}

IL_0030:
	{
		Stream_t1271 * L_9 = (__this->___stream_3);
		int64_t L_10 = ___offset;
		int32_t L_11 = V_0;
		int32_t L_12 = ___origin;
		NullCheck(L_9);
		int64_t L_13 = (int64_t)VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(18 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, ((int64_t)((int64_t)L_10-(int64_t)(((int64_t)L_11)))), L_12);
		return L_13;
	}

IL_0041:
	{
		Stream_t1271 * L_14 = (__this->___stream_3);
		int64_t L_15 = ___offset;
		int32_t L_16 = ___origin;
		NullCheck(L_14);
		int64_t L_17 = (int64_t)VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(18 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_14, L_15, L_16);
		return L_17;
	}
}
// System.Void System.Xml.XmlInputStream::SetLength(System.Int64)
extern "C" void XmlInputStream_SetLength_m10954 (XmlInputStream_t2476 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		Stream_t1271 * L_0 = (__this->___stream_3);
		int64_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(19 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void XmlInputStream_Write_m10955 (XmlInputStream_t2476 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2434(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Xml.XmlLinkedNode
#include "System_Xml_System_Xml_XmlLinkedNode.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlLinkedNode
#include "System_Xml_System_Xml_XmlLinkedNodeMethodDeclarations.h"

// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNodeMethodDeclarations.h"


// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern TypeInfo* XmlNode_t2457_il2cpp_TypeInfo_var;
extern "C" void XmlLinkedNode__ctor_m10956 (XmlLinkedNode_t2455 * __this, XmlDocument_t2373 * ___doc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNode_t2457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlDocument_t2373 * L_0 = ___doc;
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t2457_il2cpp_TypeInfo_var);
		XmlNode__ctor_m11007(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C" bool XmlLinkedNode_get_IsRooted_m10957 (XmlLinkedNode_t2455 * __this, const MethodInfo* method)
{
	XmlNode_t2457 * V_0 = {0};
	{
		XmlNode_t2457 * L_0 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		V_0 = L_0;
		goto IL_0022;
	}

IL_000c:
	{
		XmlNode_t2457 * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		XmlNode_t2457 * L_3 = V_0;
		NullCheck(L_3);
		XmlNode_t2457 * L_4 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_3);
		V_0 = L_4;
	}

IL_0022:
	{
		XmlNode_t2457 * L_5 = V_0;
		if (L_5)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}
}
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C" XmlNode_t2457 * XmlLinkedNode_get_NextSibling_m10958 (XmlLinkedNode_t2455 * __this, const MethodInfo* method)
{
	XmlLinkedNode_t2455 * G_B4_0 = {0};
	{
		XmlNode_t2457 * L_0 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		XmlNode_t2457 * L_1 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		NullCheck(L_1);
		XmlNode_t2457 * L_2 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(13 /* System.Xml.XmlNode System.Xml.XmlNode::get_LastChild() */, L_1);
		if ((!(((Object_t*)(XmlNode_t2457 *)L_2) == ((Object_t*)(XmlLinkedNode_t2455 *)__this))))
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		G_B4_0 = ((XmlLinkedNode_t2455 *)(NULL));
		goto IL_0028;
	}

IL_0022:
	{
		XmlLinkedNode_t2455 * L_3 = (__this->___nextSibling_5);
		G_B4_0 = L_3;
	}

IL_0028:
	{
		return G_B4_0;
	}
}
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C" XmlLinkedNode_t2455 * XmlLinkedNode_get_NextLinkedSibling_m10959 (XmlLinkedNode_t2455 * __this, const MethodInfo* method)
{
	{
		XmlLinkedNode_t2455 * L_0 = (__this->___nextSibling_5);
		return L_0;
	}
}
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C" void XmlLinkedNode_set_NextLinkedSibling_m10960 (XmlLinkedNode_t2455 * __this, XmlLinkedNode_t2455 * ___value, const MethodInfo* method)
{
	{
		XmlLinkedNode_t2455 * L_0 = ___value;
		__this->___nextSibling_5 = L_0;
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C" XmlNode_t2457 * XmlLinkedNode_get_PreviousSibling_m10961 (XmlLinkedNode_t2455 * __this, const MethodInfo* method)
{
	XmlNode_t2457 * V_0 = {0};
	{
		XmlNode_t2457 * L_0 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		XmlNode_t2457 * L_1 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		NullCheck(L_1);
		XmlNode_t2457 * L_2 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, L_1);
		V_0 = L_2;
		XmlNode_t2457 * L_3 = V_0;
		if ((((Object_t*)(XmlNode_t2457 *)L_3) == ((Object_t*)(XmlLinkedNode_t2455 *)__this)))
		{
			goto IL_0039;
		}
	}

IL_001e:
	{
		XmlNode_t2457 * L_4 = V_0;
		NullCheck(L_4);
		XmlNode_t2457 * L_5 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(17 /* System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling() */, L_4);
		if ((!(((Object_t*)(XmlNode_t2457 *)L_5) == ((Object_t*)(XmlLinkedNode_t2455 *)__this))))
		{
			goto IL_002c;
		}
	}
	{
		XmlNode_t2457 * L_6 = V_0;
		return L_6;
	}

IL_002c:
	{
		XmlNode_t2457 * L_7 = V_0;
		NullCheck(L_7);
		XmlNode_t2457 * L_8 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(17 /* System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling() */, L_7);
		XmlNode_t2457 * L_9 = L_8;
		V_0 = L_9;
		if (L_9)
		{
			goto IL_001e;
		}
	}

IL_0039:
	{
		return (XmlNode_t2457 *)NULL;
	}
}
// System.Xml.XmlNameEntry
#include "System_Xml_System_Xml_XmlNameEntry.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNameEntry
#include "System_Xml_System_Xml_XmlNameEntryMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNameEntryCache
#include "System_Xml_System_Xml_XmlNameEntryCache.h"
// System.Xml.XmlNameEntryCache
#include "System_Xml_System_Xml_XmlNameEntryCacheMethodDeclarations.h"


// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
extern "C" void XmlNameEntry__ctor_m10962 (XmlNameEntry_t2454 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___prefix;
		String_t* L_1 = ___local;
		String_t* L_2 = ___ns;
		XmlNameEntry_Update_m10963(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
extern "C" void XmlNameEntry_Update_m10963 (XmlNameEntry_t2454 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	XmlNameEntry_t2454 * G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	XmlNameEntry_t2454 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	XmlNameEntry_t2454 * G_B3_2 = {0};
	{
		String_t* L_0 = ___prefix;
		__this->___Prefix_0 = L_0;
		String_t* L_1 = ___local;
		__this->___LocalName_1 = L_1;
		String_t* L_2 = ___ns;
		__this->___NS_2 = L_2;
		String_t* L_3 = ___local;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_3);
		String_t* L_5 = ___prefix;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2782(L_5, /*hidden argument*/NULL);
		G_B1_0 = L_4;
		G_B1_1 = __this;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_0033;
		}
	}
	{
		String_t* L_7 = ___prefix;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_7);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0034:
	{
		NullCheck(G_B3_2);
		G_B3_2->___Hash_3 = ((int32_t)((int32_t)G_B3_1+(int32_t)G_B3_0));
		return;
	}
}
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
extern TypeInfo* XmlNameEntry_t2454_il2cpp_TypeInfo_var;
extern "C" bool XmlNameEntry_Equals_m10964 (XmlNameEntry_t2454 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNameEntry_t2454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4779);
		s_Il2CppMethodIntialized = true;
	}
	XmlNameEntry_t2454 * V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		V_0 = ((XmlNameEntry_t2454 *)IsInst(L_0, XmlNameEntry_t2454_il2cpp_TypeInfo_var));
		XmlNameEntry_t2454 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		XmlNameEntry_t2454 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (L_2->___Hash_3);
		int32_t L_4 = (__this->___Hash_3);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_005d;
		}
	}
	{
		XmlNameEntry_t2454 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___LocalName_1);
		String_t* L_7 = (__this->___LocalName_1);
		bool L_8 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		XmlNameEntry_t2454 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___NS_2);
		String_t* L_11 = (__this->___NS_2);
		bool L_12 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		XmlNameEntry_t2454 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = (L_13->___Prefix_0);
		String_t* L_15 = (__this->___Prefix_0);
		bool L_16 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_16));
		goto IL_005e;
	}

IL_005d:
	{
		G_B6_0 = 0;
	}

IL_005e:
	{
		return G_B6_0;
	}
}
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
extern "C" int32_t XmlNameEntry_GetHashCode_m10965 (XmlNameEntry_t2454 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___Hash_3);
		return L_0;
	}
}
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
extern "C" String_t* XmlNameEntry_GetPrefixedName_m10966 (XmlNameEntry_t2454 * __this, XmlNameEntryCache_t2468 * ___owner, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___prefixed_name_cache_4);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		XmlNameEntryCache_t2468 * L_1 = ___owner;
		String_t* L_2 = (__this->___Prefix_0);
		String_t* L_3 = (__this->___LocalName_1);
		NullCheck(L_1);
		String_t* L_4 = XmlNameEntryCache_GetAtomizedPrefixedName_m10968(L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->___prefixed_name_cache_4 = L_4;
	}

IL_0023:
	{
		String_t* L_5 = (__this->___prefixed_name_cache_4);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTableMethodDeclarations.h"


// System.Void System.Xml.XmlNameEntryCache::.ctor(System.Xml.XmlNameTable)
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNameEntry_t2454_il2cpp_TypeInfo_var;
extern "C" void XmlNameEntryCache__ctor_m10967 (XmlNameEntryCache_t2468 * __this, XmlNameTable_t2314 * ___nameTable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlNameEntry_t2454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4779);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t1256 * L_0 = (Hashtable_t1256 *)il2cpp_codegen_object_new (Hashtable_t1256_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6660(L_0, /*hidden argument*/NULL);
		__this->___table_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlNameEntry_t2454 * L_4 = (XmlNameEntry_t2454 *)il2cpp_codegen_object_new (XmlNameEntry_t2454_il2cpp_TypeInfo_var);
		XmlNameEntry__ctor_m10962(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->___dummy_2 = L_4;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		XmlNameTable_t2314 * L_5 = ___nameTable;
		__this->___nameTable_1 = L_5;
		return;
	}
}
// System.String System.Xml.XmlNameEntryCache::GetAtomizedPrefixedName(System.String,System.String)
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNameEntryCache_GetAtomizedPrefixedName_m10968 (XmlNameEntryCache_t2468 * __this, String_t* ___prefix, String_t* ___local, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___prefix;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___prefix;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2782(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		String_t* L_3 = ___local;
		return L_3;
	}

IL_0013:
	{
		CharU5BU5D_t646* L_4 = (__this->___cacheBuffer_3);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		__this->___cacheBuffer_3 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, ((int32_t)20)));
	}

IL_002b:
	{
		CharU5BU5D_t646* L_5 = (__this->___cacheBuffer_3);
		NullCheck(L_5);
		String_t* L_6 = ___prefix;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m2782(L_6, /*hidden argument*/NULL);
		String_t* L_8 = ___local;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2782(L_8, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7+(int32_t)L_9))+(int32_t)1)))))
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_10 = ___prefix;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m2782(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___local;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m2782(L_12, /*hidden argument*/NULL);
		CharU5BU5D_t646* L_14 = (__this->___cacheBuffer_3);
		NullCheck(L_14);
		int32_t L_15 = Math_Max_m6594(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_13))+(int32_t)1)), ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_14)->max_length)))<<(int32_t)1)), /*hidden argument*/NULL);
		__this->___cacheBuffer_3 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, L_15));
	}

IL_0070:
	{
		String_t* L_16 = ___prefix;
		CharU5BU5D_t646* L_17 = (__this->___cacheBuffer_3);
		String_t* L_18 = ___prefix;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m2782(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_CopyTo_m11578(L_16, 0, L_17, 0, L_19, /*hidden argument*/NULL);
		CharU5BU5D_t646* L_20 = (__this->___cacheBuffer_3);
		String_t* L_21 = ___prefix;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m2782(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_20, L_22)) = (uint16_t)((int32_t)58);
		String_t* L_23 = ___local;
		CharU5BU5D_t646* L_24 = (__this->___cacheBuffer_3);
		String_t* L_25 = ___prefix;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m2782(L_25, /*hidden argument*/NULL);
		String_t* L_27 = ___local;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m2782(L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_CopyTo_m11578(L_23, 0, L_24, ((int32_t)((int32_t)L_26+(int32_t)1)), L_28, /*hidden argument*/NULL);
		XmlNameTable_t2314 * L_29 = (__this->___nameTable_1);
		CharU5BU5D_t646* L_30 = (__this->___cacheBuffer_3);
		String_t* L_31 = ___prefix;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m2782(L_31, /*hidden argument*/NULL);
		String_t* L_33 = ___local;
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m2782(L_33, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_35 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t646*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_29, L_30, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_32+(int32_t)L_34))+(int32_t)1)));
		return L_35;
	}
}
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::Add(System.String,System.String,System.String,System.Boolean)
extern TypeInfo* XmlNameEntry_t2454_il2cpp_TypeInfo_var;
extern "C" XmlNameEntry_t2454 * XmlNameEntryCache_Add_m10969 (XmlNameEntryCache_t2468 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNameEntry_t2454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4779);
		s_Il2CppMethodIntialized = true;
	}
	XmlNameEntry_t2454 * V_0 = {0};
	{
		bool L_0 = ___atomic;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		XmlNameTable_t2314 * L_1 = (__this->___nameTable_1);
		String_t* L_2 = ___prefix;
		NullCheck(L_1);
		String_t* L_3 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_1, L_2);
		___prefix = L_3;
		XmlNameTable_t2314 * L_4 = (__this->___nameTable_1);
		String_t* L_5 = ___local;
		NullCheck(L_4);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_4, L_5);
		___local = L_6;
		XmlNameTable_t2314 * L_7 = (__this->___nameTable_1);
		String_t* L_8 = ___ns;
		NullCheck(L_7);
		String_t* L_9 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_7, L_8);
		___ns = L_9;
	}

IL_0031:
	{
		String_t* L_10 = ___prefix;
		String_t* L_11 = ___local;
		String_t* L_12 = ___ns;
		XmlNameEntry_t2454 * L_13 = XmlNameEntryCache_GetInternal_m10970(__this, L_10, L_11, L_12, 1, /*hidden argument*/NULL);
		V_0 = L_13;
		XmlNameEntry_t2454 * L_14 = V_0;
		if (L_14)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_15 = ___prefix;
		String_t* L_16 = ___local;
		String_t* L_17 = ___ns;
		XmlNameEntry_t2454 * L_18 = (XmlNameEntry_t2454 *)il2cpp_codegen_object_new (XmlNameEntry_t2454_il2cpp_TypeInfo_var);
		XmlNameEntry__ctor_m10962(L_18, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		Hashtable_t1256 * L_19 = (__this->___table_0);
		XmlNameEntry_t2454 * L_20 = V_0;
		XmlNameEntry_t2454 * L_21 = V_0;
		NullCheck(L_19);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_19, L_20, L_21);
	}

IL_0058:
	{
		XmlNameEntry_t2454 * L_22 = V_0;
		return L_22;
	}
}
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::GetInternal(System.String,System.String,System.String,System.Boolean)
extern TypeInfo* XmlNameEntry_t2454_il2cpp_TypeInfo_var;
extern "C" XmlNameEntry_t2454 * XmlNameEntryCache_GetInternal_m10970 (XmlNameEntryCache_t2468 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNameEntry_t2454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4779);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___atomic;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		XmlNameTable_t2314 * L_1 = (__this->___nameTable_1);
		String_t* L_2 = ___prefix;
		NullCheck(L_1);
		String_t* L_3 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		XmlNameTable_t2314 * L_4 = (__this->___nameTable_1);
		String_t* L_5 = ___local;
		NullCheck(L_4);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		XmlNameTable_t2314 * L_7 = (__this->___nameTable_1);
		String_t* L_8 = ___ns;
		NullCheck(L_7);
		String_t* L_9 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_7, L_8);
		if (L_9)
		{
			goto IL_003c;
		}
	}

IL_003a:
	{
		return (XmlNameEntry_t2454 *)NULL;
	}

IL_003c:
	{
		XmlNameEntry_t2454 * L_10 = (__this->___dummy_2);
		String_t* L_11 = ___prefix;
		String_t* L_12 = ___local;
		String_t* L_13 = ___ns;
		NullCheck(L_10);
		XmlNameEntry_Update_m10963(L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		Hashtable_t1256 * L_14 = (__this->___table_0);
		XmlNameEntry_t2454 * L_15 = (__this->___dummy_2);
		NullCheck(L_14);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_15);
		return ((XmlNameEntry_t2454 *)IsInst(L_16, XmlNameEntry_t2454_il2cpp_TypeInfo_var));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Xml.XmlNameTable::.ctor()
extern "C" void XmlNameTable__ctor_m10971 (XmlNameTable_t2314 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlNameTable::Add(System.String)
// System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32)
// System.String System.Xml.XmlNameTable::Get(System.String)
// System.Xml.XmlNamedNodeMap
#include "System_Xml_System_Xml_XmlNamedNodeMap.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNamedNodeMap
#include "System_Xml_System_Xml_XmlNamedNodeMapMethodDeclarations.h"

// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
#include "System.Xml_ArrayTypes.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"


// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
extern "C" void XmlNamedNodeMap__ctor_m10972 (XmlNamedNodeMap_t2459 * __this, XmlNode_t2457 * ___parent, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		XmlNode_t2457 * L_0 = ___parent;
		__this->___parent_1 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
extern TypeInfo* XmlNodeU5BU5D_t2548_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNamedNodeMap_t2459_il2cpp_TypeInfo_var;
extern "C" void XmlNamedNodeMap__cctor_m10973 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNodeU5BU5D_t2548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4661);
		XmlNamedNodeMap_t2459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4752);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck(((XmlNodeU5BU5D_t2548*)SZArrayNew(XmlNodeU5BU5D_t2548_il2cpp_TypeInfo_var, 0)));
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Array::GetEnumerator() */, ((XmlNodeU5BU5D_t2548*)SZArrayNew(XmlNodeU5BU5D_t2548_il2cpp_TypeInfo_var, 0)));
		((XmlNamedNodeMap_t2459_StaticFields*)XmlNamedNodeMap_t2459_il2cpp_TypeInfo_var->static_fields)->___emptyEnumerator_0 = L_0;
		return;
	}
}
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
extern TypeInfo* ArrayList_t1188_il2cpp_TypeInfo_var;
extern "C" ArrayList_t1188 * XmlNamedNodeMap_get_NodeList_m10974 (XmlNamedNodeMap_t2459 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t1188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2623);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t1188 * L_0 = (__this->___nodeList_2);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t1188 * L_1 = (ArrayList_t1188 *)il2cpp_codegen_object_new (ArrayList_t1188_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6571(L_1, /*hidden argument*/NULL);
		__this->___nodeList_2 = L_1;
	}

IL_0016:
	{
		ArrayList_t1188 * L_2 = (__this->___nodeList_2);
		return L_2;
	}
}
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
extern "C" int32_t XmlNamedNodeMap_get_Count_m10975 (XmlNamedNodeMap_t2459 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		ArrayList_t1188 * L_0 = (__this->___nodeList_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		ArrayList_t1188 * L_1 = (__this->___nodeList_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
extern TypeInfo* XmlNamedNodeMap_t2459_il2cpp_TypeInfo_var;
extern "C" Object_t * XmlNamedNodeMap_GetEnumerator_m10976 (XmlNamedNodeMap_t2459 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNamedNodeMap_t2459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4752);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t1188 * L_0 = (__this->___nodeList_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlNamedNodeMap_t2459_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((XmlNamedNodeMap_t2459_StaticFields*)XmlNamedNodeMap_t2459_il2cpp_TypeInfo_var->static_fields)->___emptyEnumerator_0;
		return L_1;
	}

IL_0011:
	{
		ArrayList_t1188 * L_2 = (__this->___nodeList_2);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(40 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		return L_3;
	}
}
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
extern TypeInfo* XmlNode_t2457_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNamedNodeMap_GetNamedItem_m10977 (XmlNamedNodeMap_t2459 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNode_t2457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	XmlNode_t2457 * V_1 = {0};
	{
		ArrayList_t1188 * L_0 = (__this->___nodeList_2);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (XmlNode_t2457 *)NULL;
	}

IL_000d:
	{
		V_0 = 0;
		goto IL_003d;
	}

IL_0014:
	{
		ArrayList_t1188 * L_1 = (__this->___nodeList_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_1, L_2);
		V_1 = ((XmlNode_t2457 *)Castclass(L_3, XmlNode_t2457_il2cpp_TypeInfo_var));
		XmlNode_t2457 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlNode::get_Name() */, L_4);
		String_t* L_6 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m2344(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		XmlNode_t2457 * L_8 = V_1;
		return L_8;
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		ArrayList_t1188 * L_11 = (__this->___nodeList_2);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0014;
		}
	}
	{
		return (XmlNode_t2457 *)NULL;
	}
}
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
extern TypeInfo* XmlNode_t2457_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNamedNodeMap_RemoveNamedItem_m10978 (XmlNamedNodeMap_t2459 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNode_t2457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	XmlNode_t2457 * V_1 = {0};
	{
		ArrayList_t1188 * L_0 = (__this->___nodeList_2);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (XmlNode_t2457 *)NULL;
	}

IL_000d:
	{
		V_0 = 0;
		goto IL_005a;
	}

IL_0014:
	{
		ArrayList_t1188 * L_1 = (__this->___nodeList_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_1, L_2);
		V_1 = ((XmlNode_t2457 *)Castclass(L_3, XmlNode_t2457_il2cpp_TypeInfo_var));
		XmlNode_t2457 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlNode::get_LocalName() */, L_4);
		String_t* L_6 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m2344(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		XmlNode_t2457 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_8);
		String_t* L_10 = ___namespaceURI;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m2344(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		ArrayList_t1188 * L_12 = (__this->___nodeList_2);
		XmlNode_t2457 * L_13 = V_1;
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(35 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_12, L_13);
		XmlNode_t2457 * L_14 = V_1;
		return L_14;
	}

IL_0056:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_16 = V_0;
		ArrayList_t1188 * L_17 = (__this->___nodeList_2);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0014;
		}
	}
	{
		return (XmlNode_t2457 *)NULL;
	}
}
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlNamedNodeMap_SetNamedItem_m10979 (XmlNamedNodeMap_t2459 * __this, XmlNode_t2457 * ___node, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = ___node;
		XmlNode_t2457 * L_1 = XmlNamedNodeMap_SetNamedItem_m10980(__this, L_0, (-1), 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNode_t2457_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNamedNodeMap_SetNamedItem_m10980 (XmlNamedNodeMap_t2459 * __this, XmlNode_t2457 * ___node, int32_t ___pos, bool ___raiseEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		XmlNode_t2457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	XmlNode_t2457 * V_1 = {0};
	XmlNode_t2457 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___readOnly_3);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		XmlNode_t2457 * L_1 = ___node;
		NullCheck(L_1);
		XmlDocument_t2373 * L_2 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, L_1);
		XmlNode_t2457 * L_3 = (__this->___parent_1);
		NullCheck(L_3);
		XmlDocument_t2373 * L_4 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, L_3);
		if ((((Object_t*)(XmlDocument_t2373 *)L_2) == ((Object_t*)(XmlDocument_t2373 *)L_4)))
		{
			goto IL_002c;
		}
	}

IL_0021:
	{
		ArgumentException_t1126 * L_5 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_5, (String_t*) &_stringLiteral2651, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		bool L_6 = ___raiseEvent;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		XmlNode_t2457 * L_7 = (__this->___parent_1);
		NullCheck(L_7);
		XmlDocument_t2373 * L_8 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, L_7);
		XmlNode_t2457 * L_9 = ___node;
		XmlNode_t2457 * L_10 = (__this->___parent_1);
		NullCheck(L_8);
		XmlDocument_onNodeInserting_m10812(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_0 = 0;
			goto IL_00cb;
		}

IL_0050:
		{
			ArrayList_t1188 * L_11 = (__this->___nodeList_2);
			int32_t L_12 = V_0;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_11, L_12);
			V_1 = ((XmlNode_t2457 *)Castclass(L_13, XmlNode_t2457_il2cpp_TypeInfo_var));
			XmlNode_t2457 * L_14 = V_1;
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlNode::get_LocalName() */, L_14);
			XmlNode_t2457 * L_16 = ___node;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlNode::get_LocalName() */, L_16);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_18 = String_op_Equality_m2344(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_00c7;
			}
		}

IL_0078:
		{
			XmlNode_t2457 * L_19 = V_1;
			NullCheck(L_19);
			String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_19);
			XmlNode_t2457 * L_21 = ___node;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_23 = String_op_Equality_m2344(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00c7;
			}
		}

IL_008e:
		{
			ArrayList_t1188 * L_24 = (__this->___nodeList_2);
			XmlNode_t2457 * L_25 = V_1;
			NullCheck(L_24);
			VirtActionInvoker1< Object_t * >::Invoke(35 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_24, L_25);
			int32_t L_26 = ___pos;
			if ((((int32_t)L_26) >= ((int32_t)0)))
			{
				goto IL_00b3;
			}
		}

IL_00a1:
		{
			ArrayList_t1188 * L_27 = (__this->___nodeList_2);
			XmlNode_t2457 * L_28 = ___node;
			NullCheck(L_27);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_27, L_28);
			goto IL_00c0;
		}

IL_00b3:
		{
			ArrayList_t1188 * L_29 = (__this->___nodeList_2);
			int32_t L_30 = ___pos;
			XmlNode_t2457 * L_31 = ___node;
			NullCheck(L_29);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(33 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_29, L_30, L_31);
		}

IL_00c0:
		{
			XmlNode_t2457 * L_32 = V_1;
			V_2 = L_32;
			IL2CPP_LEAVE(0x12C, FINALLY_010e);
		}

IL_00c7:
		{
			int32_t L_33 = V_0;
			V_0 = ((int32_t)((int32_t)L_33+(int32_t)1));
		}

IL_00cb:
		{
			int32_t L_34 = V_0;
			ArrayList_t1188 * L_35 = XmlNamedNodeMap_get_NodeList_m10974(__this, /*hidden argument*/NULL);
			NullCheck(L_35);
			int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_35);
			if ((((int32_t)L_34) < ((int32_t)L_36)))
			{
				goto IL_0050;
			}
		}

IL_00dc:
		{
			int32_t L_37 = ___pos;
			if ((((int32_t)L_37) >= ((int32_t)0)))
			{
				goto IL_00f5;
			}
		}

IL_00e3:
		{
			ArrayList_t1188 * L_38 = (__this->___nodeList_2);
			XmlNode_t2457 * L_39 = ___node;
			NullCheck(L_38);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_38, L_39);
			goto IL_0102;
		}

IL_00f5:
		{
			ArrayList_t1188 * L_40 = (__this->___nodeList_2);
			int32_t L_41 = ___pos;
			XmlNode_t2457 * L_42 = ___node;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(33 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_40, L_41, L_42);
		}

IL_0102:
		{
			XmlNode_t2457 * L_43 = ___node;
			V_2 = L_43;
			IL2CPP_LEAVE(0x12C, FINALLY_010e);
		}

IL_0109:
		{
			; // IL_0109: leave IL_012c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_010e;
	}

FINALLY_010e:
	{ // begin finally (depth: 1)
		{
			bool L_44 = ___raiseEvent;
			if (!L_44)
			{
				goto IL_012b;
			}
		}

IL_0114:
		{
			XmlNode_t2457 * L_45 = (__this->___parent_1);
			NullCheck(L_45);
			XmlDocument_t2373 * L_46 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, L_45);
			XmlNode_t2457 * L_47 = ___node;
			XmlNode_t2457 * L_48 = (__this->___parent_1);
			NullCheck(L_46);
			XmlDocument_onNodeInserted_m10811(L_46, L_47, L_48, /*hidden argument*/NULL);
		}

IL_012b:
		{
			IL2CPP_END_FINALLY(270)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(270)
	{
		IL2CPP_JUMP_TBL(0x12C, IL_012c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_012c:
	{
		XmlNode_t2457 * L_49 = V_2;
		return L_49;
	}
}
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
extern "C" ArrayList_t1188 * XmlNamedNodeMap_get_Nodes_m10981 (XmlNamedNodeMap_t2459 * __this, const MethodInfo* method)
{
	{
		ArrayList_t1188 * L_0 = XmlNamedNodeMap_get_NodeList_m10974(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNamespaceManager/NsDecl
#include "System_Xml_System_Xml_XmlNamespaceManager_NsDecl.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNamespaceManager/NsDecl
#include "System_Xml_System_Xml_XmlNamespaceManager_NsDeclMethodDeclarations.h"



// Conversion methods for marshalling of: System.Xml.XmlNamespaceManager/NsDecl
void NsDecl_t2481_marshal(const NsDecl_t2481& unmarshaled, NsDecl_t2481_marshaled& marshaled)
{
	marshaled.___Prefix_0 = il2cpp_codegen_marshal_string(unmarshaled.___Prefix_0);
	marshaled.___Uri_1 = il2cpp_codegen_marshal_string(unmarshaled.___Uri_1);
}
void NsDecl_t2481_marshal_back(const NsDecl_t2481_marshaled& marshaled, NsDecl_t2481& unmarshaled)
{
	unmarshaled.___Prefix_0 = il2cpp_codegen_marshal_string_result(marshaled.___Prefix_0);
	unmarshaled.___Uri_1 = il2cpp_codegen_marshal_string_result(marshaled.___Uri_1);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNamespaceManager/NsDecl
void NsDecl_t2481_marshal_cleanup(NsDecl_t2481_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Prefix_0);
	marshaled.___Prefix_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Uri_1);
	marshaled.___Uri_1 = NULL;
}
// System.Xml.XmlNamespaceManager/NsScope
#include "System_Xml_System_Xml_XmlNamespaceManager_NsScope.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNamespaceManager/NsScope
#include "System_Xml_System_Xml_XmlNamespaceManager_NsScopeMethodDeclarations.h"



// Conversion methods for marshalling of: System.Xml.XmlNamespaceManager/NsScope
void NsScope_t2482_marshal(const NsScope_t2482& unmarshaled, NsScope_t2482_marshaled& marshaled)
{
	marshaled.___DeclCount_0 = unmarshaled.___DeclCount_0;
	marshaled.___DefaultNamespace_1 = il2cpp_codegen_marshal_string(unmarshaled.___DefaultNamespace_1);
}
void NsScope_t2482_marshal_back(const NsScope_t2482_marshaled& marshaled, NsScope_t2482& unmarshaled)
{
	unmarshaled.___DeclCount_0 = marshaled.___DeclCount_0;
	unmarshaled.___DefaultNamespace_1 = il2cpp_codegen_marshal_string_result(marshaled.___DefaultNamespace_1);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNamespaceManager/NsScope
void NsScope_t2482_marshal_cleanup(NsScope_t2482_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___DefaultNamespace_1);
	marshaled.___DefaultNamespace_1 = NULL;
}
// System.Xml.XmlNamespaceManager
#include "System_Xml_System_Xml_XmlNamespaceManager.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNamespaceManager
#include "System_Xml_System_Xml_XmlNamespaceManagerMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"


// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager__ctor_m10982 (XmlNamespaceManager_t2485 * __this, XmlNameTable_t2314 * ___nameTable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___declPos_1 = (-1);
		__this->___scopePos_3 = (-1);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		XmlNameTable_t2314 * L_0 = ___nameTable;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral2208, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0025:
	{
		XmlNameTable_t2314 * L_2 = ___nameTable;
		__this->___nameTable_6 = L_2;
		XmlNameTable_t2314 * L_3 = ___nameTable;
		NullCheck(L_3);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_3, (String_t*) &_stringLiteral2387);
		XmlNameTable_t2314 * L_4 = ___nameTable;
		NullCheck(L_4);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_4, (String_t*) &_stringLiteral2511);
		XmlNameTable_t2314 * L_5 = ___nameTable;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_5);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_5, L_6);
		XmlNameTable_t2314 * L_7 = ___nameTable;
		NullCheck(L_7);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_7, (String_t*) &_stringLiteral2403);
		XmlNameTable_t2314 * L_8 = ___nameTable;
		NullCheck(L_8);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_8, (String_t*) &_stringLiteral2527);
		XmlNamespaceManager_InitData_m10983(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern TypeInfo* NsDeclU5BU5D_t2483_il2cpp_TypeInfo_var;
extern TypeInfo* NsScopeU5BU5D_t2484_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager_InitData_m10983 (XmlNamespaceManager_t2485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NsDeclU5BU5D_t2483_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4780);
		NsScopeU5BU5D_t2484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4782);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___decls_0 = ((NsDeclU5BU5D_t2483*)SZArrayNew(NsDeclU5BU5D_t2483_il2cpp_TypeInfo_var, ((int32_t)10)));
		__this->___scopes_2 = ((NsScopeU5BU5D_t2484*)SZArrayNew(NsScopeU5BU5D_t2484_il2cpp_TypeInfo_var, ((int32_t)40)));
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
extern TypeInfo* NsDeclU5BU5D_t2483_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager_GrowDecls_m10984 (XmlNamespaceManager_t2485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NsDeclU5BU5D_t2483_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4780);
		s_Il2CppMethodIntialized = true;
	}
	NsDeclU5BU5D_t2483* V_0 = {0};
	{
		NsDeclU5BU5D_t2483* L_0 = (__this->___decls_0);
		V_0 = L_0;
		int32_t L_1 = (__this->___declPos_1);
		__this->___decls_0 = ((NsDeclU5BU5D_t2483*)SZArrayNew(NsDeclU5BU5D_t2483_il2cpp_TypeInfo_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)2))+(int32_t)1))));
		int32_t L_2 = (__this->___declPos_1);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		NsDeclU5BU5D_t2483* L_3 = V_0;
		NsDeclU5BU5D_t2483* L_4 = (__this->___decls_0);
		int32_t L_5 = (__this->___declPos_1);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 0, L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern TypeInfo* NsScopeU5BU5D_t2484_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager_GrowScopes_m10985 (XmlNamespaceManager_t2485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NsScopeU5BU5D_t2484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4782);
		s_Il2CppMethodIntialized = true;
	}
	NsScopeU5BU5D_t2484* V_0 = {0};
	{
		NsScopeU5BU5D_t2484* L_0 = (__this->___scopes_2);
		V_0 = L_0;
		int32_t L_1 = (__this->___scopePos_3);
		__this->___scopes_2 = ((NsScopeU5BU5D_t2484*)SZArrayNew(NsScopeU5BU5D_t2484_il2cpp_TypeInfo_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)2))+(int32_t)1))));
		int32_t L_2 = (__this->___scopePos_3);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		NsScopeU5BU5D_t2484* L_3 = V_0;
		NsScopeU5BU5D_t2484* L_4 = (__this->___scopes_2);
		int32_t L_5 = (__this->___scopePos_3);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 0, L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNamespaceManager_get_DefaultNamespace_m10986 (XmlNamespaceManager_t2485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = (__this->___defaultNamespace_4);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_1;
		goto IL_001b;
	}

IL_0015:
	{
		String_t* L_2 = (__this->___defaultNamespace_4);
		G_B3_0 = L_2;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C" XmlNameTable_t2314 * XmlNamespaceManager_get_NameTable_m10987 (XmlNamespaceManager_t2485 * __this, const MethodInfo* method)
{
	{
		XmlNameTable_t2314 * L_0 = (__this->___nameTable_6);
		return L_0;
	}
}
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_AddNamespace_m10988 (XmlNamespaceManager_t2485 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method)
{
	{
		String_t* L_0 = ___prefix;
		String_t* L_1 = ___uri;
		XmlNamespaceManager_AddNamespace_m10989(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager_AddNamespace_m10989 (XmlNamespaceManager_t2485 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___prefix;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m11579(L_1, (String_t*) &_stringLiteral2652, (String_t*) &_stringLiteral2653, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = ___uri;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m11579(L_3, (String_t*) &_stringLiteral2654, (String_t*) &_stringLiteral2653, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002c:
	{
		bool L_4 = ___atomizedNames;
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		XmlNameTable_t2314 * L_5 = (__this->___nameTable_6);
		String_t* L_6 = ___prefix;
		NullCheck(L_5);
		String_t* L_7 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_5, L_6);
		___prefix = L_7;
		XmlNameTable_t2314 * L_8 = (__this->___nameTable_6);
		String_t* L_9 = ___uri;
		NullCheck(L_8);
		String_t* L_10 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_8, L_9);
		___uri = L_10;
	}

IL_004e:
	{
		String_t* L_11 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m2344(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_13 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m2344(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral2527, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		return;
	}

IL_006f:
	{
		String_t* L_15 = ___prefix;
		String_t* L_16 = ___uri;
		XmlNamespaceManager_IsValidDeclaration_m10990(NULL /*static, unused*/, L_15, L_16, 1, /*hidden argument*/NULL);
		String_t* L_17 = ___prefix;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m2782(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_19 = ___uri;
		__this->___defaultNamespace_4 = L_19;
	}

IL_008a:
	{
		int32_t L_20 = (__this->___declPos_1);
		V_0 = L_20;
		goto IL_00c9;
	}

IL_0096:
	{
		NsDeclU5BU5D_t2483* L_21 = (__this->___decls_0);
		int32_t L_22 = V_0;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		String_t* L_23 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_21, L_22))->___Prefix_0);
		String_t* L_24 = ___prefix;
		bool L_25 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		NsDeclU5BU5D_t2483* L_26 = (__this->___decls_0);
		int32_t L_27 = V_0;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		String_t* L_28 = ___uri;
		((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_26, L_27))->___Uri_1 = L_28;
		return;
	}

IL_00c5:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29-(int32_t)1));
	}

IL_00c9:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = (__this->___declPos_1);
		int32_t L_32 = (__this->___count_5);
		if ((((int32_t)L_30) > ((int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_33 = (__this->___declPos_1);
		__this->___declPos_1 = ((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = (__this->___count_5);
		__this->___count_5 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = (__this->___declPos_1);
		NsDeclU5BU5D_t2483* L_36 = (__this->___decls_0);
		NullCheck(L_36);
		if ((!(((uint32_t)L_35) == ((uint32_t)(((int32_t)(((Array_t *)L_36)->max_length)))))))
		{
			goto IL_0111;
		}
	}
	{
		XmlNamespaceManager_GrowDecls_m10984(__this, /*hidden argument*/NULL);
	}

IL_0111:
	{
		NsDeclU5BU5D_t2483* L_37 = (__this->___decls_0);
		int32_t L_38 = (__this->___declPos_1);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		String_t* L_39 = ___prefix;
		((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_37, L_38))->___Prefix_0 = L_39;
		NsDeclU5BU5D_t2483* L_40 = (__this->___decls_0);
		int32_t L_41 = (__this->___declPos_1);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		String_t* L_42 = ___uri;
		((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_40, L_41))->___Uri_1 = L_42;
		return;
	}
}
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNamespaceManager_IsValidDeclaration_m10990 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___uri, bool ___throwException, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*)NULL;
		String_t* L_0 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m2344(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_2 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m3147(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral2527, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_4 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral2655, (String_t*) &_stringLiteral2527, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_007f;
	}

IL_0038:
	{
		String_t* L_6 = V_0;
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m2344(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		V_0 = (String_t*) &_stringLiteral2656;
		goto IL_007f;
	}

IL_0059:
	{
		String_t* L_9 = V_0;
		if (L_9)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_10 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m2344(NULL /*static, unused*/, L_10, (String_t*) &_stringLiteral2403, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2657, (String_t*) &_stringLiteral2403, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_007f:
	{
		String_t* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		bool L_14 = ___throwException;
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		String_t* L_15 = V_0;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_16, L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0092:
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t658_il2cpp_TypeInfo_var;
extern "C" Object_t * XmlNamespaceManager_GetEnumerator_m10991 (XmlNamespaceManager_t2485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IEnumerable_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t1256 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Hashtable_t1256 * L_0 = (Hashtable_t1256 *)il2cpp_codegen_object_new (Hashtable_t1256_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6660(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_006f;
	}

IL_000d:
	{
		NsDeclU5BU5D_t2483* L_1 = (__this->___decls_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		String_t* L_3 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_1, L_2))->___Prefix_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_5 = String_op_Inequality_m3147(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	{
		NsDeclU5BU5D_t2483* L_6 = (__this->___decls_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		String_t* L_8 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_6, L_7))->___Uri_1);
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		Hashtable_t1256 * L_9 = V_0;
		NsDeclU5BU5D_t2483* L_10 = (__this->___decls_0);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		String_t* L_12 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_10, L_11))->___Prefix_0);
		NsDeclU5BU5D_t2483* L_13 = (__this->___decls_0);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		String_t* L_15 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_13, L_14))->___Uri_1);
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_9, L_12, L_15);
	}

IL_006b:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = (__this->___declPos_1);
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_000d;
		}
	}
	{
		Hashtable_t1256 * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, __this);
		NullCheck(L_19);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_19, L_20, L_21);
		Hashtable_t1256 * L_22 = V_0;
		NullCheck(L_22);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_22, (String_t*) &_stringLiteral2511, (String_t*) &_stringLiteral2527);
		Hashtable_t1256 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_23, (String_t*) &_stringLiteral2387, (String_t*) &_stringLiteral2403);
		Hashtable_t1256 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(21 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_24);
		NullCheck(L_25);
		Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t658_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}
}
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
extern TypeInfo* XmlNamespaceManager_t2485_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t427_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3115_MethodInfo_var;
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m10992 (XmlNamespaceManager_t2485 * __this, String_t* ___prefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNamespaceManager_t2485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4784);
		Dictionary_2_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Dictionary_2__ctor_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483838);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	Dictionary_2_t427 * V_2 = {0};
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___prefix;
		V_1 = L_0;
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		Dictionary_2_t427 * L_2 = ((XmlNamespaceManager_t2485_StaticFields*)XmlNamespaceManager_t2485_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_8;
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		Dictionary_2_t427 * L_3 = (Dictionary_2_t427 *)il2cpp_codegen_object_new (Dictionary_2_t427_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3115(L_3, 3, /*hidden argument*/Dictionary_2__ctor_m3115_MethodInfo_var);
		V_2 = L_3;
		Dictionary_2_t427 * L_4 = V_2;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral2387, 0);
		Dictionary_2_t427 * L_5 = V_2;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, (String_t*) &_stringLiteral2511, 1);
		Dictionary_2_t427 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, L_7, 2);
		Dictionary_2_t427 * L_8 = V_2;
		((XmlNamespaceManager_t2485_StaticFields*)XmlNamespaceManager_t2485_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_8 = L_8;
	}

IL_0043:
	{
		Dictionary_2_t427 * L_9 = ((XmlNamespaceManager_t2485_StaticFields*)XmlNamespaceManager_t2485_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_8;
		String_t* L_10 = V_1;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_9, L_10, (&V_3));
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_12 = V_3;
		if (L_12 == 0)
		{
			goto IL_006c;
		}
		if (L_12 == 1)
		{
			goto IL_007d;
		}
		if (L_12 == 2)
		{
			goto IL_008e;
		}
	}
	{
		goto IL_0097;
	}

IL_006c:
	{
		XmlNameTable_t2314 * L_13 = (__this->___nameTable_6);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_13, (String_t*) &_stringLiteral2403);
		return L_14;
	}

IL_007d:
	{
		XmlNameTable_t2314 * L_15 = (__this->___nameTable_6);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_15, (String_t*) &_stringLiteral2527);
		return L_16;
	}

IL_008e:
	{
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, __this);
		return L_17;
	}

IL_0095:
	{
		return (String_t*)NULL;
	}

IL_0097:
	{
		int32_t L_18 = (__this->___declPos_1);
		V_0 = L_18;
		goto IL_00f2;
	}

IL_00a3:
	{
		NsDeclU5BU5D_t2483* L_19 = (__this->___decls_0);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		String_t* L_21 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_19, L_20))->___Prefix_0);
		String_t* L_22 = ___prefix;
		bool L_23 = (__this->___internalAtomizedNames_7);
		bool L_24 = XmlNamespaceManager_CompareString_m10994(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00ee;
		}
	}
	{
		NsDeclU5BU5D_t2483* L_25 = (__this->___decls_0);
		int32_t L_26 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		String_t* L_27 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_25, L_26))->___Uri_1);
		if (!L_27)
		{
			goto IL_00ee;
		}
	}
	{
		NsDeclU5BU5D_t2483* L_28 = (__this->___decls_0);
		int32_t L_29 = V_0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		String_t* L_30 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_28, L_29))->___Uri_1);
		return L_30;
	}

IL_00ee:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)((int32_t)L_31-(int32_t)1));
	}

IL_00f2:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m10993 (XmlNamespaceManager_t2485 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		bool L_0 = ___atomizedNames;
		__this->___internalAtomizedNames_7 = L_0;
		String_t* L_1 = ___prefix;
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, __this, L_1);
		V_0 = L_2;
		__this->___internalAtomizedNames_7 = 0;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool XmlNamespaceManager_CompareString_m10994 (XmlNamespaceManager_t2485 * __this, String_t* ___s1, String_t* ___s2, bool ___atomizedNames, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___atomizedNames;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___s1;
		String_t* L_2 = ___s2;
		bool L_3 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000e:
	{
		String_t* L_4 = ___s1;
		String_t* L_5 = ___s2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefixExclusive_m10995 (XmlNamespaceManager_t2485 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uri;
		bool L_1 = ___atomizedName;
		String_t* L_2 = XmlNamespaceManager_LookupPrefixCore_m10996(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNamespaceManager_LookupPrefixCore_m10996 (XmlNamespaceManager_t2485 * __this, String_t* ___uri, bool ___atomizedName, bool ___excludeOverriden, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___uri;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___uri;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, __this);
		bool L_3 = ___atomizedName;
		bool L_4 = XmlNamespaceManager_CompareString_m10994(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_5;
	}

IL_0021:
	{
		String_t* L_6 = ___uri;
		bool L_7 = ___atomizedName;
		bool L_8 = XmlNamespaceManager_CompareString_m10994(__this, L_6, (String_t*) &_stringLiteral2527, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		return (String_t*) &_stringLiteral2511;
	}

IL_0039:
	{
		String_t* L_9 = ___uri;
		bool L_10 = ___atomizedName;
		bool L_11 = XmlNamespaceManager_CompareString_m10994(__this, L_9, (String_t*) &_stringLiteral2403, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		return (String_t*) &_stringLiteral2387;
	}

IL_0051:
	{
		int32_t L_12 = (__this->___declPos_1);
		V_0 = L_12;
		goto IL_00bf;
	}

IL_005d:
	{
		NsDeclU5BU5D_t2483* L_13 = (__this->___decls_0);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		String_t* L_15 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_13, L_14))->___Uri_1);
		String_t* L_16 = ___uri;
		bool L_17 = ___atomizedName;
		bool L_18 = XmlNamespaceManager_CompareString_m10994(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		NsDeclU5BU5D_t2483* L_19 = (__this->___decls_0);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		String_t* L_21 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_19, L_20))->___Prefix_0);
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m2782(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		bool L_23 = ___excludeOverriden;
		if (!L_23)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_24 = V_0;
		bool L_25 = XmlNamespaceManager_IsOverriden_m10997(__this, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00bb;
		}
	}

IL_00a9:
	{
		NsDeclU5BU5D_t2483* L_26 = (__this->___decls_0);
		int32_t L_27 = V_0;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		String_t* L_28 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_26, L_27))->___Prefix_0);
		return L_28;
	}

IL_00bb:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29-(int32_t)1));
	}

IL_00bf:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
extern "C" bool XmlNamespaceManager_IsOverriden_m10997 (XmlNamespaceManager_t2485 * __this, int32_t ___idx, const MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___idx;
		int32_t L_1 = (__this->___declPos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		NsDeclU5BU5D_t2483* L_2 = (__this->___decls_0);
		int32_t L_3 = ___idx;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3+(int32_t)1)));
		String_t* L_4 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_2, ((int32_t)((int32_t)L_3+(int32_t)1))))->___Prefix_0);
		V_0 = L_4;
		int32_t L_5 = ___idx;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		goto IL_0048;
	}

IL_002b:
	{
		NsDeclU5BU5D_t2483* L_6 = (__this->___decls_0);
		int32_t L_7 = ___idx;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		String_t* L_8 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_6, L_7))->___Prefix_0);
		String_t* L_9 = V_0;
		if ((!(((Object_t*)(String_t*)L_8) == ((Object_t*)(String_t*)L_9))))
		{
			goto IL_0044;
		}
	}
	{
		return 1;
	}

IL_0044:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = (__this->___declPos_1);
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C" bool XmlNamespaceManager_PopScope_m10998 (XmlNamespaceManager_t2485 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___scopePos_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_1 = (__this->___declPos_1);
		int32_t L_2 = (__this->___count_5);
		__this->___declPos_1 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		NsScopeU5BU5D_t2484* L_3 = (__this->___scopes_2);
		int32_t L_4 = (__this->___scopePos_3);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		String_t* L_5 = (((NsScope_t2482 *)(NsScope_t2482 *)SZArrayLdElema(L_3, L_4))->___DefaultNamespace_1);
		__this->___defaultNamespace_4 = L_5;
		NsScopeU5BU5D_t2484* L_6 = (__this->___scopes_2);
		int32_t L_7 = (__this->___scopePos_3);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = (((NsScope_t2482 *)(NsScope_t2482 *)SZArrayLdElema(L_6, L_7))->___DeclCount_0);
		__this->___count_5 = L_8;
		int32_t L_9 = (__this->___scopePos_3);
		__this->___scopePos_3 = ((int32_t)((int32_t)L_9-(int32_t)1));
		return 1;
	}
}
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C" void XmlNamespaceManager_PushScope_m10999 (XmlNamespaceManager_t2485 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___scopePos_3);
		__this->___scopePos_3 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = (__this->___scopePos_3);
		NsScopeU5BU5D_t2484* L_2 = (__this->___scopes_2);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		XmlNamespaceManager_GrowScopes_m10985(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		NsScopeU5BU5D_t2484* L_3 = (__this->___scopes_2);
		int32_t L_4 = (__this->___scopePos_3);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		String_t* L_5 = (__this->___defaultNamespace_4);
		((NsScope_t2482 *)(NsScope_t2482 *)SZArrayLdElema(L_3, L_4))->___DefaultNamespace_1 = L_5;
		NsScopeU5BU5D_t2484* L_6 = (__this->___scopes_2);
		int32_t L_7 = (__this->___scopePos_3);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = (__this->___count_5);
		((NsScope_t2482 *)(NsScope_t2482 *)SZArrayLdElema(L_6, L_7))->___DeclCount_0 = L_8;
		__this->___count_5 = 0;
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_RemoveNamespace_m11000 (XmlNamespaceManager_t2485 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method)
{
	{
		String_t* L_0 = ___prefix;
		String_t* L_1 = ___uri;
		XmlNamespaceManager_RemoveNamespace_m11001(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager_RemoveNamespace_m11001 (XmlNamespaceManager_t2485 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___prefix;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral2652, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___uri;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*) &_stringLiteral2654, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = (__this->___count_5);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		int32_t L_5 = (__this->___declPos_1);
		V_0 = L_5;
		goto IL_008c;
	}

IL_003a:
	{
		NsDeclU5BU5D_t2483* L_6 = (__this->___decls_0);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		String_t* L_8 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_6, L_7))->___Prefix_0);
		String_t* L_9 = ___prefix;
		bool L_10 = ___atomizedNames;
		bool L_11 = XmlNamespaceManager_CompareString_m10994(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		NsDeclU5BU5D_t2483* L_12 = (__this->___decls_0);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		String_t* L_14 = (((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_12, L_13))->___Uri_1);
		String_t* L_15 = ___uri;
		bool L_16 = ___atomizedNames;
		bool L_17 = XmlNamespaceManager_CompareString_m10994(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		NsDeclU5BU5D_t2483* L_18 = (__this->___decls_0);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		((NsDecl_t2481 *)(NsDecl_t2481 *)SZArrayLdElema(L_18, L_19))->___Uri_1 = (String_t*)NULL;
	}

IL_0088:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20-(int32_t)1));
	}

IL_008c:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = (__this->___declPos_1);
		int32_t L_23 = (__this->___count_5);
		if ((((int32_t)L_21) > ((int32_t)((int32_t)((int32_t)L_22-(int32_t)L_23)))))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}
}
// System.Xml.XmlNode/EmptyNodeList
#include "System_Xml_System_Xml_XmlNode_EmptyNodeList.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNode/EmptyNodeList
#include "System_Xml_System_Xml_XmlNode_EmptyNodeListMethodDeclarations.h"

// System.Xml.XmlNodeList
#include "System_Xml_System_Xml_XmlNodeListMethodDeclarations.h"


// System.Void System.Xml.XmlNode/EmptyNodeList::.ctor()
extern "C" void EmptyNodeList__ctor_m11002 (EmptyNodeList_t2486 * __this, const MethodInfo* method)
{
	{
		XmlNodeList__ctor_m11046(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNode/EmptyNodeList::.cctor()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* EmptyNodeList_t2486_il2cpp_TypeInfo_var;
extern "C" void EmptyNodeList__cctor_m11003 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		EmptyNodeList_t2486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4785);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck(((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0)));
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Array::GetEnumerator() */, ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0)));
		((EmptyNodeList_t2486_StaticFields*)EmptyNodeList_t2486_il2cpp_TypeInfo_var->static_fields)->___emptyEnumerator_0 = L_0;
		return;
	}
}
// System.Int32 System.Xml.XmlNode/EmptyNodeList::get_Count()
extern "C" int32_t EmptyNodeList_get_Count_m11004 (EmptyNodeList_t2486 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode/EmptyNodeList::GetEnumerator()
extern TypeInfo* EmptyNodeList_t2486_il2cpp_TypeInfo_var;
extern "C" Object_t * EmptyNodeList_GetEnumerator_m11005 (EmptyNodeList_t2486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EmptyNodeList_t2486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4785);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EmptyNodeList_t2486_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((EmptyNodeList_t2486_StaticFields*)EmptyNodeList_t2486_il2cpp_TypeInfo_var->static_fields)->___emptyEnumerator_0;
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode/EmptyNodeList::Item(System.Int32)
extern "C" XmlNode_t2457 * EmptyNodeList_Item_m11006 (EmptyNodeList_t2486 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		return (XmlNode_t2457 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Xml.XmlAttributeCollection
#include "System_Xml_System_Xml_XmlAttributeCollection.h"
// System.Xml.XmlNodeList
#include "System_Xml_System_Xml_XmlNodeList.h"
// System.Xml.XmlNodeListChildren
#include "System_Xml_System_Xml_XmlNodeListChildren.h"
// System.Xml.XmlAttribute
#include "System_Xml_System_Xml_XmlAttribute.h"
// System.Xml.XmlElement
#include "System_Xml_System_Xml_XmlElement.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.XmlEntityReference
#include "System_Xml_System_Xml_XmlEntityReference.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriter.h"
// System.Xml.XmlNodeListChildren
#include "System_Xml_System_Xml_XmlNodeListChildrenMethodDeclarations.h"
// System.Xml.XmlAttribute
#include "System_Xml_System_Xml_XmlAttributeMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Xml.XmlAttributeCollection
#include "System_Xml_System_Xml_XmlAttributeCollectionMethodDeclarations.h"
// System.Xml.XmlEntityReference
#include "System_Xml_System_Xml_XmlEntityReferenceMethodDeclarations.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.Xml.XmlElement
#include "System_Xml_System_Xml_XmlElementMethodDeclarations.h"


// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlNode__ctor_m11007 (XmlNode_t2457 * __this, XmlDocument_t2373 * ___ownerDocument, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		XmlDocument_t2373 * L_0 = ___ownerDocument;
		__this->___ownerDocument_1 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlNode::.cctor()
extern TypeInfo* EmptyNodeList_t2486_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNode_t2457_il2cpp_TypeInfo_var;
extern "C" void XmlNode__cctor_m11008 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EmptyNodeList_t2486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4785);
		XmlNode_t2457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		s_Il2CppMethodIntialized = true;
	}
	{
		EmptyNodeList_t2486 * L_0 = (EmptyNodeList_t2486 *)il2cpp_codegen_object_new (EmptyNodeList_t2486_il2cpp_TypeInfo_var);
		EmptyNodeList__ctor_m11002(L_0, /*hidden argument*/NULL);
		((XmlNode_t2457_StaticFields*)XmlNode_t2457_il2cpp_TypeInfo_var->static_fields)->___emptyList_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlNode_System_Collections_IEnumerable_GetEnumerator_m11009 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(30 /* System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C" XmlAttributeCollection_t2458 * XmlNode_get_Attributes_m11010 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		return (XmlAttributeCollection_t2458 *)NULL;
	}
}
// System.String System.Xml.XmlNode::get_BaseURI()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNode_get_BaseURI_m11011 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		XmlNode_t2457 * L_0 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlNode_t2457 * L_1 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlNode::get_ChildrenBaseURI() */, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C" String_t* XmlNode_get_ChildrenBaseURI_m11012 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlNode::get_BaseURI() */, __this);
		return L_0;
	}
}
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNode_t2457_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeListChildren_t2488_il2cpp_TypeInfo_var;
extern "C" XmlNodeList_t2487 * XmlNode_get_ChildNodes_m11013 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		XmlNode_t2457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		XmlNodeListChildren_t2488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4786);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		V_0 = ((Object_t *)IsInst(__this, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var));
		Object_t * L_0 = V_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t2457_il2cpp_TypeInfo_var);
		EmptyNodeList_t2486 * L_1 = ((XmlNode_t2457_StaticFields*)XmlNode_t2457_il2cpp_TypeInfo_var->static_fields)->___emptyList_0;
		return L_1;
	}

IL_0013:
	{
		XmlNodeListChildren_t2488 * L_2 = (__this->___childNodes_3);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Object_t * L_3 = V_0;
		XmlNodeListChildren_t2488 * L_4 = (XmlNodeListChildren_t2488 *)il2cpp_codegen_object_new (XmlNodeListChildren_t2488_il2cpp_TypeInfo_var);
		XmlNodeListChildren__ctor_m11051(L_4, L_3, /*hidden argument*/NULL);
		__this->___childNodes_3 = L_4;
	}

IL_002a:
	{
		XmlNodeListChildren_t2488 * L_5 = (__this->___childNodes_3);
		return L_5;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNode_get_FirstChild_m11014 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	XmlLinkedNode_t2455 * V_1 = {0};
	XmlLinkedNode_t2455 * G_B3_0 = {0};
	XmlLinkedNode_t2455 * G_B6_0 = {0};
	{
		V_0 = ((Object_t *)IsInst(__this, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var));
		Object_t * L_0 = V_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((XmlLinkedNode_t2455 *)(NULL));
		goto IL_0019;
	}

IL_0013:
	{
		Object_t * L_1 = V_0;
		NullCheck(L_1);
		XmlLinkedNode_t2455 * L_2 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_0019:
	{
		V_1 = G_B3_0;
		XmlLinkedNode_t2455 * L_3 = V_1;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		G_B6_0 = ((XmlLinkedNode_t2455 *)(NULL));
		goto IL_002c;
	}

IL_0026:
	{
		XmlLinkedNode_t2455 * L_4 = V_1;
		NullCheck(L_4);
		XmlLinkedNode_t2455 * L_5 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_4, /*hidden argument*/NULL);
		G_B6_0 = L_5;
	}

IL_002c:
	{
		return G_B6_0;
	}
}
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C" bool XmlNode_get_HasChildNodes_m11015 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(13 /* System.Xml.XmlNode System.Xml.XmlNode::get_LastChild() */, __this);
		return ((((int32_t)((((Object_t*)(XmlNode_t2457 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String System.Xml.XmlNode::get_InnerText()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNode_get_InnerText_m11016 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t619 * V_0 = {0};
	int32_t V_1 = {0};
	String_t* G_B12_0 = {0};
	String_t* G_B16_0 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)14))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_0031;
	}

IL_002a:
	{
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlNode::get_Value() */, __this);
		return L_5;
	}

IL_0031:
	{
		XmlNode_t2457 * L_6 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, __this);
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_7;
	}

IL_0042:
	{
		XmlNode_t2457 * L_8 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, __this);
		XmlNode_t2457 * L_9 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(13 /* System.Xml.XmlNode System.Xml.XmlNode::get_LastChild() */, __this);
		if ((!(((Object_t*)(XmlNode_t2457 *)L_8) == ((Object_t*)(XmlNode_t2457 *)L_9))))
		{
			goto IL_007a;
		}
	}
	{
		XmlNode_t2457 * L_10 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, __this);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_10);
		if ((((int32_t)L_11) == ((int32_t)8)))
		{
			goto IL_0074;
		}
	}
	{
		XmlNode_t2457 * L_12 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, __this);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlNode::get_InnerText() */, L_12);
		G_B12_0 = L_13;
		goto IL_0079;
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B12_0 = L_14;
	}

IL_0079:
	{
		return G_B12_0;
	}

IL_007a:
	{
		V_0 = (StringBuilder_t619 *)NULL;
		XmlNode_AppendChildValues_m11017(__this, (&V_0), /*hidden argument*/NULL);
		StringBuilder_t619 * L_15 = V_0;
		if (L_15)
		{
			goto IL_0094;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B16_0 = L_16;
		goto IL_009a;
	}

IL_0094:
	{
		StringBuilder_t619 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_17);
		G_B16_0 = L_18;
	}

IL_009a:
	{
		return G_B16_0;
	}
}
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern "C" void XmlNode_AppendChildValues_m11017 (XmlNode_t2457 * __this, StringBuilder_t619 ** ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	XmlNode_t2457 * V_0 = {0};
	int32_t V_1 = {0};
	{
		XmlNode_t2457 * L_0 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, __this);
		V_0 = L_0;
		goto IL_0065;
	}

IL_000c:
	{
		XmlNode_t2457 * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)14))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0057;
	}

IL_0036:
	{
		StringBuilder_t619 ** L_7 = ___builder;
		if ((*((StringBuilder_t619 **)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t619 ** L_8 = ___builder;
		StringBuilder_t619 * L_9 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_9, /*hidden argument*/NULL);
		*((Object_t **)(L_8)) = (Object_t *)L_9;
	}

IL_0044:
	{
		StringBuilder_t619 ** L_10 = ___builder;
		XmlNode_t2457 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlNode::get_Value() */, L_11);
		NullCheck((*((StringBuilder_t619 **)L_10)));
		StringBuilder_Append_m2790((*((StringBuilder_t619 **)L_10)), L_12, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0057:
	{
		XmlNode_t2457 * L_13 = V_0;
		StringBuilder_t619 ** L_14 = ___builder;
		NullCheck(L_13);
		XmlNode_AppendChildValues_m11017(L_13, L_14, /*hidden argument*/NULL);
		XmlNode_t2457 * L_15 = V_0;
		NullCheck(L_15);
		XmlNode_t2457 * L_16 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(17 /* System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling() */, L_15);
		V_0 = L_16;
	}

IL_0065:
	{
		XmlNode_t2457 * L_17 = V_0;
		if (L_17)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern TypeInfo* XmlAttribute_t2339_il2cpp_TypeInfo_var;
extern "C" bool XmlNode_get_IsReadOnly_m11018 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlAttribute_t2339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4689);
		s_Il2CppMethodIntialized = true;
	}
	XmlNode_t2457 * V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = __this;
	}

IL_0002:
	{
		XmlNode_t2457 * L_0 = V_0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 0)
		{
			goto IL_002c;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 1)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 2)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 3)
		{
			goto IL_002a;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 4)
		{
			goto IL_002a;
		}
	}
	{
		goto IL_003d;
	}

IL_002a:
	{
		return 1;
	}

IL_002c:
	{
		XmlNode_t2457 * L_3 = V_0;
		NullCheck(((XmlAttribute_t2339 *)Castclass(L_3, XmlAttribute_t2339_il2cpp_TypeInfo_var)));
		XmlElement_t2350 * L_4 = (XmlElement_t2350 *)VirtFuncInvoker0< XmlElement_t2350 * >::Invoke(38 /* System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement() */, ((XmlAttribute_t2339 *)Castclass(L_3, XmlAttribute_t2339_il2cpp_TypeInfo_var)));
		V_0 = L_4;
		goto IL_0049;
	}

IL_003d:
	{
		XmlNode_t2457 * L_5 = V_0;
		NullCheck(L_5);
		XmlNode_t2457 * L_6 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_5);
		V_0 = L_6;
		goto IL_0049;
	}

IL_0049:
	{
		XmlNode_t2457 * L_7 = V_0;
		if (L_7)
		{
			goto IL_0002;
		}
	}
	{
		return 0;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNode_get_LastChild_m11019 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	XmlLinkedNode_t2455 * G_B3_0 = {0};
	{
		V_0 = ((Object_t *)IsInst(__this, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var));
		Object_t * L_0 = V_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((XmlLinkedNode_t2455 *)(NULL));
		goto IL_0019;
	}

IL_0013:
	{
		Object_t * L_1 = V_0;
		NullCheck(L_1);
		XmlLinkedNode_t2455 * L_2 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlNode::get_LocalName()
// System.String System.Xml.XmlNode::get_Name()
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNode_get_NamespaceURI_m11020 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C" XmlNode_t2457 * XmlNode_get_NextSibling_m11021 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		return (XmlNode_t2457 *)NULL;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType()
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C" XmlDocument_t2373 * XmlNode_get_OwnerDocument_m11022 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		XmlDocument_t2373 * L_0 = (__this->___ownerDocument_1);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C" XmlNode_t2457 * XmlNode_get_ParentNode_m11023 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = (__this->___parentNode_2);
		return L_0;
	}
}
// System.String System.Xml.XmlNode::get_Prefix()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNode_get_Prefix_m11024 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C" XmlNode_t2457 * XmlNode_get_PreviousSibling_m11025 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		return (XmlNode_t2457 *)NULL;
	}
}
// System.String System.Xml.XmlNode::get_Value()
extern "C" String_t* XmlNode_get_Value_m11026 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void XmlNode_set_Value_m11027 (XmlNode_t2457 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t1086 * L_0 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_0, (String_t*) &_stringLiteral2658, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String System.Xml.XmlNode::get_XmlLang()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNode_get_XmlLang_m11028 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	XmlAttribute_t2339 * V_1 = {0};
	String_t* G_B9_0 = {0};
	{
		XmlAttributeCollection_t2458 * L_0 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, __this);
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0012:
	{
		XmlAttributeCollection_t2458 * L_1 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, __this);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		XmlAttribute_t2339 * L_3 = XmlAttributeCollection_get_ItemOf_m10665(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		XmlAttribute_t2339 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlAttribute::get_Name() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral2659, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		XmlAttribute_t2339 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlAttribute::get_Value() */, L_7);
		return L_8;
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		XmlAttributeCollection_t2458 * L_11 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, __this);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}

IL_0050:
	{
		XmlNode_t2457 * L_13 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		XmlNode_t2457 * L_14 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_XmlLang() */, L_14);
		G_B9_0 = L_15;
		goto IL_0076;
	}

IL_006b:
	{
		XmlDocument_t2373 * L_16 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlDocument::get_XmlLang() */, L_16);
		G_B9_0 = L_17;
	}

IL_0076:
	{
		return G_B9_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNode_t2457_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t427_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3115_MethodInfo_var;
extern "C" int32_t XmlNode_get_XmlSpace_m11029 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlNode_t2457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		Dictionary_2_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		Dictionary_2__ctor_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483838);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	XmlAttribute_t2339 * V_1 = {0};
	String_t* V_2 = {0};
	Dictionary_2_t427 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t G_B18_0 = {0};
	{
		XmlAttributeCollection_t2458 * L_0 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, __this);
		if (!L_0)
		{
			goto IL_00b4;
		}
	}
	{
		V_0 = 0;
		goto IL_00a3;
	}

IL_0012:
	{
		XmlAttributeCollection_t2458 * L_1 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, __this);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		XmlAttribute_t2339 * L_3 = XmlAttributeCollection_get_ItemOf_m10665(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		XmlAttribute_t2339 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlAttribute::get_Name() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral2660, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_009f;
		}
	}
	{
		XmlAttribute_t2339 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlAttribute::get_Value() */, L_7);
		V_2 = L_8;
		String_t* L_9 = V_2;
		if (!L_9)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t2457_il2cpp_TypeInfo_var);
		Dictionary_2_t427 * L_10 = ((XmlNode_t2457_StaticFields*)XmlNode_t2457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map44_4;
		if (L_10)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t427 * L_11 = (Dictionary_2_t427 *)il2cpp_codegen_object_new (Dictionary_2_t427_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3115(L_11, 2, /*hidden argument*/Dictionary_2__ctor_m3115_MethodInfo_var);
		V_3 = L_11;
		Dictionary_2_t427 * L_12 = V_3;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, (String_t*) &_stringLiteral2661, 0);
		Dictionary_2_t427 * L_13 = V_3;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, (String_t*) &_stringLiteral859, 1);
		Dictionary_2_t427 * L_14 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t2457_il2cpp_TypeInfo_var);
		((XmlNode_t2457_StaticFields*)XmlNode_t2457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map44_4 = L_14;
	}

IL_0070:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t2457_il2cpp_TypeInfo_var);
		Dictionary_2_t427 * L_15 = ((XmlNode_t2457_StaticFields*)XmlNode_t2457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map44_4;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_4));
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_18 = V_4;
		if (!L_18)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_009a;
	}

IL_0096:
	{
		return (int32_t)(2);
	}

IL_0098:
	{
		return (int32_t)(1);
	}

IL_009a:
	{
		goto IL_00b4;
	}

IL_009f:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_21 = V_0;
		XmlAttributeCollection_t2458 * L_22 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, __this);
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, L_22);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0012;
		}
	}

IL_00b4:
	{
		XmlNode_t2457 * L_24 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		if (!L_24)
		{
			goto IL_00cf;
		}
	}
	{
		XmlNode_t2457 * L_25 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		NullCheck(L_25);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace() */, L_25);
		G_B18_0 = L_26;
		goto IL_00da;
	}

IL_00cf:
	{
		XmlDocument_t2373 * L_27 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace() */, L_27);
		G_B18_0 = L_28;
	}

IL_00da:
	{
		return G_B18_0;
	}
}
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlNode_set_SchemaInfo_m11030 (XmlNode_t2457 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlNode_AppendChild_m11031 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = ___newChild;
		XmlNode_t2457 * L_1 = (XmlNode_t2457 *)VirtFuncInvoker2< XmlNode_t2457 *, XmlNode_t2457 *, XmlNode_t2457 * >::Invoke(31 /* System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode) */, __this, L_0, (XmlNode_t2457 *)NULL);
		return L_1;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t2457 * XmlNode_AppendChild_m11032 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, bool ___checkNodeType, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = ___newChild;
		bool L_1 = ___checkNodeType;
		XmlNode_t2457 * L_2 = XmlNode_InsertBefore_m11036(__this, L_0, (XmlNode_t2457 *)NULL, L_1, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::CloneNode(System.Boolean)
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C" Object_t * XmlNode_GetEnumerator_m11033 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	{
		XmlNodeList_t2487 * L_0 = (XmlNodeList_t2487 *)VirtFuncInvoker0< XmlNodeList_t2487 * >::Invoke(8 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, __this);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlNode_InsertBefore_m11034 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, XmlNode_t2457 * ___refChild, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = ___newChild;
		XmlNode_t2457 * L_1 = ___refChild;
		XmlNode_t2457 * L_2 = XmlNode_InsertBefore_m11036(__this, L_0, L_1, 1, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C" bool XmlNode_IsAncestor_m11035 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, const MethodInfo* method)
{
	XmlNode_t2457 * V_0 = {0};
	{
		XmlNode_t2457 * L_0 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		V_0 = L_0;
		goto IL_001c;
	}

IL_000c:
	{
		XmlNode_t2457 * L_1 = V_0;
		XmlNode_t2457 * L_2 = ___newChild;
		if ((!(((Object_t*)(XmlNode_t2457 *)L_1) == ((Object_t*)(XmlNode_t2457 *)L_2))))
		{
			goto IL_0015;
		}
	}
	{
		return 1;
	}

IL_0015:
	{
		XmlNode_t2457 * L_3 = V_0;
		NullCheck(L_3);
		XmlNode_t2457 * L_4 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_3);
		V_0 = L_4;
	}

IL_001c:
	{
		XmlNode_t2457 * L_5 = V_0;
		if (L_5)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern TypeInfo* XmlDocument_t2373_il2cpp_TypeInfo_var;
extern TypeInfo* XmlLinkedNode_t2455_il2cpp_TypeInfo_var;
extern TypeInfo* XmlEntityReference_t2473_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNode_InsertBefore_m11036 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, XmlNode_t2457 * ___refChild, bool ___checkNodeType, bool ___raiseEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		XmlDocument_t2373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4681);
		XmlLinkedNode_t2455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4787);
		XmlEntityReference_t2473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4762);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	XmlDocument_t2373 * V_1 = {0};
	XmlLinkedNode_t2455 * V_2 = {0};
	XmlLinkedNode_t2455 * V_3 = {0};
	XmlLinkedNode_t2455 * V_4 = {0};
	int32_t V_5 = {0};
	XmlDocument_t2373 * G_B7_0 = {0};
	{
		bool L_0 = ___checkNodeType;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		XmlNode_t2457 * L_1 = ___newChild;
		XmlNode_t2457 * L_2 = ___refChild;
		XmlNode_CheckNodeInsertion_m11037(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	{
		XmlNode_t2457 * L_3 = ___newChild;
		XmlNode_t2457 * L_4 = ___refChild;
		if ((!(((Object_t*)(XmlNode_t2457 *)L_3) == ((Object_t*)(XmlNode_t2457 *)L_4))))
		{
			goto IL_0017;
		}
	}
	{
		XmlNode_t2457 * L_5 = ___newChild;
		return L_5;
	}

IL_0017:
	{
		V_0 = ((Object_t *)Castclass(__this, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var));
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0036;
		}
	}
	{
		G_B7_0 = ((XmlDocument_t2373 *)Castclass(__this, XmlDocument_t2373_il2cpp_TypeInfo_var));
		goto IL_003c;
	}

IL_0036:
	{
		XmlDocument_t2373 * L_7 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		G_B7_0 = L_7;
	}

IL_003c:
	{
		V_1 = G_B7_0;
		bool L_8 = ___raiseEvent;
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		XmlDocument_t2373 * L_9 = V_1;
		XmlNode_t2457 * L_10 = ___newChild;
		NullCheck(L_9);
		XmlDocument_onNodeInserting_m10812(L_9, L_10, __this, /*hidden argument*/NULL);
	}

IL_004c:
	{
		XmlNode_t2457 * L_11 = ___newChild;
		NullCheck(L_11);
		XmlNode_t2457 * L_12 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_11);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		XmlNode_t2457 * L_13 = ___newChild;
		NullCheck(L_13);
		XmlNode_t2457 * L_14 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_13);
		XmlNode_t2457 * L_15 = ___newChild;
		bool L_16 = ___checkNodeType;
		NullCheck(L_14);
		XmlNode_RemoveChild_m11041(L_14, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0065:
	{
		XmlNode_t2457 * L_17 = ___newChild;
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_17);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0095;
		}
	}
	{
		goto IL_0085;
	}

IL_0077:
	{
		XmlNode_t2457 * L_19 = ___newChild;
		NullCheck(L_19);
		XmlNode_t2457 * L_20 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, L_19);
		XmlNode_t2457 * L_21 = ___refChild;
		VirtFuncInvoker2< XmlNode_t2457 *, XmlNode_t2457 *, XmlNode_t2457 * >::Invoke(31 /* System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode) */, __this, L_20, L_21);
	}

IL_0085:
	{
		XmlNode_t2457 * L_22 = ___newChild;
		NullCheck(L_22);
		XmlNode_t2457 * L_23 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, L_22);
		if (L_23)
		{
			goto IL_0077;
		}
	}
	{
		goto IL_018c;
	}

IL_0095:
	{
		XmlNode_t2457 * L_24 = ___newChild;
		V_2 = ((XmlLinkedNode_t2455 *)Castclass(L_24, XmlLinkedNode_t2455_il2cpp_TypeInfo_var));
		XmlLinkedNode_t2455 * L_25 = V_2;
		NullCheck(L_25);
		((XmlNode_t2457 *)L_25)->___parentNode_2 = __this;
		XmlNode_t2457 * L_26 = ___refChild;
		if (L_26)
		{
			goto IL_00f7;
		}
	}
	{
		Object_t * L_27 = V_0;
		NullCheck(L_27);
		XmlLinkedNode_t2455 * L_28 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_27);
		if (!L_28)
		{
			goto IL_00df;
		}
	}
	{
		XmlNode_t2457 * L_29 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, __this);
		V_3 = ((XmlLinkedNode_t2455 *)Castclass(L_29, XmlLinkedNode_t2455_il2cpp_TypeInfo_var));
		Object_t * L_30 = V_0;
		NullCheck(L_30);
		XmlLinkedNode_t2455 * L_31 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_30);
		XmlLinkedNode_t2455 * L_32 = V_2;
		NullCheck(L_31);
		XmlLinkedNode_set_NextLinkedSibling_m10960(L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = V_0;
		XmlLinkedNode_t2455 * L_34 = V_2;
		NullCheck(L_33);
		InterfaceActionInvoker1< XmlLinkedNode_t2455 * >::Invoke(1 /* System.Void System.Xml.IHasXmlChildNode::set_LastLinkedChild(System.Xml.XmlLinkedNode) */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_33, L_34);
		XmlLinkedNode_t2455 * L_35 = V_2;
		XmlLinkedNode_t2455 * L_36 = V_3;
		NullCheck(L_35);
		XmlLinkedNode_set_NextLinkedSibling_m10960(L_35, L_36, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00df:
	{
		Object_t * L_37 = V_0;
		XmlLinkedNode_t2455 * L_38 = V_2;
		NullCheck(L_37);
		InterfaceActionInvoker1< XmlLinkedNode_t2455 * >::Invoke(1 /* System.Void System.Xml.IHasXmlChildNode::set_LastLinkedChild(System.Xml.XmlLinkedNode) */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_37, L_38);
		Object_t * L_39 = V_0;
		NullCheck(L_39);
		XmlLinkedNode_t2455 * L_40 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_39);
		XmlLinkedNode_t2455 * L_41 = V_2;
		NullCheck(L_40);
		XmlLinkedNode_set_NextLinkedSibling_m10960(L_40, L_41, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		goto IL_0130;
	}

IL_00f7:
	{
		XmlNode_t2457 * L_42 = ___refChild;
		NullCheck(L_42);
		XmlNode_t2457 * L_43 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(22 /* System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling() */, L_42);
		V_4 = ((XmlLinkedNode_t2455 *)IsInst(L_43, XmlLinkedNode_t2455_il2cpp_TypeInfo_var));
		XmlLinkedNode_t2455 * L_44 = V_4;
		if (L_44)
		{
			goto IL_011c;
		}
	}
	{
		Object_t * L_45 = V_0;
		NullCheck(L_45);
		XmlLinkedNode_t2455 * L_46 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_45);
		XmlLinkedNode_t2455 * L_47 = V_2;
		NullCheck(L_46);
		XmlLinkedNode_set_NextLinkedSibling_m10960(L_46, L_47, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_011c:
	{
		XmlLinkedNode_t2455 * L_48 = V_4;
		XmlLinkedNode_t2455 * L_49 = V_2;
		NullCheck(L_48);
		XmlLinkedNode_set_NextLinkedSibling_m10960(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0124:
	{
		XmlLinkedNode_t2455 * L_50 = V_2;
		XmlNode_t2457 * L_51 = ___refChild;
		NullCheck(L_50);
		XmlLinkedNode_set_NextLinkedSibling_m10960(L_50, ((XmlLinkedNode_t2455 *)IsInst(L_51, XmlLinkedNode_t2455_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0130:
	{
		XmlNode_t2457 * L_52 = ___newChild;
		NullCheck(L_52);
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_52);
		V_5 = L_53;
		int32_t L_54 = V_5;
		if (((int32_t)((int32_t)L_54-(int32_t)5)) == 0)
		{
			goto IL_015e;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)5)) == 1)
		{
			goto IL_016e;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)5)) == 2)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)5)) == 3)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)5)) == 4)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)5)) == 5)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0178;
	}

IL_015e:
	{
		XmlNode_t2457 * L_55 = ___newChild;
		NullCheck(((XmlEntityReference_t2473 *)Castclass(L_55, XmlEntityReference_t2473_il2cpp_TypeInfo_var)));
		XmlEntityReference_SetReferencedEntityContent_m10904(((XmlEntityReference_t2473 *)Castclass(L_55, XmlEntityReference_t2473_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_0178;
	}

IL_016e:
	{
		goto IL_0178;
	}

IL_0173:
	{
		goto IL_0178;
	}

IL_0178:
	{
		bool L_56 = ___raiseEvent;
		if (!L_56)
		{
			goto IL_018c;
		}
	}
	{
		XmlDocument_t2373 * L_57 = V_1;
		XmlNode_t2457 * L_58 = ___newChild;
		XmlNode_t2457 * L_59 = ___newChild;
		NullCheck(L_59);
		XmlNode_t2457 * L_60 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_59);
		NullCheck(L_57);
		XmlDocument_onNodeInserted_m10811(L_57, L_58, L_60, /*hidden argument*/NULL);
	}

IL_018c:
	{
		XmlNode_t2457 * L_61 = ___newChild;
		return L_61;
	}
}
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern TypeInfo* XmlDocument_t2373_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeType_t2493_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* XmlElement_t2350_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern "C" void XmlNode_CheckNodeInsertion_m11037 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, XmlNode_t2457 * ___refChild, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlDocument_t2373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4681);
		XmlNodeType_t2493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4766);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		XmlElement_t2350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4637);
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		s_Il2CppMethodIntialized = true;
	}
	XmlDocument_t2373 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	XmlDocument_t2373 * G_B3_0 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0018;
		}
	}
	{
		G_B3_0 = ((XmlDocument_t2373 *)Castclass(__this, XmlDocument_t2373_il2cpp_TypeInfo_var));
		goto IL_001e;
	}

IL_0018:
	{
		XmlDocument_t2373 * L_1 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		G_B3_0 = L_1;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)9))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)11))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2662, L_8, /*hidden argument*/NULL);
		InvalidOperationException_t1086 * L_10 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_10, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_006c:
	{
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0125;
	}

IL_0086:
	{
		XmlNode_t2457 * L_14 = ___newChild;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_14);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if (((int32_t)((int32_t)L_16-(int32_t)3)) == 0)
		{
			goto IL_00a6;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)3)) == 1)
		{
			goto IL_00ab;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)3)) == 2)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_00ab;
	}

IL_00a6:
	{
		goto IL_00d1;
	}

IL_00ab:
	{
		XmlNode_t2457 * L_17 = ___newChild;
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_17);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_19);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		int32_t L_22 = L_21;
		Object_t * L_23 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Format_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral2663, L_20, L_23, /*hidden argument*/NULL);
		InvalidOperationException_t1086 * L_25 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_25, L_24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00d1:
	{
		goto IL_0125;
	}

IL_00d6:
	{
		XmlNode_t2457 * L_26 = ___newChild;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if (((int32_t)((int32_t)L_28-(int32_t)6)) == 0)
		{
			goto IL_0115;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)6)) == 1)
		{
			goto IL_0101;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)6)) == 2)
		{
			goto IL_0101;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)6)) == 3)
		{
			goto IL_0115;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)6)) == 4)
		{
			goto IL_0115;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)6)) == 5)
		{
			goto IL_0101;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)6)) == 6)
		{
			goto IL_0115;
		}
	}

IL_0101:
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)2)))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)17))))
		{
			goto IL_0115;
		}
	}
	{
		goto IL_0120;
	}

IL_0115:
	{
		InvalidOperationException_t1086 * L_31 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_31, (String_t*) &_stringLiteral2664, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_0120:
	{
		goto IL_0125;
	}

IL_0125:
	{
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlNode::get_IsReadOnly() */, __this);
		if (!L_32)
		{
			goto IL_013b;
		}
	}
	{
		InvalidOperationException_t1086 * L_33 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_33, (String_t*) &_stringLiteral2665, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_013b:
	{
		XmlNode_t2457 * L_34 = ___newChild;
		NullCheck(L_34);
		XmlDocument_t2373 * L_35 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, L_34);
		XmlDocument_t2373 * L_36 = V_0;
		if ((((Object_t*)(XmlDocument_t2373 *)L_35) == ((Object_t*)(XmlDocument_t2373 *)L_36)))
		{
			goto IL_0152;
		}
	}
	{
		ArgumentException_t1126 * L_37 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_37, (String_t*) &_stringLiteral2666, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_0152:
	{
		XmlNode_t2457 * L_38 = ___refChild;
		if (!L_38)
		{
			goto IL_016f;
		}
	}
	{
		XmlNode_t2457 * L_39 = ___refChild;
		NullCheck(L_39);
		XmlNode_t2457 * L_40 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_39);
		if ((((Object_t*)(XmlNode_t2457 *)L_40) == ((Object_t*)(XmlNode_t2457 *)__this)))
		{
			goto IL_016f;
		}
	}
	{
		ArgumentException_t1126 * L_41 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_41, (String_t*) &_stringLiteral2667, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_41);
	}

IL_016f:
	{
		XmlDocument_t2373 * L_42 = V_0;
		if ((!(((Object_t*)(XmlNode_t2457 *)__this) == ((Object_t*)(XmlDocument_t2373 *)L_42))))
		{
			goto IL_01a3;
		}
	}
	{
		XmlDocument_t2373 * L_43 = V_0;
		NullCheck(L_43);
		XmlElement_t2350 * L_44 = XmlDocument_get_DocumentElement_m10774(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01a3;
		}
	}
	{
		XmlNode_t2457 * L_45 = ___newChild;
		if (!((XmlElement_t2350 *)IsInst(L_45, XmlElement_t2350_il2cpp_TypeInfo_var)))
		{
			goto IL_01a3;
		}
	}
	{
		XmlNode_t2457 * L_46 = ___newChild;
		XmlDocument_t2373 * L_47 = V_0;
		NullCheck(L_47);
		XmlElement_t2350 * L_48 = XmlDocument_get_DocumentElement_m10774(L_47, /*hidden argument*/NULL);
		if ((((Object_t*)(XmlNode_t2457 *)L_46) == ((Object_t*)(XmlElement_t2350 *)L_48)))
		{
			goto IL_01a3;
		}
	}
	{
		XmlException_t2474 * L_49 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_49, (String_t*) &_stringLiteral2668, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_49);
	}

IL_01a3:
	{
		XmlNode_t2457 * L_50 = ___newChild;
		if ((((Object_t*)(XmlNode_t2457 *)L_50) == ((Object_t*)(XmlNode_t2457 *)__this)))
		{
			goto IL_01b6;
		}
	}
	{
		XmlNode_t2457 * L_51 = ___newChild;
		bool L_52 = XmlNode_IsAncestor_m11035(__this, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01c1;
		}
	}

IL_01b6:
	{
		ArgumentException_t1126 * L_53 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_53, (String_t*) &_stringLiteral2669, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_53);
	}

IL_01c1:
	{
		return;
	}
}
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C" void XmlNode_RemoveAll_m11038 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	XmlNode_t2457 * V_0 = {0};
	XmlNode_t2457 * V_1 = {0};
	{
		XmlAttributeCollection_t2458 * L_0 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlAttributeCollection_t2458 * L_1 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, __this);
		NullCheck(L_1);
		XmlAttributeCollection_RemoveAll_m10667(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		V_0 = (XmlNode_t2457 *)NULL;
		XmlNode_t2457 * L_2 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, __this);
		V_1 = L_2;
		goto IL_0035;
	}

IL_0024:
	{
		XmlNode_t2457 * L_3 = V_1;
		NullCheck(L_3);
		XmlNode_t2457 * L_4 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(17 /* System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling() */, L_3);
		V_0 = L_4;
		XmlNode_t2457 * L_5 = V_1;
		VirtFuncInvoker1< XmlNode_t2457 *, XmlNode_t2457 * >::Invoke(33 /* System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode) */, __this, L_5);
		XmlNode_t2457 * L_6 = V_0;
		V_1 = L_6;
	}

IL_0035:
	{
		XmlNode_t2457 * L_7 = V_1;
		if (L_7)
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlNode_RemoveChild_m11039 (XmlNode_t2457 * __this, XmlNode_t2457 * ___oldChild, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = ___oldChild;
		XmlNode_t2457 * L_1 = XmlNode_RemoveChild_m11041(__this, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern TypeInfo* XmlNodeType_t2493_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void XmlNode_CheckNodeRemoval_m11040 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNodeType_t2493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4766);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)11))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2670, L_6, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_8 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004d:
	{
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlNode::get_IsReadOnly() */, __this);
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2671, L_12, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_14 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0073:
	{
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern TypeInfo* NullReferenceException_t1118_il2cpp_TypeInfo_var;
extern TypeInfo* XmlDocument_t2373_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern TypeInfo* XmlLinkedNode_t2455_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNode_RemoveChild_m11041 (XmlNode_t2457 * __this, XmlNode_t2457 * ___oldChild, bool ___checkNodeType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1741);
		XmlDocument_t2373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4681);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		XmlLinkedNode_t2455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4787);
		s_Il2CppMethodIntialized = true;
	}
	XmlDocument_t2373 * V_0 = {0};
	Object_t * V_1 = {0};
	XmlLinkedNode_t2455 * V_2 = {0};
	XmlLinkedNode_t2455 * V_3 = {0};
	XmlLinkedNode_t2455 * V_4 = {0};
	XmlDocument_t2373 * G_B5_0 = {0};
	{
		XmlNode_t2457 * L_0 = ___oldChild;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		NullReferenceException_t1118 * L_1 = (NullReferenceException_t1118 *)il2cpp_codegen_object_new (NullReferenceException_t1118_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m11484(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000c:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0024;
		}
	}
	{
		G_B5_0 = ((XmlDocument_t2373 *)Castclass(__this, XmlDocument_t2373_il2cpp_TypeInfo_var));
		goto IL_002a;
	}

IL_0024:
	{
		XmlDocument_t2373 * L_3 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		G_B5_0 = L_3;
	}

IL_002a:
	{
		V_0 = G_B5_0;
		XmlNode_t2457 * L_4 = ___oldChild;
		NullCheck(L_4);
		XmlNode_t2457 * L_5 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_4);
		if ((((Object_t*)(XmlNode_t2457 *)L_5) == ((Object_t*)(XmlNode_t2457 *)__this)))
		{
			goto IL_0042;
		}
	}
	{
		ArgumentException_t1126 * L_6 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_6, (String_t*) &_stringLiteral2672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0042:
	{
		bool L_7 = ___checkNodeType;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		XmlDocument_t2373 * L_8 = V_0;
		XmlNode_t2457 * L_9 = ___oldChild;
		XmlNode_t2457 * L_10 = ___oldChild;
		NullCheck(L_10);
		XmlNode_t2457 * L_11 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_10);
		NullCheck(L_8);
		XmlDocument_onNodeRemoving_m10814(L_8, L_9, L_11, /*hidden argument*/NULL);
	}

IL_0055:
	{
		bool L_12 = ___checkNodeType;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		XmlNode_CheckNodeRemoval_m11040(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		V_1 = ((Object_t *)Castclass(__this, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var));
		Object_t * L_13 = V_1;
		NullCheck(L_13);
		XmlLinkedNode_t2455 * L_14 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_13);
		Object_t * L_15 = V_1;
		NullCheck(L_15);
		XmlLinkedNode_t2455 * L_16 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		XmlLinkedNode_t2455 * L_17 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_16, /*hidden argument*/NULL);
		bool L_18 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_14, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		Object_t * L_19 = V_1;
		NullCheck(L_19);
		XmlLinkedNode_t2455 * L_20 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_19);
		XmlNode_t2457 * L_21 = ___oldChild;
		bool L_22 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a0;
		}
	}
	{
		Object_t * L_23 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< XmlLinkedNode_t2455 * >::Invoke(1 /* System.Void System.Xml.IHasXmlChildNode::set_LastLinkedChild(System.Xml.XmlLinkedNode) */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_23, (XmlLinkedNode_t2455 *)NULL);
		goto IL_012c;
	}

IL_00a0:
	{
		XmlNode_t2457 * L_24 = ___oldChild;
		V_2 = ((XmlLinkedNode_t2455 *)Castclass(L_24, XmlLinkedNode_t2455_il2cpp_TypeInfo_var));
		Object_t * L_25 = V_1;
		NullCheck(L_25);
		XmlLinkedNode_t2455 * L_26 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_25);
		V_3 = L_26;
		XmlNode_t2457 * L_27 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(9 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, __this);
		V_4 = ((XmlLinkedNode_t2455 *)Castclass(L_27, XmlLinkedNode_t2455_il2cpp_TypeInfo_var));
		goto IL_00c7;
	}

IL_00c0:
	{
		XmlLinkedNode_t2455 * L_28 = V_3;
		NullCheck(L_28);
		XmlLinkedNode_t2455 * L_29 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_28, /*hidden argument*/NULL);
		V_3 = L_29;
	}

IL_00c7:
	{
		XmlLinkedNode_t2455 * L_30 = V_3;
		NullCheck(L_30);
		XmlLinkedNode_t2455 * L_31 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_30, /*hidden argument*/NULL);
		Object_t * L_32 = V_1;
		NullCheck(L_32);
		XmlLinkedNode_t2455 * L_33 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_32);
		bool L_34 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00ee;
		}
	}
	{
		XmlLinkedNode_t2455 * L_35 = V_3;
		NullCheck(L_35);
		XmlLinkedNode_t2455 * L_36 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_35, /*hidden argument*/NULL);
		XmlLinkedNode_t2455 * L_37 = V_2;
		bool L_38 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00c0;
		}
	}

IL_00ee:
	{
		XmlLinkedNode_t2455 * L_39 = V_3;
		NullCheck(L_39);
		XmlLinkedNode_t2455 * L_40 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_39, /*hidden argument*/NULL);
		XmlLinkedNode_t2455 * L_41 = V_2;
		bool L_42 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0105;
		}
	}
	{
		ArgumentException_t1126 * L_43 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11580(L_43, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_43);
	}

IL_0105:
	{
		XmlLinkedNode_t2455 * L_44 = V_3;
		XmlLinkedNode_t2455 * L_45 = V_2;
		NullCheck(L_45);
		XmlLinkedNode_t2455 * L_46 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		XmlLinkedNode_set_NextLinkedSibling_m10960(L_44, L_46, /*hidden argument*/NULL);
		XmlLinkedNode_t2455 * L_47 = V_2;
		NullCheck(L_47);
		XmlLinkedNode_t2455 * L_48 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_47, /*hidden argument*/NULL);
		XmlLinkedNode_t2455 * L_49 = V_4;
		if ((!(((Object_t*)(XmlLinkedNode_t2455 *)L_48) == ((Object_t*)(XmlLinkedNode_t2455 *)L_49))))
		{
			goto IL_0125;
		}
	}
	{
		Object_t * L_50 = V_1;
		XmlLinkedNode_t2455 * L_51 = V_3;
		NullCheck(L_50);
		InterfaceActionInvoker1< XmlLinkedNode_t2455 * >::Invoke(1 /* System.Void System.Xml.IHasXmlChildNode::set_LastLinkedChild(System.Xml.XmlLinkedNode) */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_50, L_51);
	}

IL_0125:
	{
		XmlLinkedNode_t2455 * L_52 = V_2;
		NullCheck(L_52);
		XmlLinkedNode_set_NextLinkedSibling_m10960(L_52, (XmlLinkedNode_t2455 *)NULL, /*hidden argument*/NULL);
	}

IL_012c:
	{
		bool L_53 = ___checkNodeType;
		if (!L_53)
		{
			goto IL_013f;
		}
	}
	{
		XmlDocument_t2373 * L_54 = V_0;
		XmlNode_t2457 * L_55 = ___oldChild;
		XmlNode_t2457 * L_56 = ___oldChild;
		NullCheck(L_56);
		XmlNode_t2457 * L_57 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_56);
		NullCheck(L_54);
		XmlDocument_onNodeRemoved_m10813(L_54, L_55, L_57, /*hidden argument*/NULL);
	}

IL_013f:
	{
		XmlNode_t2457 * L_58 = ___oldChild;
		NullCheck(L_58);
		L_58->___parentNode_2 = (XmlNode_t2457 *)NULL;
		XmlNode_t2457 * L_59 = ___oldChild;
		return L_59;
	}
}
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern TypeInfo* XmlElement_t2350_il2cpp_TypeInfo_var;
extern "C" XmlElement_t2350 * XmlNode_get_AttributeOwnerElement_m11042 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlElement_t2350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4637);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlNode_t2457 * L_0 = (__this->___parentNode_2);
		return ((XmlElement_t2350 *)Castclass(L_0, XmlElement_t2350_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C" void XmlNode_set_AttributeOwnerElement_m11043 (XmlNode_t2457 * __this, XmlElement_t2350 * ___value, const MethodInfo* method)
{
	{
		XmlElement_t2350 * L_0 = ___value;
		__this->___parentNode_2 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlNode::WriteContentTo(System.Xml.XmlWriter)
// System.Void System.Xml.XmlNode::WriteTo(System.Xml.XmlWriter)
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern TypeInfo* XmlDocument_t2373_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNamespaceManager_t2485_il2cpp_TypeInfo_var;
extern TypeInfo* XmlAttribute_t2339_il2cpp_TypeInfo_var;
extern TypeInfo* XmlElement_t2350_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" XmlNamespaceManager_t2485 * XmlNode_ConstructNamespaceManager_m11044 (XmlNode_t2457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlDocument_t2373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4681);
		XmlNamespaceManager_t2485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4784);
		XmlAttribute_t2339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4689);
		XmlElement_t2350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4637);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlDocument_t2373 * V_0 = {0};
	XmlNamespaceManager_t2485 * V_1 = {0};
	XmlElement_t2350 * V_2 = {0};
	int32_t V_3 = 0;
	XmlAttribute_t2339 * V_4 = {0};
	int32_t V_5 = {0};
	XmlDocument_t2373 * G_B3_0 = {0};
	{
		if (!((XmlDocument_t2373 *)IsInst(__this, XmlDocument_t2373_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((XmlDocument_t2373 *)Castclass(__this, XmlDocument_t2373_il2cpp_TypeInfo_var));
		goto IL_001c;
	}

IL_0016:
	{
		XmlDocument_t2373 * L_0 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		G_B3_0 = L_0;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		XmlDocument_t2373 * L_1 = V_0;
		NullCheck(L_1);
		XmlNameTable_t2314 * L_2 = XmlDocument_get_NameTable_m10780(L_1, /*hidden argument*/NULL);
		XmlNamespaceManager_t2485 * L_3 = (XmlNamespaceManager_t2485 *)il2cpp_codegen_object_new (XmlNamespaceManager_t2485_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m10982(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = (XmlElement_t2350 *)NULL;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, __this);
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0065;
	}

IL_0048:
	{
		NullCheck(((XmlAttribute_t2339 *)Castclass(__this, XmlAttribute_t2339_il2cpp_TypeInfo_var)));
		XmlElement_t2350 * L_7 = (XmlElement_t2350 *)VirtFuncInvoker0< XmlElement_t2350 * >::Invoke(38 /* System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement() */, ((XmlAttribute_t2339 *)Castclass(__this, XmlAttribute_t2339_il2cpp_TypeInfo_var)));
		V_2 = L_7;
		goto IL_0076;
	}

IL_0059:
	{
		V_2 = ((XmlElement_t2350 *)IsInst(__this, XmlElement_t2350_il2cpp_TypeInfo_var));
		goto IL_0076;
	}

IL_0065:
	{
		XmlNode_t2457 * L_8 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		V_2 = ((XmlElement_t2350 *)IsInst(L_8, XmlElement_t2350_il2cpp_TypeInfo_var));
		goto IL_0076;
	}

IL_0076:
	{
		goto IL_0142;
	}

IL_007b:
	{
		V_3 = 0;
		goto IL_0125;
	}

IL_0082:
	{
		XmlElement_t2350 * L_9 = V_2;
		NullCheck(L_9);
		XmlAttributeCollection_t2458 * L_10 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_9);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		XmlAttribute_t2339 * L_12 = XmlAttributeCollection_get_ItemOf_m10665(L_10, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		XmlAttribute_t2339 * L_13 = V_4;
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlAttribute::get_Prefix() */, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m2344(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00dd;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_16 = V_1;
		XmlAttribute_t2339 * L_17 = V_4;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlAttribute::get_LocalName() */, L_17);
		NullCheck(L_16);
		String_t* L_19 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_16, L_18);
		XmlAttribute_t2339 * L_20 = V_4;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlAttribute::get_Value() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Inequality_m3147(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d8;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_23 = V_1;
		XmlAttribute_t2339 * L_24 = V_4;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlAttribute::get_LocalName() */, L_24);
		XmlAttribute_t2339 * L_26 = V_4;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlAttribute::get_Value() */, L_26);
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_23, L_25, L_27);
	}

IL_00d8:
	{
		goto IL_0121;
	}

IL_00dd:
	{
		XmlAttribute_t2339 * L_28 = V_4;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlAttribute::get_Name() */, L_28);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Equality_m2344(NULL /*static, unused*/, L_29, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0121;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_31 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_31);
		String_t* L_33 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_31, L_32);
		XmlAttribute_t2339 * L_34 = V_4;
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlAttribute::get_Value() */, L_34);
		bool L_36 = String_op_Inequality_m3147(NULL /*static, unused*/, L_33, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0121;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlAttribute_t2339 * L_39 = V_4;
		NullCheck(L_39);
		String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlAttribute::get_Value() */, L_39);
		NullCheck(L_37);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_37, L_38, L_40);
	}

IL_0121:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_0125:
	{
		int32_t L_42 = V_3;
		XmlElement_t2350 * L_43 = V_2;
		NullCheck(L_43);
		XmlAttributeCollection_t2458 * L_44 = (XmlAttributeCollection_t2458 *)VirtFuncInvoker0< XmlAttributeCollection_t2458 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_43);
		NullCheck(L_44);
		int32_t L_45 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, L_44);
		if ((((int32_t)L_42) < ((int32_t)L_45)))
		{
			goto IL_0082;
		}
	}
	{
		XmlElement_t2350 * L_46 = V_2;
		NullCheck(L_46);
		XmlNode_t2457 * L_47 = (XmlNode_t2457 *)VirtFuncInvoker0< XmlNode_t2457 * >::Invoke(20 /* System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode() */, L_46);
		V_2 = ((XmlElement_t2350 *)IsInst(L_47, XmlElement_t2350_il2cpp_TypeInfo_var));
	}

IL_0142:
	{
		XmlElement_t2350 * L_48 = V_2;
		if (L_48)
		{
			goto IL_007b;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_49 = V_1;
		return L_49;
	}
}
// System.Xml.XmlNodeChangedAction
#include "System_Xml_System_Xml_XmlNodeChangedAction.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNodeChangedAction
#include "System_Xml_System_Xml_XmlNodeChangedActionMethodDeclarations.h"



// System.Xml.XmlNodeChangedEventArgs
#include "System_Xml_System_Xml_XmlNodeChangedEventArgs.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNodeChangedEventArgs
#include "System_Xml_System_Xml_XmlNodeChangedEventArgsMethodDeclarations.h"

// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"


// System.Void System.Xml.XmlNodeChangedEventArgs::.ctor(System.Xml.XmlNode,System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String,System.Xml.XmlNodeChangedAction)
extern TypeInfo* EventArgs_t877_il2cpp_TypeInfo_var;
extern "C" void XmlNodeChangedEventArgs__ctor_m11045 (XmlNodeChangedEventArgs_t2490 * __this, XmlNode_t2457 * ___node, XmlNode_t2457 * ___oldParent, XmlNode_t2457 * ___newParent, String_t* ___oldValue, String_t* ___newValue, int32_t ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1642);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t877_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5429(__this, /*hidden argument*/NULL);
		XmlNode_t2457 * L_0 = ___node;
		__this->____node_4 = L_0;
		XmlNode_t2457 * L_1 = ___oldParent;
		__this->____oldParent_1 = L_1;
		XmlNode_t2457 * L_2 = ___newParent;
		__this->____newParent_2 = L_2;
		String_t* L_3 = ___oldValue;
		__this->____oldValue_5 = L_3;
		String_t* L_4 = ___newValue;
		__this->____newValue_6 = L_4;
		int32_t L_5 = ___action;
		__this->____action_3 = L_5;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Xml.XmlNodeList::.ctor()
extern "C" void XmlNodeList__ctor_m11046 (XmlNodeList_t2487 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlNodeList::get_Count()
// System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32)
extern "C" XmlNode_t2457 * XmlNodeList_get_ItemOf_m11047 (XmlNodeList_t2487 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		XmlNode_t2457 * L_1 = (XmlNode_t2457 *)VirtFuncInvoker1< XmlNode_t2457 *, int32_t >::Invoke(8 /* System.Xml.XmlNode System.Xml.XmlNodeList::Item(System.Int32) */, __this, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator()
// System.Xml.XmlNode System.Xml.XmlNodeList::Item(System.Int32)
// System.Xml.XmlNodeListChildren/Enumerator
#include "System_Xml_System_Xml_XmlNodeListChildren_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNodeListChildren/Enumerator
#include "System_Xml_System_Xml_XmlNodeListChildren_EnumeratorMethodDeclarations.h"



// System.Void System.Xml.XmlNodeListChildren/Enumerator::.ctor(System.Xml.IHasXmlChildNode)
extern "C" void Enumerator__ctor_m11048 (Enumerator_t2492 * __this, Object_t * ___parent, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		__this->___currentChild_1 = (XmlLinkedNode_t2455 *)NULL;
		Object_t * L_0 = ___parent;
		__this->___parent_0 = L_0;
		__this->___passedLastNode_2 = 0;
		return;
	}
}
// System.Object System.Xml.XmlNodeListChildren/Enumerator::get_Current()
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_get_Current_m11049 (Enumerator_t2492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlLinkedNode_t2455 * L_0 = (__this->___currentChild_1);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_1 = (__this->___parent_0);
		NullCheck(L_1);
		XmlLinkedNode_t2455 * L_2 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		bool L_3 = (__this->___passedLastNode_2);
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		InvalidOperationException_t1086 * L_4 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11581(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		XmlLinkedNode_t2455 * L_5 = (__this->___currentChild_1);
		return L_5;
	}
}
// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::MoveNext()
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern "C" bool Enumerator_MoveNext_m11050 (Enumerator_t2492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		V_0 = 1;
		Object_t * L_0 = (__this->___parent_0);
		NullCheck(L_0);
		XmlLinkedNode_t2455 * L_1 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = 0;
		goto IL_0079;
	}

IL_0019:
	{
		XmlLinkedNode_t2455 * L_2 = (__this->___currentChild_1);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		Object_t * L_3 = (__this->___parent_0);
		NullCheck(L_3);
		XmlLinkedNode_t2455 * L_4 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		XmlLinkedNode_t2455 * L_5 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_4, /*hidden argument*/NULL);
		__this->___currentChild_1 = L_5;
		goto IL_0079;
	}

IL_003f:
	{
		XmlLinkedNode_t2455 * L_6 = (__this->___currentChild_1);
		Object_t * L_7 = (__this->___parent_0);
		NullCheck(L_7);
		XmlLinkedNode_t2455 * L_8 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_7);
		bool L_9 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		V_0 = 0;
		__this->___passedLastNode_2 = 1;
		goto IL_0079;
	}

IL_0068:
	{
		XmlLinkedNode_t2455 * L_10 = (__this->___currentChild_1);
		NullCheck(L_10);
		XmlLinkedNode_t2455 * L_11 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_10, /*hidden argument*/NULL);
		__this->___currentChild_1 = L_11;
	}

IL_0079:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Xml.XmlNodeListChildren::.ctor(System.Xml.IHasXmlChildNode)
extern "C" void XmlNodeListChildren__ctor_m11051 (XmlNodeListChildren_t2488 * __this, Object_t * ___parent, const MethodInfo* method)
{
	{
		XmlNodeList__ctor_m11046(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___parent;
		__this->___parent_0 = L_0;
		return;
	}
}
// System.Int32 System.Xml.XmlNodeListChildren::get_Count()
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern "C" int32_t XmlNodeListChildren_get_Count_m11052 (XmlNodeListChildren_t2488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	XmlLinkedNode_t2455 * V_1 = {0};
	{
		V_0 = 0;
		Object_t * L_0 = (__this->___parent_0);
		NullCheck(L_0);
		XmlLinkedNode_t2455 * L_1 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = (__this->___parent_0);
		NullCheck(L_2);
		XmlLinkedNode_t2455 * L_3 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		XmlLinkedNode_t2455 * L_4 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_0 = 1;
		goto IL_0035;
	}

IL_002a:
	{
		XmlLinkedNode_t2455 * L_5 = V_1;
		NullCheck(L_5);
		XmlLinkedNode_t2455 * L_6 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0035:
	{
		XmlLinkedNode_t2455 * L_8 = V_1;
		Object_t * L_9 = (__this->___parent_0);
		NullCheck(L_9);
		XmlLinkedNode_t2455 * L_10 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_9);
		bool L_11 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_002a;
		}
	}

IL_004b:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNodeListChildren::GetEnumerator()
extern TypeInfo* Enumerator_t2492_il2cpp_TypeInfo_var;
extern "C" Object_t * XmlNodeListChildren_GetEnumerator_m11053 (XmlNodeListChildren_t2488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t2492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4788);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___parent_0);
		Enumerator_t2492 * L_1 = (Enumerator_t2492 *)il2cpp_codegen_object_new (Enumerator_t2492_il2cpp_TypeInfo_var);
		Enumerator__ctor_m11048(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlNode System.Xml.XmlNodeListChildren::Item(System.Int32)
extern TypeInfo* IHasXmlChildNode_t2491_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNodeListChildren_Item_m11054 (XmlNodeListChildren_t2488 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlChildNode_t2491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4774);
		s_Il2CppMethodIntialized = true;
	}
	XmlNode_t2457 * V_0 = {0};
	XmlLinkedNode_t2455 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = (XmlNode_t2457 *)NULL;
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeListChildren::get_Count() */, __this);
		int32_t L_1 = ___index;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (XmlNode_t2457 *)NULL;
	}

IL_0010:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		Object_t * L_3 = (__this->___parent_0);
		NullCheck(L_3);
		XmlLinkedNode_t2455 * L_4 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0070;
		}
	}
	{
		Object_t * L_5 = (__this->___parent_0);
		NullCheck(L_5);
		XmlLinkedNode_t2455 * L_6 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		XmlLinkedNode_t2455 * L_7 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_004a;
	}

IL_003f:
	{
		XmlLinkedNode_t2455 * L_8 = V_1;
		NullCheck(L_8);
		XmlLinkedNode_t2455 * L_9 = XmlLinkedNode_get_NextLinkedSibling_m10959(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = ___index;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0067;
		}
	}
	{
		XmlLinkedNode_t2455 * L_13 = V_1;
		Object_t * L_14 = (__this->___parent_0);
		NullCheck(L_14);
		XmlLinkedNode_t2455 * L_15 = (XmlLinkedNode_t2455 *)InterfaceFuncInvoker0< XmlLinkedNode_t2455 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2491_il2cpp_TypeInfo_var, L_14);
		bool L_16 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_003f;
		}
	}

IL_0067:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = ___index;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0070;
		}
	}
	{
		XmlLinkedNode_t2455 * L_19 = V_1;
		V_0 = L_19;
	}

IL_0070:
	{
		XmlNode_t2457 * L_20 = V_0;
		return L_20;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeTypeMethodDeclarations.h"



// System.Xml.XmlNotation
#include "System_Xml_System_Xml_XmlNotation.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNotation
#include "System_Xml_System_Xml_XmlNotationMethodDeclarations.h"



// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern TypeInfo* XmlNode_t2457_il2cpp_TypeInfo_var;
extern "C" void XmlNotation__ctor_m11055 (XmlNotation_t2494 * __this, String_t* ___localName, String_t* ___prefix, String_t* ___publicId, String_t* ___systemId, XmlDocument_t2373 * ___doc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNode_t2457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4630);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlDocument_t2373 * L_0 = ___doc;
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t2457_il2cpp_TypeInfo_var);
		XmlNode__ctor_m11007(__this, L_0, /*hidden argument*/NULL);
		XmlDocument_t2373 * L_1 = ___doc;
		NullCheck(L_1);
		XmlNameTable_t2314 * L_2 = XmlDocument_get_NameTable_m10780(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___localName;
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_2, L_3);
		__this->___localName_5 = L_4;
		XmlDocument_t2373 * L_5 = ___doc;
		NullCheck(L_5);
		XmlNameTable_t2314 * L_6 = XmlDocument_get_NameTable_m10780(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___prefix;
		NullCheck(L_6);
		String_t* L_8 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_6, L_7);
		__this->___prefix_8 = L_8;
		String_t* L_9 = ___publicId;
		__this->___publicId_6 = L_9;
		String_t* L_10 = ___systemId;
		__this->___systemId_7 = L_10;
		return;
	}
}
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C" bool XmlNotation_get_IsReadOnly_m11056 (XmlNotation_t2494 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C" String_t* XmlNotation_get_LocalName_m11057 (XmlNotation_t2494 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___localName_5);
		return L_0;
	}
}
// System.String System.Xml.XmlNotation::get_Name()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNotation_get_Name_m11058 (XmlNotation_t2494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = (__this->___prefix_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Inequality_m3147(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_3 = (__this->___prefix_8);
		String_t* L_4 = (__this->___localName_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m103(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral616, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0036;
	}

IL_0030:
	{
		String_t* L_6 = (__this->___localName_5);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C" int32_t XmlNotation_get_NodeType_m11059 (XmlNotation_t2494 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)12));
	}
}
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlNotation_CloneNode_m11060 (XmlNotation_t2494 * __this, bool ___deep, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t1086 * L_0 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_0, (String_t*) &_stringLiteral2673, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Xml.XmlNotation::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlNotation_WriteContentTo_m11061 (XmlNotation_t2494 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Xml.XmlNotation::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlNotation_WriteTo_m11062 (XmlNotation_t2494 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Xml.XmlOutputMethod
#include "System_Xml_System_Xml_XmlOutputMethod.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlOutputMethod
#include "System_Xml_System_Xml_XmlOutputMethodMethodDeclarations.h"



// System.Xml.XmlParserContext/ContextItem
#include "System_Xml_System_Xml_XmlParserContext_ContextItem.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlParserContext/ContextItem
#include "System_Xml_System_Xml_XmlParserContext_ContextItemMethodDeclarations.h"



// System.Void System.Xml.XmlParserContext/ContextItem::.ctor()
extern "C" void ContextItem__ctor_m11063 (ContextItem_t2496 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContext.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContextMethodDeclarations.h"

// Mono.Xml.DTDObjectModel
#include "System_Xml_Mono_Xml_DTDObjectModel.h"
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReader.h"
// Mono.Xml.DTDObjectModel
#include "System_Xml_Mono_Xml_DTDObjectModelMethodDeclarations.h"
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReaderMethodDeclarations.h"


// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C" void XmlParserContext__ctor_m11064 (XmlParserContext_t2497 * __this, XmlNameTable_t2314 * ___nt, XmlNamespaceManager_t2485 * ___nsMgr, String_t* ___xmlLang, int32_t ___xmlSpace, const MethodInfo* method)
{
	{
		XmlNameTable_t2314 * L_0 = ___nt;
		XmlNamespaceManager_t2485 * L_1 = ___nsMgr;
		String_t* L_2 = ___xmlLang;
		int32_t L_3 = ___xmlSpace;
		XmlParserContext__ctor_m11065(__this, L_0, L_1, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, L_2, L_3, (Encoding_t602 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextReader_t2480_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextReader_t2507_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext__ctor_m11065 (XmlParserContext_t2497 * __this, XmlNameTable_t2314 * ___nt, XmlNamespaceManager_t2485 * ___nsMgr, String_t* ___docTypeName, String_t* ___pubId, String_t* ___sysId, String_t* ___internalSubset, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t602 * ___enc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		TextReader_t2480_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4777);
		XmlTextReader_t2507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4728);
		s_Il2CppMethodIntialized = true;
	}
	XmlNamespaceManager_t2485 * G_B3_0 = {0};
	XmlNameTable_t2314 * G_B3_1 = {0};
	XmlParserContext_t2497 * G_B3_2 = {0};
	XmlNamespaceManager_t2485 * G_B1_0 = {0};
	XmlNameTable_t2314 * G_B1_1 = {0};
	XmlParserContext_t2497 * G_B1_2 = {0};
	XmlNamespaceManager_t2485 * G_B2_0 = {0};
	XmlNameTable_t2314 * G_B2_1 = {0};
	XmlParserContext_t2497 * G_B2_2 = {0};
	DTDObjectModel_t2416 * G_B4_0 = {0};
	XmlNamespaceManager_t2485 * G_B4_1 = {0};
	XmlNameTable_t2314 * G_B4_2 = {0};
	XmlParserContext_t2497 * G_B4_3 = {0};
	{
		XmlNameTable_t2314 * L_0 = ___nt;
		XmlNamespaceManager_t2485 * L_1 = ___nsMgr;
		String_t* L_2 = ___docTypeName;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (!L_2)
		{
			G_B3_0 = L_1;
			G_B3_1 = L_0;
			G_B3_2 = __this;
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = ___docTypeName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_5 = String_op_Inequality_m3147(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		if (!L_5)
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t2480_il2cpp_TypeInfo_var);
		TextReader_t2480 * L_6 = ((TextReader_t2480_StaticFields*)TextReader_t2480_il2cpp_TypeInfo_var->static_fields)->___Null_0;
		XmlNameTable_t2314 * L_7 = ___nt;
		XmlTextReader_t2507 * L_8 = (XmlTextReader_t2507 *)il2cpp_codegen_object_new (XmlTextReader_t2507_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m11195(L_8, L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___docTypeName;
		String_t* L_10 = ___pubId;
		String_t* L_11 = ___sysId;
		String_t* L_12 = ___internalSubset;
		NullCheck(L_8);
		DTDObjectModel_t2416 * L_13 = XmlTextReader_GenerateDTDObjectModel_m11292(L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		goto IL_0036;
	}

IL_0035:
	{
		G_B4_0 = ((DTDObjectModel_t2416 *)(NULL));
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
	}

IL_0036:
	{
		String_t* L_14 = ___baseURI;
		String_t* L_15 = ___xmlLang;
		int32_t L_16 = ___xmlSpace;
		Encoding_t602 * L_17 = ___enc;
		NullCheck(G_B4_3);
		XmlParserContext__ctor_m11066(G_B4_3, G_B4_2, G_B4_1, G_B4_0, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t1188_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext__ctor_m11066 (XmlParserContext_t2497 * __this, XmlNameTable_t2314 * ___nt, XmlNamespaceManager_t2485 * ___nsMgr, DTDObjectModel_t2416 * ___dtd, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t602 * ___enc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArrayList_t1188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2623);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t2497 * G_B2_0 = {0};
	XmlParserContext_t2497 * G_B1_0 = {0};
	XmlNameTable_t2314 * G_B5_0 = {0};
	XmlParserContext_t2497 * G_B5_1 = {0};
	XmlParserContext_t2497 * G_B4_0 = {0};
	XmlParserContext_t2497 * G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___baseURI_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___docTypeName_1 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___internalSubset_3 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___publicID_6 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___systemID_7 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___xmlLang_8 = L_5;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		XmlNamespaceManager_t2485 * L_6 = ___nsMgr;
		__this->___namespaceManager_4 = L_6;
		XmlNameTable_t2314 * L_7 = ___nt;
		G_B1_0 = __this;
		if (!L_7)
		{
			G_B2_0 = __this;
			goto IL_005c;
		}
	}
	{
		XmlNameTable_t2314 * L_8 = ___nt;
		G_B5_0 = L_8;
		G_B5_1 = G_B1_0;
		goto IL_006e;
	}

IL_005c:
	{
		XmlNamespaceManager_t2485 * L_9 = ___nsMgr;
		G_B3_0 = G_B2_0;
		if (!L_9)
		{
			G_B4_0 = G_B2_0;
			goto IL_006d;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_10 = ___nsMgr;
		NullCheck(L_10);
		XmlNameTable_t2314 * L_11 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(6 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_10);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = ((XmlNameTable_t2314 *)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_006e:
	{
		NullCheck(G_B5_1);
		G_B5_1->___nameTable_5 = G_B5_0;
		DTDObjectModel_t2416 * L_12 = ___dtd;
		if (!L_12)
		{
			goto IL_00b0;
		}
	}
	{
		DTDObjectModel_t2416 * L_13 = ___dtd;
		NullCheck(L_13);
		String_t* L_14 = DTDObjectModel_get_Name_m10443(L_13, /*hidden argument*/NULL);
		XmlParserContext_set_DocTypeName_m11069(__this, L_14, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_15 = ___dtd;
		NullCheck(L_15);
		String_t* L_16 = DTDObjectModel_get_PublicId_m10446(L_15, /*hidden argument*/NULL);
		XmlParserContext_set_PublicId_m11077(__this, L_16, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_17 = ___dtd;
		NullCheck(L_17);
		String_t* L_18 = DTDObjectModel_get_SystemId_m10448(L_17, /*hidden argument*/NULL);
		XmlParserContext_set_SystemId_m11078(__this, L_18, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_19 = ___dtd;
		NullCheck(L_19);
		String_t* L_20 = DTDObjectModel_get_InternalSubset_m10450(L_19, /*hidden argument*/NULL);
		XmlParserContext_set_InternalSubset_m11074(__this, L_20, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_21 = ___dtd;
		__this->___dtd_12 = L_21;
	}

IL_00b0:
	{
		Encoding_t602 * L_22 = ___enc;
		__this->___encoding_2 = L_22;
		String_t* L_23 = ___baseURI;
		XmlParserContext_set_BaseURI_m11068(__this, L_23, /*hidden argument*/NULL);
		String_t* L_24 = ___xmlLang;
		XmlParserContext_set_XmlLang_m11080(__this, L_24, /*hidden argument*/NULL);
		int32_t L_25 = ___xmlSpace;
		__this->___xmlSpace_9 = L_25;
		ArrayList_t1188 * L_26 = (ArrayList_t1188 *)il2cpp_codegen_object_new (ArrayList_t1188_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6571(L_26, /*hidden argument*/NULL);
		__this->___contextItems_10 = L_26;
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C" String_t* XmlParserContext_get_BaseURI_m11067 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___baseURI_0);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_BaseURI_m11068 (XmlParserContext_t2497 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t2497 * G_B2_0 = {0};
	XmlParserContext_t2497 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t2497 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___baseURI_0 = G_B3_0;
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_DocTypeName_m11069 (XmlParserContext_t2497 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t2497 * G_B2_0 = {0};
	XmlParserContext_t2497 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t2497 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___docTypeName_1 = G_B3_0;
		return;
	}
}
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C" DTDObjectModel_t2416 * XmlParserContext_get_Dtd_m11070 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	{
		DTDObjectModel_t2416 * L_0 = (__this->___dtd_12);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C" void XmlParserContext_set_Dtd_m11071 (XmlParserContext_t2497 * __this, DTDObjectModel_t2416 * ___value, const MethodInfo* method)
{
	{
		DTDObjectModel_t2416 * L_0 = ___value;
		__this->___dtd_12 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C" void XmlParserContext_set_Encoding_m11072 (XmlParserContext_t2497 * __this, Encoding_t602 * ___value, const MethodInfo* method)
{
	{
		Encoding_t602 * L_0 = ___value;
		__this->___encoding_2 = L_0;
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C" String_t* XmlParserContext_get_InternalSubset_m11073 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->___internalSubset_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = (__this->___internalSubset_3);
		G_B5_0 = L_1;
		goto IL_0032;
	}

IL_0016:
	{
		DTDObjectModel_t2416 * L_2 = (__this->___dtd_12);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		DTDObjectModel_t2416 * L_3 = (__this->___dtd_12);
		NullCheck(L_3);
		String_t* L_4 = DTDObjectModel_get_InternalSubset_m10450(L_3, /*hidden argument*/NULL);
		G_B5_0 = L_4;
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_0032:
	{
		return G_B5_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_InternalSubset_m11074 (XmlParserContext_t2497 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t2497 * G_B2_0 = {0};
	XmlParserContext_t2497 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t2497 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___internalSubset_3 = G_B3_0;
		return;
	}
}
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C" XmlNamespaceManager_t2485 * XmlParserContext_get_NamespaceManager_m11075 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	{
		XmlNamespaceManager_t2485 * L_0 = (__this->___namespaceManager_4);
		return L_0;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C" XmlNameTable_t2314 * XmlParserContext_get_NameTable_m11076 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	{
		XmlNameTable_t2314 * L_0 = (__this->___nameTable_5);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_PublicId_m11077 (XmlParserContext_t2497 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t2497 * G_B2_0 = {0};
	XmlParserContext_t2497 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t2497 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___publicID_6 = G_B3_0;
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_SystemId_m11078 (XmlParserContext_t2497 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t2497 * G_B2_0 = {0};
	XmlParserContext_t2497 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t2497 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___systemID_7 = G_B3_0;
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C" String_t* XmlParserContext_get_XmlLang_m11079 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___xmlLang_8);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_XmlLang_m11080 (XmlParserContext_t2497 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t2497 * G_B2_0 = {0};
	XmlParserContext_t2497 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t2497 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___xmlLang_8 = G_B3_0;
		return;
	}
}
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C" int32_t XmlParserContext_get_XmlSpace_m11081 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___xmlSpace_9);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C" void XmlParserContext_set_XmlSpace_m11082 (XmlParserContext_t2497 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___xmlSpace_9 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlParserContext::PushScope()
extern TypeInfo* ContextItem_t2496_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_PushScope_m11083 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextItem_t2496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4789);
		s_Il2CppMethodIntialized = true;
	}
	ContextItem_t2496 * V_0 = {0};
	{
		V_0 = (ContextItem_t2496 *)NULL;
		ArrayList_t1188 * L_0 = (__this->___contextItems_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		int32_t L_2 = (__this->___contextItemCount_11);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0030;
		}
	}
	{
		ContextItem_t2496 * L_3 = (ContextItem_t2496 *)il2cpp_codegen_object_new (ContextItem_t2496_il2cpp_TypeInfo_var);
		ContextItem__ctor_m11063(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ArrayList_t1188 * L_4 = (__this->___contextItems_10);
		ContextItem_t2496 * L_5 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		goto IL_0047;
	}

IL_0030:
	{
		ArrayList_t1188 * L_6 = (__this->___contextItems_10);
		int32_t L_7 = (__this->___contextItemCount_11);
		NullCheck(L_6);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_6, L_7);
		V_0 = ((ContextItem_t2496 *)Castclass(L_8, ContextItem_t2496_il2cpp_TypeInfo_var));
	}

IL_0047:
	{
		ContextItem_t2496 * L_9 = V_0;
		String_t* L_10 = XmlParserContext_get_BaseURI_m11067(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->___BaseURI_0 = L_10;
		ContextItem_t2496 * L_11 = V_0;
		String_t* L_12 = XmlParserContext_get_XmlLang_m11079(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->___XmlLang_1 = L_12;
		ContextItem_t2496 * L_13 = V_0;
		int32_t L_14 = XmlParserContext_get_XmlSpace_m11081(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___XmlSpace_2 = L_14;
		int32_t L_15 = (__this->___contextItemCount_11);
		__this->___contextItemCount_11 = ((int32_t)((int32_t)L_15+(int32_t)1));
		return;
	}
}
// System.Void System.Xml.XmlParserContext::PopScope()
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern TypeInfo* ContextItem_t2496_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_PopScope_m11084 (XmlParserContext_t2497 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		ContextItem_t2496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4789);
		s_Il2CppMethodIntialized = true;
	}
	ContextItem_t2496 * V_0 = {0};
	{
		int32_t L_0 = (__this->___contextItemCount_11);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlException_t2474 * L_1 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_1, (String_t*) &_stringLiteral2674, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		int32_t L_2 = (__this->___contextItemCount_11);
		__this->___contextItemCount_11 = ((int32_t)((int32_t)L_2-(int32_t)1));
		ArrayList_t1188 * L_3 = (__this->___contextItems_10);
		int32_t L_4 = (__this->___contextItemCount_11);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_0 = ((ContextItem_t2496 *)Castclass(L_5, ContextItem_t2496_il2cpp_TypeInfo_var));
		ContextItem_t2496 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___BaseURI_0);
		__this->___baseURI_0 = L_7;
		ContextItem_t2496 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = (L_8->___XmlLang_1);
		__this->___xmlLang_8 = L_9;
		ContextItem_t2496 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___XmlSpace_2);
		__this->___xmlSpace_9 = L_11;
		return;
	}
}
// System.Xml.XmlParserInput/XmlParserInputSource
#include "System_Xml_System_Xml_XmlParserInput_XmlParserInputSource.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlParserInput/XmlParserInputSource
#include "System_Xml_System_Xml_XmlParserInput_XmlParserInputSourceMethodDeclarations.h"



// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C" void XmlParserInputSource__ctor_m11085 (XmlParserInputSource_t2498 * __this, TextReader_t2480 * ___reader, String_t* ___baseUri, bool ___pe, int32_t ___line, int32_t ___column, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___baseUri;
		__this->___BaseURI_0 = L_0;
		TextReader_t2480 * L_1 = ___reader;
		__this->___reader_1 = L_1;
		bool L_2 = ___pe;
		__this->___isPE_3 = L_2;
		int32_t L_3 = ___line;
		__this->___line_4 = L_3;
		int32_t L_4 = ___column;
		__this->___column_5 = L_4;
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C" int32_t XmlParserInputSource_get_LineNumber_m11086 (XmlParserInputSource_t2498 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___line_4);
		return L_0;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C" int32_t XmlParserInputSource_get_LinePosition_m11087 (XmlParserInputSource_t2498 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___column_5);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C" void XmlParserInputSource_Close_m11088 (XmlParserInputSource_t2498 * __this, const MethodInfo* method)
{
	{
		TextReader_t2480 * L_0 = (__this->___reader_1);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C" int32_t XmlParserInputSource_Read_m11089 (XmlParserInputSource_t2498 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___state_2);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}

IL_000e:
	{
		bool L_1 = (__this->___isPE_3);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = (__this->___state_2);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		__this->___state_2 = 1;
		return ((int32_t)32);
	}

IL_002e:
	{
		TextReader_t2480 * L_3 = (__this->___reader_1);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = (__this->___line_4);
		__this->___line_4 = ((int32_t)((int32_t)L_6+(int32_t)1));
		__this->___column_5 = 1;
		goto IL_0071;
	}

IL_005c:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_8 = (__this->___column_5);
		__this->___column_5 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0071:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_10 = (__this->___state_2);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_008e;
		}
	}
	{
		__this->___state_2 = 2;
		return ((int32_t)32);
	}

IL_008e:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Xml.XmlParserInput
#include "System_Xml_System_Xml_XmlParserInput.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlParserInput
#include "System_Xml_System_Xml_XmlParserInputMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// Mono.Xml.DTDParameterEntityDeclaration
#include "System_Xml_Mono_Xml_DTDParameterEntityDeclaration.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// Mono.Xml.DTDEntityBase
#include "System_Xml_Mono_Xml_DTDEntityBaseMethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"


// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
extern "C" void XmlParserInput__ctor_m11090 (XmlParserInput_t2441 * __this, TextReader_t2480 * ___reader, String_t* ___baseURI, const MethodInfo* method)
{
	{
		TextReader_t2480 * L_0 = ___reader;
		String_t* L_1 = ___baseURI;
		XmlParserInput__ctor_m11091(__this, L_0, L_1, 1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
extern TypeInfo* Stack_t2442_il2cpp_TypeInfo_var;
extern TypeInfo* XmlParserInputSource_t2498_il2cpp_TypeInfo_var;
extern "C" void XmlParserInput__ctor_m11091 (XmlParserInput_t2441 * __this, TextReader_t2480 * ___reader, String_t* ___baseURI, int32_t ___line, int32_t ___column, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_t2442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4742);
		XmlParserInputSource_t2498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4790);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t2442 * L_0 = (Stack_t2442 *)il2cpp_codegen_object_new (Stack_t2442_il2cpp_TypeInfo_var);
		Stack__ctor_m11522(L_0, /*hidden argument*/NULL);
		__this->___sourceStack_0 = L_0;
		__this->___allowTextDecl_4 = 1;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		TextReader_t2480 * L_1 = ___reader;
		String_t* L_2 = ___baseURI;
		int32_t L_3 = ___line;
		int32_t L_4 = ___column;
		XmlParserInputSource_t2498 * L_5 = (XmlParserInputSource_t2498 *)il2cpp_codegen_object_new (XmlParserInputSource_t2498_il2cpp_TypeInfo_var);
		XmlParserInputSource__ctor_m11085(L_5, L_1, L_2, 0, L_3, L_4, /*hidden argument*/NULL);
		__this->___source_1 = L_5;
		return;
	}
}
// System.Void System.Xml.XmlParserInput::Close()
extern TypeInfo* XmlParserInputSource_t2498_il2cpp_TypeInfo_var;
extern "C" void XmlParserInput_Close_m11092 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlParserInputSource_t2498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4790);
		s_Il2CppMethodIntialized = true;
	}
	{
		goto IL_001a;
	}

IL_0005:
	{
		Stack_t2442 * L_0 = (__this->___sourceStack_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Stack::Pop() */, L_0);
		NullCheck(((XmlParserInputSource_t2498 *)Castclass(L_1, XmlParserInputSource_t2498_il2cpp_TypeInfo_var)));
		XmlParserInputSource_Close_m11088(((XmlParserInputSource_t2498 *)Castclass(L_1, XmlParserInputSource_t2498_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_001a:
	{
		Stack_t2442 * L_2 = (__this->___sourceStack_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_2);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		XmlParserInputSource_t2498 * L_4 = (__this->___source_1);
		NullCheck(L_4);
		XmlParserInputSource_Close_m11088(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
extern TypeInfo* StringReader_t599_il2cpp_TypeInfo_var;
extern TypeInfo* XmlParserInputSource_t2498_il2cpp_TypeInfo_var;
extern "C" void XmlParserInput_PushPEBuffer_m11093 (XmlParserInput_t2441 * __this, DTDParameterEntityDeclaration_t2438 * ___pe, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		XmlParserInputSource_t2498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4790);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t2442 * L_0 = (__this->___sourceStack_0);
		XmlParserInputSource_t2498 * L_1 = (__this->___source_1);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_0, L_1);
		DTDParameterEntityDeclaration_t2438 * L_2 = ___pe;
		NullCheck(L_2);
		String_t* L_3 = DTDEntityBase_get_ReplacementText_m10547(L_2, /*hidden argument*/NULL);
		StringReader_t599 * L_4 = (StringReader_t599 *)il2cpp_codegen_object_new (StringReader_t599_il2cpp_TypeInfo_var);
		StringReader__ctor_m2670(L_4, L_3, /*hidden argument*/NULL);
		DTDParameterEntityDeclaration_t2438 * L_5 = ___pe;
		NullCheck(L_5);
		String_t* L_6 = DTDEntityBase_get_ActualUri_m10550(L_5, /*hidden argument*/NULL);
		XmlParserInputSource_t2498 * L_7 = (XmlParserInputSource_t2498 *)il2cpp_codegen_object_new (XmlParserInputSource_t2498_il2cpp_TypeInfo_var);
		XmlParserInputSource__ctor_m11085(L_7, L_4, L_6, 1, 1, 0, /*hidden argument*/NULL);
		__this->___source_1 = L_7;
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern TypeInfo* XmlParserInputSource_t2498_il2cpp_TypeInfo_var;
extern "C" int32_t XmlParserInput_ReadSourceChar_m11094 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlParserInputSource_t2498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4790);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlParserInputSource_t2498 * L_0 = (__this->___source_1);
		NullCheck(L_0);
		int32_t L_1 = XmlParserInputSource_Read_m11089(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0033;
	}

IL_0011:
	{
		Stack_t2442 * L_2 = (__this->___sourceStack_0);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Stack::Pop() */, L_2);
		__this->___source_1 = ((XmlParserInputSource_t2498 *)IsInst(L_3, XmlParserInputSource_t2498_il2cpp_TypeInfo_var));
		XmlParserInputSource_t2498 * L_4 = (__this->___source_1);
		NullCheck(L_4);
		int32_t L_5 = XmlParserInputSource_Read_m11089(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		Stack_t2442 * L_7 = (__this->___sourceStack_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_7);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}

IL_004b:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C" int32_t XmlParserInput_PeekChar_m11095 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___has_peek_2);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = (__this->___peek_char_3);
		return L_1;
	}

IL_0012:
	{
		int32_t L_2 = XmlParserInput_ReadSourceChar_m11094(__this, /*hidden argument*/NULL);
		__this->___peek_char_3 = L_2;
		int32_t L_3 = (__this->___peek_char_3);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)55296))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_4 = (__this->___peek_char_3);
		if ((((int32_t)L_4) > ((int32_t)((int32_t)56319))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_5 = (__this->___peek_char_3);
		__this->___peek_char_3 = ((int32_t)((int32_t)((int32_t)65536)+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)55296)))<<(int32_t)((int32_t)10)))));
		int32_t L_6 = XmlParserInput_ReadSourceChar_m11094(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)56320))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57343))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_9 = (__this->___peek_char_3);
		int32_t L_10 = V_0;
		__this->___peek_char_3 = ((int32_t)((int32_t)L_9+(int32_t)((int32_t)((int32_t)L_10-(int32_t)((int32_t)56320)))));
	}

IL_008a:
	{
		__this->___has_peek_2 = 1;
		int32_t L_11 = (__this->___peek_char_3);
		return L_11;
	}
}
// System.Int32 System.Xml.XmlParserInput::ReadChar()
extern "C" int32_t XmlParserInput_ReadChar_m11096 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = XmlParserInput_PeekChar_m11095(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		__this->___has_peek_2 = 0;
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String System.Xml.XmlParserInput::get_BaseURI()
extern "C" String_t* XmlParserInput_get_BaseURI_m11097 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	{
		XmlParserInputSource_t2498 * L_0 = (__this->___source_1);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___BaseURI_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
extern "C" bool XmlParserInput_get_HasPEBuffer_m11098 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	{
		Stack_t2442 * L_0 = (__this->___sourceStack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_0);
		return ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
extern "C" int32_t XmlParserInput_get_LineNumber_m11099 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	{
		XmlParserInputSource_t2498 * L_0 = (__this->___source_1);
		NullCheck(L_0);
		int32_t L_1 = XmlParserInputSource_get_LineNumber_m11086(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
extern "C" int32_t XmlParserInput_get_LinePosition_m11100 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	{
		XmlParserInputSource_t2498 * L_0 = (__this->___source_1);
		NullCheck(L_0);
		int32_t L_1 = XmlParserInputSource_get_LinePosition_m11087(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
extern "C" bool XmlParserInput_get_AllowTextDecl_m11101 (XmlParserInput_t2441 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___allowTextDecl_4);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
extern "C" void XmlParserInput_set_AllowTextDecl_m11102 (XmlParserInput_t2441 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___allowTextDecl_4 = L_0;
		return;
	}
}
// System.Xml.XmlProcessingInstruction
#include "System_Xml_System_Xml_XmlProcessingInstruction.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlProcessingInstruction
#include "System_Xml_System_Xml_XmlProcessingInstructionMethodDeclarations.h"

// System.Xml.XmlConvert
#include "System_Xml_System_Xml_XmlConvertMethodDeclarations.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriterMethodDeclarations.h"


// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern TypeInfo* XmlConvert_t2464_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlProcessingInstruction__ctor_m11103 (XmlProcessingInstruction_t2499 * __this, String_t* ___target, String_t* ___data, XmlDocument_t2373 * ___doc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t2464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4639);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlDocument_t2373 * L_0 = ___doc;
		XmlLinkedNode__ctor_m10956(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___target;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t2464_il2cpp_TypeInfo_var);
		XmlConvert_VerifyName_m10746(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___data;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___data = L_3;
	}

IL_001b:
	{
		String_t* L_4 = ___target;
		__this->___target_6 = L_4;
		String_t* L_5 = ___data;
		__this->___data_7 = L_5;
		return;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C" String_t* XmlProcessingInstruction_get_Data_m11104 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___data_7);
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_InnerText()
extern "C" String_t* XmlProcessingInstruction_get_InnerText_m11105 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = XmlProcessingInstruction_get_Data_m11104(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_LocalName()
extern "C" String_t* XmlProcessingInstruction_get_LocalName_m11106 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___target_6);
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Name()
extern "C" String_t* XmlProcessingInstruction_get_Name_m11107 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___target_6);
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlProcessingInstruction::get_NodeType()
extern "C" int32_t XmlProcessingInstruction_get_NodeType_m11108 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(7);
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Target()
extern "C" String_t* XmlProcessingInstruction_get_Target_m11109 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___target_6);
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Value()
extern "C" String_t* XmlProcessingInstruction_get_Value_m11110 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___data_7);
		return L_0;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::set_Value(System.String)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void XmlProcessingInstruction_set_Value_m11111 (XmlProcessingInstruction_t2499 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlNode::get_IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t1126 * L_1 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_1, (String_t*) &_stringLiteral2675, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = ___value;
		__this->___data_7 = L_2;
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlProcessingInstruction::CloneNode(System.Boolean)
extern TypeInfo* XmlProcessingInstruction_t2499_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlProcessingInstruction_CloneNode_m11112 (XmlProcessingInstruction_t2499 * __this, bool ___deep, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlProcessingInstruction_t2499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4763);
		s_Il2CppMethodIntialized = true;
	}
	XmlNode_t2457 * V_0 = {0};
	{
		String_t* L_0 = (__this->___target_6);
		String_t* L_1 = (__this->___data_7);
		XmlDocument_t2373 * L_2 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlProcessingInstruction_t2499 * L_3 = (XmlProcessingInstruction_t2499 *)il2cpp_codegen_object_new (XmlProcessingInstruction_t2499_il2cpp_TypeInfo_var);
		XmlProcessingInstruction__ctor_m11103(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlNode_t2457 * L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlProcessingInstruction_WriteContentTo_m11113 (XmlProcessingInstruction_t2499 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlProcessingInstruction_WriteTo_m11114 (XmlProcessingInstruction_t2499 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		XmlWriter_t2384 * L_0 = ___w;
		String_t* L_1 = (__this->___target_6);
		String_t* L_2 = (__this->___data_7);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, L_0, L_1, L_2);
		return;
	}
}
// System.Xml.XmlQualifiedName
#include "System_Xml_System_Xml_XmlQualifiedName.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlQualifiedName
#include "System_Xml_System_Xml_XmlQualifiedNameMethodDeclarations.h"



// System.Void System.Xml.XmlQualifiedName::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlQualifiedName__ctor_m11115 (XmlQualifiedName_t2301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlQualifiedName__ctor_m11116(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlQualifiedName__ctor_m11116 (XmlQualifiedName_t2301 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlQualifiedName_t2301 * G_B2_0 = {0};
	XmlQualifiedName_t2301 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlQualifiedName_t2301 * G_B3_1 = {0};
	XmlQualifiedName_t2301 * G_B5_0 = {0};
	XmlQualifiedName_t2301 * G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	XmlQualifiedName_t2301 * G_B6_1 = {0};
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_2 = ___name;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->___name_1 = G_B3_0;
		String_t* L_3 = ___ns;
		G_B4_0 = __this;
		if (L_3)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_4;
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		String_t* L_5 = ___ns;
		G_B6_0 = L_5;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->___ns_2 = G_B6_0;
		String_t* L_6 = (__this->___name_1);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_6);
		String_t* L_8 = (__this->___ns_2);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_8);
		__this->___hash_3 = ((int32_t)((int32_t)L_7^(int32_t)L_9));
		return;
	}
}
// System.Void System.Xml.XmlQualifiedName::.cctor()
extern TypeInfo* XmlQualifiedName_t2301_il2cpp_TypeInfo_var;
extern "C" void XmlQualifiedName__cctor_m11117 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlQualifiedName_t2301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4564);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlQualifiedName_t2301 * L_0 = (XmlQualifiedName_t2301 *)il2cpp_codegen_object_new (XmlQualifiedName_t2301_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m11115(L_0, /*hidden argument*/NULL);
		((XmlQualifiedName_t2301_StaticFields*)XmlQualifiedName_t2301_il2cpp_TypeInfo_var->static_fields)->___Empty_0 = L_0;
		return;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
extern "C" bool XmlQualifiedName_get_IsEmpty_m11118 (XmlQualifiedName_t2301 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___name_1);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2782(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = (__this->___ns_2);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2782(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C" String_t* XmlQualifiedName_get_Name_m11119 (XmlQualifiedName_t2301 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		return L_0;
	}
}
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C" String_t* XmlQualifiedName_get_Namespace_m11120 (XmlQualifiedName_t2301 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___ns_2);
		return L_0;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
extern TypeInfo* XmlQualifiedName_t2301_il2cpp_TypeInfo_var;
extern "C" bool XmlQualifiedName_Equals_m11121 (XmlQualifiedName_t2301 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlQualifiedName_t2301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4564);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___other;
		IL2CPP_RUNTIME_CLASS_INIT(XmlQualifiedName_t2301_il2cpp_TypeInfo_var);
		bool L_1 = XmlQualifiedName_op_Equality_m11124(NULL /*static, unused*/, __this, ((XmlQualifiedName_t2301 *)IsInst(L_0, XmlQualifiedName_t2301_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
extern "C" int32_t XmlQualifiedName_GetHashCode_m11122 (XmlQualifiedName_t2301 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___hash_3);
		return L_0;
	}
}
// System.String System.Xml.XmlQualifiedName::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlQualifiedName_ToString_m11123 (XmlQualifiedName_t2301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___ns_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m2344(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = (__this->___name_1);
		return L_3;
	}

IL_001c:
	{
		String_t* L_4 = (__this->___ns_2);
		String_t* L_5 = (__this->___name_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m103(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral616, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool XmlQualifiedName_op_Equality_m11124 (Object_t * __this /* static, unused */, XmlQualifiedName_t2301 * ___a, XmlQualifiedName_t2301 * ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B9_0 = 0;
	{
		XmlQualifiedName_t2301 * L_0 = ___a;
		XmlQualifiedName_t2301 * L_1 = ___b;
		if ((!(((Object_t*)(XmlQualifiedName_t2301 *)L_0) == ((Object_t*)(XmlQualifiedName_t2301 *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return 1;
	}

IL_0009:
	{
		XmlQualifiedName_t2301 * L_2 = ___a;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		XmlQualifiedName_t2301 * L_3 = ___b;
		if (L_3)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return 0;
	}

IL_0017:
	{
		XmlQualifiedName_t2301 * L_4 = ___a;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___hash_3);
		XmlQualifiedName_t2301 * L_6 = ___b;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___hash_3);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0051;
		}
	}
	{
		XmlQualifiedName_t2301 * L_8 = ___a;
		NullCheck(L_8);
		String_t* L_9 = (L_8->___name_1);
		XmlQualifiedName_t2301 * L_10 = ___b;
		NullCheck(L_10);
		String_t* L_11 = (L_10->___name_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m2344(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		XmlQualifiedName_t2301 * L_13 = ___a;
		NullCheck(L_13);
		String_t* L_14 = (L_13->___ns_2);
		XmlQualifiedName_t2301 * L_15 = ___b;
		NullCheck(L_15);
		String_t* L_16 = (L_15->___ns_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m2344(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_17));
		goto IL_0052;
	}

IL_0051:
	{
		G_B9_0 = 0;
	}

IL_0052:
	{
		return G_B9_0;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern TypeInfo* XmlQualifiedName_t2301_il2cpp_TypeInfo_var;
extern "C" bool XmlQualifiedName_op_Inequality_m11125 (Object_t * __this /* static, unused */, XmlQualifiedName_t2301 * ___a, XmlQualifiedName_t2301 * ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlQualifiedName_t2301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4564);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlQualifiedName_t2301 * L_0 = ___a;
		XmlQualifiedName_t2301 * L_1 = ___b;
		IL2CPP_RUNTIME_CLASS_INIT(XmlQualifiedName_t2301_il2cpp_TypeInfo_var);
		bool L_2 = XmlQualifiedName_op_Equality_m11124(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReaderMethodDeclarations.h"

// System.Xml.XmlReaderBinarySupport
#include "System_Xml_System_Xml_XmlReaderBinarySupport.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlReaderSettings
#include "System_Xml_System_Xml_XmlReaderSettings.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriter.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriter.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriterMethodDeclarations.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriterMethodDeclarations.h"


// System.Void System.Xml.XmlReader::.ctor()
extern "C" void XmlReader__ctor_m11126 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C" void XmlReader_System_IDisposable_Dispose_m11127 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(26 /* System.Void System.Xml.XmlReader::Dispose(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Int32 System.Xml.XmlReader::get_AttributeCount()
// System.String System.Xml.XmlReader::get_BaseURI()
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C" XmlReaderBinarySupport_t2500 * XmlReader_get_Binary_m11128 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		XmlReaderBinarySupport_t2500 * L_0 = (__this->___binary_1);
		return L_0;
	}
}
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C" bool XmlReader_get_CanResolveEntity_m11129 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 System.Xml.XmlReader::get_Depth()
// System.Boolean System.Xml.XmlReader::get_EOF()
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C" bool XmlReader_get_HasAttributes_m11130 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		return ((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Xml.XmlReader::get_IsEmptyElement()
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C" bool XmlReader_get_IsDefault_m11131 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C" String_t* XmlReader_get_Item_m11132 (XmlReader_t2374 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(27 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, __this, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlReader::get_LocalName()
// System.String System.Xml.XmlReader::get_Name()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlReader_get_Name_m11133 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_Prefix() */, __this);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2782(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_Prefix() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m103(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral616, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0032;
	}

IL_002c:
	{
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		G_B3_0 = L_5;
	}

IL_0032:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlReader::get_NamespaceURI()
// System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable()
// System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType()
// System.String System.Xml.XmlReader::get_Prefix()
// System.Xml.ReadState System.Xml.XmlReader::get_ReadState()
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C" Object_t * XmlReader_get_SchemaInfo_m11134 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" XmlReaderSettings_t2501 * XmlReader_get_Settings_m11135 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		XmlReaderSettings_t2501 * L_0 = (__this->___settings_2);
		return L_0;
	}
}
// System.String System.Xml.XmlReader::get_Value()
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C" int32_t XmlReader_get_XmlSpace_m11136 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlReader::Close()
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C" void XmlReader_Dispose_m11137 (XmlReader_t2374 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(25 /* System.Void System.Xml.XmlReader::Close() */, __this);
	}

IL_0012:
	{
		return;
	}
}
// System.String System.Xml.XmlReader::GetAttribute(System.String)
// System.String System.Xml.XmlReader::GetAttribute(System.String,System.String)
// System.Boolean System.Xml.XmlReader::IsStartElement()
extern "C" bool XmlReader_IsStartElement_m11138 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean System.Xml.XmlReader::IsStartElement(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool XmlReader_IsStartElement_m11139 (XmlReader_t2374 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XmlReader::IsStartElement() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		String_t* L_2 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m2344(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, __this);
		String_t* L_5 = ___namespaceName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		return G_B5_0;
	}
}
// System.String System.Xml.XmlReader::LookupNamespace(System.String)
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void XmlReader_MoveToAttribute_m11140 (XmlReader_t2374 * __this, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___i;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11582(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0012:
	{
		VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, __this);
		V_0 = 0;
		goto IL_002b;
	}

IL_0020:
	{
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, __this);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_002b:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___i;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String)
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C" bool XmlReader_IsContent_m11141 (XmlReader_t2374 * __this, int32_t ___nodeType, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___nodeType;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0037;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_001e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_003b;
		}
	}

IL_001e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)15))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_003f;
	}

IL_0033:
	{
		return 1;
	}

IL_0035:
	{
		return 1;
	}

IL_0037:
	{
		return 1;
	}

IL_0039:
	{
		return 1;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C" int32_t XmlReader_MoveToContent_m11142 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_001e;
	}

IL_0019:
	{
		goto IL_0025;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		return L_3;
	}

IL_0025:
	{
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0038;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
	}

IL_0038:
	{
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		bool L_6 = XmlReader_IsContent_m11141(__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		return L_7;
	}

IL_0050:
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, __this);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Xml.XmlReader::MoveToElement()
// System.Boolean System.Xml.XmlReader::MoveToFirstAttribute()
// System.Boolean System.Xml.XmlReader::MoveToNextAttribute()
// System.Boolean System.Xml.XmlReader::Read()
// System.Boolean System.Xml.XmlReader::ReadAttributeValue()
// System.String System.Xml.XmlReader::ReadElementString()
extern TypeInfo* XmlNodeType_t2493_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlReader_ReadElementString_m11143 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNodeType_t2493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4766);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2676, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		XmlException_t2474 * L_7 = XmlReader_XmlError_m11149(__this, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_8;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (L_9)
		{
			goto IL_007e;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(44 /* System.String System.Xml.XmlReader::ReadString() */, __this);
		V_1 = L_10;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)15))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2676, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		String_t* L_17 = V_2;
		XmlException_t2474 * L_18 = XmlReader_XmlError_m11149(__this, L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		String_t* L_19 = V_1;
		return L_19;
	}
}
// System.Void System.Xml.XmlReader::ReadEndElement()
extern TypeInfo* XmlNodeType_t2493_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlReader_ReadEndElement_m11144 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNodeType_t2493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4766);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2676, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		XmlException_t2474 * L_7 = XmlReader_XmlError_m11149(__this, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}
}
// System.String System.Xml.XmlReader::ReadOuterXml()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringWriter_t2522_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t2524_il2cpp_TypeInfo_var;
extern "C" String_t* XmlReader_ReadOuterXml_m11145 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringWriter_t2522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4755);
		XmlTextWriter_t2524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4710);
		s_Il2CppMethodIntialized = true;
	}
	StringWriter_t2522 * V_0 = {0};
	XmlTextWriter_t2524 * V_1 = {0};
	int32_t V_2 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001f;
		}
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_2;
	}

IL_001f:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0055;
	}

IL_0039:
	{
		StringWriter_t2522 * L_6 = (StringWriter_t2522 *)il2cpp_codegen_object_new (StringWriter_t2522_il2cpp_TypeInfo_var);
		StringWriter__ctor_m11526(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		StringWriter_t2522 * L_7 = V_0;
		XmlTextWriter_t2524 * L_8 = (XmlTextWriter_t2524 *)il2cpp_codegen_object_new (XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		XmlTextWriter__ctor_m11369(L_8, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		XmlTextWriter_t2524 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< XmlReader_t2374 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, L_9, __this, 0);
		StringWriter_t2522 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_10);
		return L_11;
	}

IL_0055:
	{
		VirtActionInvoker0::Invoke(46 /* System.Void System.Xml.XmlReader::Skip() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_12;
	}
}
// System.Void System.Xml.XmlReader::ReadStartElement()
extern TypeInfo* XmlNodeType_t2493_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlReader_ReadStartElement_m11146 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNodeType_t2493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4766);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2676, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		XmlException_t2474 * L_7 = XmlReader_XmlError_m11149(__this, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002f:
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}
}
// System.String System.Xml.XmlReader::ReadString()
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlReader_ReadString_m11147 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	{
		StringBuilder_t619 * L_0 = (__this->___readStringBuffer_0);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		StringBuilder_t619 * L_1 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_1, /*hidden argument*/NULL);
		__this->___readStringBuffer_0 = L_1;
	}

IL_0016:
	{
		StringBuilder_t619 * L_2 = (__this->___readStringBuffer_0);
		NullCheck(L_2);
		StringBuilder_set_Length_m11520(L_2, 0, /*hidden argument*/NULL);
		VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
		{
			goto IL_0063;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 1)
		{
			goto IL_0048;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 2)
		{
			goto IL_00cb;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 3)
		{
			goto IL_00cb;
		}
	}

IL_0048:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)14))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_005d;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_7;
	}

IL_0063:
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_9;
	}

IL_0074:
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)4)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)13))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)14))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_00bc;
	}

IL_00a5:
	{
		StringBuilder_t619 * L_15 = (__this->___readStringBuffer_0);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, __this);
		NullCheck(L_15);
		StringBuilder_Append_m2790(L_15, L_16, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00bc:
	{
		goto IL_00c6;
	}

IL_00c1:
	{
		goto IL_0074;
	}

IL_00c6:
	{
		goto IL_0122;
	}

IL_00cb:
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)3)))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)4)))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)13))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)14))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0113;
	}

IL_00f5:
	{
		StringBuilder_t619 * L_22 = (__this->___readStringBuffer_0);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, __this);
		NullCheck(L_22);
		StringBuilder_Append_m2790(L_22, L_23, /*hidden argument*/NULL);
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		goto IL_0118;
	}

IL_0113:
	{
		goto IL_011d;
	}

IL_0118:
	{
		goto IL_00cb;
	}

IL_011d:
	{
		goto IL_0122;
	}

IL_0122:
	{
		StringBuilder_t619 * L_24 = (__this->___readStringBuffer_0);
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_24);
		V_0 = L_25;
		StringBuilder_t619 * L_26 = (__this->___readStringBuffer_0);
		NullCheck(L_26);
		StringBuilder_set_Length_m11520(L_26, 0, /*hidden argument*/NULL);
		String_t* L_27 = V_0;
		return L_27;
	}
}
// System.Void System.Xml.XmlReader::ResolveEntity()
// System.Void System.Xml.XmlReader::Skip()
extern "C" void XmlReader_Skip_m11148 (XmlReader_t2374 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (!L_2)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}

IL_0033:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		V_0 = L_3;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_003f;
		}
	}

IL_0056:
	{
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_006a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
	}

IL_006a:
	{
		return;
	}
}
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern TypeInfo* IXmlLineInfo_t2542_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern "C" XmlException_t2474 * XmlReader_XmlError_m11149 (XmlReader_t2374 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IXmlLineInfo_t2542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4770);
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, __this);
		String_t* L_1 = ___message;
		XmlException_t2474 * L_2 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10909(L_2, ((Object_t *)IsInst(__this, IXmlLineInfo_t2542_il2cpp_TypeInfo_var)), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.XmlReaderBinarySupport/CommandState
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CommandState.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlReaderBinarySupport/CommandState
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CommandStateMethodDeclarations.h"



// System.Xml.XmlReaderBinarySupport/CharGetter
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CharGetter.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlReaderBinarySupport/CharGetter
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CharGetterMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Xml.XmlReaderBinarySupport/CharGetter::.ctor(System.Object,System.IntPtr)
extern "C" void CharGetter__ctor_m11150 (CharGetter_t2503 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
extern "C" int32_t CharGetter_Invoke_m11151 (CharGetter_t2503 * __this, CharU5BU5D_t646* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CharGetter_Invoke_m11151((CharGetter_t2503 *)__this->___prev_9,___buffer, ___offset, ___length, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, CharU5BU5D_t646* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___buffer, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, CharU5BU5D_t646* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___buffer, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___buffer, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" int32_t pinvoke_delegate_wrapper_CharGetter_t2503(Il2CppObject* delegate, CharU5BU5D_t646* ___buffer, int32_t ___offset, int32_t ___length)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(char*, int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___buffer' to native representation
	char* ____buffer_marshaled = { 0 };
	____buffer_marshaled = il2cpp_codegen_marshal_char_array(___buffer);

	// Marshaling of parameter '___offset' to native representation

	// Marshaling of parameter '___length' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____buffer_marshaled, ___offset, ___length);

	// Marshaling cleanup of parameter '___buffer' native representation
	il2cpp_codegen_marshal_free(____buffer_marshaled);
	____buffer_marshaled = NULL;

	// Marshaling cleanup of parameter '___offset' native representation

	// Marshaling cleanup of parameter '___length' native representation

	return _return_value;
}
// System.IAsyncResult System.Xml.XmlReaderBinarySupport/CharGetter::BeginInvoke(System.Char[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" Object_t * CharGetter_BeginInvoke_m11152 (CharGetter_t2503 * __this, CharU5BU5D_t646* ___buffer, int32_t ___offset, int32_t ___length, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer;
	__d_args[1] = Box(Int32_t29_il2cpp_TypeInfo_var, &___offset);
	__d_args[2] = Box(Int32_t29_il2cpp_TypeInfo_var, &___length);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::EndInvoke(System.IAsyncResult)
extern "C" int32_t CharGetter_EndInvoke_m11153 (CharGetter_t2503 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlReaderBinarySupport
#include "System_Xml_System_Xml_XmlReaderBinarySupportMethodDeclarations.h"



// System.Void System.Xml.XmlReaderBinarySupport::Reset()
extern "C" void XmlReaderBinarySupport_Reset_m11154 (XmlReaderBinarySupport_t2500 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		bool L_0 = (__this->___dontReset_4);
		if (L_0)
		{
			goto IL_00aa;
		}
	}
	{
		__this->___dontReset_4 = 1;
		bool L_1 = (__this->___hasCache_3);
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		XmlReader_t2374 * L_2 = (__this->___reader_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)13))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)14))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_005d;
	}

IL_004c:
	{
		XmlReader_t2374 * L_8 = (__this->___reader_0);
		NullCheck(L_8);
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, L_8);
		goto IL_005d;
	}

IL_005d:
	{
		int32_t L_9 = (__this->___state_2);
		V_1 = L_9;
		int32_t L_10 = V_1;
		if (((int32_t)((int32_t)L_10-(int32_t)1)) == 0)
		{
			goto IL_007d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)1)) == 1)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)1)) == 2)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_008e;
	}

IL_007d:
	{
		XmlReader_t2374 * L_11 = (__this->___reader_0);
		NullCheck(L_11);
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, L_11);
		goto IL_008e;
	}

IL_008e:
	{
		__this->___base64CacheStartsAt_1 = (-1);
		__this->___state_2 = 0;
		__this->___hasCache_3 = 0;
		__this->___dontReset_4 = 0;
	}

IL_00aa:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlReaderSettings
#include "System_Xml_System_Xml_XmlReaderSettingsMethodDeclarations.h"

// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"


// System.Boolean System.Xml.XmlReaderSettings::get_CheckCharacters()
extern "C" bool XmlReaderSettings_get_CheckCharacters_m11155 (XmlReaderSettings_t2501 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___checkCharacters_0);
		return L_0;
	}
}
// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::get_ConformanceLevel()
extern "C" int32_t XmlReaderSettings_get_ConformanceLevel_m11156 (XmlReaderSettings_t2501 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___conformance_1);
		return L_0;
	}
}
// System.Xml.XmlResolver
#include "System_Xml_System_Xml_XmlResolver.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlResolver
#include "System_Xml_System_Xml_XmlResolverMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"


// System.Void System.Xml.XmlResolver::.ctor()
extern "C" void XmlResolver__ctor_m11157 (XmlResolver_t2315 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlResolver::GetEntity(System.Uri,System.String,System.Type)
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t1349_il2cpp_TypeInfo_var;
extern "C" Uri_t32 * XmlResolver_ResolveUri_m11158 (XmlResolver_t2315 * __this, Uri_t32 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Path_t1349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2669);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t32 * L_0 = ___baseUri;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t32_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m11583(NULL /*static, unused*/, L_0, (Uri_t32 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_2 = ___relativeUri;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*) &_stringLiteral2677, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		String_t* L_4 = ___relativeUri;
		NullCheck(L_4);
		bool L_5 = String_StartsWith_m3141(L_4, (String_t*) &_stringLiteral2678, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_6 = ___relativeUri;
		NullCheck(L_6);
		bool L_7 = String_StartsWith_m3141(L_6, (String_t*) &_stringLiteral2679, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___relativeUri;
		NullCheck(L_8);
		bool L_9 = String_StartsWith_m3141(L_8, (String_t*) &_stringLiteral2680, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = ___relativeUri;
		NullCheck(L_10);
		bool L_11 = String_StartsWith_m3141(L_10, (String_t*) &_stringLiteral2681, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}

IL_005d:
	{
		String_t* L_12 = ___relativeUri;
		Uri_t32 * L_13 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m7418(L_13, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0064:
	{
		String_t* L_14 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1349_il2cpp_TypeInfo_var);
		String_t* L_15 = Path_GetFullPath_m11584(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Uri_t32 * L_16 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m7418(L_16, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0070:
	{
		String_t* L_17 = ___relativeUri;
		if (L_17)
		{
			goto IL_0078;
		}
	}
	{
		Uri_t32 * L_18 = ___baseUri;
		return L_18;
	}

IL_0078:
	{
		Uri_t32 * L_19 = ___baseUri;
		String_t* L_20 = ___relativeUri;
		String_t* L_21 = XmlResolver_EscapeRelativeUriBody_m11159(__this, L_20, /*hidden argument*/NULL);
		Uri_t32 * L_22 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m11560(L_22, L_19, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C" String_t* XmlResolver_EscapeRelativeUriBody_m11159 (XmlResolver_t2315 * __this, String_t* ___src, const MethodInfo* method)
{
	{
		String_t* L_0 = ___src;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m5418(L_0, (String_t*) &_stringLiteral2682, (String_t*) &_stringLiteral2683, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m5418(L_1, (String_t*) &_stringLiteral2380, (String_t*) &_stringLiteral2684, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m5418(L_2, (String_t*) &_stringLiteral2391, (String_t*) &_stringLiteral2685, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m5418(L_3, (String_t*) &_stringLiteral2686, (String_t*) &_stringLiteral2687, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m5418(L_4, (String_t*) &_stringLiteral665, (String_t*) &_stringLiteral2688, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Xml.XmlSignificantWhitespace
#include "System_Xml_System_Xml_XmlSignificantWhitespace.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlSignificantWhitespace
#include "System_Xml_System_Xml_XmlSignificantWhitespaceMethodDeclarations.h"

// System.Xml.XmlCharacterData
#include "System_Xml_System_Xml_XmlCharacterData.h"
// System.Xml.XmlCharacterData
#include "System_Xml_System_Xml_XmlCharacterDataMethodDeclarations.h"


// System.Void System.Xml.XmlSignificantWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlSignificantWhitespace__ctor_m11160 (XmlSignificantWhitespace_t2504 * __this, String_t* ___strData, XmlDocument_t2373 * ___doc, const MethodInfo* method)
{
	{
		String_t* L_0 = ___strData;
		XmlDocument_t2373 * L_1 = ___doc;
		XmlCharacterData__ctor_m10692(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_LocalName()
extern "C" String_t* XmlSignificantWhitespace_get_LocalName_m11161 (XmlSignificantWhitespace_t2504 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral2625;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_Name()
extern "C" String_t* XmlSignificantWhitespace_get_Name_m11162 (XmlSignificantWhitespace_t2504 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral2625;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlSignificantWhitespace::get_NodeType()
extern "C" int32_t XmlSignificantWhitespace_get_NodeType_m11163 (XmlSignificantWhitespace_t2504 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)14));
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_Value()
extern "C" String_t* XmlSignificantWhitespace_get_Value_m11164 (XmlSignificantWhitespace_t2504 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlSignificantWhitespace::set_Value(System.String)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void XmlSignificantWhitespace_set_Value_m11165 (XmlSignificantWhitespace_t2504 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m10681(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t1126 * L_2 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_2, (String_t*) &_stringLiteral2604, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		String_t* L_3 = ___value;
		XmlCharacterData_set_Data_m10694(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::get_ParentNode()
extern "C" XmlNode_t2457 * XmlSignificantWhitespace_get_ParentNode_m11166 (XmlSignificantWhitespace_t2504 * __this, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = XmlNode_get_ParentNode_m11023(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::CloneNode(System.Boolean)
extern TypeInfo* XmlSignificantWhitespace_t2504_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlSignificantWhitespace_CloneNode_m11167 (XmlSignificantWhitespace_t2504 * __this, bool ___deep, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlSignificantWhitespace_t2504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4764);
		s_Il2CppMethodIntialized = true;
	}
	XmlNode_t2457 * V_0 = {0};
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t2373 * L_1 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlSignificantWhitespace_t2504 * L_2 = (XmlSignificantWhitespace_t2504 *)il2cpp_codegen_object_new (XmlSignificantWhitespace_t2504_il2cpp_TypeInfo_var);
		XmlSignificantWhitespace__ctor_m11160(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		XmlNode_t2457 * L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Xml.XmlSignificantWhitespace::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlSignificantWhitespace_WriteContentTo_m11168 (XmlSignificantWhitespace_t2504 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Xml.XmlSignificantWhitespace::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlSignificantWhitespace_WriteTo_m11169 (XmlSignificantWhitespace_t2504 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		XmlWriter_t2384 * L_0 = ___w;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(28 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_0, L_1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpaceMethodDeclarations.h"



// System.Xml.XmlText
#include "System_Xml_System_Xml_XmlText.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlText
#include "System_Xml_System_Xml_XmlTextMethodDeclarations.h"



// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlText__ctor_m11170 (XmlText_t2506 * __this, String_t* ___strData, XmlDocument_t2373 * ___doc, const MethodInfo* method)
{
	{
		String_t* L_0 = ___strData;
		XmlDocument_t2373 * L_1 = ___doc;
		XmlCharacterData__ctor_m10692(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlText::get_LocalName()
extern "C" String_t* XmlText_get_LocalName_m11171 (XmlText_t2506 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral2619;
	}
}
// System.String System.Xml.XmlText::get_Name()
extern "C" String_t* XmlText_get_Name_m11172 (XmlText_t2506 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral2619;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
extern "C" int32_t XmlText_get_NodeType_m11173 (XmlText_t2506 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(3);
	}
}
// System.String System.Xml.XmlText::get_Value()
extern "C" String_t* XmlText_get_Value_m11174 (XmlText_t2506 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlText::set_Value(System.String)
extern "C" void XmlText_set_Value_m11175 (XmlText_t2506 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(37 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_0);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
extern "C" XmlNode_t2457 * XmlText_get_ParentNode_m11176 (XmlText_t2506 * __this, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = XmlNode_get_ParentNode_m11023(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlText_CloneNode_m11177 (XmlText_t2506 * __this, bool ___deep, const MethodInfo* method)
{
	XmlText_t2506 * V_0 = {0};
	{
		XmlDocument_t2373 * L_0 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		XmlText_t2506 * L_2 = (XmlText_t2506 *)VirtFuncInvoker1< XmlText_t2506 *, String_t* >::Invoke(48 /* System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String) */, L_0, L_1);
		V_0 = L_2;
		XmlText_t2506 * L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Xml.XmlText::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlText_WriteContentTo_m11178 (XmlText_t2506 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Xml.XmlText::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlText_WriteTo_m11179 (XmlText_t2506 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		XmlWriter_t2384 * L_0 = ___w;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_0, L_1);
		return;
	}
}
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfo.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfoMethodDeclarations.h"



// System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::.ctor(Mono.Xml2.XmlTextReader)
extern "C" void XmlTokenInfo__ctor_m11180 (XmlTokenInfo_t2508 * __this, XmlTextReader_t2507 * ___xtr, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		XmlTextReader_t2507 * L_0 = ___xtr;
		__this->___Reader_1 = L_0;
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, __this);
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value()
extern "C" String_t* XmlTokenInfo_get_Value_m11181 (XmlTokenInfo_t2508 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		String_t* L_0 = (__this->___valueCache_0);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___valueCache_0);
		return L_1;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___ValueBufferStart_10);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		XmlTextReader_t2507 * L_3 = (__this->___Reader_1);
		NullCheck(L_3);
		StringBuilder_t619 * L_4 = (L_3->___valueBuffer_27);
		int32_t L_5 = (__this->___ValueBufferStart_10);
		int32_t L_6 = (__this->___ValueBufferEnd_11);
		int32_t L_7 = (__this->___ValueBufferStart_10);
		NullCheck(L_4);
		String_t* L_8 = StringBuilder_ToString_m11519(L_4, L_5, ((int32_t)((int32_t)L_6-(int32_t)L_7)), /*hidden argument*/NULL);
		__this->___valueCache_0 = L_8;
		String_t* L_9 = (__this->___valueCache_0);
		return L_9;
	}

IL_004e:
	{
		int32_t L_10 = (__this->___NodeType_12);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 1)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 2)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 3)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 4)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 5)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 6)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 7)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 8)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 9)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 10)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 11)
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00aa;
	}

IL_0092:
	{
		XmlTextReader_t2507 * L_12 = (__this->___Reader_1);
		NullCheck(L_12);
		String_t* L_13 = XmlTextReader_CreateValueString_m11271(L_12, /*hidden argument*/NULL);
		__this->___valueCache_0 = L_13;
		String_t* L_14 = (__this->___valueCache_0);
		return L_14;
	}

IL_00aa:
	{
		return (String_t*)NULL;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::set_Value(System.String)
extern "C" void XmlTokenInfo_set_Value_m11182 (XmlTokenInfo_t2508 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___valueCache_0 = L_0;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTokenInfo_Clear_m11183 (XmlTokenInfo_t2508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		__this->___ValueBufferStart_10 = (-1);
		__this->___valueCache_0 = (String_t*)NULL;
		__this->___NodeType_12 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_1 = L_0;
		V_0 = L_1;
		__this->___NamespaceURI_5 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3 = L_2;
		V_0 = L_3;
		__this->___Prefix_4 = L_3;
		String_t* L_4 = V_0;
		String_t* L_5 = L_4;
		V_0 = L_5;
		__this->___LocalName_3 = L_5;
		String_t* L_6 = V_0;
		__this->___Name_2 = L_6;
		__this->___IsEmptyElement_6 = 0;
		__this->___QuoteChar_7 = ((int32_t)34);
		int32_t L_7 = 0;
		V_1 = L_7;
		__this->___LinePosition_9 = L_7;
		int32_t L_8 = V_1;
		__this->___LineNumber_8 = L_8;
		return;
	}
}
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlAttributeTokenInfo.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlAttributeTokenInfoMethodDeclarations.h"



// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::.ctor(Mono.Xml2.XmlTextReader)
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern "C" void XmlAttributeTokenInfo__ctor_m11184 (XmlAttributeTokenInfo_t2509 * __this, XmlTextReader_t2507 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringBuilder_t619 * L_0 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_0, /*hidden argument*/NULL);
		__this->___tmpBuilder_16 = L_0;
		XmlTextReader_t2507 * L_1 = ___reader;
		XmlTokenInfo__ctor_m11180(__this, L_1, /*hidden argument*/NULL);
		((XmlTokenInfo_t2508 *)__this)->___NodeType_12 = 2;
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlAttributeTokenInfo_get_Value_m11185 (XmlAttributeTokenInfo_t2509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlTokenInfo_t2508 * V_0 = {0};
	int32_t V_1 = 0;
	XmlTokenInfo_t2508 * V_2 = {0};
	{
		String_t* L_0 = (__this->___valueCache_15);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___valueCache_15);
		return L_1;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___ValueTokenStartIndex_13);
		int32_t L_3 = (__this->___ValueTokenEndIndex_14);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0075;
		}
	}
	{
		XmlTextReader_t2507 * L_4 = (((XmlTokenInfo_t2508 *)__this)->___Reader_1);
		NullCheck(L_4);
		XmlTokenInfoU5BU5D_t2514* L_5 = (L_4->___attributeValueTokens_8);
		int32_t L_6 = (__this->___ValueTokenStartIndex_13);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(XmlTokenInfo_t2508 **)(XmlTokenInfo_t2508 **)SZArrayLdElema(L_5, L_7));
		XmlTokenInfo_t2508 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (L_8->___NodeType_12);
		if ((!(((uint32_t)L_9) == ((uint32_t)5))))
		{
			goto IL_0062;
		}
	}
	{
		XmlTokenInfo_t2508 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (L_10->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral24, L_11, (String_t*) &_stringLiteral2629, /*hidden argument*/NULL);
		__this->___valueCache_15 = L_12;
		goto IL_006e;
	}

IL_0062:
	{
		XmlTokenInfo_t2508 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value() */, L_13);
		__this->___valueCache_15 = L_14;
	}

IL_006e:
	{
		String_t* L_15 = (__this->___valueCache_15);
		return L_15;
	}

IL_0075:
	{
		StringBuilder_t619 * L_16 = (__this->___tmpBuilder_16);
		NullCheck(L_16);
		StringBuilder_set_Length_m11520(L_16, 0, /*hidden argument*/NULL);
		int32_t L_17 = (__this->___ValueTokenStartIndex_13);
		V_1 = L_17;
		goto IL_00f0;
	}

IL_008d:
	{
		XmlTextReader_t2507 * L_18 = (((XmlTokenInfo_t2508 *)__this)->___Reader_1);
		NullCheck(L_18);
		XmlTokenInfoU5BU5D_t2514* L_19 = (L_18->___attributeValueTokens_8);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		V_2 = (*(XmlTokenInfo_t2508 **)(XmlTokenInfo_t2508 **)SZArrayLdElema(L_19, L_21));
		XmlTokenInfo_t2508 * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___NodeType_12);
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_00be;
		}
	}
	{
		StringBuilder_t619 * L_24 = (__this->___tmpBuilder_16);
		XmlTokenInfo_t2508 * L_25 = V_2;
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value() */, L_25);
		NullCheck(L_24);
		StringBuilder_Append_m2790(L_24, L_26, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_00be:
	{
		StringBuilder_t619 * L_27 = (__this->___tmpBuilder_16);
		NullCheck(L_27);
		StringBuilder_Append_m5401(L_27, ((int32_t)38), /*hidden argument*/NULL);
		StringBuilder_t619 * L_28 = (__this->___tmpBuilder_16);
		XmlTokenInfo_t2508 * L_29 = V_2;
		NullCheck(L_29);
		String_t* L_30 = (L_29->___Name_2);
		NullCheck(L_28);
		StringBuilder_Append_m2790(L_28, L_30, /*hidden argument*/NULL);
		StringBuilder_t619 * L_31 = (__this->___tmpBuilder_16);
		NullCheck(L_31);
		StringBuilder_Append_m5401(L_31, ((int32_t)59), /*hidden argument*/NULL);
	}

IL_00ec:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00f0:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = (__this->___ValueTokenEndIndex_14);
		if ((((int32_t)L_33) <= ((int32_t)L_34)))
		{
			goto IL_008d;
		}
	}
	{
		StringBuilder_t619 * L_35 = (__this->___tmpBuilder_16);
		StringBuilder_t619 * L_36 = (__this->___tmpBuilder_16);
		NullCheck(L_36);
		int32_t L_37 = StringBuilder_get_Length_m6646(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_38 = StringBuilder_ToString_m11519(L_35, 0, L_37, /*hidden argument*/NULL);
		__this->___valueCache_15 = L_38;
		String_t* L_39 = (__this->___valueCache_15);
		return L_39;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::set_Value(System.String)
extern "C" void XmlAttributeTokenInfo_set_Value_m11186 (XmlAttributeTokenInfo_t2509 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___valueCache_15 = L_0;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::Clear()
extern "C" void XmlAttributeTokenInfo_Clear_m11187 (XmlAttributeTokenInfo_t2509 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		XmlTokenInfo_Clear_m11183(__this, /*hidden argument*/NULL);
		__this->___valueCache_15 = (String_t*)NULL;
		((XmlTokenInfo_t2508 *)__this)->___NodeType_12 = 2;
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->___ValueTokenEndIndex_14 = L_0;
		int32_t L_1 = V_0;
		__this->___ValueTokenStartIndex_13 = L_1;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::FillXmlns()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlAttributeTokenInfo_FillXmlns_m11188 (XmlAttributeTokenInfo_t2509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (((XmlTokenInfo_t2508 *)__this)->___Prefix_4);
		bool L_1 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t2507 * L_2 = (((XmlTokenInfo_t2508 *)__this)->___Reader_1);
		NullCheck(L_2);
		XmlNamespaceManager_t2485 * L_3 = (L_2->___nsmgr_14);
		String_t* L_4 = (((XmlTokenInfo_t2508 *)__this)->___LocalName_3);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, __this);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_3, L_4, L_5);
		goto IL_0066;
	}

IL_0036:
	{
		String_t* L_6 = (((XmlTokenInfo_t2508 *)__this)->___Name_2);
		bool L_7 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		XmlTextReader_t2507 * L_8 = (((XmlTokenInfo_t2508 *)__this)->___Reader_1);
		NullCheck(L_8);
		XmlNamespaceManager_t2485 * L_9 = (L_8->___nsmgr_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, __this);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_9, L_10, L_11);
	}

IL_0066:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::FillNamespace()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlAttributeTokenInfo_FillNamespace_m11189 (XmlAttributeTokenInfo_t2509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (((XmlTokenInfo_t2508 *)__this)->___Prefix_4);
		bool L_1 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = (((XmlTokenInfo_t2508 *)__this)->___Name_2);
		bool L_3 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}

IL_002a:
	{
		((XmlTokenInfo_t2508 *)__this)->___NamespaceURI_5 = (String_t*) &_stringLiteral2403;
		goto IL_0072;
	}

IL_003a:
	{
		String_t* L_4 = (((XmlTokenInfo_t2508 *)__this)->___Prefix_4);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2782(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((XmlTokenInfo_t2508 *)__this)->___NamespaceURI_5 = L_6;
		goto IL_0072;
	}

IL_005a:
	{
		XmlTextReader_t2507 * L_7 = (((XmlTokenInfo_t2508 *)__this)->___Reader_1);
		String_t* L_8 = (((XmlTokenInfo_t2508 *)__this)->___Prefix_4);
		NullCheck(L_7);
		String_t* L_9 = XmlTextReader_LookupNamespace_m11236(L_7, L_8, 1, /*hidden argument*/NULL);
		((XmlTokenInfo_t2508 *)__this)->___NamespaceURI_5 = L_9;
	}

IL_0072:
	{
		return;
	}
}
// Mono.Xml2.XmlTextReader/TagName
#include "System_Xml_Mono_Xml2_XmlTextReader_TagName.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Xml2.XmlTextReader/TagName
#include "System_Xml_Mono_Xml2_XmlTextReader_TagNameMethodDeclarations.h"



// System.Void Mono.Xml2.XmlTextReader/TagName::.ctor(System.String,System.String,System.String)
extern "C" void TagName__ctor_m11190 (TagName_t2510 * __this, String_t* ___n, String_t* ___l, String_t* ___p, const MethodInfo* method)
{
	{
		String_t* L_0 = ___n;
		__this->___Name_0 = L_0;
		String_t* L_1 = ___l;
		__this->___LocalName_1 = L_1;
		String_t* L_2 = ___p;
		__this->___Prefix_2 = L_2;
		return;
	}
}
// Conversion methods for marshalling of: Mono.Xml2.XmlTextReader/TagName
void TagName_t2510_marshal(const TagName_t2510& unmarshaled, TagName_t2510_marshaled& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___Name_0);
	marshaled.___LocalName_1 = il2cpp_codegen_marshal_string(unmarshaled.___LocalName_1);
	marshaled.___Prefix_2 = il2cpp_codegen_marshal_string(unmarshaled.___Prefix_2);
}
void TagName_t2510_marshal_back(const TagName_t2510_marshaled& marshaled, TagName_t2510& unmarshaled)
{
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___Name_0);
	unmarshaled.___LocalName_1 = il2cpp_codegen_marshal_string_result(marshaled.___LocalName_1);
	unmarshaled.___Prefix_2 = il2cpp_codegen_marshal_string_result(marshaled.___Prefix_2);
}
// Conversion method for clean up from marshalling of: Mono.Xml2.XmlTextReader/TagName
void TagName_t2510_marshal_cleanup(TagName_t2510_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___LocalName_1);
	marshaled.___LocalName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Prefix_2);
	marshaled.___Prefix_2 = NULL;
}
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputStateMethodDeclarations.h"



// Mono.Xml2.XmlTextReader/DtdInputStateStack
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputStateStack.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Xml2.XmlTextReader/DtdInputStateStack
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputStateStackMethodDeclarations.h"



// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::.ctor()
extern TypeInfo* Stack_t2442_il2cpp_TypeInfo_var;
extern "C" void DtdInputStateStack__ctor_m11191 (DtdInputStateStack_t2512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_t2442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4742);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t2442 * L_0 = (Stack_t2442 *)il2cpp_codegen_object_new (Stack_t2442_il2cpp_TypeInfo_var);
		Stack__ctor_m11522(L_0, /*hidden argument*/NULL);
		__this->___intern_0 = L_0;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		DtdInputStateStack_Push_m11194(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Peek()
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" int32_t DtdInputStateStack_Peek_m11192 (DtdInputStateStack_t2512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t2442 * L_0 = (__this->___intern_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Object System.Collections.Stack::Peek() */, L_0);
		return (int32_t)(((*(int32_t*)((int32_t*)UnBox (L_1, Int32_t29_il2cpp_TypeInfo_var)))));
	}
}
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Pop()
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" int32_t DtdInputStateStack_Pop_m11193 (DtdInputStateStack_t2512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t2442 * L_0 = (__this->___intern_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Stack::Pop() */, L_0);
		return (int32_t)(((*(int32_t*)((int32_t*)UnBox (L_1, Int32_t29_il2cpp_TypeInfo_var)))));
	}
}
// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::Push(Mono.Xml2.XmlTextReader/DtdInputState)
extern TypeInfo* DtdInputState_t2511_il2cpp_TypeInfo_var;
extern "C" void DtdInputStateStack_Push_m11194 (DtdInputStateStack_t2512 * __this, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DtdInputState_t2511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4791);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t2442 * L_0 = (__this->___intern_0);
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(DtdInputState_t2511_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_0, L_3);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"
// System.Xml.XmlUrlResolver
#include "System_Xml_System_Xml_XmlUrlResolver.h"
// System.UriKind
#include "System_System_UriKind.h"
// Mono.Xml.DTDEntityDeclaration
#include "System_Xml_Mono_Xml_DTDEntityDeclaration.h"
// Mono.Xml.DTDEntityDeclarationCollection
#include "System_Xml_Mono_Xml_DTDEntityDeclarationCollection.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Xml.DTDReader
#include "System_Xml_System_Xml_DTDReader.h"
// System.Xml.XmlUrlResolver
#include "System_Xml_System_Xml_XmlUrlResolverMethodDeclarations.h"
// Mono.Xml.DTDEntityDeclarationCollection
#include "System_Xml_Mono_Xml_DTDEntityDeclarationCollectionMethodDeclarations.h"
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNodeMethodDeclarations.h"
// Mono.Xml.DTDEntityDeclaration
#include "System_Xml_Mono_Xml_DTDEntityDeclarationMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Xml.DTDReader
#include "System_Xml_System_Xml_DTDReaderMethodDeclarations.h"


// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11195 (XmlTextReader_t2507 * __this, TextReader_t2480 * ___input, XmlNameTable_t2314 * ___nt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		TextReader_t2480 * L_1 = ___input;
		XmlNameTable_t2314 * L_2 = ___nt;
		XmlTextReader__ctor_m11198(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlStreamReader_t2477_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11196 (XmlTextReader_t2507 * __this, Stream_t1271 * ___xmlFragment, int32_t ___fragType, XmlParserContext_t2497 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlStreamReader_t2477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4748);
		s_Il2CppMethodIntialized = true;
	}
	XmlTextReader_t2507 * G_B2_0 = {0};
	XmlTextReader_t2507 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlTextReader_t2507 * G_B3_1 = {0};
	{
		XmlParserContext_t2497 * L_0 = ___context;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		XmlParserContext_t2497 * L_1 = ___context;
		NullCheck(L_1);
		String_t* L_2 = XmlParserContext_get_BaseURI_m11067(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Stream_t1271 * L_4 = ___xmlFragment;
		XmlStreamReader_t2477 * L_5 = (XmlStreamReader_t2477 *)il2cpp_codegen_object_new (XmlStreamReader_t2477_il2cpp_TypeInfo_var);
		XmlStreamReader__ctor_m10920(L_5, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___fragType;
		XmlParserContext_t2497 * L_7 = ___context;
		NullCheck(G_B3_1);
		XmlTextReader__ctor_m11200(G_B3_1, G_B3_0, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->___disallowReset_16 = 1;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern TypeInfo* XmlStreamReader_t2477_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11197 (XmlTextReader_t2507 * __this, String_t* ___url, Stream_t1271 * ___input, XmlNameTable_t2314 * ___nt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlStreamReader_t2477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4748);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		Stream_t1271 * L_1 = ___input;
		XmlStreamReader_t2477 * L_2 = (XmlStreamReader_t2477 *)il2cpp_codegen_object_new (XmlStreamReader_t2477_il2cpp_TypeInfo_var);
		XmlStreamReader__ctor_m10920(L_2, L_1, /*hidden argument*/NULL);
		XmlNameTable_t2314 * L_3 = ___nt;
		XmlTextReader__ctor_m11198(__this, L_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m11198 (XmlTextReader_t2507 * __this, String_t* ___url, TextReader_t2480 * ___input, XmlNameTable_t2314 * ___nt, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		TextReader_t2480 * L_1 = ___input;
		XmlTextReader__ctor_m11200(__this, L_0, L_1, ((int32_t)9), (XmlParserContext_t2497 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t599_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11199 (XmlTextReader_t2507 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t2497 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringReader_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	XmlTextReader_t2507 * G_B2_0 = {0};
	XmlTextReader_t2507 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlTextReader_t2507 * G_B3_1 = {0};
	{
		XmlParserContext_t2497 * L_0 = ___context;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		XmlParserContext_t2497 * L_1 = ___context;
		NullCheck(L_1);
		String_t* L_2 = XmlParserContext_get_BaseURI_m11067(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		String_t* L_4 = ___xmlFragment;
		StringReader_t599 * L_5 = (StringReader_t599 *)il2cpp_codegen_object_new (StringReader_t599_il2cpp_TypeInfo_var);
		StringReader__ctor_m2670(L_5, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___fragType;
		XmlParserContext_t2497 * L_7 = ___context;
		NullCheck(G_B3_1);
		XmlTextReader__ctor_m11200(G_B3_1, G_B3_0, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->___disallowReset_16 = 1;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern TypeInfo* XmlAttributeTokenInfoU5BU5D_t2513_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTokenInfoU5BU5D_t2514_il2cpp_TypeInfo_var;
extern TypeInfo* XmlUrlResolver_t2527_il2cpp_TypeInfo_var;
extern TypeInfo* DtdInputStateStack_t2512_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11200 (XmlTextReader_t2507 * __this, String_t* ___url, TextReader_t2480 * ___fragment, int32_t ___fragType, XmlParserContext_t2497 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlAttributeTokenInfoU5BU5D_t2513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4792);
		XmlTokenInfoU5BU5D_t2514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4794);
		XmlUrlResolver_t2527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4617);
		DtdInputStateStack_t2512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4796);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___attributeTokens_7 = ((XmlAttributeTokenInfoU5BU5D_t2513*)SZArrayNew(XmlAttributeTokenInfoU5BU5D_t2513_il2cpp_TypeInfo_var, ((int32_t)10)));
		__this->___attributeValueTokens_8 = ((XmlTokenInfoU5BU5D_t2514*)SZArrayNew(XmlTokenInfoU5BU5D_t2514_il2cpp_TypeInfo_var, ((int32_t)10)));
		__this->___namespaces_44 = 1;
		XmlUrlResolver_t2527 * L_0 = (XmlUrlResolver_t2527 *)il2cpp_codegen_object_new (XmlUrlResolver_t2527_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m11415(L_0, /*hidden argument*/NULL);
		__this->___resolver_46 = L_0;
		__this->___closeInput_50 = 1;
		DtdInputStateStack_t2512 * L_1 = (DtdInputStateStack_t2512 *)il2cpp_codegen_object_new (DtdInputStateStack_t2512_il2cpp_TypeInfo_var);
		DtdInputStateStack__ctor_m11191(L_1, /*hidden argument*/NULL);
		__this->___stateStack_54 = L_1;
		XmlReader__ctor_m11126(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___url;
		XmlParserContext_t2497 * L_3 = ___context;
		TextReader_t2480 * L_4 = ___fragment;
		int32_t L_5 = ___fragType;
		XmlTextReader_InitializeContext_m11252(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t2497 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m11201 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t2497 * L_0 = (__this->___parserContext_12);
		return L_0;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m11202 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attributeCount_11);
		return L_0;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m11203 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t2497 * L_0 = (__this->___parserContext_12);
		NullCheck(L_0);
		String_t* L_1 = XmlParserContext_get_BaseURI_m11067(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m11204 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___checkCharacters_48);
		return L_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m11205 (XmlTextReader_t2507 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___checkCharacters_48 = L_0;
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m11206 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___closeInput_50);
		return L_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m11207 (XmlTextReader_t2507 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___closeInput_50 = L_0;
		return;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m11208 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___currentToken_4);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___NodeType_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = (-1);
	}

IL_0018:
	{
		V_0 = G_B3_0;
		int32_t L_2 = (__this->___currentAttributeValue_10);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (__this->___elementDepth_18);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))+(int32_t)2));
	}

IL_0030:
	{
		int32_t L_5 = (__this->___currentAttribute_9);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___elementDepth_18);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_8 = (__this->___elementDepth_18);
		return L_8;
	}
}
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m11209 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___entityHandling_51);
		return L_0;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m11210 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___readState_15);
		return ((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m11211 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m11212 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___cursorToken_3);
		NullCheck(L_0);
		bool L_1 = (L_0->___IsEmptyElement_6);
		return L_1;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m11213 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useProceedingLineInfo_38);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = (__this->___line_34);
		return L_1;
	}

IL_0012:
	{
		XmlTokenInfo_t2508 * L_2 = (__this->___cursorToken_3);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___LineNumber_8);
		return L_3;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m11214 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useProceedingLineInfo_38);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = (__this->___column_35);
		return L_1;
	}

IL_0012:
	{
		XmlTokenInfo_t2508 * L_2 = (__this->___cursorToken_3);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___LinePosition_9);
		return L_3;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m11215 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___cursorToken_3);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___LocalName_3);
		return L_1;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m11216 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___cursorToken_3);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___Name_2);
		return L_1;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m11217 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___cursorToken_3);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___NamespaceURI_5);
		return L_1;
	}
}
// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t2314 * XmlTextReader_get_NameTable_m11218 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlNameTable_t2314 * L_0 = (__this->___nameTable_13);
		return L_0;
	}
}
// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m11219 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___cursorToken_3);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___NodeType_12);
		return L_1;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
extern "C" bool XmlTextReader_get_Normalization_m11220 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___normalization_47);
		return L_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m11221 (XmlTextReader_t2507 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___normalization_47 = L_0;
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m11222 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___cursorToken_3);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___Prefix_4);
		return L_1;
	}
}
// System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m11223 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___readState_15);
		return L_0;
	}
}
// System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t2501 * XmlTextReader_get_Settings_m11224 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlReaderSettings_t2501 * L_0 = XmlReader_get_Settings_m11135(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_Value()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_get_Value_m11225 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___cursorToken_3);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value() */, L_0);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		XmlTokenInfo_t2508 * L_2 = (__this->___cursorToken_3);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value() */, L_2);
		G_B3_0 = L_3;
		goto IL_0025;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_4;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
extern "C" int32_t XmlTextReader_get_WhitespaceHandling_m11226 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___whitespaceHandling_45);
		return L_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" void XmlTextReader_set_WhitespaceHandling_m11227 (XmlTextReader_t2507 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___whitespaceHandling_45 = L_0;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlTextReader_set_XmlResolver_m11228 (XmlTextReader_t2507 * __this, XmlResolver_t2315 * ___value, const MethodInfo* method)
{
	{
		XmlResolver_t2315 * L_0 = ___value;
		__this->___resolver_46 = L_0;
		return;
	}
}
// System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m11229 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t2497 * L_0 = (__this->___parserContext_12);
		NullCheck(L_0);
		int32_t L_1 = XmlParserContext_get_XmlSpace_m11081(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m11230 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		__this->___readState_15 = 4;
		XmlTokenInfo_t2508 * L_0 = (__this->___cursorToken_3);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, L_0);
		XmlTokenInfo_t2508 * L_1 = (__this->___currentToken_4);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, L_1);
		__this->___attributeCount_11 = 0;
		bool L_2 = (__this->___closeInput_50);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		TextReader_t2480 * L_3 = (__this->___reader_28);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		TextReader_t2480 * L_4 = (__this->___reader_28);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_4);
	}

IL_0045:
	{
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_GetAttribute_m11231 (XmlTextReader_t2507 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_0 = (__this->___attributeTokens_7);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_0, L_2)));
		String_t* L_3 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_0, L_2)))->___Name_2);
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m2344(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_6 = (__this->___attributeTokens_7);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_6, L_8)));
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_6, L_8)));
		return L_9;
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = (__this->___attributeCount_11);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::GetIndexOfQualifiedAttribute(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t XmlTextReader_GetIndexOfQualifiedAttribute_m11232 (XmlTextReader_t2507 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	XmlAttributeTokenInfo_t2509 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0007:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_0 = (__this->___attributeTokens_7);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_0, L_2));
		XmlAttributeTokenInfo_t2509 * L_3 = V_1;
		NullCheck(L_3);
		String_t* L_4 = (((XmlTokenInfo_t2508 *)L_3)->___LocalName_3);
		String_t* L_5 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		XmlAttributeTokenInfo_t2509 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = (((XmlTokenInfo_t2508 *)L_7)->___NamespaceURI_5);
		String_t* L_9 = ___namespaceURI;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m2344(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0034:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0038:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = (__this->___attributeCount_11);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m11233 (XmlTextReader_t2507 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___localName;
		String_t* L_1 = ___namespaceURI;
		int32_t L_2 = XmlTextReader_GetIndexOfQualifiedAttribute_m11232(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0012:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_4 = (__this->___attributeTokens_7);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_4, L_6)));
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_4, L_6)));
		return L_7;
	}
}
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t599_il2cpp_TypeInfo_var;
extern "C" TextReader_t2480 * XmlTextReader_GetRemainder_m11234 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringReader_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___peekCharsLength_31);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		TextReader_t2480 * L_1 = (__this->___reader_28);
		return L_1;
	}

IL_0013:
	{
		CharU5BU5D_t646* L_2 = (__this->___peekChars_29);
		int32_t L_3 = (__this->___peekCharsIndex_30);
		int32_t L_4 = (__this->___peekCharsLength_31);
		int32_t L_5 = (__this->___peekCharsIndex_30);
		String_t* L_6 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_6 = String_CreateString_m11524(L_6, L_2, L_3, ((int32_t)((int32_t)L_4-(int32_t)L_5)), /*hidden argument*/NULL);
		TextReader_t2480 * L_7 = (__this->___reader_28);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m105(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		StringReader_t599 * L_10 = (StringReader_t599 *)il2cpp_codegen_object_new (StringReader_t599_il2cpp_TypeInfo_var);
		StringReader__ctor_m2670(L_10, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String)
extern "C" String_t* XmlTextReader_LookupNamespace_m11235 (XmlTextReader_t2507 * __this, String_t* ___prefix, const MethodInfo* method)
{
	{
		String_t* L_0 = ___prefix;
		String_t* L_1 = XmlTextReader_LookupNamespace_m11236(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_LookupNamespace_m11236 (XmlTextReader_t2507 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		XmlNamespaceManager_t2485 * L_0 = (__this->___nsmgr_14);
		String_t* L_1 = ___prefix;
		bool L_2 = ___atomizedNames;
		NullCheck(L_0);
		String_t* L_3 = XmlNamespaceManager_LookupNamespace_m10993(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0025;
	}

IL_0024:
	{
		String_t* L_7 = V_0;
		G_B3_0 = L_7;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_MoveToAttribute_m11237 (XmlTextReader_t2507 * __this, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___i;
		int32_t L_1 = (__this->___attributeCount_11);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*) &_stringLiteral2689, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___i;
		__this->___currentAttribute_9 = L_3;
		__this->___currentAttributeValue_10 = (-1);
		XmlAttributeTokenInfoU5BU5D_t2513* L_4 = (__this->___attributeTokens_7);
		int32_t L_5 = ___i;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		__this->___cursorToken_3 = (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_4, L_6));
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m11238 (XmlTextReader_t2507 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___localName;
		String_t* L_1 = ___namespaceName;
		int32_t L_2 = XmlTextReader_GetIndexOfQualifiedAttribute_m11232(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32) */, __this, L_4);
		return 1;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m11239 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___currentToken_4);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlTokenInfo_t2508 * L_1 = (__this->___cursorToken_3);
		XmlTokenInfo_t2508 * L_2 = (__this->___currentToken_4);
		if ((!(((Object_t*)(XmlTokenInfo_t2508 *)L_1) == ((Object_t*)(XmlTokenInfo_t2508 *)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		int32_t L_3 = (__this->___currentAttribute_9);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		__this->___currentAttribute_9 = (-1);
		__this->___currentAttributeValue_10 = (-1);
		XmlTokenInfo_t2508 * L_4 = (__this->___currentToken_4);
		__this->___cursorToken_3 = L_4;
		return 1;
	}

IL_0048:
	{
		return 0;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m11240 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attributeCount_11);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToElement() */, __this);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute() */, __this);
		return L_1;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m11241 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___currentAttribute_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = (__this->___attributeCount_11);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		int32_t L_2 = (__this->___currentAttribute_9);
		int32_t L_3 = (__this->___attributeCount_11);
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)1))) >= ((int32_t)L_3)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = (__this->___currentAttribute_9);
		__this->___currentAttribute_9 = ((int32_t)((int32_t)L_4+(int32_t)1));
		__this->___currentAttributeValue_10 = (-1);
		XmlAttributeTokenInfoU5BU5D_t2513* L_5 = (__this->___attributeTokens_7);
		int32_t L_6 = (__this->___currentAttribute_9);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___cursorToken_3 = (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_5, L_7));
		return 1;
	}

IL_0055:
	{
		return 0;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m11242 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___readState_15);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_1 = (__this->___peekCharsIndex_30);
		__this->___curNodePeekIndex_32 = L_1;
		__this->___preserveCurrentTag_33 = 1;
		__this->___nestLevel_41 = 0;
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___startNodeType_39);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_3 = (__this->___currentAttribute_9);
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		return 0;
	}

IL_0047:
	{
		XmlTextReader_SkipTextDeclaration_m11287(__this, /*hidden argument*/NULL);
		XmlTextReader_ClearAttributes_m11257(__this, /*hidden argument*/NULL);
		XmlTextReader_IncrementAttributeToken_m11279(__this, /*hidden argument*/NULL);
		XmlTextReader_ReadAttributeValueTokens_m11281(__this, ((int32_t)34), /*hidden argument*/NULL);
		XmlAttributeTokenInfoU5BU5D_t2513* L_4 = (__this->___attributeTokens_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		__this->___cursorToken_3 = (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_4, L_5));
		__this->___currentAttributeValue_10 = (-1);
		__this->___readState_15 = 1;
		return 1;
	}

IL_007f:
	{
		int32_t L_6 = (__this->___readState_15);
		if (L_6)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_7 = (__this->___currentState_40);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}
	{
		XmlTextReader_SkipTextDeclaration_m11287(__this, /*hidden argument*/NULL);
	}

IL_009c:
	{
		XmlReaderBinarySupport_t2500 * L_8 = XmlReader_get_Binary_m11128(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b2;
		}
	}
	{
		XmlReaderBinarySupport_t2500 * L_9 = XmlReader_get_Binary_m11128(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		XmlReaderBinarySupport_Reset_m11154(L_9, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		V_0 = 0;
		__this->___readState_15 = 1;
		int32_t L_10 = (__this->___line_34);
		__this->___currentLinkedNodeLineNumber_36 = L_10;
		int32_t L_11 = (__this->___column_35);
		__this->___currentLinkedNodeLinePosition_37 = L_11;
		__this->___useProceedingLineInfo_38 = 1;
		XmlTokenInfo_t2508 * L_12 = (__this->___currentToken_4);
		__this->___cursorToken_3 = L_12;
		__this->___attributeCount_11 = 0;
		int32_t L_13 = (-1);
		V_1 = L_13;
		__this->___currentAttributeValue_10 = L_13;
		int32_t L_14 = V_1;
		__this->___currentAttribute_9 = L_14;
		XmlTokenInfo_t2508 * L_15 = (__this->___currentToken_4);
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, L_15);
		bool L_16 = (__this->___depthUp_19);
		if (!L_16)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_17 = (__this->___depth_17);
		__this->___depth_17 = ((int32_t)((int32_t)L_17+(int32_t)1));
		__this->___depthUp_19 = 0;
	}

IL_0128:
	{
		bool L_18 = (__this->___readCharsInProgress_42);
		if (!L_18)
		{
			goto IL_0141;
		}
	}
	{
		__this->___readCharsInProgress_42 = 0;
		bool L_19 = XmlTextReader_ReadUntilEndTag_m11308(__this, /*hidden argument*/NULL);
		return L_19;
	}

IL_0141:
	{
		bool L_20 = XmlTextReader_ReadContent_m11263(__this, /*hidden argument*/NULL);
		V_0 = L_20;
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_22 = (__this->___startNodeType_39);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___currentState_40);
		if ((((int32_t)L_23) == ((int32_t)((int32_t)15))))
		{
			goto IL_0174;
		}
	}
	{
		XmlException_t2474 * L_24 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2690, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0174:
	{
		__this->___useProceedingLineInfo_38 = 0;
		bool L_25 = V_0;
		return L_25;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m11243 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	XmlAttributeTokenInfo_t2509 * V_0 = {0};
	{
		int32_t L_0 = (__this->___readState_15);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___startNodeType_39);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, __this);
	}

IL_001e:
	{
		int32_t L_2 = (__this->___currentAttribute_9);
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		return 0;
	}

IL_002c:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_3 = (__this->___attributeTokens_7);
		int32_t L_4 = (__this->___currentAttribute_9);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_3, L_5));
		int32_t L_6 = (__this->___currentAttributeValue_10);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		XmlAttributeTokenInfo_t2509 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___ValueTokenStartIndex_13);
		__this->___currentAttributeValue_10 = ((int32_t)((int32_t)L_8-(int32_t)1));
	}

IL_0054:
	{
		int32_t L_9 = (__this->___currentAttributeValue_10);
		XmlAttributeTokenInfo_t2509 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___ValueTokenEndIndex_14);
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_12 = (__this->___currentAttributeValue_10);
		__this->___currentAttributeValue_10 = ((int32_t)((int32_t)L_12+(int32_t)1));
		XmlTokenInfoU5BU5D_t2514* L_13 = (__this->___attributeValueTokens_8);
		int32_t L_14 = (__this->___currentAttributeValue_10);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___cursorToken_3 = (*(XmlTokenInfo_t2508 **)(XmlTokenInfo_t2508 **)SZArrayLdElema(L_13, L_15));
		return 1;
	}

IL_0088:
	{
		return 0;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadChars(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" int32_t XmlTextReader_ReadChars_m11244 (XmlTextReader_t2507 * __this, CharU5BU5D_t646* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___offset;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_1 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_1, (String_t*) &_stringLiteral2691, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		int32_t L_2 = ___length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_3 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_3, (String_t*) &_stringLiteral2692, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		CharU5BU5D_t646* L_4 = ___buffer;
		NullCheck(L_4);
		int32_t L_5 = ___offset;
		int32_t L_6 = ___length;
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) >= ((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6)))))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_7 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_7, (String_t*) &_stringLiteral2693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement() */, __this);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, __this);
		return 0;
	}

IL_004e:
	{
		bool L_9 = (__this->___readCharsInProgress_42);
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, __this);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		return 0;
	}

IL_0067:
	{
		__this->___preserveCurrentTag_33 = 0;
		__this->___readCharsInProgress_42 = 1;
		__this->___useProceedingLineInfo_38 = 1;
		CharU5BU5D_t646* L_11 = ___buffer;
		int32_t L_12 = ___offset;
		int32_t L_13 = ___length;
		int32_t L_14 = XmlTextReader_ReadCharsInternal_m11307(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ResolveEntity()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ResolveEntity_m11245 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t1086 * L_0 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_0, (String_t*) &_stringLiteral2694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Mono.Xml2.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m11246 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlReader_Skip_m11148(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::get_DTD()
extern "C" DTDObjectModel_t2416 * XmlTextReader_get_DTD_m11247 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t2497 * L_0 = (__this->___parserContext_12);
		NullCheck(L_0);
		DTDObjectModel_t2416 * L_1 = XmlParserContext_get_Dtd_m11070(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t2315 * XmlTextReader_get_Resolver_m11248 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		XmlResolver_t2315 * L_0 = (__this->___resolver_46);
		return L_0;
	}
}
// System.Xml.XmlException Mono.Xml2.XmlTextReader::NotWFError(System.String)
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern "C" XmlException_t2474 * XmlTextReader_NotWFError_m11249 (XmlTextReader_t2507 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Mono.Xml2.XmlTextReader::get_BaseURI() */, __this);
		String_t* L_1 = ___message;
		XmlException_t2474 * L_2 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10909(L_2, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Init()
extern TypeInfo* TagNameU5BU5D_t2515_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern TypeInfo* CharGetter_t2503_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern const MethodInfo* XmlTextReader_ReadChars_m11244_MethodInfo_var;
extern "C" void XmlTextReader_Init_m11250 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TagNameU5BU5D_t2515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4797);
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		CharGetter_t2503_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4799);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		XmlTextReader_ReadChars_m11244_MethodInfo_var = il2cpp_codegen_method_info_from_index(1182);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___allowMultipleRoot_23 = 0;
		__this->___elementNames_21 = ((TagNameU5BU5D_t2515*)SZArrayNew(TagNameU5BU5D_t2515_il2cpp_TypeInfo_var, ((int32_t)10)));
		StringBuilder_t619 * L_0 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_0, /*hidden argument*/NULL);
		__this->___valueBuffer_27 = L_0;
		IntPtr_t L_1 = { (void*)XmlTextReader_ReadChars_m11244_MethodInfo_var };
		CharGetter_t2503 * L_2 = (CharGetter_t2503 *)il2cpp_codegen_object_new (CharGetter_t2503_il2cpp_TypeInfo_var);
		CharGetter__ctor_m11150(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___binaryCharGetter_43 = L_2;
		__this->___checkCharacters_48 = 1;
		XmlReaderSettings_t2501 * L_3 = (XmlReaderSettings_t2501 *)VirtFuncInvoker0< XmlReaderSettings_t2501 * >::Invoke(22 /* System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings() */, __this);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		XmlReaderSettings_t2501 * L_4 = (XmlReaderSettings_t2501 *)VirtFuncInvoker0< XmlReaderSettings_t2501 * >::Invoke(22 /* System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings() */, __this);
		NullCheck(L_4);
		bool L_5 = XmlReaderSettings_get_CheckCharacters_m11155(L_4, /*hidden argument*/NULL);
		__this->___checkCharacters_48 = L_5;
	}

IL_0054:
	{
		__this->___prohibitDtd_49 = 0;
		__this->___closeInput_50 = 1;
		__this->___entityHandling_51 = 2;
		__this->___peekCharsIndex_30 = 0;
		CharU5BU5D_t646* L_6 = (__this->___peekChars_29);
		if (L_6)
		{
			goto IL_008b;
		}
	}
	{
		__this->___peekChars_29 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, ((int32_t)1024)));
	}

IL_008b:
	{
		__this->___peekCharsLength_31 = (-1);
		__this->___curNodePeekIndex_32 = (-1);
		__this->___line_34 = 1;
		__this->___column_35 = 1;
		int32_t L_7 = 0;
		V_0 = L_7;
		__this->___currentLinkedNodeLinePosition_37 = L_7;
		int32_t L_8 = V_0;
		__this->___currentLinkedNodeLineNumber_36 = L_8;
		XmlTextReader_Clear_m11251(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Clear()
extern TypeInfo* XmlTokenInfo_t2508_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_Clear_m11251 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTokenInfo_t2508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4795);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		XmlTokenInfo_t2508 * L_0 = (XmlTokenInfo_t2508 *)il2cpp_codegen_object_new (XmlTokenInfo_t2508_il2cpp_TypeInfo_var);
		XmlTokenInfo__ctor_m11180(L_0, __this, /*hidden argument*/NULL);
		__this->___currentToken_4 = L_0;
		XmlTokenInfo_t2508 * L_1 = (__this->___currentToken_4);
		__this->___cursorToken_3 = L_1;
		__this->___currentAttribute_9 = (-1);
		__this->___currentAttributeValue_10 = (-1);
		__this->___attributeCount_11 = 0;
		__this->___readState_15 = 0;
		__this->___depth_17 = 0;
		__this->___elementDepth_18 = 0;
		__this->___depthUp_19 = 0;
		int32_t L_2 = 0;
		V_0 = L_2;
		__this->___allowMultipleRoot_23 = L_2;
		bool L_3 = V_0;
		__this->___popScope_20 = L_3;
		__this->___elementNameStackPos_22 = 0;
		__this->___isStandalone_24 = 0;
		__this->___returnEntityReference_25 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___entityReferenceName_26 = L_4;
		__this->___useProceedingLineInfo_38 = 0;
		__this->___currentState_40 = 0;
		__this->___readCharsInProgress_42 = 0;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::InitializeContext(System.String,System.Xml.XmlParserContext,System.IO.TextReader,System.Xml.XmlNodeType)
extern TypeInfo* NameTable_t2448_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNamespaceManager_t2485_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlParserContext_t2497_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t599_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeType_t2493_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_InitializeContext_m11252 (XmlTextReader_t2507 * __this, String_t* ___url, XmlParserContext_t2497 * ___context, TextReader_t2480 * ___fragment, int32_t ___fragType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NameTable_t2448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4616);
		XmlNamespaceManager_t2485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4784);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlParserContext_t2497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4775);
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		StringReader_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		XmlNodeType_t2493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4766);
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		s_Il2CppMethodIntialized = true;
	}
	XmlNameTable_t2314 * V_0 = {0};
	Uri_t32 * V_1 = {0};
	int32_t V_2 = {0};
	XmlTextReader_t2507 * G_B4_0 = {0};
	XmlTextReader_t2507 * G_B3_0 = {0};
	XmlNameTable_t2314 * G_B5_0 = {0};
	XmlTextReader_t2507 * G_B5_1 = {0};
	XmlTextReader_t2507 * G_B7_0 = {0};
	XmlTextReader_t2507 * G_B6_0 = {0};
	XmlNamespaceManager_t2485 * G_B8_0 = {0};
	XmlTextReader_t2507 * G_B8_1 = {0};
	{
		int32_t L_0 = ___fragType;
		__this->___startNodeType_39 = L_0;
		XmlParserContext_t2497 * L_1 = ___context;
		__this->___parserContext_12 = L_1;
		XmlParserContext_t2497 * L_2 = ___context;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		NameTable_t2448 * L_3 = (NameTable_t2448 *)il2cpp_codegen_object_new (NameTable_t2448_il2cpp_TypeInfo_var);
		NameTable__ctor_m10627(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlNameTable_t2314 * L_4 = V_0;
		XmlNameTable_t2314 * L_5 = V_0;
		XmlNamespaceManager_t2485 * L_6 = (XmlNamespaceManager_t2485 *)il2cpp_codegen_object_new (XmlNamespaceManager_t2485_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m10982(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlParserContext_t2497 * L_8 = (XmlParserContext_t2497 *)il2cpp_codegen_object_new (XmlParserContext_t2497_il2cpp_TypeInfo_var);
		XmlParserContext__ctor_m11064(L_8, L_4, L_6, L_7, 0, /*hidden argument*/NULL);
		__this->___parserContext_12 = L_8;
	}

IL_0033:
	{
		XmlParserContext_t2497 * L_9 = (__this->___parserContext_12);
		NullCheck(L_9);
		XmlNameTable_t2314 * L_10 = XmlParserContext_get_NameTable_m11076(L_9, /*hidden argument*/NULL);
		__this->___nameTable_13 = L_10;
		XmlNameTable_t2314 * L_11 = (__this->___nameTable_13);
		G_B3_0 = __this;
		if (!L_11)
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
	}
	{
		XmlNameTable_t2314 * L_12 = (__this->___nameTable_13);
		G_B5_0 = L_12;
		G_B5_1 = G_B3_0;
		goto IL_0060;
	}

IL_005b:
	{
		NameTable_t2448 * L_13 = (NameTable_t2448 *)il2cpp_codegen_object_new (NameTable_t2448_il2cpp_TypeInfo_var);
		NameTable__ctor_m10627(L_13, /*hidden argument*/NULL);
		G_B5_0 = ((XmlNameTable_t2314 *)(L_13));
		G_B5_1 = G_B4_0;
	}

IL_0060:
	{
		NullCheck(G_B5_1);
		G_B5_1->___nameTable_13 = G_B5_0;
		XmlParserContext_t2497 * L_14 = (__this->___parserContext_12);
		NullCheck(L_14);
		XmlNamespaceManager_t2485 * L_15 = XmlParserContext_get_NamespaceManager_m11075(L_14, /*hidden argument*/NULL);
		__this->___nsmgr_14 = L_15;
		XmlNamespaceManager_t2485 * L_16 = (__this->___nsmgr_14);
		G_B6_0 = __this;
		if (!L_16)
		{
			G_B7_0 = __this;
			goto IL_008d;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_17 = (__this->___nsmgr_14);
		G_B8_0 = L_17;
		G_B8_1 = G_B6_0;
		goto IL_0098;
	}

IL_008d:
	{
		XmlNameTable_t2314 * L_18 = (__this->___nameTable_13);
		XmlNamespaceManager_t2485 * L_19 = (XmlNamespaceManager_t2485 *)il2cpp_codegen_object_new (XmlNamespaceManager_t2485_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m10982(L_19, L_18, /*hidden argument*/NULL);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_0;
	}

IL_0098:
	{
		NullCheck(G_B8_1);
		G_B8_1->___nsmgr_14 = G_B8_0;
		String_t* L_20 = ___url;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		String_t* L_21 = ___url;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m2782(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		String_t* L_23 = ___url;
		Uri_t32 * L_24 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m7338(L_24, L_23, 0, /*hidden argument*/NULL);
		V_1 = L_24;
		XmlParserContext_t2497 * L_25 = (__this->___parserContext_12);
		Uri_t32 * L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_26);
		NullCheck(L_25);
		XmlParserContext_set_BaseURI_m11068(L_25, L_27, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		XmlTextReader_Init_m11250(__this, /*hidden argument*/NULL);
		TextReader_t2480 * L_28 = ___fragment;
		__this->___reader_28 = L_28;
		int32_t L_29 = ___fragType;
		V_2 = L_29;
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) == ((int32_t)2)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)9))))
		{
			goto IL_012b;
		}
	}
	{
		goto IL_0130;
	}

IL_00f3:
	{
		TextReader_t2480 * L_33 = ___fragment;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_33);
		NullCheck(L_34);
		String_t* L_35 = String_Replace_m5418(L_34, (String_t*) &_stringLiteral665, (String_t*) &_stringLiteral2695, /*hidden argument*/NULL);
		StringReader_t599 * L_36 = (StringReader_t599 *)il2cpp_codegen_object_new (StringReader_t599_il2cpp_TypeInfo_var);
		StringReader__ctor_m2670(L_36, L_35, /*hidden argument*/NULL);
		__this->___reader_28 = L_36;
		goto IL_0147;
	}

IL_0118:
	{
		__this->___currentState_40 = 1;
		__this->___allowMultipleRoot_23 = 1;
		goto IL_0147;
	}

IL_012b:
	{
		goto IL_0147;
	}

IL_0130:
	{
		int32_t L_37 = ___fragType;
		int32_t L_38 = L_37;
		Object_t * L_39 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2696, L_39, /*hidden argument*/NULL);
		XmlException_t2474 * L_41 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_41, L_40, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_41);
	}

IL_0147:
	{
		return;
	}
}
// System.Xml.ConformanceLevel Mono.Xml2.XmlTextReader::get_Conformance()
extern "C" int32_t XmlTextReader_get_Conformance_m11253 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->___allowMultipleRoot_23);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 2;
	}

IL_0012:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" void XmlTextReader_set_Conformance_m11254 (XmlTextReader_t2507 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		__this->___currentState_40 = 1;
		__this->___allowMultipleRoot_23 = 1;
	}

IL_0015:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::SetProperties(System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C" void XmlTextReader_SetProperties_m11255 (XmlTextReader_t2507 * __this, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = (__this->___currentToken_4);
		int32_t L_1 = ___nodeType;
		String_t* L_2 = ___name;
		String_t* L_3 = ___prefix;
		String_t* L_4 = ___localName;
		bool L_5 = ___isEmptyElement;
		String_t* L_6 = ___value;
		bool L_7 = ___clearAttributes;
		XmlTextReader_SetTokenProperties_m11256(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		XmlTokenInfo_t2508 * L_8 = (__this->___currentToken_4);
		int32_t L_9 = (__this->___currentLinkedNodeLineNumber_36);
		NullCheck(L_8);
		L_8->___LineNumber_8 = L_9;
		XmlTokenInfo_t2508 * L_10 = (__this->___currentToken_4);
		int32_t L_11 = (__this->___currentLinkedNodeLinePosition_37);
		NullCheck(L_10);
		L_10->___LinePosition_9 = L_11;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::SetTokenProperties(Mono.Xml2.XmlTextReader/XmlTokenInfo,System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C" void XmlTextReader_SetTokenProperties_m11256 (XmlTextReader_t2507 * __this, XmlTokenInfo_t2508 * ___token, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method)
{
	{
		XmlTokenInfo_t2508 * L_0 = ___token;
		int32_t L_1 = ___nodeType;
		NullCheck(L_0);
		L_0->___NodeType_12 = L_1;
		XmlTokenInfo_t2508 * L_2 = ___token;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		L_2->___Name_2 = L_3;
		XmlTokenInfo_t2508 * L_4 = ___token;
		String_t* L_5 = ___prefix;
		NullCheck(L_4);
		L_4->___Prefix_4 = L_5;
		XmlTokenInfo_t2508 * L_6 = ___token;
		String_t* L_7 = ___localName;
		NullCheck(L_6);
		L_6->___LocalName_3 = L_7;
		XmlTokenInfo_t2508 * L_8 = ___token;
		bool L_9 = ___isEmptyElement;
		NullCheck(L_8);
		L_8->___IsEmptyElement_6 = L_9;
		XmlTokenInfo_t2508 * L_10 = ___token;
		String_t* L_11 = ___value;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::set_Value(System.String) */, L_10, L_11);
		int32_t L_12 = (__this->___depth_17);
		__this->___elementDepth_18 = L_12;
		bool L_13 = ___clearAttributes;
		if (!L_13)
		{
			goto IL_0047;
		}
	}
	{
		XmlTextReader_ClearAttributes_m11257(__this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ClearAttributes()
extern "C" void XmlTextReader_ClearAttributes_m11257 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		__this->___attributeCount_11 = 0;
		__this->___currentAttribute_9 = (-1);
		__this->___currentAttributeValue_10 = (-1);
		return;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::PeekSurrogate(System.Int32)
extern "C" int32_t XmlTextReader_PeekSurrogate_m11258 (XmlTextReader_t2507 * __this, int32_t ___c, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___peekCharsLength_31);
		int32_t L_1 = (__this->___peekCharsIndex_30);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)((int32_t)L_1+(int32_t)1)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___c;
		bool L_3 = XmlTextReader_ReadTextReader_m11262(__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = ___c;
		return L_4;
	}

IL_0021:
	{
		CharU5BU5D_t646* L_5 = (__this->___peekChars_29);
		int32_t L_6 = (__this->___peekCharsIndex_30);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
		CharU5BU5D_t646* L_8 = (__this->___peekChars_29);
		int32_t L_9 = (__this->___peekCharsIndex_30);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)64512)))) == ((uint32_t)((int32_t)55296)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)64512)))) == ((int32_t)((int32_t)56320))))
		{
			goto IL_0063;
		}
	}

IL_0061:
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0063:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)65536)+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14-(int32_t)((int32_t)55296)))*(int32_t)((int32_t)1024)))))+(int32_t)((int32_t)((int32_t)L_15-(int32_t)((int32_t)56320)))));
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::PeekChar()
extern "C" int32_t XmlTextReader_PeekChar_m11259 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___peekCharsIndex_30);
		int32_t L_1 = (__this->___peekCharsLength_31);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0047;
		}
	}
	{
		CharU5BU5D_t646* L_2 = (__this->___peekChars_29);
		int32_t L_3 = (__this->___peekCharsIndex_30);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_2, L_4));
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)55296))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)57343))))
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = XmlTextReader_PeekSurrogate_m11258(__this, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0047:
	{
		bool L_11 = XmlTextReader_ReadTextReader_m11262(__this, (-1), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		return (-1);
	}

IL_0055:
	{
		int32_t L_12 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadChar()
extern "C" int32_t XmlTextReader_ReadChar_m11260 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->___peekCharsIndex_30);
		__this->___peekCharsIndex_30 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65536))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = (__this->___peekCharsIndex_30);
		__this->___peekCharsIndex_30 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_5 = (__this->___line_34);
		__this->___line_34 = ((int32_t)((int32_t)L_5+(int32_t)1));
		__this->___column_35 = 1;
		goto IL_0065;
	}

IL_0050:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = (__this->___column_35);
		__this->___column_35 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0065:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Advance(System.Int32)
extern "C" void XmlTextReader_Advance_m11261 (XmlTextReader_t2507 * __this, int32_t ___ch, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___peekCharsIndex_30);
		__this->___peekCharsIndex_30 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = ___ch;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65536))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = (__this->___peekCharsIndex_30);
		__this->___peekCharsIndex_30 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_3 = ___ch;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_4 = (__this->___line_34);
		__this->___line_34 = ((int32_t)((int32_t)L_4+(int32_t)1));
		__this->___column_35 = 1;
		goto IL_005e;
	}

IL_0049:
	{
		int32_t L_5 = ___ch;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = (__this->___column_35);
		__this->___column_35 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadTextReader(System.Int32)
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" bool XmlTextReader_ReadTextReader_m11262 (XmlTextReader_t2507 * __this, int32_t ___remained, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t646* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___peekCharsLength_31);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		TextReader_t2480 * L_1 = (__this->___reader_28);
		CharU5BU5D_t646* L_2 = (__this->___peekChars_29);
		CharU5BU5D_t646* L_3 = (__this->___peekChars_29);
		NullCheck(L_3);
		NullCheck(L_1);
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t646*, int32_t, int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32) */, L_1, L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))));
		__this->___peekCharsLength_31 = L_4;
		int32_t L_5 = (__this->___peekCharsLength_31);
		return ((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
	}

IL_0036:
	{
		int32_t L_6 = ___remained;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		V_0 = G_B5_0;
		int32_t L_7 = (__this->___peekCharsLength_31);
		int32_t L_8 = (__this->___curNodePeekIndex_32);
		V_1 = ((int32_t)((int32_t)L_7-(int32_t)L_8));
		bool L_9 = (__this->___preserveCurrentTag_33);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		__this->___curNodePeekIndex_32 = 0;
		__this->___peekCharsIndex_30 = 0;
		goto IL_0101;
	}

IL_0071:
	{
		int32_t L_10 = (__this->___peekCharsLength_31);
		CharU5BU5D_t646* L_11 = (__this->___peekChars_29);
		NullCheck(L_11);
		if ((((int32_t)L_10) >= ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_0101;
	}

IL_0089:
	{
		int32_t L_12 = (__this->___curNodePeekIndex_32);
		int32_t L_13 = (__this->___peekCharsLength_31);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)((int32_t)L_13>>(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		CharU5BU5D_t646* L_14 = (__this->___peekChars_29);
		NullCheck(L_14);
		V_2 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_14)->max_length)))*(int32_t)2))));
		CharU5BU5D_t646* L_15 = (__this->___peekChars_29);
		int32_t L_16 = (__this->___curNodePeekIndex_32);
		CharU5BU5D_t646* L_17 = V_2;
		int32_t L_18 = V_1;
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, (Array_t *)(Array_t *)L_17, 0, L_18, /*hidden argument*/NULL);
		CharU5BU5D_t646* L_19 = V_2;
		__this->___peekChars_29 = L_19;
		__this->___curNodePeekIndex_32 = 0;
		int32_t L_20 = V_1;
		__this->___peekCharsIndex_30 = L_20;
		goto IL_0101;
	}

IL_00da:
	{
		CharU5BU5D_t646* L_21 = (__this->___peekChars_29);
		int32_t L_22 = (__this->___curNodePeekIndex_32);
		CharU5BU5D_t646* L_23 = (__this->___peekChars_29);
		int32_t L_24 = V_1;
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, 0, L_24, /*hidden argument*/NULL);
		__this->___curNodePeekIndex_32 = 0;
		int32_t L_25 = V_1;
		__this->___peekCharsIndex_30 = L_25;
	}

IL_0101:
	{
		int32_t L_26 = ___remained;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0117;
		}
	}
	{
		CharU5BU5D_t646* L_27 = (__this->___peekChars_29);
		int32_t L_28 = (__this->___peekCharsIndex_30);
		int32_t L_29 = ___remained;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_28)) = (uint16_t)(((uint16_t)L_29));
	}

IL_0117:
	{
		CharU5BU5D_t646* L_30 = (__this->___peekChars_29);
		NullCheck(L_30);
		int32_t L_31 = (__this->___peekCharsIndex_30);
		int32_t L_32 = V_0;
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))-(int32_t)L_31))-(int32_t)L_32));
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_013a;
		}
	}
	{
		V_3 = ((int32_t)1024);
	}

IL_013a:
	{
		TextReader_t2480 * L_34 = (__this->___reader_28);
		CharU5BU5D_t646* L_35 = (__this->___peekChars_29);
		int32_t L_36 = (__this->___peekCharsIndex_30);
		int32_t L_37 = V_0;
		int32_t L_38 = V_3;
		NullCheck(L_34);
		int32_t L_39 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t646*, int32_t, int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32) */, L_34, L_35, ((int32_t)((int32_t)L_36+(int32_t)L_37)), L_38);
		V_4 = L_39;
		int32_t L_40 = V_0;
		int32_t L_41 = V_4;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)L_41));
		int32_t L_42 = (__this->___peekCharsIndex_30);
		int32_t L_43 = V_5;
		__this->___peekCharsLength_31 = ((int32_t)((int32_t)L_42+(int32_t)L_43));
		int32_t L_44 = V_5;
		return ((((int32_t)((((int32_t)L_44) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadContent()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" bool XmlTextReader_ReadContent_m11263 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->___popScope_20);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_1 = (__this->___nsmgr_14);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_1);
		XmlParserContext_t2497 * L_2 = (__this->___parserContext_12);
		NullCheck(L_2);
		XmlParserContext_PopScope_m11084(L_2, /*hidden argument*/NULL);
		__this->___popScope_20 = 0;
	}

IL_0029:
	{
		bool L_3 = (__this->___returnEntityReference_25);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		XmlTextReader_SetEntityReferenceProperties_m11264(__this, /*hidden argument*/NULL);
		goto IL_0168;
	}

IL_003f:
	{
		int32_t L_4 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_009d;
		}
	}
	{
		__this->___readState_15 = 3;
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m11255(__this, 0, L_6, L_7, L_8, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		int32_t L_9 = (__this->___depth_17);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_10 = (__this->___depth_17);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral2697, L_12, /*hidden argument*/NULL);
		XmlException_t2474 * L_14 = XmlTextReader_NotWFError_m11249(__this, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_009b:
	{
		return 0;
	}

IL_009d:
	{
		int32_t L_15 = V_0;
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0145;
		}
	}

IL_00bc:
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)32))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)60))))
		{
			goto IL_00d1;
		}
	}
	{
		goto IL_015c;
	}

IL_00d1:
	{
		int32_t L_19 = V_0;
		XmlTextReader_Advance_m11261(__this, L_19, /*hidden argument*/NULL);
		int32_t L_20 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_2 = L_20;
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)33))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)47))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)63))))
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0135;
	}

IL_00fc:
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)47), /*hidden argument*/NULL);
		XmlTextReader_ReadEndTag_m11267(__this, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_010f:
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)63), /*hidden argument*/NULL);
		XmlTextReader_ReadProcessingInstruction_m11283(__this, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_0122:
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)33), /*hidden argument*/NULL);
		XmlTextReader_ReadDeclaration_m11288(__this, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_0135:
	{
		XmlTextReader_ReadStartTag_m11265(__this, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_0140:
	{
		goto IL_0168;
	}

IL_0145:
	{
		bool L_24 = XmlTextReader_ReadWhitespace_m11306(__this, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0157;
		}
	}
	{
		bool L_25 = XmlTextReader_ReadContent_m11263(__this, /*hidden argument*/NULL);
		return L_25;
	}

IL_0157:
	{
		goto IL_0168;
	}

IL_015c:
	{
		XmlTextReader_ReadText_m11273(__this, 1, /*hidden argument*/NULL);
		goto IL_0168;
	}

IL_0168:
	{
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState() */, __this);
		return ((((int32_t)((((int32_t)L_26) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Xml2.XmlTextReader::SetEntityReferenceProperties()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_SetEntityReferenceProperties_m11264 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	DTDEntityDeclaration_t2436 * V_0 = {0};
	DTDEntityDeclaration_t2436 * G_B3_0 = {0};
	{
		DTDObjectModel_t2416 * L_0 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		DTDObjectModel_t2416 * L_1 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DTDEntityDeclarationCollection_t2421 * L_2 = DTDObjectModel_get_EntityDecls_m10464(L_1, /*hidden argument*/NULL);
		String_t* L_3 = (__this->___entityReferenceName_26);
		NullCheck(L_2);
		DTDEntityDeclaration_t2436 * L_4 = DTDEntityDeclarationCollection_get_Item_m10490(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = ((DTDEntityDeclaration_t2436 *)(NULL));
	}

IL_0027:
	{
		V_0 = G_B3_0;
		bool L_5 = (__this->___isStandalone_24);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		DTDObjectModel_t2416 * L_6 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		DTDEntityDeclaration_t2436 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		DTDEntityDeclaration_t2436 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = DTDNode_get_IsInternalSubset_m10508(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005b;
		}
	}

IL_004f:
	{
		XmlException_t2474 * L_10 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2698, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005b:
	{
		DTDEntityDeclaration_t2436 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		DTDEntityDeclaration_t2436 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = DTDEntityDeclaration_get_NotationName_m10553(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		XmlException_t2474 * L_14 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2699, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0078:
	{
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		String_t* L_15 = (__this->___entityReferenceName_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_17 = (__this->___entityReferenceName_26);
		XmlTextReader_SetProperties_m11255(__this, 5, L_15, L_16, L_17, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		__this->___returnEntityReference_25 = 0;
		String_t* L_18 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___entityReferenceName_26 = L_18;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadStartTag()
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextReader_t2507_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t427_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3115_MethodInfo_var;
extern "C" void XmlTextReader_ReadStartTag_m11265 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlTextReader_t2507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4728);
		Dictionary_2_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Dictionary_2__ctor_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483838);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	String_t* V_11 = {0};
	String_t* V_12 = {0};
	Uri_t32 * V_13 = {0};
	Uri_t32 * V_14 = {0};
	String_t* V_15 = {0};
	Dictionary_2_t427 * V_16 = {0};
	int32_t V_17 = 0;
	String_t* V_18 = {0};
	int32_t V_19 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Uri_t32 * G_B59_0 = {0};
	XmlParserContext_t2497 * G_B61_0 = {0};
	XmlParserContext_t2497 * G_B60_0 = {0};
	String_t* G_B62_0 = {0};
	XmlParserContext_t2497 * G_B62_1 = {0};
	{
		int32_t L_0 = (__this->___currentState_40);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0019;
		}
	}
	{
		XmlException_t2474 * L_1 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2700, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0019:
	{
		__this->___currentState_40 = 1;
		XmlNamespaceManager_t2485 * L_2 = (__this->___nsmgr_14);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_2);
		int32_t L_3 = (__this->___line_34);
		__this->___currentLinkedNodeLineNumber_36 = L_3;
		int32_t L_4 = (__this->___column_35);
		__this->___currentLinkedNodeLinePosition_37 = L_4;
		String_t* L_5 = XmlTextReader_ReadName_m11301(__this, (&V_0), (&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = (__this->___currentState_40);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0067;
		}
	}
	{
		XmlException_t2474 * L_7 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2701, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0067:
	{
		V_3 = 0;
		XmlTextReader_ClearAttributes_m11257(__this, /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		int32_t L_8 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_9 = XmlChar_IsFirstNameChar_m10683(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_008d;
		}
	}
	{
		XmlTextReader_ReadAttributes_m11277(__this, 0, /*hidden argument*/NULL);
	}

IL_008d:
	{
		XmlTokenInfo_t2508 * L_10 = (__this->___currentToken_4);
		__this->___cursorToken_3 = L_10;
		V_4 = 0;
		goto IL_00b5;
	}

IL_00a1:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_11 = (__this->___attributeTokens_7);
		int32_t L_12 = V_4;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_11, L_13)));
		XmlAttributeTokenInfo_FillXmlns_m11188((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_11, L_13)), /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_00b5:
	{
		int32_t L_15 = V_4;
		int32_t L_16 = (__this->___attributeCount_11);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_00a1;
		}
	}
	{
		V_5 = 0;
		goto IL_00de;
	}

IL_00ca:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_17 = (__this->___attributeTokens_7);
		int32_t L_18 = V_5;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_17, L_19)));
		XmlAttributeTokenInfo_FillNamespace_m11189((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_17, L_19)), /*hidden argument*/NULL);
		int32_t L_20 = V_5;
		V_5 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00de:
	{
		int32_t L_21 = V_5;
		int32_t L_22 = (__this->___attributeCount_11);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_23 = (__this->___namespaces_44);
		if (!L_23)
		{
			goto IL_0157;
		}
	}
	{
		V_6 = 0;
		goto IL_014a;
	}

IL_00fe:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_24 = (__this->___attributeTokens_7);
		int32_t L_25 = V_6;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = L_25;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_24, L_26)));
		String_t* L_27 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_24, L_26)))->___Prefix_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_op_Equality_m2344(NULL /*static, unused*/, L_27, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0144;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_29 = (__this->___attributeTokens_7);
		int32_t L_30 = V_6;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_29, L_31)));
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_29, L_31)));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_34 = String_op_Equality_m2344(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0144;
		}
	}
	{
		XmlException_t2474 * L_35 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2702, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_0144:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_014a:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = (__this->___attributeCount_11);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00fe;
		}
	}

IL_0157:
	{
		V_7 = 0;
		goto IL_0201;
	}

IL_015f:
	{
		int32_t L_39 = V_7;
		V_8 = ((int32_t)((int32_t)L_39+(int32_t)1));
		goto IL_01ee;
	}

IL_016a:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_40 = (__this->___attributeTokens_7);
		int32_t L_41 = V_7;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = L_41;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_40, L_42)));
		String_t* L_43 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_40, L_42)))->___Name_2);
		XmlAttributeTokenInfoU5BU5D_t2513* L_44 = (__this->___attributeTokens_7);
		int32_t L_45 = V_8;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_44, L_46)));
		String_t* L_47 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_44, L_46)))->___Name_2);
		bool L_48 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_43, L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01dc;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_49 = (__this->___attributeTokens_7);
		int32_t L_50 = V_7;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_49, L_51)));
		String_t* L_52 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_49, L_51)))->___LocalName_3);
		XmlAttributeTokenInfoU5BU5D_t2513* L_53 = (__this->___attributeTokens_7);
		int32_t L_54 = V_8;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		int32_t L_55 = L_54;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_53, L_55)));
		String_t* L_56 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_53, L_55)))->___LocalName_3);
		bool L_57 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_52, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_01e8;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_58 = (__this->___attributeTokens_7);
		int32_t L_59 = V_7;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = L_59;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_58, L_60)));
		String_t* L_61 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_58, L_60)))->___NamespaceURI_5);
		XmlAttributeTokenInfoU5BU5D_t2513* L_62 = (__this->___attributeTokens_7);
		int32_t L_63 = V_8;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		int32_t L_64 = L_63;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_62, L_64)));
		String_t* L_65 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_62, L_64)))->___NamespaceURI_5);
		bool L_66 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_61, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01e8;
		}
	}

IL_01dc:
	{
		XmlException_t2474 * L_67 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2703, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_01e8:
	{
		int32_t L_68 = V_8;
		V_8 = ((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01ee:
	{
		int32_t L_69 = V_8;
		int32_t L_70 = (__this->___attributeCount_11);
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_0201:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = (__this->___attributeCount_11);
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_74 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0231;
		}
	}
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)47), /*hidden argument*/NULL);
		V_3 = 1;
		__this->___popScope_20 = 1;
		goto IL_0241;
	}

IL_0231:
	{
		__this->___depthUp_19 = 1;
		String_t* L_75 = V_2;
		String_t* L_76 = V_1;
		String_t* L_77 = V_0;
		XmlTextReader_PushElementName_m11266(__this, L_75, L_76, L_77, /*hidden argument*/NULL);
	}

IL_0241:
	{
		XmlParserContext_t2497 * L_78 = (__this->___parserContext_12);
		NullCheck(L_78);
		XmlParserContext_PushScope_m11083(L_78, /*hidden argument*/NULL);
		XmlTextReader_Expect_m11302(__this, ((int32_t)62), /*hidden argument*/NULL);
		String_t* L_79 = V_2;
		String_t* L_80 = V_0;
		String_t* L_81 = V_1;
		bool L_82 = V_3;
		XmlTextReader_SetProperties_m11255(__this, 1, L_79, L_80, L_81, L_82, (String_t*)NULL, 0, /*hidden argument*/NULL);
		String_t* L_83 = V_0;
		NullCheck(L_83);
		int32_t L_84 = String_get_Length_m2782(L_83, /*hidden argument*/NULL);
		if ((((int32_t)L_84) <= ((int32_t)0)))
		{
			goto IL_0285;
		}
	}
	{
		XmlTokenInfo_t2508 * L_85 = (__this->___currentToken_4);
		String_t* L_86 = V_0;
		String_t* L_87 = XmlTextReader_LookupNamespace_m11236(__this, L_86, 1, /*hidden argument*/NULL);
		NullCheck(L_85);
		L_85->___NamespaceURI_5 = L_87;
		goto IL_02a6;
	}

IL_0285:
	{
		bool L_88 = (__this->___namespaces_44);
		if (!L_88)
		{
			goto IL_02a6;
		}
	}
	{
		XmlTokenInfo_t2508 * L_89 = (__this->___currentToken_4);
		XmlNamespaceManager_t2485 * L_90 = (__this->___nsmgr_14);
		NullCheck(L_90);
		String_t* L_91 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_90);
		NullCheck(L_89);
		L_89->___NamespaceURI_5 = L_91;
	}

IL_02a6:
	{
		bool L_92 = (__this->___namespaces_44);
		if (!L_92)
		{
			goto IL_0325;
		}
	}
	{
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Xml2.XmlTextReader::get_NamespaceURI() */, __this);
		if (L_93)
		{
			goto IL_02d3;
		}
	}
	{
		String_t* L_94 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String Mono.Xml2.XmlTextReader::get_Prefix() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_95 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2704, L_94, /*hidden argument*/NULL);
		XmlException_t2474 * L_96 = XmlTextReader_NotWFError_m11249(__this, L_95, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_96);
	}

IL_02d3:
	try
	{ // begin try (depth: 1)
		{
			V_9 = 0;
			goto IL_030b;
		}

IL_02db:
		{
			int32_t L_97 = V_9;
			VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32) */, __this, L_97);
			String_t* L_98 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Xml2.XmlTextReader::get_NamespaceURI() */, __this);
			if (L_98)
			{
				goto IL_0305;
			}
		}

IL_02ee:
		{
			String_t* L_99 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String Mono.Xml2.XmlTextReader::get_Prefix() */, __this);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_100 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2704, L_99, /*hidden argument*/NULL);
			XmlException_t2474 * L_101 = XmlTextReader_NotWFError_m11249(__this, L_100, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_101);
		}

IL_0305:
		{
			int32_t L_102 = V_9;
			V_9 = ((int32_t)((int32_t)L_102+(int32_t)1));
		}

IL_030b:
		{
			int32_t L_103 = V_9;
			int32_t L_104 = (__this->___attributeCount_11);
			if ((((int32_t)L_103) < ((int32_t)L_104)))
			{
				goto IL_02db;
			}
		}

IL_0318:
		{
			IL2CPP_LEAVE(0x325, FINALLY_031d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_031d;
	}

FINALLY_031d:
	{ // begin finally (depth: 1)
		VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToElement() */, __this);
		IL2CPP_END_FINALLY(797)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(797)
	{
		IL2CPP_JUMP_TBL(0x325, IL_0325)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0325:
	{
		V_10 = 0;
		goto IL_0520;
	}

IL_032d:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_105 = (__this->___attributeTokens_7);
		int32_t L_106 = V_10;
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, L_106);
		int32_t L_107 = L_106;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_105, L_107)));
		String_t* L_108 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_105, L_107)))->___Prefix_4);
		bool L_109 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_108, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		if (L_109)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_051a;
	}

IL_034f:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_110 = (__this->___attributeTokens_7);
		int32_t L_111 = V_10;
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, L_111);
		int32_t L_112 = L_111;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_110, L_112)));
		String_t* L_113 = (((XmlTokenInfo_t2508 *)(*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_110, L_112)))->___LocalName_3);
		V_11 = L_113;
		XmlAttributeTokenInfoU5BU5D_t2513* L_114 = (__this->___attributeTokens_7);
		int32_t L_115 = V_10;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, L_115);
		int32_t L_116 = L_115;
		NullCheck((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_114, L_116)));
		String_t* L_117 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_114, L_116)));
		V_12 = L_117;
		String_t* L_118 = V_11;
		V_15 = L_118;
		String_t* L_119 = V_15;
		if (!L_119)
		{
			goto IL_051a;
		}
	}
	{
		Dictionary_2_t427 * L_120 = ((XmlTextReader_t2507_StaticFields*)XmlTextReader_t2507_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map52_56;
		if (L_120)
		{
			goto IL_03ba;
		}
	}
	{
		Dictionary_2_t427 * L_121 = (Dictionary_2_t427 *)il2cpp_codegen_object_new (Dictionary_2_t427_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3115(L_121, 3, /*hidden argument*/Dictionary_2__ctor_m3115_MethodInfo_var);
		V_16 = L_121;
		Dictionary_2_t427 * L_122 = V_16;
		NullCheck(L_122);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_122, (String_t*) &_stringLiteral2233, 0);
		Dictionary_2_t427 * L_123 = V_16;
		NullCheck(L_123);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_123, (String_t*) &_stringLiteral2624, 1);
		Dictionary_2_t427 * L_124 = V_16;
		NullCheck(L_124);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_124, (String_t*) &_stringLiteral2622, 2);
		Dictionary_2_t427 * L_125 = V_16;
		((XmlTextReader_t2507_StaticFields*)XmlTextReader_t2507_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map52_56 = L_125;
	}

IL_03ba:
	{
		Dictionary_2_t427 * L_126 = ((XmlTextReader_t2507_StaticFields*)XmlTextReader_t2507_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map52_56;
		String_t* L_127 = V_15;
		NullCheck(L_126);
		bool L_128 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_126, L_127, (&V_17));
		if (!L_128)
		{
			goto IL_051a;
		}
	}
	{
		int32_t L_129 = V_17;
		if (L_129 == 0)
		{
			goto IL_03e5;
		}
		if (L_129 == 1)
		{
			goto IL_0469;
		}
		if (L_129 == 2)
		{
			goto IL_047b;
		}
	}
	{
		goto IL_051a;
	}

IL_03e5:
	{
		XmlResolver_t2315 * L_130 = (__this->___resolver_46);
		if (!L_130)
		{
			goto IL_0457;
		}
	}
	{
		String_t* L_131 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Mono.Xml2.XmlTextReader::get_BaseURI() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_132 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_133 = String_op_Inequality_m3147(NULL /*static, unused*/, L_131, L_132, /*hidden argument*/NULL);
		if (!L_133)
		{
			goto IL_0415;
		}
	}
	{
		String_t* L_134 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Mono.Xml2.XmlTextReader::get_BaseURI() */, __this);
		Uri_t32 * L_135 = (Uri_t32 *)il2cpp_codegen_object_new (Uri_t32_il2cpp_TypeInfo_var);
		Uri__ctor_m7418(L_135, L_134, /*hidden argument*/NULL);
		G_B59_0 = L_135;
		goto IL_0416;
	}

IL_0415:
	{
		G_B59_0 = ((Uri_t32 *)(NULL));
	}

IL_0416:
	{
		V_13 = G_B59_0;
		XmlResolver_t2315 * L_136 = (__this->___resolver_46);
		Uri_t32 * L_137 = V_13;
		String_t* L_138 = V_12;
		NullCheck(L_136);
		Uri_t32 * L_139 = (Uri_t32 *)VirtFuncInvoker2< Uri_t32 *, Uri_t32 *, String_t* >::Invoke(5 /* System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String) */, L_136, L_137, L_138);
		V_14 = L_139;
		XmlParserContext_t2497 * L_140 = (__this->___parserContext_12);
		Uri_t32 * L_141 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t32_il2cpp_TypeInfo_var);
		bool L_142 = Uri_op_Inequality_m11521(NULL /*static, unused*/, L_141, (Uri_t32 *)NULL, /*hidden argument*/NULL);
		G_B60_0 = L_140;
		if (!L_142)
		{
			G_B61_0 = L_140;
			goto IL_0448;
		}
	}
	{
		Uri_t32 * L_143 = V_14;
		NullCheck(L_143);
		String_t* L_144 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_143);
		G_B62_0 = L_144;
		G_B62_1 = G_B60_0;
		goto IL_044d;
	}

IL_0448:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_145 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B62_0 = L_145;
		G_B62_1 = G_B61_0;
	}

IL_044d:
	{
		NullCheck(G_B62_1);
		XmlParserContext_set_BaseURI_m11068(G_B62_1, G_B62_0, /*hidden argument*/NULL);
		goto IL_0464;
	}

IL_0457:
	{
		XmlParserContext_t2497 * L_146 = (__this->___parserContext_12);
		String_t* L_147 = V_12;
		NullCheck(L_146);
		XmlParserContext_set_BaseURI_m11068(L_146, L_147, /*hidden argument*/NULL);
	}

IL_0464:
	{
		goto IL_051a;
	}

IL_0469:
	{
		XmlParserContext_t2497 * L_148 = (__this->___parserContext_12);
		String_t* L_149 = V_12;
		NullCheck(L_148);
		XmlParserContext_set_XmlLang_m11080(L_148, L_149, /*hidden argument*/NULL);
		goto IL_051a;
	}

IL_047b:
	{
		String_t* L_150 = V_12;
		V_18 = L_150;
		String_t* L_151 = V_18;
		if (!L_151)
		{
			goto IL_0502;
		}
	}
	{
		Dictionary_2_t427 * L_152 = ((XmlTextReader_t2507_StaticFields*)XmlTextReader_t2507_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map51_55;
		if (L_152)
		{
			goto IL_04b9;
		}
	}
	{
		Dictionary_2_t427 * L_153 = (Dictionary_2_t427 *)il2cpp_codegen_object_new (Dictionary_2_t427_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3115(L_153, 2, /*hidden argument*/Dictionary_2__ctor_m3115_MethodInfo_var);
		V_16 = L_153;
		Dictionary_2_t427 * L_154 = V_16;
		NullCheck(L_154);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_154, (String_t*) &_stringLiteral2661, 0);
		Dictionary_2_t427 * L_155 = V_16;
		NullCheck(L_155);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_155, (String_t*) &_stringLiteral859, 1);
		Dictionary_2_t427 * L_156 = V_16;
		((XmlTextReader_t2507_StaticFields*)XmlTextReader_t2507_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map51_55 = L_156;
	}

IL_04b9:
	{
		Dictionary_2_t427 * L_157 = ((XmlTextReader_t2507_StaticFields*)XmlTextReader_t2507_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map51_55;
		String_t* L_158 = V_18;
		NullCheck(L_157);
		bool L_159 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_157, L_158, (&V_19));
		if (!L_159)
		{
			goto IL_0502;
		}
	}
	{
		int32_t L_160 = V_19;
		if (!L_160)
		{
			goto IL_04e0;
		}
	}
	{
		int32_t L_161 = V_19;
		if ((((int32_t)L_161) == ((int32_t)1)))
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_0502;
	}

IL_04e0:
	{
		XmlParserContext_t2497 * L_162 = (__this->___parserContext_12);
		NullCheck(L_162);
		XmlParserContext_set_XmlSpace_m11082(L_162, 2, /*hidden argument*/NULL);
		goto IL_0515;
	}

IL_04f1:
	{
		XmlParserContext_t2497 * L_163 = (__this->___parserContext_12);
		NullCheck(L_163);
		XmlParserContext_set_XmlSpace_m11082(L_163, 1, /*hidden argument*/NULL);
		goto IL_0515;
	}

IL_0502:
	{
		String_t* L_164 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_165 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2705, L_164, /*hidden argument*/NULL);
		XmlException_t2474 * L_166 = XmlTextReader_NotWFError_m11249(__this, L_165, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_166);
	}

IL_0515:
	{
		goto IL_051a;
	}

IL_051a:
	{
		int32_t L_167 = V_10;
		V_10 = ((int32_t)((int32_t)L_167+(int32_t)1));
	}

IL_0520:
	{
		int32_t L_168 = V_10;
		int32_t L_169 = (__this->___attributeCount_11);
		if ((((int32_t)L_168) < ((int32_t)L_169)))
		{
			goto IL_032d;
		}
	}
	{
		bool L_170 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement() */, __this);
		if (!L_170)
		{
			goto IL_053e;
		}
	}
	{
		XmlTextReader_CheckCurrentStateUpdate_m11268(__this, /*hidden argument*/NULL);
	}

IL_053e:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::PushElementName(System.String,System.String,System.String)
extern TypeInfo* TagNameU5BU5D_t2515_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_PushElementName_m11266 (XmlTextReader_t2507 * __this, String_t* ___name, String_t* ___local, String_t* ___prefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TagNameU5BU5D_t2515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4797);
		s_Il2CppMethodIntialized = true;
	}
	TagNameU5BU5D_t2515* V_0 = {0};
	int32_t V_1 = 0;
	{
		TagNameU5BU5D_t2515* L_0 = (__this->___elementNames_21);
		NullCheck(L_0);
		int32_t L_1 = (__this->___elementNameStackPos_22);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((uint32_t)L_1))))
		{
			goto IL_003e;
		}
	}
	{
		TagNameU5BU5D_t2515* L_2 = (__this->___elementNames_21);
		NullCheck(L_2);
		V_0 = ((TagNameU5BU5D_t2515*)SZArrayNew(TagNameU5BU5D_t2515_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))*(int32_t)2))));
		TagNameU5BU5D_t2515* L_3 = (__this->___elementNames_21);
		TagNameU5BU5D_t2515* L_4 = V_0;
		int32_t L_5 = (__this->___elementNameStackPos_22);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 0, L_5, /*hidden argument*/NULL);
		TagNameU5BU5D_t2515* L_6 = V_0;
		__this->___elementNames_21 = L_6;
	}

IL_003e:
	{
		TagNameU5BU5D_t2515* L_7 = (__this->___elementNames_21);
		int32_t L_8 = (__this->___elementNameStackPos_22);
		int32_t L_9 = L_8;
		V_1 = L_9;
		__this->___elementNameStackPos_22 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_10);
		String_t* L_11 = ___name;
		String_t* L_12 = ___local;
		String_t* L_13 = ___prefix;
		TagName_t2510  L_14 = {0};
		TagName__ctor_m11190(&L_14, L_11, L_12, L_13, /*hidden argument*/NULL);
		*((TagName_t2510 *)(TagName_t2510 *)SZArrayLdElema(L_7, L_10)) = L_14;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadEndTag()
extern "C" void XmlTextReader_ReadEndTag_m11267 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	TagName_t2510  V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___currentState_40);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		XmlException_t2474 * L_1 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2706, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___line_34);
		__this->___currentLinkedNodeLineNumber_36 = L_2;
		int32_t L_3 = (__this->___column_35);
		__this->___currentLinkedNodeLinePosition_37 = L_3;
		int32_t L_4 = (__this->___elementNameStackPos_22);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		XmlException_t2474 * L_5 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2707, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0047:
	{
		TagNameU5BU5D_t2515* L_6 = (__this->___elementNames_21);
		int32_t L_7 = (__this->___elementNameStackPos_22);
		int32_t L_8 = ((int32_t)((int32_t)L_7-(int32_t)1));
		V_1 = L_8;
		__this->___elementNameStackPos_22 = L_8;
		int32_t L_9 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_9);
		V_0 = (*(TagName_t2510 *)((TagName_t2510 *)(TagName_t2510 *)SZArrayLdElema(L_6, L_9)));
		String_t* L_10 = ((&V_0)->___Name_0);
		XmlTextReader_Expect_m11303(__this, L_10, /*hidden argument*/NULL);
		XmlTextReader_ExpectAfterWhitespace_m11304(__this, ((int32_t)62), /*hidden argument*/NULL);
		int32_t L_11 = (__this->___depth_17);
		__this->___depth_17 = ((int32_t)((int32_t)L_11-(int32_t)1));
		String_t* L_12 = ((&V_0)->___Name_0);
		String_t* L_13 = ((&V_0)->___Prefix_2);
		String_t* L_14 = ((&V_0)->___LocalName_1);
		XmlTextReader_SetProperties_m11255(__this, ((int32_t)15), L_12, L_13, L_14, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		String_t* L_15 = ((&V_0)->___Prefix_2);
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m2782(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		XmlTokenInfo_t2508 * L_17 = (__this->___currentToken_4);
		String_t* L_18 = ((&V_0)->___Prefix_2);
		String_t* L_19 = XmlTextReader_LookupNamespace_m11236(__this, L_18, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->___NamespaceURI_5 = L_19;
		goto IL_00fd;
	}

IL_00dc:
	{
		bool L_20 = (__this->___namespaces_44);
		if (!L_20)
		{
			goto IL_00fd;
		}
	}
	{
		XmlTokenInfo_t2508 * L_21 = (__this->___currentToken_4);
		XmlNamespaceManager_t2485 * L_22 = (__this->___nsmgr_14);
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_22);
		NullCheck(L_21);
		L_21->___NamespaceURI_5 = L_23;
	}

IL_00fd:
	{
		__this->___popScope_20 = 1;
		XmlTextReader_CheckCurrentStateUpdate_m11268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::CheckCurrentStateUpdate()
extern "C" void XmlTextReader_CheckCurrentStateUpdate_m11268 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___depth_17);
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		bool L_1 = (__this->___allowMultipleRoot_23);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement() */, __this);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0036;
		}
	}

IL_002e:
	{
		__this->___currentState_40 = ((int32_t)15);
	}

IL_0036:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::AppendValueChar(System.Int32)
extern "C" void XmlTextReader_AppendValueChar_m11269 (XmlTextReader_t2507 * __this, int32_t ___ch, const MethodInfo* method)
{
	{
		int32_t L_0 = ___ch;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t619 * L_1 = (__this->___valueBuffer_27);
		int32_t L_2 = ___ch;
		NullCheck(L_1);
		StringBuilder_Append_m5401(L_1, (((uint16_t)L_2)), /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_001e:
	{
		int32_t L_3 = ___ch;
		XmlTextReader_AppendSurrogatePairValueChar_m11270(__this, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::AppendSurrogatePairValueChar(System.Int32)
extern "C" void XmlTextReader_AppendSurrogatePairValueChar_m11270 (XmlTextReader_t2507 * __this, int32_t ___ch, const MethodInfo* method)
{
	{
		StringBuilder_t619 * L_0 = (__this->___valueBuffer_27);
		int32_t L_1 = ___ch;
		NullCheck(L_0);
		StringBuilder_Append_m5401(L_0, (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1-(int32_t)((int32_t)65536)))/(int32_t)((int32_t)1024)))+(int32_t)((int32_t)55296))))), /*hidden argument*/NULL);
		StringBuilder_t619 * L_2 = (__this->___valueBuffer_27);
		int32_t L_3 = ___ch;
		NullCheck(L_2);
		StringBuilder_Append_m5401(L_2, (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3-(int32_t)((int32_t)65536)))%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320))))), /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader::CreateValueString()
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern TypeInfo* NameTable_t2448_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_CreateValueString_m11271 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		NameTable_t2448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4616);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	String_t* G_B16_0 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, __this);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)13))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)14))))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_00ad;
	}

IL_001c:
	{
		StringBuilder_t619 * L_3 = (__this->___valueBuffer_27);
		NullCheck(L_3);
		int32_t L_4 = StringBuilder_get_Length_m6646(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		CharU5BU5D_t646* L_5 = (__this->___whitespaceCache_53);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		__this->___whitespaceCache_53 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, ((int32_t)32)));
	}

IL_0040:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t646* L_7 = (__this->___whitespaceCache_53);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_00ad;
	}

IL_0053:
	{
		NameTable_t2448 * L_8 = (__this->___whitespacePool_52);
		if (L_8)
		{
			goto IL_0069;
		}
	}
	{
		NameTable_t2448 * L_9 = (NameTable_t2448 *)il2cpp_codegen_object_new (NameTable_t2448_il2cpp_TypeInfo_var);
		NameTable__ctor_m10627(L_9, /*hidden argument*/NULL);
		__this->___whitespacePool_52 = L_9;
	}

IL_0069:
	{
		V_1 = 0;
		goto IL_0088;
	}

IL_0070:
	{
		CharU5BU5D_t646* L_10 = (__this->___whitespaceCache_53);
		int32_t L_11 = V_1;
		StringBuilder_t619 * L_12 = (__this->___valueBuffer_27);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		uint16_t L_14 = StringBuilder_get_Chars_m11585(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_11)) = (uint16_t)L_14;
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0088:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0070;
		}
	}
	{
		NameTable_t2448 * L_18 = (__this->___whitespacePool_52);
		CharU5BU5D_t646* L_19 = (__this->___whitespaceCache_53);
		StringBuilder_t619 * L_20 = (__this->___valueBuffer_27);
		NullCheck(L_20);
		int32_t L_21 = StringBuilder_get_Length_m6646(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_22 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t646*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32) */, L_18, L_19, 0, L_21);
		return L_22;
	}

IL_00ad:
	{
		StringBuilder_t619 * L_23 = (__this->___valueBuffer_27);
		NullCheck(L_23);
		int32_t L_24 = StringBuilder_get_Capacity_m11574(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)100))))
		{
			goto IL_00db;
		}
	}
	{
		StringBuilder_t619 * L_25 = (__this->___valueBuffer_27);
		StringBuilder_t619 * L_26 = (__this->___valueBuffer_27);
		NullCheck(L_26);
		int32_t L_27 = StringBuilder_get_Length_m6646(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		String_t* L_28 = StringBuilder_ToString_m11519(L_25, 0, L_27, /*hidden argument*/NULL);
		G_B16_0 = L_28;
		goto IL_00e6;
	}

IL_00db:
	{
		StringBuilder_t619 * L_29 = (__this->___valueBuffer_27);
		NullCheck(L_29);
		String_t* L_30 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_29);
		G_B16_0 = L_30;
	}

IL_00e6:
	{
		return G_B16_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ClearValueBuffer()
extern "C" void XmlTextReader_ClearValueBuffer_m11272 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		StringBuilder_t619 * L_0 = (__this->___valueBuffer_27);
		NullCheck(L_0);
		StringBuilder_set_Length_m11520(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadText(System.Boolean)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ReadText_m11273 (XmlTextReader_t2507 * __this, bool ___notWhitespace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = {0};
	int32_t G_B39_0 = 0;
	{
		int32_t L_0 = (__this->___currentState_40);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		XmlException_t2474 * L_1 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2708, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		__this->___preserveCurrentTag_33 = 0;
		bool L_2 = ___notWhitespace;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		int32_t L_3 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0129;
	}

IL_0039:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0065;
		}
	}
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		int32_t L_5 = XmlTextReader_ReadReference_m11274(__this, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = (__this->___returnEntityReference_25);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		goto IL_0138;
	}

IL_0060:
	{
		goto IL_00c4;
	}

IL_0065:
	{
		bool L_7 = (__this->___normalization_47);
		if (!L_7)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_009b;
		}
	}
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		int32_t L_9 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)10))))
		{
			goto IL_0096;
		}
	}
	{
		XmlTextReader_AppendValueChar_m11269(__this, ((int32_t)10), /*hidden argument*/NULL);
	}

IL_0096:
	{
		goto IL_0129;
	}

IL_009b:
	{
		bool L_11 = XmlTextReader_get_CharacterChecking_m11204(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_13 = XmlChar_IsInvalid_m10684(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00bd;
		}
	}
	{
		XmlException_t2474 * L_14 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2510, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_00bd:
	{
		int32_t L_15 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_00c4:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_00e2;
		}
	}
	{
		StringBuilder_t619 * L_17 = (__this->___valueBuffer_27);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m5401(L_17, (((uint16_t)L_18)), /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00e2:
	{
		int32_t L_19 = V_0;
		XmlTextReader_AppendSurrogatePairValueChar_m11270(__this, L_19, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0117;
		}
	}
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_22 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0110;
		}
	}
	{
		XmlException_t2474 * L_23 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2709, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_0110:
	{
		V_1 = 1;
		goto IL_011f;
	}

IL_0117:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		V_1 = 0;
	}

IL_011f:
	{
		int32_t L_25 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_0 = L_25;
		___notWhitespace = 1;
	}

IL_0129:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)60))))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0039;
		}
	}

IL_0138:
	{
		bool L_28 = (__this->___returnEntityReference_25);
		if (!L_28)
		{
			goto IL_015e;
		}
	}
	{
		StringBuilder_t619 * L_29 = (__this->___valueBuffer_27);
		NullCheck(L_29);
		int32_t L_30 = StringBuilder_get_Length_m6646(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_015e;
		}
	}
	{
		XmlTextReader_SetEntityReferenceProperties_m11264(__this, /*hidden argument*/NULL);
		goto IL_0199;
	}

IL_015e:
	{
		bool L_31 = ___notWhitespace;
		if (!L_31)
		{
			goto IL_016a;
		}
	}
	{
		G_B39_0 = 3;
		goto IL_017f;
	}

IL_016a:
	{
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace() */, __this);
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_017d;
		}
	}
	{
		G_B39_0 = ((int32_t)14);
		goto IL_017f;
	}

IL_017d:
	{
		G_B39_0 = ((int32_t)13);
	}

IL_017f:
	{
		V_2 = G_B39_0;
		int32_t L_33 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_35 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_36 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m11255(__this, L_33, L_34, L_35, L_36, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
	}

IL_0199:
	{
		return;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadReference(System.Boolean)
extern "C" int32_t XmlTextReader_ReadReference_m11274 (XmlTextReader_t2507 * __this, bool ___ignoreEntityReferences, const MethodInfo* method)
{
	{
		int32_t L_0 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)35), /*hidden argument*/NULL);
		int32_t L_1 = XmlTextReader_ReadCharacterReference_m11275(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_001c:
	{
		bool L_2 = ___ignoreEntityReferences;
		int32_t L_3 = XmlTextReader_ReadEntityReference_m11276(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharacterReference()
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern "C" int32_t XmlTextReader_ReadCharacterReference_m11275 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_00cd;
		}
	}
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)120), /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_001c:
	{
		int32_t L_1 = V_1;
		XmlTextReader_Advance_m11261(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)57))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)4))+(int32_t)L_5))-(int32_t)((int32_t)48)));
		goto IL_00b2;
	}

IL_0041:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)65))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8<<(int32_t)4))+(int32_t)L_9))-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
		goto IL_00b2;
	}

IL_0062:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)97))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)102))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12<<(int32_t)4))+(int32_t)L_13))-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
		goto IL_00b2;
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_14 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_15 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		int32_t L_16 = V_1;
		uint16_t L_17 = (((uint16_t)L_16));
		Object_t * L_18 = Box(Char_t684_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0)) = (Object_t *)L_18;
		ObjectU5BU5D_t21* L_19 = L_15;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 1);
		ArrayElementTypeCheck (L_19, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 1)) = (Object_t *)L_22;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Format_m6657(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral2710, L_19, /*hidden argument*/NULL);
		XmlException_t2474 * L_24 = XmlTextReader_NotWFError_m11249(__this, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00b2:
	{
		int32_t L_25 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		V_1 = L_26;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)59))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_001c;
		}
	}

IL_00c8:
	{
		goto IL_013d;
	}

IL_00cd:
	{
		goto IL_0127;
	}

IL_00d2:
	{
		int32_t L_28 = V_1;
		XmlTextReader_Advance_m11261(__this, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)48))))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)57))))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31*(int32_t)((int32_t)10)))+(int32_t)L_32))-(int32_t)((int32_t)48)));
		goto IL_0127;
	}

IL_00f8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_33 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_34 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		int32_t L_35 = V_1;
		uint16_t L_36 = (((uint16_t)L_35));
		Object_t * L_37 = Box(Char_t684_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 0);
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 0)) = (Object_t *)L_37;
		ObjectU5BU5D_t21* L_38 = L_34;
		int32_t L_39 = V_1;
		int32_t L_40 = L_39;
		Object_t * L_41 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 1);
		ArrayElementTypeCheck (L_38, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 1)) = (Object_t *)L_41;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Format_m6657(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral2711, L_38, /*hidden argument*/NULL);
		XmlException_t2474 * L_43 = XmlTextReader_NotWFError_m11249(__this, L_42, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_43);
	}

IL_0127:
	{
		int32_t L_44 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		int32_t L_45 = L_44;
		V_1 = L_45;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)59))))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_46 = V_1;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_00d2;
		}
	}

IL_013d:
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		bool L_47 = XmlTextReader_get_CharacterChecking_m11204(__this, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01a3;
		}
	}
	{
		bool L_48 = XmlTextReader_get_Normalization_m11220(__this, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_49 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_50 = XmlChar_IsInvalid_m10684(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01a3;
		}
	}
	{
		ObjectU5BU5D_t21* L_51 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 0);
		ArrayElementTypeCheck (L_51, (String_t*) &_stringLiteral2712);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, 0)) = (Object_t *)(String_t*) &_stringLiteral2712;
		ObjectU5BU5D_t21* L_52 = L_51;
		bool L_53 = (__this->___normalization_47);
		bool L_54 = L_53;
		Object_t * L_55 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 1)) = (Object_t *)L_55;
		ObjectU5BU5D_t21* L_56 = L_52;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
		ArrayElementTypeCheck (L_56, (String_t*) &_stringLiteral2713);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, 2)) = (Object_t *)(String_t*) &_stringLiteral2713;
		ObjectU5BU5D_t21* L_57 = L_56;
		bool L_58 = (__this->___checkCharacters_48);
		bool L_59 = L_58;
		Object_t * L_60 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
		ArrayElementTypeCheck (L_57, L_60);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_57, 3)) = (Object_t *)L_60;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m2403(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		XmlException_t2474 * L_62 = XmlTextReader_NotWFError_m11249(__this, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_01a3:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadEntityReference(System.Boolean)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" int32_t XmlTextReader_ReadEntityReference_m11276 (XmlTextReader_t2507 * __this, bool ___ignoreEntityReferences, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = XmlTextReader_ReadName_m11300(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlTextReader_Expect_m11302(__this, ((int32_t)59), /*hidden argument*/NULL);
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlChar_GetPredefinedEntity_m10691(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_1;
		return L_4;
	}

IL_001f:
	{
		bool L_5 = ___ignoreEntityReferences;
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		XmlTextReader_AppendValueChar_m11269(__this, ((int32_t)38), /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0045;
	}

IL_0034:
	{
		String_t* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m2787(L_6, L_7, /*hidden argument*/NULL);
		XmlTextReader_AppendValueChar_m11269(__this, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_10 = V_2;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m2782(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		XmlTextReader_AppendValueChar_m11269(__this, ((int32_t)59), /*hidden argument*/NULL);
		goto IL_006c;
	}

IL_005e:
	{
		__this->___returnEntityReference_25 = 1;
		String_t* L_13 = V_0;
		__this->___entityReferenceName_26 = L_13;
	}

IL_006c:
	{
		return (-1);
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadAttributes(System.Boolean)
extern "C" void XmlTextReader_ReadAttributes_m11277 (XmlTextReader_t2507 * __this, bool ___isXmlDecl, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	{
		V_0 = (-1);
		V_1 = 0;
		__this->___currentAttribute_9 = (-1);
		__this->___currentAttributeValue_10 = (-1);
	}

IL_0012:
	{
		bool L_0 = XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		XmlException_t2474 * L_2 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2714, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002f:
	{
		XmlTextReader_IncrementAttributeToken_m11279(__this, /*hidden argument*/NULL);
		XmlAttributeTokenInfo_t2509 * L_3 = (__this->___currentAttributeToken_5);
		int32_t L_4 = (__this->___line_34);
		NullCheck(L_3);
		((XmlTokenInfo_t2508 *)L_3)->___LineNumber_8 = L_4;
		XmlAttributeTokenInfo_t2509 * L_5 = (__this->___currentAttributeToken_5);
		int32_t L_6 = (__this->___column_35);
		NullCheck(L_5);
		((XmlTokenInfo_t2508 *)L_5)->___LinePosition_9 = L_6;
		XmlAttributeTokenInfo_t2509 * L_7 = (__this->___currentAttributeToken_5);
		String_t* L_8 = XmlTextReader_ReadName_m11301(__this, (&V_2), (&V_3), /*hidden argument*/NULL);
		NullCheck(L_7);
		((XmlTokenInfo_t2508 *)L_7)->___Name_2 = L_8;
		XmlAttributeTokenInfo_t2509 * L_9 = (__this->___currentAttributeToken_5);
		String_t* L_10 = V_2;
		NullCheck(L_9);
		((XmlTokenInfo_t2508 *)L_9)->___Prefix_4 = L_10;
		XmlAttributeTokenInfo_t2509 * L_11 = (__this->___currentAttributeToken_5);
		String_t* L_12 = V_3;
		NullCheck(L_11);
		((XmlTokenInfo_t2508 *)L_11)->___LocalName_3 = L_12;
		XmlTextReader_ExpectAfterWhitespace_m11304(__this, ((int32_t)61), /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		XmlTextReader_ReadAttributeValueTokens_m11281(__this, (-1), /*hidden argument*/NULL);
		bool L_13 = ___isXmlDecl;
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		XmlAttributeTokenInfo_t2509 * L_14 = (__this->___currentAttributeToken_5);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, L_14);
		V_4 = L_15;
	}

IL_00ad:
	{
		int32_t L_16 = (__this->___attributeCount_11);
		__this->___attributeCount_11 = ((int32_t)((int32_t)L_16+(int32_t)1));
		bool L_17 = XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00c8;
		}
	}
	{
		V_1 = 1;
	}

IL_00c8:
	{
		int32_t L_18 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_0 = L_18;
		bool L_19 = ___isXmlDecl;
		if (!L_19)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0103;
	}

IL_00e2:
	{
		goto IL_00fc;
	}

IL_00e7:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)47))))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_00fc;
		}
	}

IL_00f7:
	{
		goto IL_0103;
	}

IL_00fc:
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0012;
		}
	}

IL_0103:
	{
		__this->___currentAttribute_9 = (-1);
		__this->___currentAttributeValue_10 = (-1);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::AddAttributeWithValue(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_AddAttributeWithValue_m11278 (XmlTextReader_t2507 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	XmlAttributeTokenInfo_t2509 * V_0 = {0};
	XmlTokenInfo_t2508 * V_1 = {0};
	{
		XmlTextReader_IncrementAttributeToken_m11279(__this, /*hidden argument*/NULL);
		XmlAttributeTokenInfoU5BU5D_t2513* L_0 = (__this->___attributeTokens_7);
		int32_t L_1 = (__this->___currentAttribute_9);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_0, L_2));
		XmlAttributeTokenInfo_t2509 * L_3 = V_0;
		XmlNameTable_t2314 * L_4 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(17 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_4, L_5);
		NullCheck(L_3);
		((XmlTokenInfo_t2508 *)L_3)->___Name_2 = L_6;
		XmlAttributeTokenInfo_t2509 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_7);
		((XmlTokenInfo_t2508 *)L_7)->___Prefix_4 = L_8;
		XmlAttributeTokenInfo_t2509 * L_9 = V_0;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_9);
		((XmlTokenInfo_t2508 *)L_9)->___NamespaceURI_5 = L_10;
		XmlTextReader_IncrementAttributeValueToken_m11280(__this, /*hidden argument*/NULL);
		XmlTokenInfoU5BU5D_t2514* L_11 = (__this->___attributeValueTokens_8);
		int32_t L_12 = (__this->___currentAttributeValue_10);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		V_1 = (*(XmlTokenInfo_t2508 **)(XmlTokenInfo_t2508 **)SZArrayLdElema(L_11, L_13));
		XmlTokenInfo_t2508 * L_14 = V_1;
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_18 = ___value;
		XmlTextReader_SetTokenProperties_m11256(__this, L_14, 3, L_15, L_16, L_17, 0, L_18, 0, /*hidden argument*/NULL);
		XmlAttributeTokenInfo_t2509 * L_19 = V_0;
		String_t* L_20 = ___value;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::set_Value(System.String) */, L_19, L_20);
		int32_t L_21 = (__this->___attributeCount_11);
		__this->___attributeCount_11 = ((int32_t)((int32_t)L_21+(int32_t)1));
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeToken()
extern TypeInfo* XmlAttributeTokenInfoU5BU5D_t2513_il2cpp_TypeInfo_var;
extern TypeInfo* XmlAttributeTokenInfo_t2509_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_IncrementAttributeToken_m11279 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlAttributeTokenInfoU5BU5D_t2513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4792);
		XmlAttributeTokenInfo_t2509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4793);
		s_Il2CppMethodIntialized = true;
	}
	XmlAttributeTokenInfoU5BU5D_t2513* V_0 = {0};
	{
		int32_t L_0 = (__this->___currentAttribute_9);
		__this->___currentAttribute_9 = ((int32_t)((int32_t)L_0+(int32_t)1));
		XmlAttributeTokenInfoU5BU5D_t2513* L_1 = (__this->___attributeTokens_7);
		NullCheck(L_1);
		int32_t L_2 = (__this->___currentAttribute_9);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_3 = (__this->___attributeTokens_7);
		NullCheck(L_3);
		V_0 = ((XmlAttributeTokenInfoU5BU5D_t2513*)SZArrayNew(XmlAttributeTokenInfoU5BU5D_t2513_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))*(int32_t)2))));
		XmlAttributeTokenInfoU5BU5D_t2513* L_4 = (__this->___attributeTokens_7);
		XmlAttributeTokenInfoU5BU5D_t2513* L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_4, (Array_t *)(Array_t *)L_5, 0);
		XmlAttributeTokenInfoU5BU5D_t2513* L_6 = V_0;
		__this->___attributeTokens_7 = L_6;
	}

IL_0045:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_7 = (__this->___attributeTokens_7);
		int32_t L_8 = (__this->___currentAttribute_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		if ((*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_7, L_9)))
		{
			goto IL_006a;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_10 = (__this->___attributeTokens_7);
		int32_t L_11 = (__this->___currentAttribute_9);
		XmlAttributeTokenInfo_t2509 * L_12 = (XmlAttributeTokenInfo_t2509 *)il2cpp_codegen_object_new (XmlAttributeTokenInfo_t2509_il2cpp_TypeInfo_var);
		XmlAttributeTokenInfo__ctor_m11184(L_12, __this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_10, L_11)) = (XmlAttributeTokenInfo_t2509 *)L_12;
	}

IL_006a:
	{
		XmlAttributeTokenInfoU5BU5D_t2513* L_13 = (__this->___attributeTokens_7);
		int32_t L_14 = (__this->___currentAttribute_9);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___currentAttributeToken_5 = (*(XmlAttributeTokenInfo_t2509 **)(XmlAttributeTokenInfo_t2509 **)SZArrayLdElema(L_13, L_15));
		XmlAttributeTokenInfo_t2509 * L_16 = (__this->___currentAttributeToken_5);
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::Clear() */, L_16);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeValueToken()
extern TypeInfo* XmlTokenInfoU5BU5D_t2514_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTokenInfo_t2508_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_IncrementAttributeValueToken_m11280 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTokenInfoU5BU5D_t2514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4794);
		XmlTokenInfo_t2508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4795);
		s_Il2CppMethodIntialized = true;
	}
	XmlTokenInfoU5BU5D_t2514* V_0 = {0};
	{
		int32_t L_0 = (__this->___currentAttributeValue_10);
		__this->___currentAttributeValue_10 = ((int32_t)((int32_t)L_0+(int32_t)1));
		XmlTokenInfoU5BU5D_t2514* L_1 = (__this->___attributeValueTokens_8);
		NullCheck(L_1);
		int32_t L_2 = (__this->___currentAttributeValue_10);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		XmlTokenInfoU5BU5D_t2514* L_3 = (__this->___attributeValueTokens_8);
		NullCheck(L_3);
		V_0 = ((XmlTokenInfoU5BU5D_t2514*)SZArrayNew(XmlTokenInfoU5BU5D_t2514_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))*(int32_t)2))));
		XmlTokenInfoU5BU5D_t2514* L_4 = (__this->___attributeValueTokens_8);
		XmlTokenInfoU5BU5D_t2514* L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_4, (Array_t *)(Array_t *)L_5, 0);
		XmlTokenInfoU5BU5D_t2514* L_6 = V_0;
		__this->___attributeValueTokens_8 = L_6;
	}

IL_0045:
	{
		XmlTokenInfoU5BU5D_t2514* L_7 = (__this->___attributeValueTokens_8);
		int32_t L_8 = (__this->___currentAttributeValue_10);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		if ((*(XmlTokenInfo_t2508 **)(XmlTokenInfo_t2508 **)SZArrayLdElema(L_7, L_9)))
		{
			goto IL_006a;
		}
	}
	{
		XmlTokenInfoU5BU5D_t2514* L_10 = (__this->___attributeValueTokens_8);
		int32_t L_11 = (__this->___currentAttributeValue_10);
		XmlTokenInfo_t2508 * L_12 = (XmlTokenInfo_t2508 *)il2cpp_codegen_object_new (XmlTokenInfo_t2508_il2cpp_TypeInfo_var);
		XmlTokenInfo__ctor_m11180(L_12, __this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((XmlTokenInfo_t2508 **)(XmlTokenInfo_t2508 **)SZArrayLdElema(L_10, L_11)) = (XmlTokenInfo_t2508 *)L_12;
	}

IL_006a:
	{
		XmlTokenInfoU5BU5D_t2514* L_13 = (__this->___attributeValueTokens_8);
		int32_t L_14 = (__this->___currentAttributeValue_10);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___currentAttributeValueToken_6 = (*(XmlTokenInfo_t2508 **)(XmlTokenInfo_t2508 **)SZArrayLdElema(L_13, L_15));
		XmlTokenInfo_t2508 * L_16 = (__this->___currentAttributeValueToken_6);
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, L_16);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadAttributeValueTokens(System.Int32)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t2558_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2559_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ReadAttributeValueTokens_m11281 (XmlTextReader_t2507 * __this, int32_t ___dummyQuoteChar, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		IEnumerable_1_t2558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4800);
		IEnumerator_1_t2559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4801);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	uint16_t V_8 = 0x0;
	Object_t* V_9 = {0};
	int32_t V_10 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___dummyQuoteChar;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___dummyQuoteChar;
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0030;
		}
	}
	{
		XmlException_t2474 * L_5 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2715, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		XmlAttributeTokenInfo_t2509 * L_6 = (__this->___currentAttributeToken_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		((XmlTokenInfo_t2508 *)L_6)->___QuoteChar_7 = (((uint16_t)L_7));
		XmlTextReader_IncrementAttributeValueToken_m11280(__this, /*hidden argument*/NULL);
		XmlAttributeTokenInfo_t2509 * L_8 = (__this->___currentAttributeToken_5);
		int32_t L_9 = (__this->___currentAttributeValue_10);
		NullCheck(L_8);
		L_8->___ValueTokenStartIndex_13 = L_9;
		XmlTokenInfo_t2508 * L_10 = (__this->___currentAttributeValueToken_6);
		int32_t L_11 = (__this->___line_34);
		NullCheck(L_10);
		L_10->___LineNumber_8 = L_11;
		XmlTokenInfo_t2508 * L_12 = (__this->___currentAttributeValueToken_6);
		int32_t L_13 = (__this->___column_35);
		NullCheck(L_12);
		L_12->___LinePosition_9 = L_13;
		V_1 = 0;
		V_2 = 1;
		V_3 = 1;
		V_4 = 0;
		XmlTokenInfo_t2508 * L_14 = (__this->___currentAttributeValueToken_6);
		StringBuilder_t619 * L_15 = (__this->___valueBuffer_27);
		NullCheck(L_15);
		int32_t L_16 = StringBuilder_get_Length_m6646(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->___ValueBufferStart_10 = L_16;
		goto IL_031f;
	}

IL_009a:
	{
		int32_t L_17 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_00af;
		}
	}
	{
		goto IL_0325;
	}

IL_00af:
	{
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_00f7;
		}
	}
	{
		XmlTextReader_IncrementAttributeValueToken_m11280(__this, /*hidden argument*/NULL);
		XmlTokenInfo_t2508 * L_21 = (__this->___currentAttributeValueToken_6);
		StringBuilder_t619 * L_22 = (__this->___valueBuffer_27);
		NullCheck(L_22);
		int32_t L_23 = StringBuilder_get_Length_m6646(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___ValueBufferStart_10 = L_23;
		XmlTokenInfo_t2508 * L_24 = (__this->___currentAttributeValueToken_6);
		int32_t L_25 = (__this->___line_34);
		NullCheck(L_24);
		L_24->___LineNumber_8 = L_25;
		XmlTokenInfo_t2508 * L_26 = (__this->___currentAttributeValueToken_6);
		int32_t L_27 = (__this->___column_35);
		NullCheck(L_26);
		L_26->___LinePosition_9 = L_27;
		V_1 = 0;
		V_2 = 1;
	}

IL_00f7:
	{
		int32_t L_28 = V_4;
		V_10 = L_28;
		int32_t L_29 = V_10;
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0199;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0199;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0119;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0119;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_015e;
		}
	}

IL_0119:
	{
		int32_t L_30 = V_10;
		if ((((int32_t)L_30) == ((int32_t)(-1))))
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_31 = V_10;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)38))))
		{
			goto IL_01b2;
		}
	}
	{
		int32_t L_32 = V_10;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)60))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_02cd;
	}

IL_0138:
	{
		XmlException_t2474 * L_33 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2716, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_0144:
	{
		int32_t L_34 = ___dummyQuoteChar;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_0157;
		}
	}
	{
		XmlException_t2474 * L_35 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2717, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_0157:
	{
		V_3 = 0;
		goto IL_031d;
	}

IL_015e:
	{
		bool L_36 = (__this->___normalization_47);
		if (L_36)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_02cd;
	}

IL_016e:
	{
		int32_t L_37 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0180;
		}
	}
	{
		goto IL_031f;
	}

IL_0180:
	{
		bool L_38 = (__this->___normalization_47);
		if (L_38)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_02cd;
	}

IL_0190:
	{
		V_4 = ((int32_t)32);
		goto IL_02cd;
	}

IL_0199:
	{
		bool L_39 = (__this->___normalization_47);
		if (L_39)
		{
			goto IL_01a9;
		}
	}
	{
		goto IL_02cd;
	}

IL_01a9:
	{
		V_4 = ((int32_t)32);
		goto IL_02cd;
	}

IL_01b2:
	{
		int32_t L_40 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_01dc;
		}
	}
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)35), /*hidden argument*/NULL);
		int32_t L_41 = XmlTextReader_ReadCharacterReference_m11275(__this, /*hidden argument*/NULL);
		V_4 = L_41;
		int32_t L_42 = V_4;
		XmlTextReader_AppendValueChar_m11269(__this, L_42, /*hidden argument*/NULL);
		goto IL_031d;
	}

IL_01dc:
	{
		String_t* L_43 = XmlTextReader_ReadName_m11300(__this, /*hidden argument*/NULL);
		V_5 = L_43;
		XmlTextReader_Expect_m11302(__this, ((int32_t)59), /*hidden argument*/NULL);
		String_t* L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		int32_t L_45 = XmlChar_GetPredefinedEntity_m10691(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_6 = L_45;
		int32_t L_46 = V_6;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_02c0;
		}
	}
	{
		String_t* L_47 = V_5;
		XmlTextReader_CheckAttributeEntityReferenceWFC_m11282(__this, L_47, /*hidden argument*/NULL);
		int32_t L_48 = (__this->___entityHandling_51);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0262;
		}
	}
	{
		DTDObjectModel_t2416 * L_49 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		String_t* L_50 = V_5;
		NullCheck(L_49);
		String_t* L_51 = DTDObjectModel_GenerateEntityAttributeText_m10468(L_49, L_50, /*hidden argument*/NULL);
		V_7 = L_51;
		String_t* L_52 = V_7;
		NullCheck(L_52);
		Object_t* L_53 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, IEnumerable_1_t2558_il2cpp_TypeInfo_var, L_52);
		V_9 = L_53;
	}

IL_0229:
	try
	{ // begin try (depth: 1)
		{
			goto IL_023f;
		}

IL_022e:
		{
			Object_t* L_54 = V_9;
			NullCheck(L_54);
			uint16_t L_55 = (uint16_t)InterfaceFuncInvoker0< uint16_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, IEnumerator_1_t2559_il2cpp_TypeInfo_var, L_54);
			V_8 = L_55;
			uint16_t L_56 = V_8;
			XmlTextReader_AppendValueChar_m11269(__this, L_56, /*hidden argument*/NULL);
		}

IL_023f:
		{
			Object_t* L_57 = V_9;
			NullCheck(L_57);
			bool L_58 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_57);
			if (L_58)
			{
				goto IL_022e;
			}
		}

IL_024b:
		{
			IL2CPP_LEAVE(0x25D, FINALLY_0250);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0250;
	}

FINALLY_0250:
	{ // begin finally (depth: 1)
		{
			Object_t* L_59 = V_9;
			if (L_59)
			{
				goto IL_0255;
			}
		}

IL_0254:
		{
			IL2CPP_END_FINALLY(592)
		}

IL_0255:
		{
			Object_t* L_60 = V_9;
			NullCheck(L_60);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, L_60);
			IL2CPP_END_FINALLY(592)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(592)
	{
		IL2CPP_JUMP_TBL(0x25D, IL_025d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_025d:
	{
		goto IL_02bb;
	}

IL_0262:
	{
		XmlTokenInfo_t2508 * L_61 = (__this->___currentAttributeValueToken_6);
		StringBuilder_t619 * L_62 = (__this->___valueBuffer_27);
		NullCheck(L_62);
		int32_t L_63 = StringBuilder_get_Length_m6646(L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		L_61->___ValueBufferEnd_11 = L_63;
		XmlTokenInfo_t2508 * L_64 = (__this->___currentAttributeValueToken_6);
		NullCheck(L_64);
		L_64->___NodeType_12 = 3;
		bool L_65 = V_2;
		if (L_65)
		{
			goto IL_0290;
		}
	}
	{
		XmlTextReader_IncrementAttributeValueToken_m11280(__this, /*hidden argument*/NULL);
	}

IL_0290:
	{
		XmlTokenInfo_t2508 * L_66 = (__this->___currentAttributeValueToken_6);
		String_t* L_67 = V_5;
		NullCheck(L_66);
		L_66->___Name_2 = L_67;
		XmlTokenInfo_t2508 * L_68 = (__this->___currentAttributeValueToken_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_69 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_68);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::set_Value(System.String) */, L_68, L_69);
		XmlTokenInfo_t2508 * L_70 = (__this->___currentAttributeValueToken_6);
		NullCheck(L_70);
		L_70->___NodeType_12 = 5;
		V_1 = 1;
	}

IL_02bb:
	{
		goto IL_02c8;
	}

IL_02c0:
	{
		int32_t L_71 = V_6;
		XmlTextReader_AppendValueChar_m11269(__this, L_71, /*hidden argument*/NULL);
	}

IL_02c8:
	{
		goto IL_031d;
	}

IL_02cd:
	{
		bool L_72 = XmlTextReader_get_CharacterChecking_m11204(__this, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_02f0;
		}
	}
	{
		int32_t L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_74 = XmlChar_IsInvalid_m10684(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_02f0;
		}
	}
	{
		XmlException_t2474 * L_75 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2718, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_75);
	}

IL_02f0:
	{
		int32_t L_76 = V_4;
		if ((((int32_t)L_76) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_0310;
		}
	}
	{
		StringBuilder_t619 * L_77 = (__this->___valueBuffer_27);
		int32_t L_78 = V_4;
		NullCheck(L_77);
		StringBuilder_Append_m5401(L_77, (((uint16_t)L_78)), /*hidden argument*/NULL);
		goto IL_0318;
	}

IL_0310:
	{
		int32_t L_79 = V_4;
		XmlTextReader_AppendSurrogatePairValueChar_m11270(__this, L_79, /*hidden argument*/NULL);
	}

IL_0318:
	{
		goto IL_031d;
	}

IL_031d:
	{
		V_2 = 0;
	}

IL_031f:
	{
		bool L_80 = V_3;
		if (L_80)
		{
			goto IL_009a;
		}
	}

IL_0325:
	{
		bool L_81 = V_1;
		if (L_81)
		{
			goto IL_034d;
		}
	}
	{
		XmlTokenInfo_t2508 * L_82 = (__this->___currentAttributeValueToken_6);
		StringBuilder_t619 * L_83 = (__this->___valueBuffer_27);
		NullCheck(L_83);
		int32_t L_84 = StringBuilder_get_Length_m6646(L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		L_82->___ValueBufferEnd_11 = L_84;
		XmlTokenInfo_t2508 * L_85 = (__this->___currentAttributeValueToken_6);
		NullCheck(L_85);
		L_85->___NodeType_12 = 3;
	}

IL_034d:
	{
		XmlAttributeTokenInfo_t2509 * L_86 = (__this->___currentAttributeToken_5);
		int32_t L_87 = (__this->___currentAttributeValue_10);
		NullCheck(L_86);
		L_86->___ValueTokenEndIndex_14 = L_87;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::CheckAttributeEntityReferenceWFC(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_CheckAttributeEntityReferenceWFC_m11282 (XmlTextReader_t2507 * __this, String_t* ___entName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	DTDEntityDeclaration_t2436 * V_0 = {0};
	DTDEntityDeclaration_t2436 * G_B3_0 = {0};
	{
		DTDObjectModel_t2416 * L_0 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((DTDEntityDeclaration_t2436 *)(NULL));
		goto IL_0022;
	}

IL_0011:
	{
		DTDObjectModel_t2416 * L_1 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DTDEntityDeclarationCollection_t2421 * L_2 = DTDObjectModel_get_EntityDecls_m10464(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___entName;
		NullCheck(L_2);
		DTDEntityDeclaration_t2436 * L_4 = DTDEntityDeclarationCollection_get_Item_m10490(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		DTDEntityDeclaration_t2436 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_6 = (__this->___entityHandling_51);
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		DTDObjectModel_t2416 * L_7 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		XmlResolver_t2315 * L_8 = (__this->___resolver_46);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		DTDEntityDeclaration_t2436 * L_9 = V_0;
		if (L_9)
		{
			goto IL_0063;
		}
	}

IL_0051:
	{
		String_t* L_10 = ___entName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2719, L_10, /*hidden argument*/NULL);
		XmlException_t2474 * L_12 = XmlTextReader_NotWFError_m11249(__this, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0063:
	{
		return;
	}

IL_0064:
	{
		DTDEntityDeclaration_t2436 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = DTDEntityDeclaration_get_HasExternalReference_m10555(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		XmlException_t2474 * L_15 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2720, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_007b:
	{
		bool L_16 = (__this->___isStandalone_24);
		if (!L_16)
		{
			goto IL_009d;
		}
	}
	{
		DTDEntityDeclaration_t2436 * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = DTDNode_get_IsInternalSubset_m10508(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_009d;
		}
	}
	{
		XmlException_t2474 * L_19 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2721, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_009d:
	{
		DTDEntityDeclaration_t2436 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = DTDEntityDeclaration_get_EntityValue_m10556(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = String_IndexOf_m3239(L_21, ((int32_t)60), /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		XmlException_t2474 * L_23 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00bc:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadProcessingInstruction()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ReadProcessingInstruction_m11283 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		String_t* L_0 = XmlTextReader_ReadName_m11300(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m3147(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_4 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m11586(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		XmlException_t2474 * L_7 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2512, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003d:
	{
		bool L_8 = XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)63))))
		{
			goto IL_0061;
		}
	}
	{
		XmlException_t2474 * L_10 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2513, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0061:
	{
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		goto IL_00be;
	}

IL_006c:
	{
		int32_t L_11 = V_1;
		XmlTextReader_Advance_m11261(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_13 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0095;
		}
	}
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)62), /*hidden argument*/NULL);
		goto IL_00cc;
	}

IL_0095:
	{
		bool L_14 = XmlTextReader_get_CharacterChecking_m11204(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_16 = XmlChar_IsInvalid_m10684(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b7;
		}
	}
	{
		XmlException_t2474 * L_17 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2718, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00b7:
	{
		int32_t L_18 = V_1;
		XmlTextReader_AppendValueChar_m11269(__this, L_18, /*hidden argument*/NULL);
	}

IL_00be:
	{
		int32_t L_19 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		V_1 = L_20;
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}

IL_00cc:
	{
		String_t* L_21 = V_0;
		bool L_22 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e7;
		}
	}
	{
		XmlTextReader_VerifyXmlDeclaration_m11284(__this, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00e7:
	{
		int32_t L_23 = (__this->___currentState_40);
		if (L_23)
		{
			goto IL_00fa;
		}
	}
	{
		__this->___currentState_40 = ((int32_t)17);
	}

IL_00fa:
	{
		String_t* L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_26 = V_0;
		XmlTextReader_SetProperties_m11255(__this, 7, L_24, L_25, L_26, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
	}

IL_010b:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::VerifyXmlDeclaration()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* XmlStreamReader_t2477_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_VerifyXmlDeclaration_m11284 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		XmlStreamReader_t2477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4748);
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	{
		bool L_0 = (__this->___allowMultipleRoot_23);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = (__this->___currentState_40);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlException_t2474 * L_2 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2723, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		__this->___currentState_40 = ((int32_t)17);
		String_t* L_3 = XmlTextReader_CreateValueString_m11271(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlTextReader_ClearAttributes_m11257(__this, /*hidden argument*/NULL);
		V_1 = 0;
		V_2 = (String_t*)NULL;
		V_3 = (String_t*)NULL;
		String_t* L_4 = V_0;
		XmlTextReader_ParseAttributeFromString_m11286(__this, L_4, (&V_1), (&V_4), (&V_5), /*hidden argument*/NULL);
		String_t* L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m3147(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral1822, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_7 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Inequality_m3147(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral202, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0078;
		}
	}

IL_006c:
	{
		XmlException_t2474 * L_9 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2724, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_10;
		String_t* L_11 = V_0;
		bool L_12 = XmlTextReader_SkipWhitespaceInString_m11285(__this, L_11, (&V_1), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_13 = V_1;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m2782(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_16 = V_0;
		XmlTextReader_ParseAttributeFromString_m11286(__this, L_16, (&V_1), (&V_4), (&V_5), /*hidden argument*/NULL);
	}

IL_00a6:
	{
		String_t* L_17 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_op_Equality_m2344(NULL /*static, unused*/, L_17, (String_t*) &_stringLiteral2517, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0140;
		}
	}
	{
		String_t* L_19 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_20 = XmlChar_IsValidIANAEncoding_m10690(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00cf;
		}
	}
	{
		XmlException_t2474 * L_21 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2725, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00cf:
	{
		TextReader_t2480 * L_22 = (__this->___reader_28);
		if (!((XmlStreamReader_t2477 *)IsInst(L_22, XmlStreamReader_t2477_il2cpp_TypeInfo_var)))
		{
			goto IL_00ff;
		}
	}
	{
		XmlParserContext_t2497 * L_23 = (__this->___parserContext_12);
		TextReader_t2480 * L_24 = (__this->___reader_28);
		NullCheck(((XmlStreamReader_t2477 *)Castclass(L_24, XmlStreamReader_t2477_il2cpp_TypeInfo_var)));
		Encoding_t602 * L_25 = NonBlockingStreamReader_get_Encoding_m10926(((XmlStreamReader_t2477 *)Castclass(L_24, XmlStreamReader_t2477_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_23);
		XmlParserContext_set_Encoding_m11072(L_23, L_25, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_00ff:
	{
		XmlParserContext_t2497 * L_26 = (__this->___parserContext_12);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_27 = Encoding_get_Unicode_m2673(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		XmlParserContext_set_Encoding_m11072(L_26, L_27, /*hidden argument*/NULL);
	}

IL_010f:
	{
		String_t* L_28 = V_5;
		V_2 = L_28;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_29;
		String_t* L_30 = V_0;
		bool L_31 = XmlTextReader_SkipWhitespaceInString_m11285(__this, L_30, (&V_1), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_32 = V_1;
		String_t* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m2782(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_32) >= ((int32_t)L_34)))
		{
			goto IL_0140;
		}
	}
	{
		String_t* L_35 = V_0;
		XmlTextReader_ParseAttributeFromString_m11286(__this, L_35, (&V_1), (&V_4), (&V_5), /*hidden argument*/NULL);
	}

IL_0140:
	{
		String_t* L_36 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m2344(NULL /*static, unused*/, L_36, (String_t*) &_stringLiteral2596, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_01a3;
		}
	}
	{
		String_t* L_38 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_39 = String_op_Equality_m2344(NULL /*static, unused*/, L_38, (String_t*) &_stringLiteral2210, /*hidden argument*/NULL);
		__this->___isStandalone_24 = L_39;
		String_t* L_40 = V_5;
		bool L_41 = String_op_Inequality_m3147(NULL /*static, unused*/, L_40, (String_t*) &_stringLiteral2210, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_42 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Inequality_m3147(NULL /*static, unused*/, L_42, (String_t*) &_stringLiteral951, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0191;
		}
	}
	{
		XmlException_t2474 * L_44 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2726, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_0191:
	{
		String_t* L_45 = V_5;
		V_3 = L_45;
		String_t* L_46 = V_0;
		XmlTextReader_SkipWhitespaceInString_m11285(__this, L_46, (&V_1), /*hidden argument*/NULL);
		goto IL_01c2;
	}

IL_01a3:
	{
		String_t* L_47 = V_4;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m2782(L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01c2;
		}
	}
	{
		String_t* L_49 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2727, L_49, /*hidden argument*/NULL);
		XmlException_t2474 * L_51 = XmlTextReader_NotWFError_m11249(__this, L_50, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_51);
	}

IL_01c2:
	{
		int32_t L_52 = V_1;
		String_t* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = String_get_Length_m2782(L_53, /*hidden argument*/NULL);
		if ((((int32_t)L_52) >= ((int32_t)L_54)))
		{
			goto IL_01da;
		}
	}
	{
		XmlException_t2474 * L_55 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2728, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_55);
	}

IL_01da:
	{
		XmlTextReader_AddAttributeWithValue_m11278(__this, (String_t*) &_stringLiteral1822, (String_t*) &_stringLiteral202, /*hidden argument*/NULL);
		String_t* L_56 = V_2;
		if (!L_56)
		{
			goto IL_01fc;
		}
	}
	{
		String_t* L_57 = V_2;
		XmlTextReader_AddAttributeWithValue_m11278(__this, (String_t*) &_stringLiteral2517, L_57, /*hidden argument*/NULL);
	}

IL_01fc:
	{
		String_t* L_58 = V_3;
		if (!L_58)
		{
			goto IL_020e;
		}
	}
	{
		String_t* L_59 = V_3;
		XmlTextReader_AddAttributeWithValue_m11278(__this, (String_t*) &_stringLiteral2596, L_59, /*hidden argument*/NULL);
	}

IL_020e:
	{
		int32_t L_60 = (-1);
		V_6 = L_60;
		__this->___currentAttributeValue_10 = L_60;
		int32_t L_61 = V_6;
		__this->___currentAttribute_9 = L_61;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_63 = V_0;
		XmlTextReader_SetProperties_m11255(__this, ((int32_t)17), (String_t*) &_stringLiteral2511, L_62, (String_t*) &_stringLiteral2511, 0, L_63, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespaceInString(System.String,System.Int32&)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" bool XmlTextReader_SkipWhitespaceInString_m11285 (XmlTextReader_t2507 * __this, String_t* ___text, int32_t* ___idx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___idx;
		V_0 = (*((int32_t*)L_0));
		goto IL_000e;
	}

IL_0008:
	{
		int32_t* L_1 = ___idx;
		int32_t* L_2 = ___idx;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_2))+(int32_t)1));
	}

IL_000e:
	{
		int32_t* L_3 = ___idx;
		String_t* L_4 = ___text;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2782(L_4, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_3))) >= ((int32_t)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_6 = ___text;
		int32_t* L_7 = ___idx;
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m2787(L_6, (*((int32_t*)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_9 = XmlChar_IsWhitespace_m10680(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0008;
		}
	}

IL_002d:
	{
		int32_t* L_10 = ___idx;
		int32_t L_11 = V_0;
		return ((((int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))-(int32_t)L_11))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Xml2.XmlTextReader::ParseAttributeFromString(System.String,System.Int32&,System.String&,System.String&)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ParseAttributeFromString_m11286 (XmlTextReader_t2507 * __this, String_t* ___src, int32_t* ___idx, String_t** ___name, String_t** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	{
		goto IL_000b;
	}

IL_0005:
	{
		int32_t* L_0 = ___idx;
		int32_t* L_1 = ___idx;
		*((int32_t*)(L_0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1))+(int32_t)1));
	}

IL_000b:
	{
		int32_t* L_2 = ___idx;
		String_t* L_3 = ___src;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m2782(L_3, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_2))) >= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = ___src;
		int32_t* L_6 = ___idx;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m2787(L_5, (*((int32_t*)L_6)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_8 = XmlChar_IsWhitespace_m10680(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0005;
		}
	}

IL_002a:
	{
		int32_t* L_9 = ___idx;
		V_0 = (*((int32_t*)L_9));
		goto IL_0038;
	}

IL_0032:
	{
		int32_t* L_10 = ___idx;
		int32_t* L_11 = ___idx;
		*((int32_t*)(L_10)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_11))+(int32_t)1));
	}

IL_0038:
	{
		int32_t* L_12 = ___idx;
		String_t* L_13 = ___src;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m2782(L_13, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_12))) >= ((int32_t)L_14)))
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_15 = ___src;
		int32_t* L_16 = ___idx;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m2787(L_15, (*((int32_t*)L_16)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_18 = XmlChar_IsNameChar_m10687(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0032;
		}
	}

IL_0057:
	{
		String_t** L_19 = ___name;
		String_t* L_20 = ___src;
		int32_t L_21 = V_0;
		int32_t* L_22 = ___idx;
		int32_t L_23 = V_0;
		NullCheck(L_20);
		String_t* L_24 = String_Substring_m2785(L_20, L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))-(int32_t)L_23)), /*hidden argument*/NULL);
		*((Object_t **)(L_19)) = (Object_t *)L_24;
		goto IL_006f;
	}

IL_0069:
	{
		int32_t* L_25 = ___idx;
		int32_t* L_26 = ___idx;
		*((int32_t*)(L_25)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_26))+(int32_t)1));
	}

IL_006f:
	{
		int32_t* L_27 = ___idx;
		String_t* L_28 = ___src;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m2782(L_28, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_27))) >= ((int32_t)L_29)))
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_30 = ___src;
		int32_t* L_31 = ___idx;
		NullCheck(L_30);
		uint16_t L_32 = String_get_Chars_m2787(L_30, (*((int32_t*)L_31)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_33 = XmlChar_IsWhitespace_m10680(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0069;
		}
	}

IL_008e:
	{
		int32_t* L_34 = ___idx;
		String_t* L_35 = ___src;
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_m2782(L_35, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_34))) == ((int32_t)L_36)))
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_37 = ___src;
		int32_t* L_38 = ___idx;
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m2787(L_37, (*((int32_t*)L_38)), /*hidden argument*/NULL);
		if ((((int32_t)L_39) == ((int32_t)((int32_t)61))))
		{
			goto IL_00bd;
		}
	}

IL_00aa:
	{
		String_t** L_40 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2729, (*((String_t**)L_40)), /*hidden argument*/NULL);
		XmlException_t2474 * L_42 = XmlTextReader_NotWFError_m11249(__this, L_41, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_00bd:
	{
		int32_t* L_43 = ___idx;
		int32_t* L_44 = ___idx;
		*((int32_t*)(L_43)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_44))+(int32_t)1));
		goto IL_00ce;
	}

IL_00c8:
	{
		int32_t* L_45 = ___idx;
		int32_t* L_46 = ___idx;
		*((int32_t*)(L_45)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)1));
	}

IL_00ce:
	{
		int32_t* L_47 = ___idx;
		String_t* L_48 = ___src;
		NullCheck(L_48);
		int32_t L_49 = String_get_Length_m2782(L_48, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_47))) >= ((int32_t)L_49)))
		{
			goto IL_00ed;
		}
	}
	{
		String_t* L_50 = ___src;
		int32_t* L_51 = ___idx;
		NullCheck(L_50);
		uint16_t L_52 = String_get_Chars_m2787(L_50, (*((int32_t*)L_51)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_53 = XmlChar_IsWhitespace_m10680(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_00c8;
		}
	}

IL_00ed:
	{
		int32_t* L_54 = ___idx;
		String_t* L_55 = ___src;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m2782(L_55, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_54))) == ((int32_t)L_56)))
		{
			goto IL_0118;
		}
	}
	{
		String_t* L_57 = ___src;
		int32_t* L_58 = ___idx;
		NullCheck(L_57);
		uint16_t L_59 = String_get_Chars_m2787(L_57, (*((int32_t*)L_58)), /*hidden argument*/NULL);
		if ((((int32_t)L_59) == ((int32_t)((int32_t)34))))
		{
			goto IL_0124;
		}
	}
	{
		String_t* L_60 = ___src;
		int32_t* L_61 = ___idx;
		NullCheck(L_60);
		uint16_t L_62 = String_get_Chars_m2787(L_60, (*((int32_t*)L_61)), /*hidden argument*/NULL);
		if ((((int32_t)L_62) == ((int32_t)((int32_t)39))))
		{
			goto IL_0124;
		}
	}

IL_0118:
	{
		XmlException_t2474 * L_63 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2730, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_63);
	}

IL_0124:
	{
		String_t* L_64 = ___src;
		int32_t* L_65 = ___idx;
		NullCheck(L_64);
		uint16_t L_66 = String_get_Chars_m2787(L_64, (*((int32_t*)L_65)), /*hidden argument*/NULL);
		V_1 = L_66;
		int32_t* L_67 = ___idx;
		int32_t* L_68 = ___idx;
		*((int32_t*)(L_67)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)1));
		int32_t* L_69 = ___idx;
		V_0 = (*((int32_t*)L_69));
		goto IL_0141;
	}

IL_013b:
	{
		int32_t* L_70 = ___idx;
		int32_t* L_71 = ___idx;
		*((int32_t*)(L_70)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_71))+(int32_t)1));
	}

IL_0141:
	{
		int32_t* L_72 = ___idx;
		String_t* L_73 = ___src;
		NullCheck(L_73);
		int32_t L_74 = String_get_Length_m2782(L_73, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_72))) >= ((int32_t)L_74)))
		{
			goto IL_015c;
		}
	}
	{
		String_t* L_75 = ___src;
		int32_t* L_76 = ___idx;
		NullCheck(L_75);
		uint16_t L_77 = String_get_Chars_m2787(L_75, (*((int32_t*)L_76)), /*hidden argument*/NULL);
		uint16_t L_78 = V_1;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_013b;
		}
	}

IL_015c:
	{
		int32_t* L_79 = ___idx;
		int32_t* L_80 = ___idx;
		*((int32_t*)(L_79)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_80))+(int32_t)1));
		String_t** L_81 = ___value;
		String_t* L_82 = ___src;
		int32_t L_83 = V_0;
		int32_t* L_84 = ___idx;
		int32_t L_85 = V_0;
		NullCheck(L_82);
		String_t* L_86 = String_Substring_m2785(L_82, L_83, ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)L_84))-(int32_t)L_85))-(int32_t)1)), /*hidden argument*/NULL);
		*((Object_t **)(L_81)) = (Object_t *)L_86;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_SkipTextDeclaration_m11287 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t646* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)60))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		int32_t L_1 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)63))))
		{
			goto IL_002a;
		}
	}
	{
		__this->___peekCharsIndex_30 = 0;
		return;
	}

IL_002a:
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0036:
	{
		int32_t L_2 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_005a;
	}

IL_0047:
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_3 = (__this->___peekCharsIndex_30);
		if ((((int32_t)L_3) < ((int32_t)6)))
		{
			goto IL_0036;
		}
	}

IL_005a:
	{
		CharU5BU5D_t646* L_4 = (__this->___peekChars_29);
		String_t* L_5 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_5 = String_CreateString_m11524(L_5, L_4, 2, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m3147(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral2731, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00b0;
		}
	}
	{
		CharU5BU5D_t646* L_7 = (__this->___peekChars_29);
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_8 = String_CreateString_m11524(L_8, L_7, 2, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_9 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_10 = String_ToLower_m11586(L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m2344(NULL /*static, unused*/, L_10, (String_t*) &_stringLiteral2731, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		XmlException_t2474 * L_12 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2732, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_00a8:
	{
		__this->___peekCharsIndex_30 = 0;
		return;
	}

IL_00b0:
	{
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		int32_t L_13 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)118)))))
		{
			goto IL_0199;
		}
	}
	{
		XmlTextReader_Expect_m11303(__this, (String_t*) &_stringLiteral1822, /*hidden argument*/NULL);
		XmlTextReader_ExpectAfterWhitespace_m11304(__this, ((int32_t)61), /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		int32_t L_14 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_0 = L_14;
		V_1 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, 3));
		V_2 = 0;
		int32_t L_15 = V_0;
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)34))))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)39))))
		{
			goto IL_0108;
		}
	}
	{
		goto IL_018d;
	}

IL_0108:
	{
		goto IL_016e;
	}

IL_010d:
	{
		int32_t L_18 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0125;
		}
	}
	{
		XmlException_t2474 * L_19 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2515, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0125:
	{
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)3))))
		{
			goto IL_0138;
		}
	}
	{
		XmlException_t2474 * L_21 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2516, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0138:
	{
		CharU5BU5D_t646* L_22 = V_1;
		int32_t L_23 = V_2;
		int32_t L_24 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_22, L_23)) = (uint16_t)(((uint16_t)L_24));
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_016e;
		}
	}
	{
		CharU5BU5D_t646* L_27 = V_1;
		String_t* L_28 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_28 = String_CreateString_m11523(L_28, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Inequality_m3147(NULL /*static, unused*/, L_28, (String_t*) &_stringLiteral202, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_016e;
		}
	}
	{
		XmlException_t2474 * L_30 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2516, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_016e:
	{
		int32_t L_31 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_010d;
		}
	}
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		goto IL_0199;
	}

IL_018d:
	{
		XmlException_t2474 * L_33 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2515, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_0199:
	{
		int32_t L_34 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_022e;
		}
	}
	{
		XmlTextReader_Expect_m11303(__this, (String_t*) &_stringLiteral2517, /*hidden argument*/NULL);
		XmlTextReader_ExpectAfterWhitespace_m11304(__this, ((int32_t)61), /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		int32_t L_35 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_3 = L_35;
		int32_t L_36 = V_3;
		V_4 = L_36;
		int32_t L_37 = V_4;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)34))))
		{
			goto IL_01e1;
		}
	}
	{
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)39))))
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_021d;
	}

IL_01e1:
	{
		goto IL_01fe;
	}

IL_01e6:
	{
		int32_t L_39 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)(-1)))))
		{
			goto IL_01fe;
		}
	}
	{
		XmlException_t2474 * L_40 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2518, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_40);
	}

IL_01fe:
	{
		int32_t L_41 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		int32_t L_42 = V_3;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_01e6;
		}
	}
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		goto IL_0229;
	}

IL_021d:
	{
		XmlException_t2474 * L_43 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2518, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_43);
	}

IL_0229:
	{
		goto IL_0245;
	}

IL_022e:
	{
		int32_t L_44 = XmlTextReader_get_Conformance_m11253(__this, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0245;
		}
	}
	{
		XmlException_t2474 * L_45 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2519, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_45);
	}

IL_0245:
	{
		XmlTextReader_Expect_m11303(__this, (String_t*) &_stringLiteral2520, /*hidden argument*/NULL);
		int32_t L_46 = (__this->___peekCharsIndex_30);
		__this->___curNodePeekIndex_32 = L_46;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadDeclaration()
extern "C" void XmlTextReader_ReadDeclaration_m11288 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)45))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)91))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_006f;
	}

IL_0026:
	{
		XmlTextReader_Expect_m11303(__this, (String_t*) &_stringLiteral2733, /*hidden argument*/NULL);
		XmlTextReader_ReadComment_m11289(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_003c:
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		XmlTextReader_Expect_m11303(__this, (String_t*) &_stringLiteral2734, /*hidden argument*/NULL);
		XmlTextReader_ReadCDATA_m11290(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_0059:
	{
		XmlTextReader_Expect_m11303(__this, (String_t*) &_stringLiteral2735, /*hidden argument*/NULL);
		XmlTextReader_ReadDoctypeDecl_m11291(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_006f:
	{
		XmlException_t2474 * L_5 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2736, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_007b:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadComment()
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ReadComment_m11289 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___currentState_40);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->___currentState_40 = ((int32_t)17);
	}

IL_0013:
	{
		__this->___preserveCurrentTag_33 = 0;
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		goto IL_008d;
	}

IL_0025:
	{
		int32_t L_1 = V_0;
		XmlTextReader_Advance_m11261(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_3 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_006f;
		}
	}
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)45), /*hidden argument*/NULL);
		int32_t L_4 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)62))))
		{
			goto IL_0062;
		}
	}
	{
		XmlException_t2474 * L_5 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2509, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0062:
	{
		XmlTextReader_Advance_m11261(__this, ((int32_t)62), /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_006f:
	{
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_7 = XmlChar_IsInvalid_m10684(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		XmlException_t2474 * L_8 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2510, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0086:
	{
		int32_t L_9 = V_0;
		XmlTextReader_AppendValueChar_m11269(__this, L_9, /*hidden argument*/NULL);
	}

IL_008d:
	{
		int32_t L_10 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		V_0 = L_11;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0025;
		}
	}

IL_009b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m11255(__this, 8, L_12, L_13, L_14, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadCDATA()
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ReadCDATA_m11290 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___currentState_40);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		XmlException_t2474 * L_1 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		__this->___preserveCurrentTag_33 = 0;
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		V_0 = 0;
		V_1 = 0;
		goto IL_00ea;
	}

IL_002e:
	{
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_3 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_003b:
	{
		V_0 = 0;
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_5 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_6 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0072;
		}
	}
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_0072:
	{
		V_0 = 1;
	}

IL_0074:
	{
		bool L_8 = (__this->___normalization_47);
		if (!L_8)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_10 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)10))))
		{
			goto IL_009e;
		}
	}
	{
		XmlTextReader_AppendValueChar_m11269(__this, ((int32_t)10), /*hidden argument*/NULL);
	}

IL_009e:
	{
		goto IL_00ea;
	}

IL_00a3:
	{
		bool L_12 = XmlTextReader_get_CharacterChecking_m11204(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_14 = XmlChar_IsInvalid_m10684(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c5;
		}
	}
	{
		XmlException_t2474 * L_15 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2718, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_00c5:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_00e3;
		}
	}
	{
		StringBuilder_t619 * L_17 = (__this->___valueBuffer_27);
		int32_t L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m5401(L_17, (((uint16_t)L_18)), /*hidden argument*/NULL);
		goto IL_00ea;
	}

IL_00e3:
	{
		int32_t L_19 = V_1;
		XmlTextReader_AppendSurrogatePairValueChar_m11270(__this, L_19, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		int32_t L_20 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}

IL_00f6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_22 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m11255(__this, 4, L_21, L_22, L_23, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadDoctypeDecl()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ReadDoctypeDecl_m11291 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = {0};
	int32_t V_6 = 0;
	{
		bool L_0 = (__this->___prohibitDtd_49);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlException_t2474 * L_1 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2738, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		int32_t L_2 = (__this->___currentState_40);
		V_5 = L_2;
		int32_t L_3 = V_5;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = V_5;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)10))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = V_5;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)15))))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_004a;
	}

IL_003e:
	{
		XmlException_t2474 * L_6 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2739, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_004a:
	{
		__this->___currentState_40 = ((int32_t)10);
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		V_3 = 0;
		V_4 = 0;
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		String_t* L_7 = XmlTextReader_ReadName_m11300(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		int32_t L_8 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_6 = L_8;
		int32_t L_9 = V_6;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_00a6;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_00d1;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_00d1;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 3)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_00d1;
	}

IL_0099:
	{
		String_t* L_10 = XmlTextReader_ReadSystemLiteral_m11298(__this, 1, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_00d1;
	}

IL_00a6:
	{
		String_t* L_11 = XmlTextReader_ReadPubidLiteral_m11299(__this, /*hidden argument*/NULL);
		V_1 = L_11;
		bool L_12 = XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00c4;
		}
	}
	{
		XmlException_t2474 * L_13 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2498, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_00c4:
	{
		String_t* L_14 = XmlTextReader_ReadSystemLiteral_m11298(__this, 0, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_00d1;
	}

IL_00d1:
	{
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		int32_t L_15 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0118;
		}
	}
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(48 /* System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber() */, __this);
		V_3 = L_16;
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(49 /* System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition() */, __this);
		V_4 = L_17;
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		XmlTextReader_ReadInternalSubset_m11297(__this, /*hidden argument*/NULL);
		XmlParserContext_t2497 * L_18 = (__this->___parserContext_12);
		String_t* L_19 = XmlTextReader_CreateValueString_m11271(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		XmlParserContext_set_InternalSubset_m11074(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0118:
	{
		XmlTextReader_ExpectAfterWhitespace_m11304(__this, ((int32_t)62), /*hidden argument*/NULL);
		String_t* L_20 = V_0;
		String_t* L_21 = V_1;
		String_t* L_22 = V_2;
		XmlParserContext_t2497 * L_23 = (__this->___parserContext_12);
		NullCheck(L_23);
		String_t* L_24 = XmlParserContext_get_InternalSubset_m11073(L_23, /*hidden argument*/NULL);
		int32_t L_25 = V_3;
		int32_t L_26 = V_4;
		XmlTextReader_GenerateDTDObjectModel_m11293(__this, L_20, L_21, L_22, L_24, L_25, L_26, /*hidden argument*/NULL);
		String_t* L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_29 = V_0;
		XmlParserContext_t2497 * L_30 = (__this->___parserContext_12);
		NullCheck(L_30);
		String_t* L_31 = XmlParserContext_get_InternalSubset_m11073(L_30, /*hidden argument*/NULL);
		XmlTextReader_SetProperties_m11255(__this, ((int32_t)10), L_27, L_28, L_29, 0, L_31, 1, /*hidden argument*/NULL);
		String_t* L_32 = V_1;
		if (!L_32)
		{
			goto IL_0166;
		}
	}
	{
		String_t* L_33 = V_1;
		XmlTextReader_AddAttributeWithValue_m11278(__this, (String_t*) &_stringLiteral2502, L_33, /*hidden argument*/NULL);
	}

IL_0166:
	{
		String_t* L_34 = V_2;
		if (!L_34)
		{
			goto IL_0178;
		}
	}
	{
		String_t* L_35 = V_2;
		XmlTextReader_AddAttributeWithValue_m11278(__this, (String_t*) &_stringLiteral2499, L_35, /*hidden argument*/NULL);
	}

IL_0178:
	{
		int32_t L_36 = (-1);
		V_6 = L_36;
		__this->___currentAttributeValue_10 = L_36;
		int32_t L_37 = V_6;
		__this->___currentAttribute_9 = L_37;
		return;
	}
}
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
extern "C" DTDObjectModel_t2416 * XmlTextReader_GenerateDTDObjectModel_m11292 (XmlTextReader_t2507 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___publicId;
		String_t* L_2 = ___systemId;
		String_t* L_3 = ___internalSubset;
		DTDObjectModel_t2416 * L_4 = XmlTextReader_GenerateDTDObjectModel_m11293(__this, L_0, L_1, L_2, L_3, 0, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String,System.Int32,System.Int32)
extern TypeInfo* DTDObjectModel_t2416_il2cpp_TypeInfo_var;
extern TypeInfo* DTDReader_t2443_il2cpp_TypeInfo_var;
extern "C" DTDObjectModel_t2416 * XmlTextReader_GenerateDTDObjectModel_m11293 (XmlTextReader_t2507 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, int32_t ___intSubsetStartLine, int32_t ___intSubsetStartColumn, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DTDObjectModel_t2416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4802);
		DTDReader_t2443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4803);
		s_Il2CppMethodIntialized = true;
	}
	DTDReader_t2443 * V_0 = {0};
	{
		XmlParserContext_t2497 * L_0 = (__this->___parserContext_12);
		XmlNameTable_t2314 * L_1 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(17 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		DTDObjectModel_t2416 * L_2 = (DTDObjectModel_t2416 *)il2cpp_codegen_object_new (DTDObjectModel_t2416_il2cpp_TypeInfo_var);
		DTDObjectModel__ctor_m10438(L_2, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlParserContext_set_Dtd_m11071(L_0, L_2, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_3 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Mono.Xml2.XmlTextReader::get_BaseURI() */, __this);
		NullCheck(L_3);
		DTDObjectModel_set_BaseURI_m10440(L_3, L_4, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_5 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___name;
		NullCheck(L_5);
		DTDObjectModel_set_Name_m10444(L_5, L_6, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_7 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		String_t* L_8 = ___publicId;
		NullCheck(L_7);
		DTDObjectModel_set_PublicId_m10447(L_7, L_8, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_9 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		String_t* L_10 = ___systemId;
		NullCheck(L_9);
		DTDObjectModel_set_SystemId_m10449(L_9, L_10, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_11 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		String_t* L_12 = ___internalSubset;
		NullCheck(L_11);
		DTDObjectModel_set_InternalSubset_m10451(L_11, L_12, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_13 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		XmlResolver_t2315 * L_14 = (__this->___resolver_46);
		NullCheck(L_13);
		DTDObjectModel_set_XmlResolver_m10460(L_13, L_14, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_15 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		bool L_16 = (__this->___isStandalone_24);
		NullCheck(L_15);
		DTDObjectModel_set_IsStandalone_m10442(L_15, L_16, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_17 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		int32_t L_18 = (__this->___line_34);
		NullCheck(L_17);
		DTDObjectModel_set_LineNumber_m10455(L_17, L_18, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_19 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___column_35);
		NullCheck(L_19);
		DTDObjectModel_set_LinePosition_m10457(L_19, L_20, /*hidden argument*/NULL);
		DTDObjectModel_t2416 * L_21 = XmlTextReader_get_DTD_m11247(__this, /*hidden argument*/NULL);
		int32_t L_22 = ___intSubsetStartLine;
		int32_t L_23 = ___intSubsetStartColumn;
		DTDReader_t2443 * L_24 = (DTDReader_t2443 *)il2cpp_codegen_object_new (DTDReader_t2443_il2cpp_TypeInfo_var);
		DTDReader__ctor_m10573(L_24, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		DTDReader_t2443 * L_25 = V_0;
		bool L_26 = (__this->___normalization_47);
		NullCheck(L_25);
		DTDReader_set_Normalization_m10576(L_25, L_26, /*hidden argument*/NULL);
		DTDReader_t2443 * L_27 = V_0;
		NullCheck(L_27);
		DTDObjectModel_t2416 * L_28 = DTDReader_GenerateDTDObjectModel_m10581(L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader::get_State()
extern "C" int32_t XmlTextReader_get_State_m11294 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	{
		DtdInputStateStack_t2512 * L_0 = (__this->___stateStack_54);
		NullCheck(L_0);
		int32_t L_1 = DtdInputStateStack_Peek_m11192(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadValueChar()
extern "C" int32_t XmlTextReader_ReadValueChar_m11295 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		XmlTextReader_AppendValueChar_m11269(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ExpectAndAppend(System.String)
extern "C" void XmlTextReader_ExpectAndAppend_m11296 (XmlTextReader_t2507 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		XmlTextReader_Expect_m11303(__this, L_0, /*hidden argument*/NULL);
		StringBuilder_t619 * L_1 = (__this->___valueBuffer_27);
		String_t* L_2 = ___s;
		NullCheck(L_1);
		StringBuilder_Append_m2790(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadInternalSubset()
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ReadInternalSubset_m11297 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 1;
		goto IL_03e5;
	}

IL_0007:
	{
		int32_t L_0 = XmlTextReader_ReadValueChar_m11295(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_027f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_0397;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_0238;
		}
	}

IL_002f:
	{
		int32_t L_2 = V_2;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)60))) == 0)
		{
			goto IL_00ce;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)60))) == 1)
		{
			goto IL_0048;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)60))) == 2)
		{
			goto IL_02c7;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)60))) == 3)
		{
			goto IL_0331;
		}
	}

IL_0048:
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)45))))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)93))))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_03e5;
	}

IL_0064:
	{
		int32_t L_6 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (((int32_t)((int32_t)L_7-(int32_t)7)) == 0)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)7)) == 1)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)7)) == 2)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		goto IL_00b1;
	}

IL_008b:
	{
		StringBuilder_t619 * L_9 = (__this->___valueBuffer_27);
		StringBuilder_t619 * L_10 = (__this->___valueBuffer_27);
		NullCheck(L_10);
		int32_t L_11 = StringBuilder_get_Length_m6646(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Remove_m7358(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), 1, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00bd;
	}

IL_00ac:
	{
		goto IL_03e5;
	}

IL_00b1:
	{
		XmlException_t2474 * L_12 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2740, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_00bd:
	{
		goto IL_03e5;
	}

IL_00c2:
	{
		XmlException_t2474 * L_13 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2740, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_00ce:
	{
		int32_t L_14 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		V_3 = L_14;
		int32_t L_15 = V_3;
		if (((int32_t)((int32_t)L_15-(int32_t)7)) == 0)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)7)) == 1)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)7)) == 2)
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_00f3;
	}

IL_00ee:
	{
		goto IL_03e5;
	}

IL_00f3:
	{
		int32_t L_16 = XmlTextReader_ReadValueChar_m11295(__this, /*hidden argument*/NULL);
		V_1 = L_16;
		int32_t L_17 = V_1;
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)33))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)63))))
		{
			goto IL_0114;
		}
	}
	{
		goto IL_021b;
	}

IL_0114:
	{
		DtdInputStateStack_t2512 * L_20 = (__this->___stateStack_54);
		NullCheck(L_20);
		DtdInputStateStack_Push_m11194(L_20, 6, /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_0125:
	{
		int32_t L_21 = XmlTextReader_ReadValueChar_m11295(__this, /*hidden argument*/NULL);
		V_5 = L_21;
		int32_t L_22 = V_5;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)45))))
		{
			goto IL_01fa;
		}
	}
	{
		int32_t L_23 = V_5;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)65))))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)69))))
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)78))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0216;
	}

IL_0156:
	{
		int32_t L_26 = XmlTextReader_ReadValueChar_m11295(__this, /*hidden argument*/NULL);
		V_6 = L_26;
		int32_t L_27 = V_6;
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)76))) == 0)
		{
			goto IL_0179;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)76))) == 1)
		{
			goto IL_01b1;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)76))) == 2)
		{
			goto IL_0195;
		}
	}
	{
		goto IL_01b1;
	}

IL_0179:
	{
		XmlTextReader_ExpectAndAppend_m11296(__this, (String_t*) &_stringLiteral2456, /*hidden argument*/NULL);
		DtdInputStateStack_t2512 * L_28 = (__this->___stateStack_54);
		NullCheck(L_28);
		DtdInputStateStack_Push_m11194(L_28, 2, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0195:
	{
		XmlTextReader_ExpectAndAppend_m11296(__this, (String_t*) &_stringLiteral2453, /*hidden argument*/NULL);
		DtdInputStateStack_t2512 * L_29 = (__this->___stateStack_54);
		NullCheck(L_29);
		DtdInputStateStack_Push_m11194(L_29, 4, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_01b1:
	{
		XmlException_t2474 * L_30 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2741, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_01bd:
	{
		goto IL_0216;
	}

IL_01c2:
	{
		XmlTextReader_ExpectAndAppend_m11296(__this, (String_t*) &_stringLiteral2458, /*hidden argument*/NULL);
		DtdInputStateStack_t2512 * L_31 = (__this->___stateStack_54);
		NullCheck(L_31);
		DtdInputStateStack_Push_m11194(L_31, 3, /*hidden argument*/NULL);
		goto IL_0216;
	}

IL_01de:
	{
		XmlTextReader_ExpectAndAppend_m11296(__this, (String_t*) &_stringLiteral2459, /*hidden argument*/NULL);
		DtdInputStateStack_t2512 * L_32 = (__this->___stateStack_54);
		NullCheck(L_32);
		DtdInputStateStack_Push_m11194(L_32, 5, /*hidden argument*/NULL);
		goto IL_0216;
	}

IL_01fa:
	{
		XmlTextReader_ExpectAndAppend_m11296(__this, (String_t*) &_stringLiteral2742, /*hidden argument*/NULL);
		DtdInputStateStack_t2512 * L_33 = (__this->___stateStack_54);
		NullCheck(L_33);
		DtdInputStateStack_Push_m11194(L_33, 7, /*hidden argument*/NULL);
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0233;
	}

IL_021b:
	{
		int32_t L_34 = V_1;
		uint16_t L_35 = (((uint16_t)L_34));
		Object_t * L_36 = Box(Char_t684_il2cpp_TypeInfo_var, &L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2743, L_36, /*hidden argument*/NULL);
		XmlException_t2474 * L_38 = XmlTextReader_NotWFError_m11249(__this, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_0233:
	{
		goto IL_03e5;
	}

IL_0238:
	{
		int32_t L_39 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)8))))
		{
			goto IL_0255;
		}
	}
	{
		DtdInputStateStack_t2512 * L_40 = (__this->___stateStack_54);
		NullCheck(L_40);
		DtdInputStateStack_Pop_m11193(L_40, /*hidden argument*/NULL);
		goto IL_027a;
	}

IL_0255:
	{
		int32_t L_41 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)9))))
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_42 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_42) == ((int32_t)7)))
		{
			goto IL_027a;
		}
	}
	{
		DtdInputStateStack_t2512 * L_43 = (__this->___stateStack_54);
		NullCheck(L_43);
		DtdInputStateStack_Push_m11194(L_43, 8, /*hidden argument*/NULL);
	}

IL_027a:
	{
		goto IL_03e5;
	}

IL_027f:
	{
		int32_t L_44 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_029d;
		}
	}
	{
		DtdInputStateStack_t2512 * L_45 = (__this->___stateStack_54);
		NullCheck(L_45);
		DtdInputStateStack_Pop_m11193(L_45, /*hidden argument*/NULL);
		goto IL_02c2;
	}

IL_029d:
	{
		int32_t L_46 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_46) == ((int32_t)8)))
		{
			goto IL_02c2;
		}
	}
	{
		int32_t L_47 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)7)))
		{
			goto IL_02c2;
		}
	}
	{
		DtdInputStateStack_t2512 * L_48 = (__this->___stateStack_54);
		NullCheck(L_48);
		DtdInputStateStack_Push_m11194(L_48, ((int32_t)9), /*hidden argument*/NULL);
	}

IL_02c2:
	{
		goto IL_03e5;
	}

IL_02c7:
	{
		int32_t L_49 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		V_3 = L_49;
		int32_t L_50 = V_3;
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 0)
		{
			goto IL_02fb;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 1)
		{
			goto IL_0300;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 2)
		{
			goto IL_0305;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 3)
		{
			goto IL_030a;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 4)
		{
			goto IL_0320;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 5)
		{
			goto IL_031b;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 6)
		{
			goto IL_031b;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 7)
		{
			goto IL_031b;
		}
	}
	{
		goto IL_0320;
	}

IL_02fb:
	{
		goto IL_030a;
	}

IL_0300:
	{
		goto IL_030a;
	}

IL_0305:
	{
		goto IL_030a;
	}

IL_030a:
	{
		DtdInputStateStack_t2512 * L_51 = (__this->___stateStack_54);
		NullCheck(L_51);
		DtdInputStateStack_Pop_m11193(L_51, /*hidden argument*/NULL);
		goto IL_032c;
	}

IL_031b:
	{
		goto IL_03e5;
	}

IL_0320:
	{
		XmlException_t2474 * L_52 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2744, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_52);
	}

IL_032c:
	{
		goto IL_03e5;
	}

IL_0331:
	{
		int32_t L_53 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)6))))
		{
			goto IL_0356;
		}
	}
	{
		int32_t L_54 = XmlTextReader_ReadValueChar_m11295(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0356;
		}
	}
	{
		DtdInputStateStack_t2512 * L_55 = (__this->___stateStack_54);
		NullCheck(L_55);
		DtdInputStateStack_Pop_m11193(L_55, /*hidden argument*/NULL);
	}

IL_0356:
	{
		goto IL_03e5;
	}

IL_035b:
	{
		int32_t L_56 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_56) == ((uint32_t)7))))
		{
			goto IL_0392;
		}
	}
	{
		int32_t L_57 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0392;
		}
	}
	{
		XmlTextReader_ReadValueChar_m11295(__this, /*hidden argument*/NULL);
		XmlTextReader_ExpectAndAppend_m11296(__this, (String_t*) &_stringLiteral2380, /*hidden argument*/NULL);
		DtdInputStateStack_t2512 * L_58 = (__this->___stateStack_54);
		NullCheck(L_58);
		DtdInputStateStack_Pop_m11193(L_58, /*hidden argument*/NULL);
	}

IL_0392:
	{
		goto IL_03e5;
	}

IL_0397:
	{
		int32_t L_59 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_59) == ((int32_t)1)))
		{
			goto IL_03e0;
		}
	}
	{
		int32_t L_60 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_60) == ((int32_t)4)))
		{
			goto IL_03e0;
		}
	}
	{
		int32_t L_61 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_61) == ((int32_t)7)))
		{
			goto IL_03e0;
		}
	}
	{
		int32_t L_62 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_62) == ((int32_t)((int32_t)9))))
		{
			goto IL_03e0;
		}
	}
	{
		int32_t L_63 = XmlTextReader_get_State_m11294(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_63) == ((int32_t)8)))
		{
			goto IL_03e0;
		}
	}
	{
		XmlException_t2474 * L_64 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2745, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_64);
	}

IL_03e0:
	{
		goto IL_03e5;
	}

IL_03e5:
	{
		bool L_65 = V_0;
		if (L_65)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader::ReadSystemLiteral(System.Boolean)
extern "C" String_t* XmlTextReader_ReadSystemLiteral_m11298 (XmlTextReader_t2507 * __this, bool ___expectSYSTEM, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = ___expectSYSTEM;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		XmlTextReader_Expect_m11303(__this, (String_t*) &_stringLiteral2499, /*hidden argument*/NULL);
		bool L_1 = XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		XmlException_t2474 * L_2 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2500, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0028:
	{
		goto IL_0034;
	}

IL_002d:
	{
		XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		int32_t L_3 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0048:
	{
		int32_t L_4 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		XmlException_t2474 * L_6 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2501, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0062:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_9 = V_1;
		XmlTextReader_AppendValueChar_m11269(__this, L_9, /*hidden argument*/NULL);
	}

IL_0070:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_12 = XmlTextReader_CreateValueString_m11271(__this, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String Mono.Xml2.XmlTextReader::ReadPubidLiteral()
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_ReadPubidLiteral_m11299 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		XmlTextReader_Expect_m11303(__this, (String_t*) &_stringLiteral2502, /*hidden argument*/NULL);
		bool L_0 = XmlTextReader_SkipWhitespace_m11305(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		XmlException_t2474 * L_1 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2503, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0022:
	{
		int32_t L_2 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0036:
	{
		int32_t L_3 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		XmlException_t2474 * L_5 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2501, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0050:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_9 = XmlChar_IsPubidChar_m10689(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_10 = V_1;
		uint16_t L_11 = (((uint16_t)L_10));
		Object_t * L_12 = Box(Char_t684_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2504, L_12, /*hidden argument*/NULL);
		XmlException_t2474 * L_14 = XmlTextReader_NotWFError_m11249(__this, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_007a:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_17 = V_1;
		XmlTextReader_AppendValueChar_m11269(__this, L_17, /*hidden argument*/NULL);
	}

IL_0088:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_20 = XmlTextReader_CreateValueString_m11271(__this, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.String Mono.Xml2.XmlTextReader::ReadName()
extern "C" String_t* XmlTextReader_ReadName_m11300 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = XmlTextReader_ReadName_m11301(__this, (&V_0), (&V_1), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Mono.Xml2.XmlTextReader::ReadName(System.String&,System.String&)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_ReadName_m11301 (XmlTextReader_t2507 * __this, String_t** ___prefix, String_t** ___localName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	{
		bool L_0 = (__this->___preserveCurrentTag_33);
		V_0 = L_0;
		__this->___preserveCurrentTag_33 = 1;
		int32_t L_1 = (__this->___peekCharsIndex_30);
		int32_t L_2 = (__this->___curNodePeekIndex_32);
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		int32_t L_3 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_5 = XmlChar_IsFirstNameChar_m10683(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_6 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_7 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_10;
		ObjectU5BU5D_t21* L_11 = L_7;
		int32_t L_12 = V_2;
		uint16_t L_13 = (((uint16_t)L_12));
		Object_t * L_14 = Box(Char_t684_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m6657(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral2506, L_11, /*hidden argument*/NULL);
		XmlException_t2474 * L_16 = XmlTextReader_NotWFError_m11249(__this, L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005d:
	{
		int32_t L_17 = V_2;
		XmlTextReader_Advance_m11261(__this, L_17, /*hidden argument*/NULL);
		V_3 = 1;
		V_4 = (-1);
		goto IL_0097;
	}

IL_006e:
	{
		int32_t L_18 = V_2;
		XmlTextReader_Advance_m11261(__this, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0093;
		}
	}
	{
		bool L_20 = (__this->___namespaces_44);
		if (!L_20)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_22 = V_3;
		V_4 = L_22;
	}

IL_0093:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0097:
	{
		int32_t L_24 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		V_2 = L_25;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_26 = XmlChar_IsNameChar_m10687(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_27 = (__this->___curNodePeekIndex_32);
		int32_t L_28 = V_1;
		V_5 = ((int32_t)((int32_t)L_27+(int32_t)L_28));
		XmlNameTable_t2314 * L_29 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(17 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		CharU5BU5D_t646* L_30 = (__this->___peekChars_29);
		int32_t L_31 = V_5;
		int32_t L_32 = V_3;
		NullCheck(L_29);
		String_t* L_33 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t646*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_29, L_30, L_31, L_32);
		V_6 = L_33;
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		String_t** L_35 = ___prefix;
		XmlNameTable_t2314 * L_36 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(17 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		CharU5BU5D_t646* L_37 = (__this->___peekChars_29);
		int32_t L_38 = V_5;
		int32_t L_39 = V_4;
		NullCheck(L_36);
		String_t* L_40 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t646*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_36, L_37, L_38, L_39);
		*((Object_t **)(L_35)) = (Object_t *)L_40;
		String_t** L_41 = ___localName;
		XmlNameTable_t2314 * L_42 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(17 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		CharU5BU5D_t646* L_43 = (__this->___peekChars_29);
		int32_t L_44 = V_5;
		int32_t L_45 = V_4;
		int32_t L_46 = V_3;
		int32_t L_47 = V_4;
		NullCheck(L_42);
		String_t* L_48 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t646*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_42, L_43, ((int32_t)((int32_t)((int32_t)((int32_t)L_44+(int32_t)L_45))+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_46-(int32_t)L_47))-(int32_t)1)));
		*((Object_t **)(L_41)) = (Object_t *)L_48;
		goto IL_0118;
	}

IL_010d:
	{
		String_t** L_49 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_49)) = (Object_t *)L_50;
		String_t** L_51 = ___localName;
		String_t* L_52 = V_6;
		*((Object_t **)(L_51)) = (Object_t *)L_52;
	}

IL_0118:
	{
		bool L_53 = V_0;
		__this->___preserveCurrentTag_33 = L_53;
		String_t* L_54 = V_6;
		return L_54;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Expect(System.Int32)
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_Expect_m11302 (XmlTextReader_t2507 * __this, int32_t ___expected, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t21* G_B3_1 = {0};
	ObjectU5BU5D_t21* G_B3_2 = {0};
	String_t* G_B3_3 = {0};
	CultureInfo_t1331 * G_B3_4 = {0};
	XmlTextReader_t2507 * G_B3_5 = {0};
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t21* G_B2_1 = {0};
	ObjectU5BU5D_t21* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	CultureInfo_t1331 * G_B2_4 = {0};
	XmlTextReader_t2507 * G_B2_5 = {0};
	Object_t * G_B4_0 = {0};
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_t21* G_B4_2 = {0};
	ObjectU5BU5D_t21* G_B4_3 = {0};
	String_t* G_B4_4 = {0};
	CultureInfo_t1331 * G_B4_5 = {0};
	XmlTextReader_t2507 * G_B4_6 = {0};
	{
		int32_t L_0 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___expected;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_3 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_4 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		int32_t L_5 = ___expected;
		uint16_t L_6 = (((uint16_t)L_5));
		Object_t * L_7 = Box(Char_t684_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)L_7;
		ObjectU5BU5D_t21* L_8 = L_4;
		int32_t L_9 = ___expected;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 1)) = (Object_t *)L_11;
		ObjectU5BU5D_t21* L_12 = L_8;
		int32_t L_13 = V_0;
		G_B2_0 = 2;
		G_B2_1 = L_12;
		G_B2_2 = L_12;
		G_B2_3 = (String_t*) &_stringLiteral2507;
		G_B2_4 = L_3;
		G_B2_5 = __this;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			G_B3_0 = 2;
			G_B3_1 = L_12;
			G_B3_2 = L_12;
			G_B3_3 = (String_t*) &_stringLiteral2507;
			G_B3_4 = L_3;
			G_B3_5 = __this;
			goto IL_0045;
		}
	}
	{
		G_B4_0 = ((Object_t *)((String_t*) &_stringLiteral2746));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		G_B4_5 = G_B2_4;
		G_B4_6 = G_B2_5;
		goto IL_004c;
	}

IL_0045:
	{
		int32_t L_14 = V_0;
		uint16_t L_15 = (((uint16_t)L_14));
		Object_t * L_16 = Box(Char_t684_il2cpp_TypeInfo_var, &L_15);
		G_B4_0 = L_16;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
		G_B4_5 = G_B3_4;
		G_B4_6 = G_B3_5;
	}

IL_004c:
	{
		NullCheck(G_B4_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B4_2, G_B4_1);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B4_2, G_B4_1)) = (Object_t *)G_B4_0;
		ObjectU5BU5D_t21* L_17 = G_B4_3;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 3)) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Format_m6657(NULL /*static, unused*/, G_B4_5, G_B4_4, L_17, /*hidden argument*/NULL);
		NullCheck(G_B4_6);
		XmlException_t2474 * L_22 = XmlTextReader_NotWFError_m11249(G_B4_6, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0061:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Expect(System.String)
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_Expect_m11303 (XmlTextReader_t2507 * __this, String_t* ___expected, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_003d;
	}

IL_0007:
	{
		int32_t L_0 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___expected;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		uint16_t L_3 = String_get_Chars_m2787(L_1, L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_4 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_5 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		String_t* L_6 = ___expected;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 0)) = (Object_t *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m6657(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral2747, L_5, /*hidden argument*/NULL);
		XmlException_t2474 * L_8 = XmlTextReader_NotWFError_m11249(__this, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		String_t* L_11 = ___expected;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m2782(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ExpectAfterWhitespace(System.Char)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_ExpectAfterWhitespace_m11304 (XmlTextReader_t2507 * __this, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t21* G_B6_1 = {0};
	ObjectU5BU5D_t21* G_B6_2 = {0};
	String_t* G_B6_3 = {0};
	CultureInfo_t1331 * G_B6_4 = {0};
	XmlTextReader_t2507 * G_B6_5 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t21* G_B5_1 = {0};
	ObjectU5BU5D_t21* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	CultureInfo_t1331 * G_B5_4 = {0};
	XmlTextReader_t2507 * G_B5_5 = {0};
	Object_t * G_B7_0 = {0};
	int32_t G_B7_1 = 0;
	ObjectU5BU5D_t21* G_B7_2 = {0};
	ObjectU5BU5D_t21* G_B7_3 = {0};
	String_t* G_B7_4 = {0};
	CultureInfo_t1331 * G_B7_5 = {0};
	XmlTextReader_t2507 * G_B7_6 = {0};

IL_0000:
	{
		int32_t L_0 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)33))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsWhitespace_m10680(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0000;
	}

IL_001f:
	{
		uint16_t L_4 = ___c;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_6 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_7 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		uint16_t L_8 = ___c;
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(Char_t684_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_10;
		ObjectU5BU5D_t21* L_11 = L_7;
		int32_t L_12 = V_0;
		G_B5_0 = 1;
		G_B5_1 = L_11;
		G_B5_2 = L_11;
		G_B5_3 = (String_t*) &_stringLiteral2748;
		G_B5_4 = L_6;
		G_B5_5 = __this;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			G_B6_0 = 1;
			G_B6_1 = L_11;
			G_B6_2 = L_11;
			G_B6_3 = (String_t*) &_stringLiteral2748;
			G_B6_4 = L_6;
			G_B6_5 = __this;
			goto IL_0053;
		}
	}
	{
		G_B7_0 = ((Object_t *)((String_t*) &_stringLiteral2746));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		G_B7_5 = G_B5_4;
		G_B7_6 = G_B5_5;
		goto IL_005a;
	}

IL_0053:
	{
		int32_t L_13 = V_0;
		uint16_t L_14 = (((uint16_t)L_13));
		Object_t * L_15 = Box(Char_t684_il2cpp_TypeInfo_var, &L_14);
		G_B7_0 = L_15;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
		G_B7_5 = G_B6_4;
		G_B7_6 = G_B6_5;
	}

IL_005a:
	{
		NullCheck(G_B7_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B7_2, G_B7_1);
		ArrayElementTypeCheck (G_B7_2, G_B7_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B7_2, G_B7_1)) = (Object_t *)G_B7_0;
		ObjectU5BU5D_t21* L_16 = G_B7_3;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 2)) = (Object_t *)L_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m6657(NULL /*static, unused*/, G_B7_5, G_B7_4, L_16, /*hidden argument*/NULL);
		NullCheck(G_B7_6);
		XmlException_t2474 * L_21 = XmlTextReader_NotWFError_m11249(G_B7_6, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_006f:
	{
		goto IL_0079;
	}
	// Dead block : IL_0074: br IL_0000

IL_0079:
	{
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespace()
extern "C" bool XmlTextReader_SkipWhitespace_m11305 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)((int32_t)13)))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 1;
	}

IL_0027:
	{
		V_1 = G_B5_0;
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		return 0;
	}

IL_0030:
	{
		int32_t L_6 = V_0;
		XmlTextReader_Advance_m11261(__this, L_6, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_003c:
	{
		int32_t L_7 = V_0;
		XmlTextReader_Advance_m11261(__this, L_7, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_8 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		V_0 = L_9;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)32))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)9))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)10))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)13))))
		{
			goto IL_003c;
		}
	}
	{
		bool L_13 = V_1;
		return L_13;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadWhitespace()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool XmlTextReader_ReadWhitespace_m11306 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	{
		int32_t L_0 = (__this->___currentState_40);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->___currentState_40 = ((int32_t)17);
	}

IL_0013:
	{
		bool L_1 = (__this->___preserveCurrentTag_33);
		V_0 = L_1;
		__this->___preserveCurrentTag_33 = 1;
		int32_t L_2 = (__this->___peekCharsIndex_30);
		int32_t L_3 = (__this->___curNodePeekIndex_32);
		V_1 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		int32_t L_4 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_2 = L_4;
	}

IL_0036:
	{
		int32_t L_5 = V_2;
		XmlTextReader_Advance_m11261(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)9))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)10))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_11 = (__this->___currentState_40);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_13 = V_2;
		G_B11_0 = ((((int32_t)((((int32_t)L_13) == ((int32_t)((int32_t)60)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B11_0 = 0;
	}

IL_0082:
	{
		V_3 = G_B11_0;
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_15 = (__this->___whitespaceHandling_45);
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_16 = (__this->___whitespaceHandling_45);
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace() */, __this);
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_00af;
		}
	}

IL_00ad:
	{
		return 0;
	}

IL_00af:
	{
		XmlTextReader_ClearValueBuffer_m11272(__this, /*hidden argument*/NULL);
		StringBuilder_t619 * L_18 = (__this->___valueBuffer_27);
		CharU5BU5D_t646* L_19 = (__this->___peekChars_29);
		int32_t L_20 = (__this->___curNodePeekIndex_32);
		int32_t L_21 = (__this->___peekCharsIndex_30);
		int32_t L_22 = (__this->___curNodePeekIndex_32);
		int32_t L_23 = V_1;
		NullCheck(L_18);
		StringBuilder_Append_m11575(L_18, L_19, L_20, ((int32_t)((int32_t)((int32_t)((int32_t)L_21-(int32_t)L_22))-(int32_t)L_23)), /*hidden argument*/NULL);
		bool L_24 = V_0;
		__this->___preserveCurrentTag_33 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00f5;
		}
	}
	{
		XmlTextReader_ReadText_m11273(__this, 0, /*hidden argument*/NULL);
		goto IL_0126;
	}

IL_00f5:
	{
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace() */, __this);
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_0108;
		}
	}
	{
		G_B21_0 = ((int32_t)14);
		goto IL_010a;
	}

IL_0108:
	{
		G_B21_0 = ((int32_t)13);
	}

IL_010a:
	{
		V_4 = G_B21_0;
		int32_t L_27 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_29 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m11255(__this, L_27, L_28, L_29, L_30, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
	}

IL_0126:
	{
		return 1;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharsInternal(System.Char[],System.Int32,System.Int32)
extern "C" int32_t XmlTextReader_ReadCharsInternal_m11307 (XmlTextReader_t2507 * __this, CharU5BU5D_t646* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___offset;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0131;
	}

IL_0009:
	{
		int32_t L_1 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = L_2;
		int32_t L_3 = V_3;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00d2;
	}

IL_0026:
	{
		XmlException_t2474 * L_5 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2749, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___length;
		if ((!(((uint32_t)((int32_t)((int32_t)L_6+(int32_t)1))) == ((uint32_t)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_003d:
	{
		int32_t L_9 = V_2;
		XmlTextReader_Advance_m11261(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_11 = (__this->___nestLevel_41);
		__this->___nestLevel_41 = ((int32_t)((int32_t)L_11+(int32_t)1));
		CharU5BU5D_t646* L_12 = ___buffer;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_14);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, L_14)) = (uint16_t)((int32_t)60);
		goto IL_012d;
	}

IL_006d:
	{
		int32_t L_15 = (__this->___nestLevel_41);
		int32_t L_16 = L_15;
		V_4 = L_16;
		__this->___nestLevel_41 = ((int32_t)((int32_t)L_16-(int32_t)1));
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		CharU5BU5D_t646* L_18 = ___buffer;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20)) = (uint16_t)((int32_t)60);
		goto IL_012d;
	}

IL_0094:
	{
		XmlTextReader_Expect_m11302(__this, ((int32_t)47), /*hidden argument*/NULL);
		bool L_21 = (__this->___depthUp_19);
		if (!L_21)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_22 = (__this->___depth_17);
		__this->___depth_17 = ((int32_t)((int32_t)L_22+(int32_t)1));
		__this->___depthUp_19 = 0;
	}

IL_00bc:
	{
		XmlTextReader_ReadEndTag_m11267(__this, /*hidden argument*/NULL);
		__this->___readCharsInProgress_42 = 0;
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, __this);
		int32_t L_23 = V_1;
		return L_23;
	}

IL_00d2:
	{
		int32_t L_24 = V_2;
		XmlTextReader_Advance_m11261(__this, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_00f2;
		}
	}
	{
		CharU5BU5D_t646* L_26 = ___buffer;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		int32_t L_29 = V_2;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_26, L_28)) = (uint16_t)(((uint16_t)L_29));
		goto IL_0128;
	}

IL_00f2:
	{
		CharU5BU5D_t646* L_30 = ___buffer;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)1));
		int32_t L_33 = V_2;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_32);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33-(int32_t)((int32_t)65536)))/(int32_t)((int32_t)1024)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t646* L_34 = ___buffer;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_36);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_34, L_36)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_37-(int32_t)((int32_t)65536)))%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
	}

IL_0128:
	{
		goto IL_012d;
	}

IL_012d:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0131:
	{
		int32_t L_39 = V_1;
		int32_t L_40 = ___length;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_41 = ___length;
		return L_41;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadUntilEndTag()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool XmlTextReader_ReadUntilEndTag_m11308 (XmlTextReader_t2507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->___currentState_40 = ((int32_t)15);
	}

IL_0013:
	{
		int32_t L_1 = XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = L_2;
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00cb;
	}

IL_0030:
	{
		XmlException_t2474 * L_5 = XmlTextReader_NotWFError_m11249(__this, (String_t*) &_stringLiteral2749, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003c:
	{
		int32_t L_6 = XmlTextReader_PeekChar_m11259(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)47))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = (__this->___nestLevel_41);
		__this->___nestLevel_41 = ((int32_t)((int32_t)L_7+(int32_t)1));
		goto IL_00cb;
	}

IL_005c:
	{
		int32_t L_8 = (__this->___nestLevel_41);
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		V_3 = L_9;
		__this->___nestLevel_41 = L_9;
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00cb;
	}

IL_0078:
	{
		XmlTextReader_ReadChar_m11260(__this, /*hidden argument*/NULL);
		String_t* L_11 = XmlTextReader_ReadName_m11300(__this, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = V_1;
		TagNameU5BU5D_t2515* L_13 = (__this->___elementNames_21);
		int32_t L_14 = (__this->___elementNameStackPos_22);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14-(int32_t)1)));
		String_t* L_15 = (((TagName_t2510 *)(TagName_t2510 *)SZArrayLdElema(L_13, ((int32_t)((int32_t)L_14-(int32_t)1))))->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Inequality_m3147(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_00cb;
	}

IL_00ae:
	{
		XmlTextReader_Expect_m11302(__this, ((int32_t)62), /*hidden argument*/NULL);
		int32_t L_17 = (__this->___depth_17);
		__this->___depth_17 = ((int32_t)((int32_t)L_17-(int32_t)1));
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, __this);
		return L_18;
	}

IL_00cb:
	{
		goto IL_0013;
	}
}
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReader.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReaderMethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.String>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Collections.Generic.Stack`1<System.String>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"


// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern TypeInfo* NameTable_t2448_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11309 (XmlTextReader_t2516 * __this, TextReader_t2480 * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NameTable_t2448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4616);
		s_Il2CppMethodIntialized = true;
	}
	{
		TextReader_t2480 * L_0 = ___input;
		NameTable_t2448 * L_1 = (NameTable_t2448 *)il2cpp_codegen_object_new (NameTable_t2448_il2cpp_TypeInfo_var);
		NameTable__ctor_m10627(L_1, /*hidden argument*/NULL);
		XmlTextReader__ctor_m11310(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11310 (XmlTextReader_t2516 * __this, TextReader_t2480 * ___input, XmlNameTable_t2314 * ___nt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		TextReader_t2480 * L_1 = ___input;
		XmlNameTable_t2314 * L_2 = ___nt;
		XmlTextReader__ctor_m11311(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern TypeInfo* XmlTextReader_t2507_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11311 (XmlTextReader_t2516 * __this, String_t* ___url, TextReader_t2480 * ___input, XmlNameTable_t2314 * ___nt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTextReader_t2507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4728);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlReader__ctor_m11126(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url;
		TextReader_t2480 * L_1 = ___input;
		XmlNameTable_t2314 * L_2 = ___nt;
		XmlTextReader_t2507 * L_3 = (XmlTextReader_t2507 *)il2cpp_codegen_object_new (XmlTextReader_t2507_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m11198(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___source_4 = L_3;
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern TypeInfo* XmlTextReader_t2507_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m11312 (XmlTextReader_t2516 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t2497 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTextReader_t2507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4728);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlReader__ctor_m11126(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___xmlFragment;
		int32_t L_1 = ___fragType;
		XmlParserContext_t2497 * L_2 = ___context;
		XmlTextReader_t2507 * L_3 = (XmlTextReader_t2507 *)il2cpp_codegen_object_new (XmlTextReader_t2507_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m11199(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___source_4 = L_3;
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C" void XmlTextReader__ctor_m11313 (XmlTextReader_t2516 * __this, XmlTextReader_t2507 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method)
{
	{
		XmlReader__ctor_m11126(__this, /*hidden argument*/NULL);
		XmlTextReader_t2507 * L_0 = ___entityContainer;
		__this->___source_4 = L_0;
		bool L_1 = ___insideAttribute;
		__this->___entityInsideAttribute_5 = L_1;
		return;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t2497 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m11314 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t2497 * L_0 = XmlTextReader_get_ParserContext_m11328(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C" XmlReader_t2374 * XmlTextReader_get_Current_m11315 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	XmlTextReader_t2516 * G_B4_0 = {0};
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		XmlTextReader_t2516 * L_3 = (__this->___entity_3);
		G_B4_0 = L_3;
		goto IL_002c;
	}

IL_0026:
	{
		XmlTextReader_t2507 * L_4 = (__this->___source_4);
		G_B4_0 = ((XmlTextReader_t2516 *)(L_4));
	}

IL_002c:
	{
		return G_B4_0;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m11316 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m11317 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C" bool XmlTextReader_get_CanResolveEntity_m11318 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m11319 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, L_3);
		XmlTextReader_t2516 * L_5 = (__this->___entity_3);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlTextReader::get_Depth() */, L_5);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_6))+(int32_t)1));
	}

IL_0036:
	{
		XmlTextReader_t2507 * L_7 = (__this->___source_4);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, L_7);
		return L_8;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m11320 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2507 * L_0 = (__this->___source_4);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Mono.Xml2.XmlTextReader::get_EOF() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m11321 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m11322 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m11323 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m11324 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m11325 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t2314 * XmlTextReader_get_NameTable_m11326 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlNameTable_t2314 * L_1 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(17 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m11327 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_3);
		G_B6_0 = ((int32_t)(L_4));
		goto IL_004d;
	}

IL_002b:
	{
		XmlTextReader_t2516 * L_5 = (__this->___entity_3);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_5);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		G_B6_0 = ((int32_t)16);
		goto IL_004d;
	}

IL_0042:
	{
		XmlTextReader_t2516 * L_7 = (__this->___entity_3);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType() */, L_7);
		G_B6_0 = ((int32_t)(L_8));
	}

IL_004d:
	{
		return (int32_t)(G_B6_0);
	}

IL_004e:
	{
		XmlTextReader_t2507 * L_9 = (__this->___source_4);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_9);
		return L_10;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern TypeInfo* IHasXmlParserContext_t2556_il2cpp_TypeInfo_var;
extern "C" XmlParserContext_t2497 * XmlTextReader_get_ParserContext_m11328 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlParserContext_t2556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4769);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(((Object_t *)Castclass(L_0, IHasXmlParserContext_t2556_il2cpp_TypeInfo_var)));
		XmlParserContext_t2497 * L_1 = (XmlParserContext_t2497 *)InterfaceFuncInvoker0< XmlParserContext_t2497 * >::Invoke(0 /* System.Xml.XmlParserContext Mono.Xml.IHasXmlParserContext::get_ParserContext() */, IHasXmlParserContext_t2556_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_0, IHasXmlParserContext_t2556_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m11329 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_Prefix() */, L_0);
		return L_1;
	}
}
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m11330 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001c;
	}

IL_0011:
	{
		XmlTextReader_t2507 * L_1 = (__this->___source_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t2501 * XmlTextReader_get_Settings_m11331 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReaderSettings_t2501 * L_0 = XmlReader_get_Settings_m11135(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.XmlTextReader::get_Value()
extern "C" String_t* XmlTextReader_get_Value_m11332 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m11333 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m11334 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		bool L_2 = XmlTextReader_get_CharacterChecking_m11334(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		NullCheck(L_3);
		bool L_4 = XmlTextReader_get_CharacterChecking_m11204(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m11335 (XmlTextReader_t2516 * __this, bool ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		bool L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_CharacterChecking_m11335(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		bool L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_CharacterChecking_m11205(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m11336 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		bool L_2 = XmlTextReader_get_CloseInput_m11336(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		NullCheck(L_3);
		bool L_4 = XmlTextReader_get_CloseInput_m11206(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m11337 (XmlTextReader_t2516 * __this, bool ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		bool L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_CloseInput_m11337(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		bool L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_CloseInput_m11207(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" void XmlTextReader_set_Conformance_m11338 (XmlTextReader_t2516 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		int32_t L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_Conformance_m11338(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		int32_t L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_Conformance_m11254(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t2315 * XmlTextReader_get_Resolver_m11339 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2507 * L_0 = (__this->___source_4);
		NullCheck(L_0);
		XmlResolver_t2315 * L_1 = XmlTextReader_get_Resolver_m11248(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C" void XmlTextReader_CopyProperties_m11340 (XmlTextReader_t2516 * __this, XmlTextReader_t2516 * ___other, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = ___other;
		NullCheck(L_0);
		bool L_1 = XmlTextReader_get_CharacterChecking_m11334(L_0, /*hidden argument*/NULL);
		XmlTextReader_set_CharacterChecking_m11335(__this, L_1, /*hidden argument*/NULL);
		XmlTextReader_t2516 * L_2 = ___other;
		NullCheck(L_2);
		bool L_3 = XmlTextReader_get_CloseInput_m11336(L_2, /*hidden argument*/NULL);
		XmlTextReader_set_CloseInput_m11337(__this, L_3, /*hidden argument*/NULL);
		XmlTextReader_t2516 * L_4 = ___other;
		NullCheck(L_4);
		XmlReaderSettings_t2501 * L_5 = (XmlReaderSettings_t2501 *)VirtFuncInvoker0< XmlReaderSettings_t2501 * >::Invoke(22 /* System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings() */, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		XmlTextReader_t2516 * L_6 = ___other;
		NullCheck(L_6);
		XmlReaderSettings_t2501 * L_7 = (XmlReaderSettings_t2501 *)VirtFuncInvoker0< XmlReaderSettings_t2501 * >::Invoke(22 /* System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings() */, L_6);
		NullCheck(L_7);
		int32_t L_8 = XmlReaderSettings_get_ConformanceLevel_m11156(L_7, /*hidden argument*/NULL);
		XmlTextReader_set_Conformance_m11338(__this, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		XmlTextReader_t2516 * L_9 = ___other;
		NullCheck(L_9);
		XmlResolver_t2315 * L_10 = XmlTextReader_get_Resolver_m11339(L_9, /*hidden argument*/NULL);
		XmlTextReader_set_XmlResolver_m11347(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m11341 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2507 * L_0 = (__this->___source_4);
		NullCheck(L_0);
		int32_t L_1 = XmlTextReader_get_EntityHandling_m11209(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m11342 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(48 /* System.Int32 System.Xml.XmlTextReader::get_LineNumber() */, L_1);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(48 /* System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber() */, L_3);
		return L_4;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m11343 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(49 /* System.Int32 System.Xml.XmlTextReader::get_LinePosition() */, L_1);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(49 /* System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition() */, L_3);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m11344 (XmlTextReader_t2516 * __this, bool ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		bool L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_Normalization_m11344(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		bool L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_Normalization_m11221(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C" int32_t XmlTextReader_get_WhitespaceHandling_m11345 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2507 * L_0 = (__this->___source_4);
		NullCheck(L_0);
		int32_t L_1 = XmlTextReader_get_WhitespaceHandling_m11226(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" void XmlTextReader_set_WhitespaceHandling_m11346 (XmlTextReader_t2516 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		int32_t L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_WhitespaceHandling_m11346(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		int32_t L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_WhitespaceHandling_m11227(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlTextReader_set_XmlResolver_m11347 (XmlTextReader_t2516 * __this, XmlResolver_t2315 * ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		XmlResolver_t2315 * L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_XmlResolver_m11347(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		XmlResolver_t2315 * L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_XmlResolver_m11228(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C" void XmlTextReader_SkipTextDeclaration_m11348 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		XmlTextReader_SkipTextDeclaration_m11348(L_1, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_001b:
	{
		XmlTextReader_t2507 * L_2 = (__this->___source_4);
		NullCheck(L_2);
		XmlTextReader_SkipTextDeclaration_m11287(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m11349 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(25 /* System.Void System.Xml.XmlTextReader::Close() */, L_1);
	}

IL_0016:
	{
		XmlTextReader_t2507 * L_2 = (__this->___source_4);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(25 /* System.Void Mono.Xml2.XmlTextReader::Close() */, L_2);
		return;
	}
}
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m11350 (XmlTextReader_t2516 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(27 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m11351 (XmlTextReader_t2516 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___localName;
		String_t* L_2 = ___namespaceURI;
		NullCheck(L_0);
		String_t* L_3 = (String_t*)VirtFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(28 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C" String_t* XmlTextReader_LookupNamespace_m11352 (XmlTextReader_t2516 * __this, String_t* ___prefix, const MethodInfo* method)
{
	{
		XmlReader_t2374 * L_0 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___prefix;
		NullCheck(L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(31 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C" void XmlTextReader_MoveToAttribute_m11353 (XmlTextReader_t2516 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_5);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_CloseEntity_m11362(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		XmlReader_t2374 * L_2 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___i;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_2, L_3);
		__this->___insideAttribute_6 = 1;
		return;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m11354 (XmlTextReader_t2516 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_5);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		XmlTextReader_t2516 * L_2 = (__this->___entity_3);
		String_t* L_3 = ___localName;
		String_t* L_4 = ___namespaceName;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(33 /* System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String) */, L_2, L_3, L_4);
		return L_5;
	}

IL_0024:
	{
		XmlTextReader_t2507 * L_6 = (__this->___source_4);
		String_t* L_7 = ___localName;
		String_t* L_8 = ___namespaceName;
		NullCheck(L_6);
		bool L_9 = (bool)VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(33 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String) */, L_6, L_7, L_8);
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		XmlTextReader_t2516 * L_10 = (__this->___entity_3);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		bool L_11 = (__this->___entityInsideAttribute_5);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		XmlTextReader_CloseEntity_m11362(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		__this->___insideAttribute_6 = 1;
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m11355 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_5);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_CloseEntity_m11362(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		XmlReader_t2374 * L_2 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 0;
	}

IL_002e:
	{
		__this->___insideAttribute_6 = 0;
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m11356 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_5);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlTextReader_t2516 * L_2 = (__this->___entity_3);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute() */, L_2);
		return L_3;
	}

IL_0022:
	{
		XmlTextReader_t2507 * L_4 = (__this->___source_4);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute() */, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		XmlTextReader_t2516 * L_6 = (__this->___entity_3);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = (__this->___entityInsideAttribute_5);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XmlTextReader_CloseEntity_m11362(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->___insideAttribute_6 = 1;
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m11357 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_5);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlTextReader_t2516 * L_2 = (__this->___entity_3);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute() */, L_2);
		return L_3;
	}

IL_0022:
	{
		XmlTextReader_t2507 * L_4 = (__this->___source_4);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute() */, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		XmlTextReader_t2516 * L_6 = (__this->___entity_3);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = (__this->___entityInsideAttribute_5);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XmlTextReader_CloseEntity_m11362(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->___insideAttribute_6 = 1;
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m11358 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		__this->___insideAttribute_6 = 0;
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_5);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		XmlTextReader_t2516 * L_2 = (__this->___entity_3);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_2);
		if (!L_3)
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		XmlTextReader_CloseEntity_m11362(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		XmlTextReader_t2516 * L_4 = (__this->___entity_3);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		XmlTextReader_t2516 * L_5 = (__this->___entity_3);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlTextReader::Read() */, L_5);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		return 1;
	}

IL_0050:
	{
		int32_t L_7 = XmlTextReader_get_EntityHandling_m11341(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		XmlTextReader_CloseEntity_m11362(__this, /*hidden argument*/NULL);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlTextReader::Read() */, __this);
		return L_8;
	}

IL_0069:
	{
		return 1;
	}

IL_006b:
	{
		XmlTextReader_t2507 * L_9 = (__this->___source_4);
		NullCheck(L_9);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, L_9);
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		return 0;
	}

IL_007d:
	{
		int32_t L_11 = XmlTextReader_get_EntityHandling_m11341(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00a7;
		}
	}
	{
		XmlTextReader_t2507 * L_12 = (__this->___source_4);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_12);
		if ((!(((uint32_t)L_13) == ((uint32_t)5))))
		{
			goto IL_00a7;
		}
	}
	{
		VirtActionInvoker0::Invoke(45 /* System.Void System.Xml.XmlTextReader::ResolveEntity() */, __this);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlTextReader::Read() */, __this);
		return L_14;
	}

IL_00a7:
	{
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m11359 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_5);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		XmlTextReader_t2516 * L_2 = (__this->___entity_3);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		XmlTextReader_CloseEntity_m11362(__this, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_0031:
	{
		XmlTextReader_t2516 * L_4 = (__this->___entity_3);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlTextReader::Read() */, L_4);
		return 1;
	}

IL_003f:
	{
		XmlReader_t2374 * L_5 = XmlTextReader_get_Current_m11315(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_5);
		return L_6;
	}
}
// System.String System.Xml.XmlTextReader::ReadString()
extern "C" String_t* XmlTextReader_ReadString_m11360 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = XmlReader_ReadString_m11147(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_1_t2517_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextReader_t2516_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m11587_MethodInfo_var;
extern const MethodInfo* Stack_1_Contains_m11588_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m11589_MethodInfo_var;
extern "C" void XmlTextReader_ResolveEntity_m11361 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		Stack_1_t2517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4804);
		XmlTextReader_t2516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4686);
		Stack_1__ctor_m11587_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484831);
		Stack_1_Contains_m11588_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484832);
		Stack_1_Push_m11589_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484833);
		s_Il2CppMethodIntialized = true;
	}
	XmlTextReader_t2507 * V_0 = {0};
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(45 /* System.Void System.Xml.XmlTextReader::ResolveEntity() */, L_1);
		goto IL_011a;
	}

IL_001b:
	{
		XmlTextReader_t2507 * L_2 = (__this->___source_4);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0037;
		}
	}
	{
		InvalidOperationException_t1086 * L_4 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_4, (String_t*) &_stringLiteral2750, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0037:
	{
		V_0 = (XmlTextReader_t2507 *)NULL;
		XmlParserContext_t2497 * L_5 = XmlTextReader_get_ParserContext_m11328(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		DTDObjectModel_t2416 * L_6 = XmlParserContext_get_Dtd_m11070(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		XmlParserContext_t2497 * L_7 = XmlTextReader_get_ParserContext_m11328(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		DTDObjectModel_t2416 * L_8 = XmlParserContext_get_Dtd_m11070(L_7, /*hidden argument*/NULL);
		XmlTextReader_t2507 * L_9 = (__this->___source_4);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Mono.Xml2.XmlTextReader::get_Name() */, L_9);
		XmlParserContext_t2497 * L_11 = XmlTextReader_get_ParserContext_m11328(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		XmlTextReader_t2507 * L_12 = DTDObjectModel_GenerateEntityContentReader_m10469(L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_006b:
	{
		XmlTextReader_t2507 * L_13 = V_0;
		if (L_13)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlTextReader::get_BaseURI() */, __this);
		XmlTextReader_t2507 * L_15 = (__this->___source_4);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Mono.Xml2.XmlTextReader::get_Name() */, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2751, L_16, /*hidden argument*/NULL);
		XmlException_t2474 * L_18 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10909(L_18, __this, L_14, L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0093:
	{
		Stack_1_t2517 * L_19 = (__this->___entityNameStack_7);
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		Stack_1_t2517 * L_20 = (Stack_1_t2517 *)il2cpp_codegen_object_new (Stack_1_t2517_il2cpp_TypeInfo_var);
		Stack_1__ctor_m11587(L_20, /*hidden argument*/Stack_1__ctor_m11587_MethodInfo_var);
		__this->___entityNameStack_7 = L_20;
		goto IL_00da;
	}

IL_00ae:
	{
		Stack_1_t2517 * L_21 = (__this->___entityNameStack_7);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		NullCheck(L_21);
		bool L_23 = Stack_1_Contains_m11588(L_21, L_22, /*hidden argument*/Stack_1_Contains_m11588_MethodInfo_var);
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2752, L_24, /*hidden argument*/NULL);
		XmlException_t2474 * L_26 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_26, L_25, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_00da:
	{
		Stack_1_t2517 * L_27 = (__this->___entityNameStack_7);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		NullCheck(L_27);
		Stack_1_Push_m11589(L_27, L_28, /*hidden argument*/Stack_1_Push_m11589_MethodInfo_var);
		XmlTextReader_t2507 * L_29 = V_0;
		bool L_30 = (__this->___insideAttribute_6);
		XmlTextReader_t2516 * L_31 = (XmlTextReader_t2516 *)il2cpp_codegen_object_new (XmlTextReader_t2516_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m11313(L_31, L_29, L_30, /*hidden argument*/NULL);
		__this->___entity_3 = L_31;
		XmlTextReader_t2516 * L_32 = (__this->___entity_3);
		Stack_1_t2517 * L_33 = (__this->___entityNameStack_7);
		NullCheck(L_32);
		L_32->___entityNameStack_7 = L_33;
		XmlTextReader_t2516 * L_34 = (__this->___entity_3);
		NullCheck(L_34);
		XmlTextReader_CopyProperties_m11340(L_34, __this, /*hidden argument*/NULL);
	}

IL_011a:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern const MethodInfo* Stack_1_Pop_m11590_MethodInfo_var;
extern "C" void XmlTextReader_CloseEntity_m11362 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_1_Pop_m11590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484834);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(25 /* System.Void System.Xml.XmlTextReader::Close() */, L_0);
		__this->___entity_3 = (XmlTextReader_t2516 *)NULL;
		Stack_1_t2517 * L_1 = (__this->___entityNameStack_7);
		NullCheck(L_1);
		Stack_1_Pop_m11590(L_1, /*hidden argument*/Stack_1_Pop_m11590_MethodInfo_var);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m11363 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	{
		XmlReader_Skip_m11148(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern const MethodInfo* Stack_1_Pop_m11590_MethodInfo_var;
extern "C" TextReader_t2480 * XmlTextReader_GetRemainder_m11364 (XmlTextReader_t2516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_1_Pop_m11590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484834);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlTextReader_t2516 * L_0 = (__this->___entity_3);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		XmlTextReader_t2516 * L_1 = (__this->___entity_3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(25 /* System.Void System.Xml.XmlTextReader::Close() */, L_1);
		__this->___entity_3 = (XmlTextReader_t2516 *)NULL;
		Stack_1_t2517 * L_2 = (__this->___entityNameStack_7);
		NullCheck(L_2);
		Stack_1_Pop_m11590(L_2, /*hidden argument*/Stack_1_Pop_m11590_MethodInfo_var);
	}

IL_0029:
	{
		XmlTextReader_t2507 * L_3 = (__this->___source_4);
		NullCheck(L_3);
		TextReader_t2480 * L_4 = XmlTextReader_GetRemainder_m11234(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Xml.XmlTextWriter/XmlNodeInfo
#include "System_Xml_System_Xml_XmlTextWriter_XmlNodeInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlTextWriter/XmlNodeInfo
#include "System_Xml_System_Xml_XmlTextWriter_XmlNodeInfoMethodDeclarations.h"



// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
extern "C" void XmlNodeInfo__ctor_m11365 (XmlNodeInfo_t2518 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlTextWriter/StringUtil
#include "System_Xml_System_Xml_XmlTextWriter_StringUtil.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlTextWriter/StringUtil
#include "System_Xml_System_Xml_XmlTextWriter_StringUtilMethodDeclarations.h"

// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"


// System.Void System.Xml.XmlTextWriter/StringUtil::.cctor()
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* StringUtil_t2519_il2cpp_TypeInfo_var;
extern "C" void StringUtil__cctor_m11366 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		StringUtil_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4805);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_0 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		((StringUtil_t2519_StaticFields*)StringUtil_t2519_il2cpp_TypeInfo_var->static_fields)->___cul_0 = L_0;
		CultureInfo_t1331 * L_1 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		CompareInfo_t1356 * L_2 = (CompareInfo_t1356 *)VirtFuncInvoker0< CompareInfo_t1356 * >::Invoke(9 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_1);
		((StringUtil_t2519_StaticFields*)StringUtil_t2519_il2cpp_TypeInfo_var->static_fields)->___cmp_1 = L_2;
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern TypeInfo* StringUtil_t2519_il2cpp_TypeInfo_var;
extern "C" int32_t StringUtil_IndexOf_m11367 (Object_t * __this /* static, unused */, String_t* ___src, String_t* ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringUtil_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4805);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t2519_il2cpp_TypeInfo_var);
		CompareInfo_t1356 * L_0 = ((StringUtil_t2519_StaticFields*)StringUtil_t2519_il2cpp_TypeInfo_var->static_fields)->___cmp_1;
		String_t* L_1 = ___src;
		String_t* L_2 = ___target;
		NullCheck(L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(9 /* System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern TypeInfo* StringUtil_t2519_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* StringUtil_Format_m11368 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t21* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringUtil_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4805);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t2519_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_0 = ((StringUtil_t2519_StaticFields*)StringUtil_t2519_il2cpp_TypeInfo_var->static_fields)->___cul_0;
		String_t* L_1 = ___format;
		ObjectU5BU5D_t21* L_2 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m6657(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Xml.XmlTextWriter/XmlDeclState
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclState.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlTextWriter/XmlDeclState
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Xml.Formatting
#include "System_Xml_System_Xml_Formatting.h"
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"
// System.Xml.NewLineHandling
#include "System_Xml_System_Xml_NewLineHandling.h"
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriter.h"
// <PrivateImplementationDetails>
#include "System_Xml_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Xml.NamespaceHandling
#include "System_Xml_System_Xml_NamespaceHandling.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriterMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "System_Xml_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern TypeInfo* XmlNodeInfoU5BU5D_t2523_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_t2442_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t1188_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter__ctor_m11369 (XmlTextWriter_t2524 * __this, TextWriter_t2521 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNodeInfoU5BU5D_t2523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4806);
		Stack_t2442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4742);
		ArrayList_t1188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2623);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___close_output_stream_11 = 1;
		__this->___namespaces_13 = 1;
		__this->___newline_handling_16 = 2;
		__this->___elements_22 = ((XmlNodeInfoU5BU5D_t2523*)SZArrayNew(XmlNodeInfoU5BU5D_t2523_il2cpp_TypeInfo_var, ((int32_t)10)));
		Stack_t2442 * L_0 = (Stack_t2442 *)il2cpp_codegen_object_new (Stack_t2442_il2cpp_TypeInfo_var);
		Stack__ctor_m11522(L_0, /*hidden argument*/NULL);
		__this->___new_local_namespaces_23 = L_0;
		ArrayList_t1188 * L_1 = (ArrayList_t1188 *)il2cpp_codegen_object_new (ArrayList_t1188_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6571(L_1, /*hidden argument*/NULL);
		__this->___explicit_nsdecls_24 = L_1;
		__this->___indent_count_27 = 2;
		__this->___indent_char_28 = ((int32_t)32);
		__this->___indent_string_29 = (String_t*) &_stringLiteral336;
		__this->___quote_char_32 = ((int32_t)34);
		XmlWriter__ctor_m11429(__this, /*hidden argument*/NULL);
		TextWriter_t2521 * L_2 = ___writer;
		if (L_2)
		{
			goto IL_0071;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*) &_stringLiteral2753, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0071:
	{
		TextWriter_t2521 * L_4 = ___writer;
		NullCheck(L_4);
		Encoding_t602 * L_5 = (Encoding_t602 *)VirtFuncInvoker0< Encoding_t602 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_4);
		__this->___ignore_encoding_12 = ((((Object_t*)(Encoding_t602 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		TextWriter_t2521 * L_6 = ___writer;
		XmlTextWriter_Initialize_m11371(__this, L_6, /*hidden argument*/NULL);
		__this->___allow_doc_fragment_10 = 1;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.cctor()
extern TypeInfo* UTF8Encoding_t2557_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t2524_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter__cctor_m11370 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UTF8Encoding_t2557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4778);
		XmlTextWriter_t2524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4710);
		s_Il2CppMethodIntialized = true;
	}
	{
		UTF8Encoding_t2557 * L_0 = (UTF8Encoding_t2557 *)il2cpp_codegen_object_new (UTF8Encoding_t2557_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m11576(L_0, 0, 0, /*hidden argument*/NULL);
		((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___unmarked_utf8encoding_1 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* NameTable_t2448_il2cpp_TypeInfo_var;
extern TypeInfo* StreamWriter_t601_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNamespaceManager_t2485_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t2524_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t2534____U24U24fieldU2D43_5_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t2534____U24U24fieldU2D44_6_FieldInfo_var;
extern "C" void XmlTextWriter_Initialize_m11371 (XmlTextWriter_t2524 * __this, TextWriter_t2521 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		NameTable_t2448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4616);
		StreamWriter_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		XmlNamespaceManager_t2485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4784);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		XmlTextWriter_t2524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4710);
		U3CPrivateImplementationDetailsU3E_t2534____U24U24fieldU2D43_5_FieldInfo_var = il2cpp_codegen_field_info_from_index(4612, 5);
		U3CPrivateImplementationDetailsU3E_t2534____U24U24fieldU2D44_6_FieldInfo_var = il2cpp_codegen_field_info_from_index(4612, 6);
		s_Il2CppMethodIntialized = true;
	}
	XmlNameTable_t2314 * V_0 = {0};
	CharU5BU5D_t646* G_B7_0 = {0};
	{
		TextWriter_t2521 * L_0 = ___writer;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral2753, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		NameTable_t2448 * L_2 = (NameTable_t2448 *)il2cpp_codegen_object_new (NameTable_t2448_il2cpp_TypeInfo_var);
		NameTable__ctor_m10627(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		TextWriter_t2521 * L_3 = ___writer;
		__this->___writer_6 = L_3;
		TextWriter_t2521 * L_4 = ___writer;
		if (!((StreamWriter_t601 *)IsInst(L_4, StreamWriter_t601_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		TextWriter_t2521 * L_5 = ___writer;
		NullCheck(((StreamWriter_t601 *)Castclass(L_5, StreamWriter_t601_il2cpp_TypeInfo_var)));
		Stream_t1271 * L_6 = (Stream_t1271 *)VirtFuncInvoker0< Stream_t1271 * >::Invoke(20 /* System.IO.Stream System.IO.StreamWriter::get_BaseStream() */, ((StreamWriter_t601 *)Castclass(L_5, StreamWriter_t601_il2cpp_TypeInfo_var)));
		__this->___base_stream_4 = L_6;
	}

IL_003a:
	{
		TextWriter_t2521 * L_7 = ___writer;
		__this->___source_5 = L_7;
		XmlNameTable_t2314 * L_8 = V_0;
		XmlNamespaceManager_t2485 * L_9 = (XmlNamespaceManager_t2485 *)il2cpp_codegen_object_new (XmlNamespaceManager_t2485_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m10982(L_9, L_8, /*hidden argument*/NULL);
		__this->___nsmanager_20 = L_9;
		TextWriter_t2521 * L_10 = ___writer;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.IO.TextWriter::get_NewLine() */, L_10);
		__this->___newline_30 = L_11;
		int32_t L_12 = (__this->___newline_handling_16);
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t646* L_13 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, 5));
		RuntimeHelpers_InitializeArray_m2633(NULL /*static, unused*/, (Array_t *)(Array_t *)L_13, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t2534____U24U24fieldU2D43_5_FieldInfo_var), /*hidden argument*/NULL);
		G_B7_0 = L_13;
		goto IL_0090;
	}

IL_007b:
	{
		CharU5BU5D_t646* L_14 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, 3));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 0)) = (uint16_t)((int32_t)38);
		CharU5BU5D_t646* L_15 = L_14;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, 1)) = (uint16_t)((int32_t)60);
		CharU5BU5D_t646* L_16 = L_15;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_16, 2)) = (uint16_t)((int32_t)62);
		G_B7_0 = L_16;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___escaped_text_chars_2 = G_B7_0;
		CharU5BU5D_t646* L_17 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, 6));
		RuntimeHelpers_InitializeArray_m2633(NULL /*static, unused*/, (Array_t *)(Array_t *)L_17, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t2534____U24U24fieldU2D44_6_FieldInfo_var), /*hidden argument*/NULL);
		((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___escaped_attr_chars_3 = L_17;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C" void XmlTextWriter_set_Formatting_m11372 (XmlTextWriter_t2524 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___indent_26 = ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		return;
	}
}
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C" String_t* XmlTextWriter_get_XmlLang_m11373 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___open_count_21);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_t2523* L_1 = (__this->___elements_22);
		int32_t L_2 = (__this->___open_count_21);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = ((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_1, L_3))->___XmlLang_5);
		G_B3_0 = L_4;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C" int32_t XmlTextWriter_get_XmlSpace_m11374 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___open_count_21);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_t2523* L_1 = (__this->___elements_22);
		int32_t L_2 = (__this->___open_count_21);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_1, L_3)));
		int32_t L_4 = ((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_1, L_3))->___XmlSpace_6);
		G_B3_0 = ((int32_t)(L_4));
	}

IL_0025:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Xml.WriteState System.Xml.XmlTextWriter::get_WriteState()
extern "C" int32_t XmlTextWriter_get_WriteState_m11375 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_18);
		return L_0;
	}
}
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextWriter_LookupPrefix_m11376 (XmlTextWriter_t2524 * __this, String_t* ___namespaceUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___namespaceUri;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Equality_m2344(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0016:
	{
		Exception_t468 * L_4 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2754, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		String_t* L_5 = ___namespaceUri;
		XmlNamespaceManager_t2485 * L_6 = (__this->___nsmanager_20);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m2344(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_9;
	}

IL_003e:
	{
		XmlNamespaceManager_t2485 * L_10 = (__this->___nsmanager_20);
		String_t* L_11 = ___namespaceUri;
		NullCheck(L_10);
		String_t* L_12 = XmlNamespaceManager_LookupPrefixExclusive_m10995(L_10, L_11, 0, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void System.Xml.XmlTextWriter::Close()
extern "C" void XmlTextWriter_Close_m11377 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_18);
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___state_18);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_001e;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_001e:
	{
		goto IL_0029;
	}

IL_0023:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlTextWriter::WriteEndElement() */, __this);
	}

IL_0029:
	{
		int32_t L_2 = (__this->___open_count_21);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0035:
	{
		bool L_3 = (__this->___close_output_stream_11);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		TextWriter_t2521 * L_4 = (__this->___writer_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextWriter::Close() */, L_4);
		goto IL_005b;
	}

IL_0050:
	{
		TextWriter_t2521 * L_5 = (__this->___writer_6);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_5);
	}

IL_005b:
	{
		__this->___state_18 = 5;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Flush()
extern "C" void XmlTextWriter_Flush_m11378 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		TextWriter_t2521 * L_0 = (__this->___writer_6);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_0);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocument()
extern "C" void XmlTextWriter_WriteStartDocument_m11379 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteStartDocumentCore_m11380(__this, 0, 0, /*hidden argument*/NULL);
		__this->___is_document_entity_17 = 1;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_WriteStartDocumentCore_m11380 (XmlTextWriter_t2524 * __this, bool ___outputStd, bool ___standalone, const MethodInfo* method)
{
	int32_t V_0 = {0};
	TextWriter_t2521 * G_B11_0 = {0};
	TextWriter_t2521 * G_B10_0 = {0};
	String_t* G_B12_0 = {0};
	TextWriter_t2521 * G_B12_1 = {0};
	{
		int32_t L_0 = (__this->___state_18);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t468 * L_1 = XmlTextWriter_StateError_m11414(__this, (String_t*) &_stringLiteral2755, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		int32_t L_2 = (__this->___xmldecl_state_14);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0037;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0044;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0044;
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		Exception_t468 * L_4 = XmlTextWriter_InvalidOperation_m11413(__this, (String_t*) &_stringLiteral2756, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0044:
	{
		__this->___state_18 = 1;
		TextWriter_t2521 * L_5 = (__this->___writer_6);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, (String_t*) &_stringLiteral2757);
		TextWriter_t2521 * L_6 = (__this->___writer_6);
		uint16_t L_7 = (__this->___quote_char_32);
		NullCheck(L_6);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, L_7);
		TextWriter_t2521 * L_8 = (__this->___writer_6);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, (String_t*) &_stringLiteral202);
		TextWriter_t2521 * L_9 = (__this->___writer_6);
		uint16_t L_10 = (__this->___quote_char_32);
		NullCheck(L_9);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, L_10);
		bool L_11 = (__this->___ignore_encoding_12);
		if (L_11)
		{
			goto IL_00e5;
		}
	}
	{
		TextWriter_t2521 * L_12 = (__this->___writer_6);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, (String_t*) &_stringLiteral2758);
		TextWriter_t2521 * L_13 = (__this->___writer_6);
		uint16_t L_14 = (__this->___quote_char_32);
		NullCheck(L_13);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t2521 * L_15 = (__this->___writer_6);
		TextWriter_t2521 * L_16 = (__this->___writer_6);
		NullCheck(L_16);
		Encoding_t602 * L_17 = (Encoding_t602 *)VirtFuncInvoker0< Encoding_t602 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_16);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Text.Encoding::get_WebName() */, L_17);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_18);
		TextWriter_t2521 * L_19 = (__this->___writer_6);
		uint16_t L_20 = (__this->___quote_char_32);
		NullCheck(L_19);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, L_20);
	}

IL_00e5:
	{
		bool L_21 = ___outputStd;
		if (!L_21)
		{
			goto IL_013d;
		}
	}
	{
		TextWriter_t2521 * L_22 = (__this->___writer_6);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, (String_t*) &_stringLiteral2759);
		TextWriter_t2521 * L_23 = (__this->___writer_6);
		uint16_t L_24 = (__this->___quote_char_32);
		NullCheck(L_23);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_23, L_24);
		TextWriter_t2521 * L_25 = (__this->___writer_6);
		bool L_26 = ___standalone;
		G_B10_0 = L_25;
		if (!L_26)
		{
			G_B11_0 = L_25;
			goto IL_0122;
		}
	}
	{
		G_B12_0 = (String_t*) &_stringLiteral2210;
		G_B12_1 = G_B10_0;
		goto IL_0127;
	}

IL_0122:
	{
		G_B12_0 = (String_t*) &_stringLiteral951;
		G_B12_1 = G_B11_0;
	}

IL_0127:
	{
		NullCheck(G_B12_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B12_1, G_B12_0);
		TextWriter_t2521 * L_27 = (__this->___writer_6);
		uint16_t L_28 = (__this->___quote_char_32);
		NullCheck(L_27);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, L_28);
	}

IL_013d:
	{
		TextWriter_t2521 * L_29 = (__this->___writer_6);
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_29, (String_t*) &_stringLiteral2520);
		__this->___xmldecl_state_14 = 1;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteDocType_m11381 (XmlTextWriter_t2524 * __this, String_t* ___name, String_t* ___pubid, String_t* ___sysid, String_t* ___subset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t468 * L_1 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral1722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m10688(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t468 * L_4 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral1722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		int32_t L_5 = (__this->___node_state_19);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		Exception_t468 * L_6 = XmlTextWriter_StateError_m11414(__this, (String_t*) &_stringLiteral2760, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0040:
	{
		__this->___node_state_19 = ((int32_t)10);
		int32_t L_7 = (__this->___xmldecl_state_14);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m11404(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		XmlTextWriter_WriteIndent_m11400(__this, /*hidden argument*/NULL);
		TextWriter_t2521 * L_8 = (__this->___writer_6);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, (String_t*) &_stringLiteral2761);
		TextWriter_t2521 * L_9 = (__this->___writer_6);
		String_t* L_10 = ___name;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
		String_t* L_11 = ___pubid;
		if (!L_11)
		{
			goto IL_0106;
		}
	}
	{
		TextWriter_t2521 * L_12 = (__this->___writer_6);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, (String_t*) &_stringLiteral2762);
		TextWriter_t2521 * L_13 = (__this->___writer_6);
		uint16_t L_14 = (__this->___quote_char_32);
		NullCheck(L_13);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t2521 * L_15 = (__this->___writer_6);
		String_t* L_16 = ___pubid;
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t2521 * L_17 = (__this->___writer_6);
		uint16_t L_18 = (__this->___quote_char_32);
		NullCheck(L_17);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, L_18);
		TextWriter_t2521 * L_19 = (__this->___writer_6);
		NullCheck(L_19);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, ((int32_t)32));
		TextWriter_t2521 * L_20 = (__this->___writer_6);
		uint16_t L_21 = (__this->___quote_char_32);
		NullCheck(L_20);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_20, L_21);
		String_t* L_22 = ___sysid;
		if (!L_22)
		{
			goto IL_00f0;
		}
	}
	{
		TextWriter_t2521 * L_23 = (__this->___writer_6);
		String_t* L_24 = ___sysid;
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_24);
	}

IL_00f0:
	{
		TextWriter_t2521 * L_25 = (__this->___writer_6);
		uint16_t L_26 = (__this->___quote_char_32);
		NullCheck(L_25);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_25, L_26);
		goto IL_014a;
	}

IL_0106:
	{
		String_t* L_27 = ___sysid;
		if (!L_27)
		{
			goto IL_014a;
		}
	}
	{
		TextWriter_t2521 * L_28 = (__this->___writer_6);
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, (String_t*) &_stringLiteral2763);
		TextWriter_t2521 * L_29 = (__this->___writer_6);
		uint16_t L_30 = (__this->___quote_char_32);
		NullCheck(L_29);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_29, L_30);
		TextWriter_t2521 * L_31 = (__this->___writer_6);
		String_t* L_32 = ___sysid;
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_31, L_32);
		TextWriter_t2521 * L_33 = (__this->___writer_6);
		uint16_t L_34 = (__this->___quote_char_32);
		NullCheck(L_33);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_33, L_34);
	}

IL_014a:
	{
		String_t* L_35 = ___subset;
		if (!L_35)
		{
			goto IL_017e;
		}
	}
	{
		TextWriter_t2521 * L_36 = (__this->___writer_6);
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, (String_t*) &_stringLiteral887);
		TextWriter_t2521 * L_37 = (__this->___writer_6);
		String_t* L_38 = ___subset;
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, L_38);
		TextWriter_t2521 * L_39 = (__this->___writer_6);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_39, (String_t*) &_stringLiteral559);
	}

IL_017e:
	{
		TextWriter_t2521 * L_40 = (__this->___writer_6);
		NullCheck(L_40);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)62));
		__this->___state_18 = 1;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeInfoU5BU5D_t2523_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeInfo_t2518_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteStartElement_m11382 (XmlTextWriter_t2524 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		XmlNodeInfoU5BU5D_t2523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4806);
		XmlNodeInfo_t2518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4807);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	XmlNodeInfoU5BU5D_t2523* V_1 = {0};
	XmlNodeInfo_t2518 * V_2 = {0};
	String_t* V_3 = {0};
	{
		int32_t L_0 = (__this->___state_18);
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = (__this->___state_18);
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t468 * L_2 = XmlTextWriter_StateError_m11414(__this, (String_t*) &_stringLiteral2764, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0024:
	{
		__this->___node_state_19 = 1;
		String_t* L_3 = ___prefix;
		V_0 = ((((Object_t*)(String_t*)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		String_t* L_4 = ___prefix;
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___prefix = L_5;
	}

IL_003d:
	{
		bool L_6 = (__this->___namespaces_13);
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_7 = ___namespaceUri;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_8 = ___namespaceUri;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2782(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		Exception_t468 * L_10 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2765, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0066:
	{
		bool L_11 = (__this->___namespaces_13);
		if (L_11)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_12 = ___prefix;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m2782(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		Exception_t468 * L_14 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0089:
	{
		String_t* L_15 = ___prefix;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m2782(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_17 = ___namespaceUri;
		if (L_17)
		{
			goto IL_00c7;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_18 = (__this->___nsmanager_20);
		String_t* L_19 = ___prefix;
		NullCheck(L_18);
		String_t* L_20 = XmlNamespaceManager_LookupNamespace_m10993(L_18, L_19, 0, /*hidden argument*/NULL);
		___namespaceUri = L_20;
		String_t* L_21 = ___namespaceUri;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_22 = ___namespaceUri;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m2782(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00c7;
		}
	}

IL_00bb:
	{
		Exception_t468 * L_24 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2767, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00c7:
	{
		bool L_25 = (__this->___namespaces_13);
		if (!L_25)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_26 = ___prefix;
		if (!L_26)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_27 = ___prefix;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m2782(L_27, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)3))))
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_29 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Inequality_m3147(NULL /*static, unused*/, L_29, (String_t*) &_stringLiteral2527, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_31 = ___prefix;
		NullCheck(L_31);
		uint16_t L_32 = String_get_Chars_m2787(L_31, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)120))))
		{
			goto IL_0110;
		}
	}
	{
		String_t* L_33 = ___prefix;
		NullCheck(L_33);
		uint16_t L_34 = String_get_Chars_m2787(L_33, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0153;
		}
	}

IL_0110:
	{
		String_t* L_35 = ___prefix;
		NullCheck(L_35);
		uint16_t L_36 = String_get_Chars_m2787(L_35, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)109))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_37 = ___prefix;
		NullCheck(L_37);
		uint16_t L_38 = String_get_Chars_m2787(L_37, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0153;
		}
	}

IL_012c:
	{
		String_t* L_39 = ___prefix;
		NullCheck(L_39);
		uint16_t L_40 = String_get_Chars_m2787(L_39, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)108))))
		{
			goto IL_0148;
		}
	}
	{
		String_t* L_41 = ___prefix;
		NullCheck(L_41);
		uint16_t L_42 = String_get_Chars_m2787(L_41, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_0153;
		}
	}

IL_0148:
	{
		ArgumentException_t1126 * L_43 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_43, (String_t*) &_stringLiteral2768, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_43);
	}

IL_0153:
	{
		int32_t L_44 = (__this->___xmldecl_state_14);
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m11404(__this, /*hidden argument*/NULL);
	}

IL_0165:
	{
		int32_t L_45 = (__this->___state_18);
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_0177;
		}
	}
	{
		XmlTextWriter_CloseStartElement_m11383(__this, /*hidden argument*/NULL);
	}

IL_0177:
	{
		int32_t L_46 = (__this->___open_count_21);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_47 = (__this->___elements_22);
		int32_t L_48 = (__this->___open_count_21);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, ((int32_t)((int32_t)L_48-(int32_t)1)));
		int32_t L_49 = ((int32_t)((int32_t)L_48-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_47, L_49)));
		(*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_47, L_49))->___HasElements_4 = 1;
	}

IL_0198:
	{
		XmlNamespaceManager_t2485 * L_50 = (__this->___nsmanager_20);
		NullCheck(L_50);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_50);
		bool L_51 = (__this->___namespaces_13);
		if (!L_51)
		{
			goto IL_01e7;
		}
	}
	{
		String_t* L_52 = ___namespaceUri;
		if (!L_52)
		{
			goto IL_01e7;
		}
	}
	{
		bool L_53 = V_0;
		if (!L_53)
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_54 = ___namespaceUri;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m2782(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_56 = ___namespaceUri;
		String_t* L_57 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_56);
		___prefix = L_57;
	}

IL_01cf:
	{
		String_t* L_58 = ___prefix;
		if (!L_58)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_59 = ___namespaceUri;
		NullCheck(L_59);
		int32_t L_60 = String_get_Length_m2782(L_59, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_01e7;
		}
	}

IL_01e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___prefix = L_61;
	}

IL_01e7:
	{
		XmlTextWriter_WriteIndent_m11400(__this, /*hidden argument*/NULL);
		TextWriter_t2521 * L_62 = (__this->___writer_6);
		NullCheck(L_62);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_62, (String_t*) &_stringLiteral2682);
		String_t* L_63 = ___prefix;
		NullCheck(L_63);
		int32_t L_64 = String_get_Length_m2782(L_63, /*hidden argument*/NULL);
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_0222;
		}
	}
	{
		TextWriter_t2521 * L_65 = (__this->___writer_6);
		String_t* L_66 = ___prefix;
		NullCheck(L_65);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_65, L_66);
		TextWriter_t2521 * L_67 = (__this->___writer_6);
		NullCheck(L_67);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_67, ((int32_t)58));
	}

IL_0222:
	{
		TextWriter_t2521 * L_68 = (__this->___writer_6);
		String_t* L_69 = ___localName;
		NullCheck(L_68);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_68, L_69);
		XmlNodeInfoU5BU5D_t2523* L_70 = (__this->___elements_22);
		NullCheck(L_70);
		int32_t L_71 = (__this->___open_count_21);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_70)->max_length)))) == ((uint32_t)L_71))))
		{
			goto IL_0268;
		}
	}
	{
		int32_t L_72 = (__this->___open_count_21);
		V_1 = ((XmlNodeInfoU5BU5D_t2523*)SZArrayNew(XmlNodeInfoU5BU5D_t2523_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_72<<(int32_t)1))));
		XmlNodeInfoU5BU5D_t2523* L_73 = (__this->___elements_22);
		XmlNodeInfoU5BU5D_t2523* L_74 = V_1;
		int32_t L_75 = (__this->___open_count_21);
		Array_Copy_m11497(NULL /*static, unused*/, (Array_t *)(Array_t *)L_73, (Array_t *)(Array_t *)L_74, L_75, /*hidden argument*/NULL);
		XmlNodeInfoU5BU5D_t2523* L_76 = V_1;
		__this->___elements_22 = L_76;
	}

IL_0268:
	{
		XmlNodeInfoU5BU5D_t2523* L_77 = (__this->___elements_22);
		int32_t L_78 = (__this->___open_count_21);
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, L_78);
		int32_t L_79 = L_78;
		if ((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_77, L_79)))
		{
			goto IL_028c;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_80 = (__this->___elements_22);
		int32_t L_81 = (__this->___open_count_21);
		XmlNodeInfo_t2518 * L_82 = (XmlNodeInfo_t2518 *)il2cpp_codegen_object_new (XmlNodeInfo_t2518_il2cpp_TypeInfo_var);
		XmlNodeInfo__ctor_m11365(L_82, /*hidden argument*/NULL);
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, L_81);
		ArrayElementTypeCheck (L_80, L_82);
		*((XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_80, L_81)) = (XmlNodeInfo_t2518 *)L_82;
	}

IL_028c:
	{
		XmlNodeInfoU5BU5D_t2523* L_83 = (__this->___elements_22);
		int32_t L_84 = (__this->___open_count_21);
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, L_84);
		int32_t L_85 = L_84;
		V_2 = (*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_83, L_85));
		XmlNodeInfo_t2518 * L_86 = V_2;
		String_t* L_87 = ___prefix;
		NullCheck(L_86);
		L_86->___Prefix_0 = L_87;
		XmlNodeInfo_t2518 * L_88 = V_2;
		String_t* L_89 = ___localName;
		NullCheck(L_88);
		L_88->___LocalName_1 = L_89;
		XmlNodeInfo_t2518 * L_90 = V_2;
		String_t* L_91 = ___namespaceUri;
		NullCheck(L_90);
		L_90->___NS_2 = L_91;
		XmlNodeInfo_t2518 * L_92 = V_2;
		NullCheck(L_92);
		L_92->___HasSimple_3 = 0;
		XmlNodeInfo_t2518 * L_93 = V_2;
		NullCheck(L_93);
		L_93->___HasElements_4 = 0;
		XmlNodeInfo_t2518 * L_94 = V_2;
		String_t* L_95 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlTextWriter::get_XmlLang() */, __this);
		NullCheck(L_94);
		L_94->___XmlLang_5 = L_95;
		XmlNodeInfo_t2518 * L_96 = V_2;
		int32_t L_97 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace() */, __this);
		NullCheck(L_96);
		L_96->___XmlSpace_6 = L_97;
		int32_t L_98 = (__this->___open_count_21);
		__this->___open_count_21 = ((int32_t)((int32_t)L_98+(int32_t)1));
		bool L_99 = (__this->___namespaces_13);
		if (!L_99)
		{
			goto IL_0327;
		}
	}
	{
		String_t* L_100 = ___namespaceUri;
		if (!L_100)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_101 = (__this->___nsmanager_20);
		String_t* L_102 = ___prefix;
		NullCheck(L_101);
		String_t* L_103 = XmlNamespaceManager_LookupNamespace_m10993(L_101, L_102, 0, /*hidden argument*/NULL);
		V_3 = L_103;
		String_t* L_104 = V_3;
		String_t* L_105 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_106 = String_op_Inequality_m3147(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_107 = (__this->___nsmanager_20);
		String_t* L_108 = ___prefix;
		String_t* L_109 = ___namespaceUri;
		NullCheck(L_107);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_107, L_108, L_109);
		Stack_t2442 * L_110 = (__this->___new_local_namespaces_23);
		String_t* L_111 = ___prefix;
		NullCheck(L_110);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_110, L_111);
	}

IL_0327:
	{
		__this->___state_18 = 2;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C" void XmlTextWriter_CloseStartElement_m11383 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_CloseStartElementCore_m11384(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___state_18);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		TextWriter_t2521 * L_1 = (__this->___writer_6);
		NullCheck(L_1);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)62));
	}

IL_001f:
	{
		__this->___state_18 = 4;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_CloseStartElementCore_m11384 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	{
		int32_t L_0 = (__this->___state_18);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		Stack_t2442 * L_1 = (__this->___new_local_namespaces_23);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		ArrayList_t1188 * L_3 = (__this->___explicit_nsdecls_24);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ArrayList_t1188 * L_5 = (__this->___explicit_nsdecls_24);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(28 /* System.Void System.Collections.ArrayList::Clear() */, L_5);
	}

IL_003e:
	{
		return;
	}

IL_003f:
	{
		ArrayList_t1188 * L_6 = (__this->___explicit_nsdecls_24);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_0 = L_7;
		goto IL_00ba;
	}

IL_0050:
	{
		Stack_t2442 * L_8 = (__this->___new_local_namespaces_23);
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Stack::Pop() */, L_8);
		V_1 = ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var));
		V_2 = 0;
		V_3 = 0;
		goto IL_0091;
	}

IL_006a:
	{
		ArrayList_t1188 * L_10 = (__this->___explicit_nsdecls_24);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m2344(NULL /*static, unused*/, ((String_t*)Castclass(L_12, String_t_il2cpp_TypeInfo_var)), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		V_2 = 1;
		goto IL_00a2;
	}

IL_008d:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_16 = V_3;
		ArrayList_t1188 * L_17 = (__this->___explicit_nsdecls_24);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_006a;
		}
	}

IL_00a2:
	{
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00ba;
	}

IL_00ad:
	{
		ArrayList_t1188 * L_20 = (__this->___explicit_nsdecls_24);
		String_t* L_21 = V_1;
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00ba:
	{
		Stack_t2442 * L_22 = (__this->___new_local_namespaces_23);
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_22);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_24 = V_0;
		V_4 = L_24;
		goto IL_0180;
	}

IL_00d3:
	{
		ArrayList_t1188 * L_25 = (__this->___explicit_nsdecls_24);
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_25, L_26);
		V_5 = ((String_t*)Castclass(L_27, String_t_il2cpp_TypeInfo_var));
		XmlNamespaceManager_t2485 * L_28 = (__this->___nsmanager_20);
		String_t* L_29 = V_5;
		NullCheck(L_28);
		String_t* L_30 = XmlNamespaceManager_LookupNamespace_m10993(L_28, L_29, 0, /*hidden argument*/NULL);
		V_6 = L_30;
		String_t* L_31 = V_6;
		if (L_31)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_017a;
	}

IL_0103:
	{
		String_t* L_32 = V_5;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m2782(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		TextWriter_t2521 * L_34 = (__this->___writer_6);
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, (String_t*) &_stringLiteral2769);
		TextWriter_t2521 * L_35 = (__this->___writer_6);
		String_t* L_36 = V_5;
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_35, L_36);
		goto IL_0142;
	}

IL_0132:
	{
		TextWriter_t2521 * L_37 = (__this->___writer_6);
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, (String_t*) &_stringLiteral2770);
	}

IL_0142:
	{
		TextWriter_t2521 * L_38 = (__this->___writer_6);
		NullCheck(L_38);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_38, ((int32_t)61));
		TextWriter_t2521 * L_39 = (__this->___writer_6);
		uint16_t L_40 = (__this->___quote_char_32);
		NullCheck(L_39);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_39, L_40);
		String_t* L_41 = V_6;
		XmlTextWriter_WriteEscapedString_m11408(__this, L_41, 1, /*hidden argument*/NULL);
		TextWriter_t2521 * L_42 = (__this->___writer_6);
		uint16_t L_43 = (__this->___quote_char_32);
		NullCheck(L_42);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_42, L_43);
	}

IL_017a:
	{
		int32_t L_44 = V_4;
		V_4 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_0180:
	{
		int32_t L_45 = V_4;
		ArrayList_t1188 * L_46 = (__this->___explicit_nsdecls_24);
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00d3;
		}
	}
	{
		ArrayList_t1188 * L_48 = (__this->___explicit_nsdecls_24);
		NullCheck(L_48);
		VirtActionInvoker0::Invoke(28 /* System.Void System.Collections.ArrayList::Clear() */, L_48);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C" void XmlTextWriter_WriteEndElement_m11385 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteEndElementCore_m11387(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C" void XmlTextWriter_WriteFullEndElement_m11386 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteEndElementCore_m11387(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C" void XmlTextWriter_WriteEndElementCore_m11387 (XmlTextWriter_t2524 * __this, bool ___full, const MethodInfo* method)
{
	XmlNodeInfo_t2518 * V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___state_18);
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = (__this->___state_18);
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t468 * L_2 = XmlTextWriter_StateError_m11414(__this, (String_t*) &_stringLiteral2771, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0024:
	{
		int32_t L_3 = (__this->___open_count_21);
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		Exception_t468 * L_4 = XmlTextWriter_InvalidOperation_m11413(__this, (String_t*) &_stringLiteral2772, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003b:
	{
		XmlTextWriter_CloseStartElementCore_m11384(__this, /*hidden argument*/NULL);
		XmlNamespaceManager_t2485 * L_5 = (__this->___nsmanager_20);
		NullCheck(L_5);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_5);
		int32_t L_6 = (__this->___state_18);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		bool L_7 = ___full;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		TextWriter_t2521 * L_8 = (__this->___writer_6);
		NullCheck(L_8);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)62));
		goto IL_0081;
	}

IL_0071:
	{
		TextWriter_t2521 * L_9 = (__this->___writer_6);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, (String_t*) &_stringLiteral2773);
	}

IL_0081:
	{
		bool L_10 = ___full;
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_11 = (__this->___state_18);
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0099;
		}
	}

IL_0093:
	{
		XmlTextWriter_WriteIndentEndElement_m11401(__this, /*hidden argument*/NULL);
	}

IL_0099:
	{
		XmlNodeInfoU5BU5D_t2523* L_12 = (__this->___elements_22);
		int32_t L_13 = (__this->___open_count_21);
		int32_t L_14 = ((int32_t)((int32_t)L_13-(int32_t)1));
		V_1 = L_14;
		__this->___open_count_21 = L_14;
		int32_t L_15 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_15);
		int32_t L_16 = L_15;
		V_0 = (*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_12, L_16));
		bool L_17 = ___full;
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_18 = (__this->___state_18);
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_0121;
		}
	}

IL_00c4:
	{
		TextWriter_t2521 * L_19 = (__this->___writer_6);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, (String_t*) &_stringLiteral2774);
		XmlNodeInfo_t2518 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = (L_20->___Prefix_0);
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m2782(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		TextWriter_t2521 * L_23 = (__this->___writer_6);
		XmlNodeInfo_t2518 * L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25 = (L_24->___Prefix_0);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_25);
		TextWriter_t2521 * L_26 = (__this->___writer_6);
		NullCheck(L_26);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, ((int32_t)58));
	}

IL_0103:
	{
		TextWriter_t2521 * L_27 = (__this->___writer_6);
		XmlNodeInfo_t2518 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (L_28->___LocalName_1);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_27, L_29);
		TextWriter_t2521 * L_30 = (__this->___writer_6);
		NullCheck(L_30);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_30, ((int32_t)62));
	}

IL_0121:
	{
		__this->___state_18 = 4;
		int32_t L_31 = (__this->___open_count_21);
		if (L_31)
		{
			goto IL_013b;
		}
	}
	{
		__this->___node_state_19 = ((int32_t)15);
	}

IL_013b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringWriter_t2522_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteStartAttribute_m11388 (XmlTextWriter_t2524 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringWriter_t2522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4755);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	XmlTextWriter_t2524 * G_B52_0 = {0};
	XmlTextWriter_t2524 * G_B51_0 = {0};
	String_t* G_B53_0 = {0};
	XmlTextWriter_t2524 * G_B53_1 = {0};
	{
		int32_t L_0 = (__this->___state_18);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		int32_t L_1 = (__this->___state_18);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (__this->___state_18);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Exception_t468 * L_3 = XmlTextWriter_StateError_m11414(__this, (String_t*) &_stringLiteral2775, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0035:
	{
		String_t* L_4 = ___prefix;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___prefix = L_5;
	}

IL_0042:
	{
		V_0 = 0;
		String_t* L_6 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m2344(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral2403, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		V_0 = 1;
		String_t* L_8 = ___prefix;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2782(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_10 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Inequality_m3147(NULL /*static, unused*/, L_10, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		___prefix = (String_t*) &_stringLiteral2387;
	}

IL_0078:
	{
		goto IL_00ad;
	}

IL_007d:
	{
		String_t* L_12 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m2344(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00ab;
		}
	}
	{
		String_t* L_14 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m2344(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_16 = ___prefix;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m2782(L_16, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 0;
	}

IL_00a9:
	{
		G_B18_0 = G_B16_0;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B18_0 = 1;
	}

IL_00ac:
	{
		V_0 = G_B18_0;
	}

IL_00ad:
	{
		bool L_18 = (__this->___namespaces_13);
		if (!L_18)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_19 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m2344(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d4;
		}
	}
	{
		___namespaceUri = (String_t*) &_stringLiteral2527;
		goto IL_00f3;
	}

IL_00d4:
	{
		String_t* L_21 = ___namespaceUri;
		if (L_21)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_22 = V_0;
		if (!L_22)
		{
			goto IL_00ec;
		}
	}
	{
		___namespaceUri = (String_t*) &_stringLiteral2403;
		goto IL_00f3;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___namespaceUri = L_23;
	}

IL_00f3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		String_t* L_25 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m3147(NULL /*static, unused*/, L_25, (String_t*) &_stringLiteral2403, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2776, (String_t*) &_stringLiteral2403, /*hidden argument*/NULL);
		Exception_t468 * L_28 = XmlTextWriter_ArgumentError_m11412(__this, L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_011f:
	{
		String_t* L_29 = ___prefix;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m2782(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_31 = ___namespaceUri;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m2782(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0162;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_33 = (__this->___nsmanager_20);
		String_t* L_34 = ___prefix;
		NullCheck(L_33);
		String_t* L_35 = XmlNamespaceManager_LookupNamespace_m10993(L_33, L_34, 0, /*hidden argument*/NULL);
		___namespaceUri = L_35;
		String_t* L_36 = ___namespaceUri;
		if (!L_36)
		{
			goto IL_0156;
		}
	}
	{
		String_t* L_37 = ___namespaceUri;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m2782(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0162;
		}
	}

IL_0156:
	{
		Exception_t468 * L_39 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2767, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_39);
	}

IL_0162:
	{
		bool L_40 = V_0;
		if (L_40)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_41 = ___namespaceUri;
		NullCheck(L_41);
		int32_t L_42 = String_get_Length_m2782(L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_43 = ___prefix;
		String_t* L_44 = ___localName;
		String_t* L_45 = ___namespaceUri;
		String_t* L_46 = XmlTextWriter_DetermineAttributePrefix_m11389(__this, L_43, L_44, L_45, /*hidden argument*/NULL);
		___prefix = L_46;
	}

IL_017f:
	{
		bool L_47 = (__this->___indent_attributes_31);
		if (!L_47)
		{
			goto IL_0195;
		}
	}
	{
		XmlTextWriter_WriteIndentAttribute_m11402(__this, /*hidden argument*/NULL);
		goto IL_01ad;
	}

IL_0195:
	{
		int32_t L_48 = (__this->___state_18);
		if (!L_48)
		{
			goto IL_01ad;
		}
	}
	{
		TextWriter_t2521 * L_49 = (__this->___writer_6);
		NullCheck(L_49);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_49, ((int32_t)32));
	}

IL_01ad:
	{
		String_t* L_50 = ___prefix;
		NullCheck(L_50);
		int32_t L_51 = String_get_Length_m2782(L_50, /*hidden argument*/NULL);
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_01d2;
		}
	}
	{
		TextWriter_t2521 * L_52 = (__this->___writer_6);
		String_t* L_53 = ___prefix;
		NullCheck(L_52);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_52, L_53);
		TextWriter_t2521 * L_54 = (__this->___writer_6);
		NullCheck(L_54);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_54, ((int32_t)58));
	}

IL_01d2:
	{
		TextWriter_t2521 * L_55 = (__this->___writer_6);
		String_t* L_56 = ___localName;
		NullCheck(L_55);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_55, L_56);
		TextWriter_t2521 * L_57 = (__this->___writer_6);
		NullCheck(L_57);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_57, ((int32_t)61));
		TextWriter_t2521 * L_58 = (__this->___writer_6);
		uint16_t L_59 = (__this->___quote_char_32);
		NullCheck(L_58);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_58, L_59);
		bool L_60 = V_0;
		if (L_60)
		{
			goto IL_0212;
		}
	}
	{
		String_t* L_61 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_62 = String_op_Equality_m2344(NULL /*static, unused*/, L_61, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_028b;
		}
	}

IL_0212:
	{
		StringWriter_t2522 * L_63 = (__this->___preserver_7);
		if (L_63)
		{
			goto IL_022d;
		}
	}
	{
		StringWriter_t2522 * L_64 = (StringWriter_t2522 *)il2cpp_codegen_object_new (StringWriter_t2522_il2cpp_TypeInfo_var);
		StringWriter__ctor_m11526(L_64, /*hidden argument*/NULL);
		__this->___preserver_7 = L_64;
		goto IL_023e;
	}

IL_022d:
	{
		StringWriter_t2522 * L_65 = (__this->___preserver_7);
		NullCheck(L_65);
		StringBuilder_t619 * L_66 = (StringBuilder_t619 *)VirtFuncInvoker0< StringBuilder_t619 * >::Invoke(19 /* System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder() */, L_65);
		NullCheck(L_66);
		StringBuilder_set_Length_m11520(L_66, 0, /*hidden argument*/NULL);
	}

IL_023e:
	{
		StringWriter_t2522 * L_67 = (__this->___preserver_7);
		__this->___writer_6 = L_67;
		bool L_68 = V_0;
		if (L_68)
		{
			goto IL_0263;
		}
	}
	{
		__this->___is_preserved_xmlns_9 = 0;
		String_t* L_69 = ___localName;
		__this->___preserved_name_8 = L_69;
		goto IL_028b;
	}

IL_0263:
	{
		__this->___is_preserved_xmlns_9 = 1;
		String_t* L_70 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_71 = String_op_Equality_m2344(NULL /*static, unused*/, L_70, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		G_B51_0 = __this;
		if (!L_71)
		{
			G_B52_0 = __this;
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B53_0 = L_72;
		G_B53_1 = G_B51_0;
		goto IL_0286;
	}

IL_0285:
	{
		String_t* L_73 = ___localName;
		G_B53_0 = L_73;
		G_B53_1 = G_B52_0;
	}

IL_0286:
	{
		NullCheck(G_B53_1);
		G_B53_1->___preserved_name_8 = G_B53_0;
	}

IL_028b:
	{
		__this->___state_18 = 3;
		return;
	}
}
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextWriter_DetermineAttributePrefix_m11389 (XmlTextWriter_t2524 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___prefix;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2782(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = ___ns;
		String_t* L_3 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_2);
		___prefix = L_3;
		String_t* L_4 = ___prefix;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = ___prefix;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2782(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = ___prefix;
		return L_7;
	}

IL_002a:
	{
		V_0 = 1;
		goto IL_009a;
	}

IL_0031:
	{
		XmlNamespaceManager_t2485 * L_8 = (__this->___nsmanager_20);
		NullCheck(L_8);
		XmlNameTable_t2314 * L_9 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(6 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_8);
		String_t* L_10 = ___prefix;
		NullCheck(L_9);
		String_t* L_11 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_9, L_10);
		___prefix = L_11;
		XmlNamespaceManager_t2485 * L_12 = (__this->___nsmanager_20);
		String_t* L_13 = ___prefix;
		NullCheck(L_12);
		String_t* L_14 = XmlNamespaceManager_LookupNamespace_m10993(L_12, L_13, 1, /*hidden argument*/NULL);
		V_1 = L_14;
		String_t* L_15 = V_1;
		String_t* L_16 = ___ns;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m2344(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_18 = ___prefix;
		return L_18;
	}

IL_0060:
	{
		String_t* L_19 = V_1;
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_20 = (__this->___nsmanager_20);
		String_t* L_21 = ___prefix;
		String_t* L_22 = V_1;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_20, L_21, L_22);
		XmlNamespaceManager_t2485 * L_23 = (__this->___nsmanager_20);
		String_t* L_24 = ___prefix;
		NullCheck(L_23);
		String_t* L_25 = XmlNamespaceManager_LookupNamespace_m10993(L_23, L_24, 1, /*hidden argument*/NULL);
		String_t* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Inequality_m3147(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		V_0 = 1;
		XmlNamespaceManager_t2485 * L_28 = (__this->___nsmanager_20);
		String_t* L_29 = ___prefix;
		String_t* L_30 = V_1;
		NullCheck(L_28);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_28, L_29, L_30);
	}

IL_009a:
	{
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_32 = ___ns;
		String_t* L_33 = XmlTextWriter_MockupPrefix_m11390(__this, L_32, 1, /*hidden argument*/NULL);
		___prefix = L_33;
	}

IL_00aa:
	{
		Stack_t2442 * L_34 = (__this->___new_local_namespaces_23);
		String_t* L_35 = ___prefix;
		NullCheck(L_34);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_34, L_35);
		XmlNamespaceManager_t2485 * L_36 = (__this->___nsmanager_20);
		String_t* L_37 = ___prefix;
		String_t* L_38 = ___ns;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_36, L_37, L_38);
		String_t* L_39 = ___prefix;
		return L_39;
	}
}
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* StringUtil_t2519_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextWriter_MockupPrefix_m11390 (XmlTextWriter_t2524 * __this, String_t* ___ns, bool ___skipLookup, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringUtil_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4805);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	String_t* G_B3_0 = {0};
	{
		bool L_0 = ___skipLookup;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_1 = ___ns;
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_1);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2782(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0028:
	{
		V_1 = 1;
		goto IL_00b2;
	}

IL_002f:
	{
		ObjectU5BU5D_t21* L_7 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		int32_t L_8 = (__this->___open_count_21);
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_10;
		ObjectU5BU5D_t21* L_11 = L_7;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t2519_il2cpp_TypeInfo_var);
		String_t* L_15 = StringUtil_Format_m11368(NULL /*static, unused*/, (String_t*) &_stringLiteral2777, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		Stack_t2442 * L_16 = (__this->___new_local_namespaces_23);
		String_t* L_17 = V_0;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(13 /* System.Boolean System.Collections.Stack::Contains(System.Object) */, L_16, L_17);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00ae;
	}

IL_006d:
	{
		XmlNamespaceManager_t2485 * L_19 = (__this->___nsmanager_20);
		XmlNamespaceManager_t2485 * L_20 = (__this->___nsmanager_20);
		NullCheck(L_20);
		XmlNameTable_t2314 * L_21 = (XmlNameTable_t2314 *)VirtFuncInvoker0< XmlNameTable_t2314 * >::Invoke(6 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_20);
		String_t* L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_21, L_22);
		NullCheck(L_19);
		String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_19, L_23);
		if (!L_24)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00ae;
	}

IL_0093:
	{
		XmlNamespaceManager_t2485 * L_25 = (__this->___nsmanager_20);
		String_t* L_26 = V_0;
		String_t* L_27 = ___ns;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_25, L_26, L_27);
		Stack_t2442 * L_28 = (__this->___new_local_namespaces_23);
		String_t* L_29 = V_0;
		NullCheck(L_28);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_28, L_29);
		String_t* L_30 = V_0;
		return L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00b2:
	{
		goto IL_002f;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t2524_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t427_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3115_MethodInfo_var;
extern "C" void XmlTextWriter_WriteEndAttribute_m11391 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		XmlTextWriter_t2524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4710);
		Dictionary_2_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		Dictionary_2__ctor_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483838);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	Dictionary_2_t427 * V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	{
		int32_t L_0 = (__this->___state_18);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		Exception_t468 * L_1 = XmlTextWriter_StateError_m11414(__this, (String_t*) &_stringLiteral2778, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		TextWriter_t2521 * L_2 = (__this->___writer_6);
		StringWriter_t2522 * L_3 = (__this->___preserver_7);
		if ((!(((Object_t*)(TextWriter_t2521 *)L_2) == ((Object_t*)(StringWriter_t2522 *)L_3))))
		{
			goto IL_02e2;
		}
	}
	{
		TextWriter_t2521 * L_4 = (__this->___source_5);
		__this->___writer_6 = L_4;
		StringWriter_t2522 * L_5 = (__this->___preserver_7);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_5);
		V_0 = L_6;
		bool L_7 = (__this->___is_preserved_xmlns_9);
		if (!L_7)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_8 = (__this->___preserved_name_8);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2782(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m2782(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		Exception_t468 * L_12 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2779, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0074:
	{
		XmlNamespaceManager_t2485 * L_13 = (__this->___nsmanager_20);
		String_t* L_14 = (__this->___preserved_name_8);
		NullCheck(L_13);
		String_t* L_15 = XmlNamespaceManager_LookupNamespace_m10993(L_13, L_14, 0, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = (__this->___namespace_handling_25);
		if (!((int32_t)((int32_t)L_16&(int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_17 = V_1;
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Inequality_m3147(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}

IL_00a0:
	{
		ArrayList_t1188 * L_20 = (__this->___explicit_nsdecls_24);
		String_t* L_21 = (__this->___preserved_name_8);
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00b2:
	{
		int32_t L_22 = (__this->___open_count_21);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_018c;
		}
	}
	{
		bool L_23 = (__this->___v2_33);
		if (!L_23)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_24 = (__this->___elements_22);
		int32_t L_25 = (__this->___open_count_21);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)L_25-(int32_t)1)));
		int32_t L_26 = ((int32_t)((int32_t)L_25-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_24, L_26)));
		String_t* L_27 = ((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_24, L_26))->___Prefix_0);
		String_t* L_28 = (__this->___preserved_name_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m2344(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_30 = (__this->___elements_22);
		int32_t L_31 = (__this->___open_count_21);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)L_31-(int32_t)1)));
		int32_t L_32 = ((int32_t)((int32_t)L_31-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_30, L_32)));
		String_t* L_33 = ((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_30, L_32))->___NS_2);
		String_t* L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Inequality_m3147(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_36 = (__this->___preserved_name_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral2780, L_36, /*hidden argument*/NULL);
		XmlException_t2474 * L_38 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_38, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_0122:
	{
		XmlNodeInfoU5BU5D_t2523* L_39 = (__this->___elements_22);
		int32_t L_40 = (__this->___open_count_21);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)L_40-(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)L_40-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_39, L_41)));
		String_t* L_42 = ((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_39, L_41))->___NS_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_44 = String_op_Equality_m2344(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_016e;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_45 = (__this->___elements_22);
		int32_t L_46 = (__this->___open_count_21);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)L_46-(int32_t)1)));
		int32_t L_47 = ((int32_t)((int32_t)L_46-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_45, L_47)));
		String_t* L_48 = ((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_45, L_47))->___Prefix_0);
		String_t* L_49 = (__this->___preserved_name_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m2344(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_018c;
	}

IL_016e:
	{
		String_t* L_51 = V_1;
		String_t* L_52 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Inequality_m3147(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_018c;
		}
	}
	{
		XmlNamespaceManager_t2485 * L_54 = (__this->___nsmanager_20);
		String_t* L_55 = (__this->___preserved_name_8);
		String_t* L_56 = V_0;
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_54, L_55, L_56);
	}

IL_018c:
	{
		goto IL_02d6;
	}

IL_0191:
	{
		String_t* L_57 = (__this->___preserved_name_8);
		V_2 = L_57;
		String_t* L_58 = V_2;
		if (!L_58)
		{
			goto IL_02d6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		Dictionary_2_t427 * L_59 = ((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map54_35;
		if (L_59)
		{
			goto IL_01cd;
		}
	}
	{
		Dictionary_2_t427 * L_60 = (Dictionary_2_t427 *)il2cpp_codegen_object_new (Dictionary_2_t427_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3115(L_60, 2, /*hidden argument*/Dictionary_2__ctor_m3115_MethodInfo_var);
		V_3 = L_60;
		Dictionary_2_t427 * L_61 = V_3;
		NullCheck(L_61);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_61, (String_t*) &_stringLiteral2624, 0);
		Dictionary_2_t427 * L_62 = V_3;
		NullCheck(L_62);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_62, (String_t*) &_stringLiteral2622, 1);
		Dictionary_2_t427 * L_63 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map54_35 = L_63;
	}

IL_01cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		Dictionary_2_t427 * L_64 = ((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map54_35;
		String_t* L_65 = V_2;
		NullCheck(L_64);
		bool L_66 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_64, L_65, (&V_4));
		if (!L_66)
		{
			goto IL_02d6;
		}
	}
	{
		int32_t L_67 = V_4;
		if (!L_67)
		{
			goto IL_01f3;
		}
	}
	{
		int32_t L_68 = V_4;
		if ((((int32_t)L_68) == ((int32_t)1)))
		{
			goto IL_0219;
		}
	}
	{
		goto IL_02d6;
	}

IL_01f3:
	{
		int32_t L_69 = (__this->___open_count_21);
		if ((((int32_t)L_69) <= ((int32_t)0)))
		{
			goto IL_0214;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_70 = (__this->___elements_22);
		int32_t L_71 = (__this->___open_count_21);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)((int32_t)L_71-(int32_t)1)));
		int32_t L_72 = ((int32_t)((int32_t)L_71-(int32_t)1));
		String_t* L_73 = V_0;
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_70, L_72)));
		(*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_70, L_72))->___XmlLang_5 = L_73;
	}

IL_0214:
	{
		goto IL_02d6;
	}

IL_0219:
	{
		String_t* L_74 = V_0;
		V_5 = L_74;
		String_t* L_75 = V_5;
		if (!L_75)
		{
			goto IL_02c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		Dictionary_2_t427 * L_76 = ((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map53_34;
		if (L_76)
		{
			goto IL_0252;
		}
	}
	{
		Dictionary_2_t427 * L_77 = (Dictionary_2_t427 *)il2cpp_codegen_object_new (Dictionary_2_t427_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3115(L_77, 2, /*hidden argument*/Dictionary_2__ctor_m3115_MethodInfo_var);
		V_3 = L_77;
		Dictionary_2_t427 * L_78 = V_3;
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_78, (String_t*) &_stringLiteral859, 0);
		Dictionary_2_t427 * L_79 = V_3;
		NullCheck(L_79);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_79, (String_t*) &_stringLiteral2661, 1);
		Dictionary_2_t427 * L_80 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map53_34 = L_80;
	}

IL_0252:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		Dictionary_2_t427 * L_81 = ((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map53_34;
		String_t* L_82 = V_5;
		NullCheck(L_81);
		bool L_83 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_81, L_82, (&V_6));
		if (!L_83)
		{
			goto IL_02c5;
		}
	}
	{
		int32_t L_84 = V_6;
		if (!L_84)
		{
			goto IL_0279;
		}
	}
	{
		int32_t L_85 = V_6;
		if ((((int32_t)L_85) == ((int32_t)1)))
		{
			goto IL_029f;
		}
	}
	{
		goto IL_02c5;
	}

IL_0279:
	{
		int32_t L_86 = (__this->___open_count_21);
		if ((((int32_t)L_86) <= ((int32_t)0)))
		{
			goto IL_029a;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_87 = (__this->___elements_22);
		int32_t L_88 = (__this->___open_count_21);
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, ((int32_t)((int32_t)L_88-(int32_t)1)));
		int32_t L_89 = ((int32_t)((int32_t)L_88-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_87, L_89)));
		(*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_87, L_89))->___XmlSpace_6 = 1;
	}

IL_029a:
	{
		goto IL_02d1;
	}

IL_029f:
	{
		int32_t L_90 = (__this->___open_count_21);
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_02c0;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_91 = (__this->___elements_22);
		int32_t L_92 = (__this->___open_count_21);
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, ((int32_t)((int32_t)L_92-(int32_t)1)));
		int32_t L_93 = ((int32_t)((int32_t)L_92-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_91, L_93)));
		(*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_91, L_93))->___XmlSpace_6 = 2;
	}

IL_02c0:
	{
		goto IL_02d1;
	}

IL_02c5:
	{
		Exception_t468 * L_94 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2781, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_94);
	}

IL_02d1:
	{
		goto IL_02d6;
	}

IL_02d6:
	{
		TextWriter_t2521 * L_95 = (__this->___writer_6);
		String_t* L_96 = V_0;
		NullCheck(L_95);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_95, L_96);
	}

IL_02e2:
	{
		TextWriter_t2521 * L_97 = (__this->___writer_6);
		uint16_t L_98 = (__this->___quote_char_32);
		NullCheck(L_97);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_97, L_98);
		__this->___state_18 = 2;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern TypeInfo* StringUtil_t2519_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteComment_m11392 (XmlTextWriter_t2524 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringUtil_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4805);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t468 * L_1 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2782, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2782(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = ___text;
		String_t* L_5 = ___text;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2782(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		uint16_t L_7 = String_get_Chars_m2787(L_4, ((int32_t)((int32_t)L_6-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_003f;
		}
	}
	{
		Exception_t468 * L_8 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2783, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003f:
	{
		String_t* L_9 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t2519_il2cpp_TypeInfo_var);
		int32_t L_10 = StringUtil_IndexOf_m11367(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral2733, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		Exception_t468 * L_11 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2784, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005c:
	{
		int32_t L_12 = (__this->___state_18);
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_13 = (__this->___state_18);
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}

IL_0074:
	{
		XmlTextWriter_CloseStartElement_m11383(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
		XmlTextWriter_WriteIndent_m11400(__this, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_m11405(__this, (String_t*) &_stringLiteral2785, 0, 0, 0, /*hidden argument*/NULL);
		TextWriter_t2521 * L_14 = (__this->___writer_6);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_14, (String_t*) &_stringLiteral2786);
		TextWriter_t2521 * L_15 = (__this->___writer_6);
		String_t* L_16 = ___text;
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t2521 * L_17 = (__this->___writer_6);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_17, (String_t*) &_stringLiteral2787);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* StringUtil_t2519_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteProcessingInstruction_m11393 (XmlTextWriter_t2524 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		StringUtil_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4805);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t468 * L_1 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral1722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Exception_t468 * L_3 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2782, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		XmlTextWriter_WriteIndent_m11400(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_5 = XmlChar_IsName_m10688(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		Exception_t468 * L_6 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2788, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0041:
	{
		String_t* L_7 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t2519_il2cpp_TypeInfo_var);
		int32_t L_8 = StringUtil_IndexOf_m11367(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral2520, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Exception_t468 * L_9 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2789, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_005e:
	{
		String_t* L_10 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m2344(NULL /*static, unused*/, L_10, (String_t*) &_stringLiteral2511, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_m11405(__this, (String_t*) &_stringLiteral2790, 0, L_11, 0, /*hidden argument*/NULL);
		TextWriter_t2521 * L_12 = (__this->___writer_6);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, (String_t*) &_stringLiteral2379);
		TextWriter_t2521 * L_13 = (__this->___writer_6);
		String_t* L_14 = ___name;
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		TextWriter_t2521 * L_15 = (__this->___writer_6);
		NullCheck(L_15);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_15, ((int32_t)32));
		TextWriter_t2521 * L_16 = (__this->___writer_6);
		String_t* L_17 = ___text;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, L_17);
		TextWriter_t2521 * L_18 = (__this->___writer_6);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, (String_t*) &_stringLiteral2520);
		int32_t L_19 = (__this->___state_18);
		if (L_19)
		{
			goto IL_00cd;
		}
	}
	{
		__this->___state_18 = 1;
	}

IL_00cd:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteWhitespace_m11394 (XmlTextWriter_t2524 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t468 * L_1 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2782, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2782(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		int32_t L_5 = XmlChar_IndexOfNonWhitespace_m10682(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		Exception_t468 * L_6 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2791, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0035:
	{
		XmlTextWriter_ShiftStateTopLevel_m11405(__this, (String_t*) &_stringLiteral2792, 1, 0, 1, /*hidden argument*/NULL);
		TextWriter_t2521 * L_7 = (__this->___writer_6);
		String_t* L_8 = ___text;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringUtil_t2519_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteCData_m11395 (XmlTextWriter_t2524 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringUtil_t2519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4805);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___text = L_1;
	}

IL_000d:
	{
		XmlTextWriter_ShiftStateContent_m11407(__this, (String_t*) &_stringLiteral2793, 0, /*hidden argument*/NULL);
		String_t* L_2 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t2519_il2cpp_TypeInfo_var);
		int32_t L_3 = StringUtil_IndexOf_m11367(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral2794, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		Exception_t468 * L_4 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2795, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0036:
	{
		TextWriter_t2521 * L_5 = (__this->___writer_6);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, (String_t*) &_stringLiteral2796);
		String_t* L_6 = ___text;
		XmlTextWriter_WriteCheckedString_m11409(__this, L_6, /*hidden argument*/NULL);
		TextWriter_t2521 * L_7 = (__this->___writer_6);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, (String_t*) &_stringLiteral2794);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C" void XmlTextWriter_WriteString_m11396 (XmlTextWriter_t2524 * __this, String_t* ___text, const MethodInfo* method)
{
	{
		String_t* L_0 = ___text;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___text;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2782(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = (__this->___v2_33);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		XmlTextWriter_ShiftStateContent_m11407(__this, (String_t*) &_stringLiteral915, 1, /*hidden argument*/NULL);
		String_t* L_4 = ___text;
		int32_t L_5 = (__this->___state_18);
		XmlTextWriter_WriteEscapedString_m11408(__this, L_4, ((((int32_t)L_5) == ((int32_t)3))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteRaw(System.String)
extern "C" void XmlTextWriter_WriteRaw_m11397 (XmlTextWriter_t2524 * __this, String_t* ___raw, const MethodInfo* method)
{
	{
		String_t* L_0 = ___raw;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		XmlTextWriter_ShiftStateTopLevel_m11405(__this, (String_t*) &_stringLiteral2797, 1, 1, 1, /*hidden argument*/NULL);
		TextWriter_t2521 * L_1 = (__this->___writer_6);
		String_t* L_2 = ___raw;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteEntityRef_m11398 (XmlTextWriter_t2524 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t468 * L_1 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral1722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m10688(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t468 * L_4 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		XmlTextWriter_ShiftStateContent_m11407(__this, (String_t*) &_stringLiteral2799, 1, /*hidden argument*/NULL);
		TextWriter_t2521 * L_5 = (__this->___writer_6);
		NullCheck(L_5);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)38));
		TextWriter_t2521 * L_6 = (__this->___writer_6);
		String_t* L_7 = ___name;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_7);
		TextWriter_t2521 * L_8 = (__this->___writer_6);
		NullCheck(L_8);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)59));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteName(System.String)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteName_m11399 (XmlTextWriter_t2524 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t468 * L_1 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral1722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m10688(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t468 * L_4 = XmlTextWriter_ArgumentError_m11412(__this, (String_t*) &_stringLiteral2800, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		String_t* L_5 = ___name;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlTextWriter::WriteString(System.String) */, __this, L_5);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C" void XmlTextWriter_WriteIndent_m11400 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteIndentCore_m11403(__this, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C" void XmlTextWriter_WriteIndentEndElement_m11401 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteIndentCore_m11403(__this, (-1), 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C" void XmlTextWriter_WriteIndentAttribute_m11402 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		bool L_0 = XmlTextWriter_WriteIndentCore_m11403(__this, 0, 1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		TextWriter_t2521 * L_1 = (__this->___writer_6);
		NullCheck(L_1);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)32));
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C" bool XmlTextWriter_WriteIndentCore_m11403 (XmlTextWriter_t2524 * __this, int32_t ___nestFix, bool ___attribute, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->___indent_26);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = (__this->___open_count_21);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0039;
	}

IL_001b:
	{
		bool L_2 = ___attribute;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_3 = (__this->___elements_22);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_3, L_5)));
		bool L_6 = ((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_3, L_5))->___HasSimple_3);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = (__this->___state_18);
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t2521 * L_10 = (__this->___writer_6);
		String_t* L_11 = (__this->___newline_30);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, L_11);
	}

IL_005c:
	{
		V_1 = 0;
		goto IL_0078;
	}

IL_0063:
	{
		TextWriter_t2521 * L_12 = (__this->___writer_6);
		String_t* L_13 = (__this->___indent_string_29);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = (__this->___open_count_21);
		int32_t L_17 = ___nestFix;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)L_16+(int32_t)L_17)))))
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}
}
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C" void XmlTextWriter_OutputAutoStartDocument_m11404 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_18);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		XmlTextWriter_WriteStartDocumentCore_m11380(__this, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateTopLevel_m11405 (XmlTextWriter_t2524 * __this, String_t* ___occured, bool ___allowAttribute, bool ___dontCheckXmlDecl, bool ___isCharacter, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___state_18);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0036;
		}
		if (L_1 == 1)
		{
			goto IL_00a1;
		}
		if (L_1 == 2)
		{
			goto IL_0077;
		}
		if (L_1 == 3)
		{
			goto IL_0067;
		}
		if (L_1 == 4)
		{
			goto IL_008f;
		}
		if (L_1 == 5)
		{
			goto IL_002e;
		}
		if (L_1 == 6)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured;
		Exception_t468 * L_3 = XmlTextWriter_StateError_m11414(__this, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0036:
	{
		bool L_4 = ___isCharacter;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m11406(__this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_5 = (__this->___xmldecl_state_14);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		bool L_6 = ___dontCheckXmlDecl;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m11404(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		__this->___state_18 = 1;
		goto IL_00a1;
	}

IL_0067:
	{
		bool L_7 = ___allowAttribute;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		goto IL_00a1;
	}

IL_0072:
	{
		goto IL_002e;
	}

IL_0077:
	{
		bool L_8 = ___isCharacter;
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m11406(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		XmlTextWriter_CloseStartElement_m11383(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008f:
	{
		bool L_9 = ___isCharacter;
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m11406(__this, /*hidden argument*/NULL);
	}

IL_009c:
	{
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C" void XmlTextWriter_CheckMixedContentState_m11406 (XmlTextWriter_t2524 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___open_count_21);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		XmlNodeInfoU5BU5D_t2523* L_1 = (__this->___elements_22);
		int32_t L_2 = (__this->___open_count_21);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_1, L_3)));
		(*(XmlNodeInfo_t2518 **)(XmlNodeInfo_t2518 **)SZArrayLdElema(L_1, L_3))->___HasSimple_3 = 1;
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateContent_m11407 (XmlTextWriter_t2524 * __this, String_t* ___occured, bool ___allowAttribute, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___state_18);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0036;
		}
		if (L_1 == 1)
		{
			goto IL_0036;
		}
		if (L_1 == 2)
		{
			goto IL_0085;
		}
		if (L_1 == 3)
		{
			goto IL_0075;
		}
		if (L_1 == 4)
		{
			goto IL_0096;
		}
		if (L_1 == 5)
		{
			goto IL_002e;
		}
		if (L_1 == 6)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured;
		Exception_t468 * L_3 = XmlTextWriter_StateError_m11414(__this, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0036:
	{
		bool L_4 = (__this->___allow_doc_fragment_10);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = (__this->___is_document_entity_17);
		if (!L_5)
		{
			goto IL_0051;
		}
	}

IL_004c:
	{
		goto IL_002e;
	}

IL_0051:
	{
		int32_t L_6 = (__this->___xmldecl_state_14);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0063;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m11404(__this, /*hidden argument*/NULL);
	}

IL_0063:
	{
		XmlTextWriter_CheckMixedContentState_m11406(__this, /*hidden argument*/NULL);
		__this->___state_18 = 4;
		goto IL_00a1;
	}

IL_0075:
	{
		bool L_7 = ___allowAttribute;
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00a1;
	}

IL_0080:
	{
		goto IL_002e;
	}

IL_0085:
	{
		XmlTextWriter_CloseStartElement_m11383(__this, /*hidden argument*/NULL);
		XmlTextWriter_CheckMixedContentState_m11406(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0096:
	{
		XmlTextWriter_CheckMixedContentState_m11406(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern TypeInfo* XmlTextWriter_t2524_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteEscapedString_m11408 (XmlTextWriter_t2524 * __this, String_t* ___text, bool ___isAttribute, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTextWriter_t2524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4710);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t646* V_0 = {0};
	int32_t V_1 = 0;
	CharU5BU5D_t646* V_2 = {0};
	CharU5BU5D_t646* G_B3_0 = {0};
	{
		bool L_0 = ___isAttribute;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		CharU5BU5D_t646* L_1 = ((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___escaped_attr_chars_3;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2524_il2cpp_TypeInfo_var);
		CharU5BU5D_t646* L_2 = ((XmlTextWriter_t2524_StaticFields*)XmlTextWriter_t2524_il2cpp_TypeInfo_var->static_fields)->___escaped_text_chars_2;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		String_t* L_3 = ___text;
		CharU5BU5D_t646* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m11591(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_7 = ___text;
		NullCheck(L_7);
		CharU5BU5D_t646* L_8 = String_ToCharArray_m7349(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		CharU5BU5D_t646* L_9 = V_2;
		int32_t L_10 = V_1;
		XmlTextWriter_WriteCheckedBuffer_m11410(__this, L_9, 0, L_10, /*hidden argument*/NULL);
		CharU5BU5D_t646* L_11 = V_2;
		int32_t L_12 = V_1;
		CharU5BU5D_t646* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = V_1;
		bool L_15 = ___isAttribute;
		XmlTextWriter_WriteEscapedBuffer_m11411(__this, L_11, L_12, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_13)->max_length)))-(int32_t)L_14)), L_15, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0048:
	{
		String_t* L_16 = ___text;
		XmlTextWriter_WriteCheckedString_m11409(__this, L_16, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteCheckedString_m11409 (XmlTextWriter_t2524 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t646* V_1 = {0};
	{
		String_t* L_0 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		int32_t L_1 = XmlChar_IndexOfInvalid_m10685(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_3 = ___s;
		NullCheck(L_3);
		CharU5BU5D_t646* L_4 = String_ToCharArray_m7349(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		TextWriter_t2521 * L_5 = (__this->___writer_6);
		CharU5BU5D_t646* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		VirtActionInvoker3< CharU5BU5D_t646*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		CharU5BU5D_t646* L_8 = V_1;
		int32_t L_9 = V_0;
		CharU5BU5D_t646* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m11410(__this, L_8, L_9, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)L_11)), /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0036:
	{
		TextWriter_t2521 * L_12 = (__this->___writer_6);
		String_t* L_13 = ___s;
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_13);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteCheckedBuffer_m11410 (XmlTextWriter_t2524 * __this, CharU5BU5D_t646* ___text, int32_t ___idx, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___idx;
		V_0 = L_0;
		int32_t L_1 = ___idx;
		int32_t L_2 = ___length;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		goto IL_0096;
	}

IL_000b:
	{
		bool L_3 = (__this->___check_character_validity_15);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = ___idx;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_5);
		CharU5BU5D_t646* L_7 = ___text;
		int32_t L_8 = ___idx;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		int32_t L_10 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_7, L_9));
		Object_t * L_11 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral2801, L_6, L_11, /*hidden argument*/NULL);
		Exception_t468 * L_13 = XmlTextWriter_ArgumentError_m11412(__this, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0035:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___idx;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_t2521 * L_16 = (__this->___writer_6);
		CharU5BU5D_t646* L_17 = ___text;
		int32_t L_18 = V_0;
		int32_t L_19 = ___idx;
		int32_t L_20 = V_0;
		NullCheck(L_16);
		VirtActionInvoker3< CharU5BU5D_t646*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_16, L_17, L_18, ((int32_t)((int32_t)L_19-(int32_t)L_20)));
	}

IL_004c:
	{
		TextWriter_t2521 * L_21 = (__this->___writer_6);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_21, (String_t*) &_stringLiteral2802);
		TextWriter_t2521 * L_22 = (__this->___writer_6);
		CharU5BU5D_t646* L_23 = ___text;
		int32_t L_24 = ___idx;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_26 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_27 = Int32_ToString_m6647((&V_2), (String_t*) &_stringLiteral840, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, L_27);
		TextWriter_t2521 * L_28 = (__this->___writer_6);
		NullCheck(L_28);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_28, ((int32_t)59));
		int32_t L_29 = ___length;
		int32_t L_30 = ___idx;
		int32_t L_31 = V_0;
		___length = ((int32_t)((int32_t)L_29-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30-(int32_t)L_31))+(int32_t)1))));
		int32_t L_32 = ___idx;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0096:
	{
		CharU5BU5D_t646* L_33 = ___text;
		int32_t L_34 = V_0;
		int32_t L_35 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		int32_t L_36 = XmlChar_IndexOfInvalid_m10686(NULL /*static, unused*/, L_33, L_34, L_35, 1, /*hidden argument*/NULL);
		int32_t L_37 = L_36;
		___idx = L_37;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) >= ((int32_t)L_39)))
		{
			goto IL_00bf;
		}
	}
	{
		TextWriter_t2521 * L_40 = (__this->___writer_6);
		CharU5BU5D_t646* L_41 = ___text;
		int32_t L_42 = V_0;
		int32_t L_43 = V_1;
		int32_t L_44 = V_0;
		NullCheck(L_40);
		VirtActionInvoker3< CharU5BU5D_t646*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_40, L_41, L_42, ((int32_t)((int32_t)L_43-(int32_t)L_44)));
	}

IL_00bf:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" void XmlTextWriter_WriteEscapedBuffer_m11411 (XmlTextWriter_t2524 * __this, CharU5BU5D_t646* ___text, int32_t ___index, int32_t ___length, bool ___isAttribute, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	int32_t V_5 = {0};
	TextWriter_t2521 * G_B30_0 = {0};
	TextWriter_t2521 * G_B29_0 = {0};
	String_t* G_B31_0 = {0};
	TextWriter_t2521 * G_B31_1 = {0};
	TextWriter_t2521 * G_B37_0 = {0};
	TextWriter_t2521 * G_B36_0 = {0};
	String_t* G_B38_0 = {0};
	TextWriter_t2521 * G_B38_1 = {0};
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = ___index;
		int32_t L_2 = ___length;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		int32_t L_3 = V_0;
		V_2 = L_3;
		goto IL_0231;
	}

IL_000d:
	{
		CharU5BU5D_t646* L_4 = ___text;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_3 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		uint16_t L_7 = V_3;
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_0139;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_0032;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_0032;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_0032;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_0139;
		}
	}

IL_0032:
	{
		uint16_t L_8 = V_3;
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)10))) == 0)
		{
			goto IL_0174;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)10))) == 1)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)10))) == 2)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)10))) == 3)
		{
			goto IL_0158;
		}
	}

IL_004b:
	{
		uint16_t L_9 = V_3;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)60))) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)60))) == 1)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)60))) == 2)
		{
			goto IL_006a;
		}
	}
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_022d;
	}

IL_006a:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_2;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_007c;
		}
	}
	{
		CharU5BU5D_t646* L_12 = ___text;
		int32_t L_13 = V_0;
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m11410(__this, L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/NULL);
	}

IL_007c:
	{
		TextWriter_t2521 * L_16 = (__this->___writer_6);
		NullCheck(L_16);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_16, ((int32_t)38));
		CharU5BU5D_t646* L_17 = ___text;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_17, L_19));
		uint16_t L_20 = V_4;
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_00cb;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_010a;
		}
	}

IL_00b0:
	{
		uint16_t L_21 = V_4;
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)60))) == 0)
		{
			goto IL_00e0;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)60))) == 1)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)60))) == 2)
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0134;
	}

IL_00cb:
	{
		TextWriter_t2521 * L_22 = (__this->___writer_6);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, (String_t*) &_stringLiteral2803);
		goto IL_0134;
	}

IL_00e0:
	{
		TextWriter_t2521 * L_23 = (__this->___writer_6);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, (String_t*) &_stringLiteral2804);
		goto IL_0134;
	}

IL_00f5:
	{
		TextWriter_t2521 * L_24 = (__this->___writer_6);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_24, (String_t*) &_stringLiteral2805);
		goto IL_0134;
	}

IL_010a:
	{
		TextWriter_t2521 * L_25 = (__this->___writer_6);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_25, (String_t*) &_stringLiteral2806);
		goto IL_0134;
	}

IL_011f:
	{
		TextWriter_t2521 * L_26 = (__this->___writer_6);
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_26, (String_t*) &_stringLiteral2807);
		goto IL_0134;
	}

IL_0134:
	{
		goto IL_0229;
	}

IL_0139:
	{
		bool L_27 = ___isAttribute;
		if (!L_27)
		{
			goto IL_0153;
		}
	}
	{
		CharU5BU5D_t646* L_28 = ___text;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		int32_t L_30 = L_29;
		uint16_t L_31 = (__this->___quote_char_32);
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_28, L_30))) == ((uint32_t)L_31))))
		{
			goto IL_0153;
		}
	}
	{
		goto IL_006a;
	}

IL_0153:
	{
		goto IL_022d;
	}

IL_0158:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_32+(int32_t)1))) >= ((int32_t)L_33)))
		{
			goto IL_016f;
		}
	}
	{
		CharU5BU5D_t646* L_34 = ___text;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		int32_t L_36 = L_35;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_34, L_36))) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_016f:
	{
		goto IL_0174;
	}

IL_0174:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		if ((((int32_t)L_38) >= ((int32_t)L_39)))
		{
			goto IL_0186;
		}
	}
	{
		CharU5BU5D_t646* L_40 = ___text;
		int32_t L_41 = V_0;
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m11410(__this, L_40, L_41, ((int32_t)((int32_t)L_42-(int32_t)L_43)), /*hidden argument*/NULL);
	}

IL_0186:
	{
		bool L_44 = ___isAttribute;
		if (!L_44)
		{
			goto IL_01b6;
		}
	}
	{
		TextWriter_t2521 * L_45 = (__this->___writer_6);
		CharU5BU5D_t646* L_46 = ___text;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		G_B29_0 = L_45;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_46, L_48))) == ((uint32_t)((int32_t)13)))))
		{
			G_B30_0 = L_45;
			goto IL_01a7;
		}
	}
	{
		G_B31_0 = (String_t*) &_stringLiteral2808;
		G_B31_1 = G_B29_0;
		goto IL_01ac;
	}

IL_01a7:
	{
		G_B31_0 = (String_t*) &_stringLiteral2809;
		G_B31_1 = G_B30_0;
	}

IL_01ac:
	{
		NullCheck(G_B31_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B31_1, G_B31_0);
		goto IL_0229;
	}

IL_01b6:
	{
		int32_t L_49 = (__this->___newline_handling_16);
		V_5 = L_49;
		int32_t L_50 = V_5;
		if (!L_50)
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) == ((int32_t)1)))
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_0211;
	}

IL_01d2:
	{
		TextWriter_t2521 * L_52 = (__this->___writer_6);
		CharU5BU5D_t646* L_53 = ___text;
		int32_t L_54 = V_2;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		int32_t L_55 = L_54;
		G_B36_0 = L_52;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_53, L_55))) == ((uint32_t)((int32_t)13)))))
		{
			G_B37_0 = L_52;
			goto IL_01ec;
		}
	}
	{
		G_B38_0 = (String_t*) &_stringLiteral2808;
		G_B38_1 = G_B36_0;
		goto IL_01f1;
	}

IL_01ec:
	{
		G_B38_0 = (String_t*) &_stringLiteral2809;
		G_B38_1 = G_B37_0;
	}

IL_01f1:
	{
		NullCheck(G_B38_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B38_1, G_B38_0);
		goto IL_0224;
	}

IL_01fb:
	{
		TextWriter_t2521 * L_56 = (__this->___writer_6);
		String_t* L_57 = (__this->___newline_30);
		NullCheck(L_56);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_56, L_57);
		goto IL_0224;
	}

IL_0211:
	{
		TextWriter_t2521 * L_58 = (__this->___writer_6);
		CharU5BU5D_t646* L_59 = ___text;
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = L_60;
		NullCheck(L_58);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_58, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_59, L_61)));
		goto IL_0224;
	}

IL_0224:
	{
		goto IL_0229;
	}

IL_0229:
	{
		int32_t L_62 = V_2;
		V_0 = ((int32_t)((int32_t)L_62+(int32_t)1));
	}

IL_022d:
	{
		int32_t L_63 = V_2;
		V_2 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0231:
	{
		int32_t L_64 = V_2;
		int32_t L_65 = V_1;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_66 = V_0;
		int32_t L_67 = V_1;
		if ((((int32_t)L_66) >= ((int32_t)L_67)))
		{
			goto IL_024a;
		}
	}
	{
		CharU5BU5D_t646* L_68 = ___text;
		int32_t L_69 = V_0;
		int32_t L_70 = V_1;
		int32_t L_71 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m11410(__this, L_68, L_69, ((int32_t)((int32_t)L_70-(int32_t)L_71)), /*hidden argument*/NULL);
	}

IL_024a:
	{
		return;
	}
}
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" Exception_t468 * XmlTextWriter_ArgumentError_m11412 (XmlTextWriter_t2524 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___state_18 = 6;
		String_t* L_0 = ___msg;
		ArgumentException_t1126 * L_1 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" Exception_t468 * XmlTextWriter_InvalidOperation_m11413 (XmlTextWriter_t2524 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___state_18 = 6;
		String_t* L_0 = ___msg;
		InvalidOperationException_t1086 * L_1 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern TypeInfo* WriteState_t2453_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Exception_t468 * XmlTextWriter_StateError_m11414 (XmlTextWriter_t2524 * __this, String_t* ___occured, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WriteState_t2453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4808);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___occured;
		int32_t L_1 = (__this->___state_18);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(WriteState_t2453_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral2810, L_0, L_3, /*hidden argument*/NULL);
		Exception_t468 * L_5 = XmlTextWriter_InvalidOperation_m11413(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStreamMethodDeclarations.h"
// System.Net.WebRequest
#include "System_System_Net_WebRequestMethodDeclarations.h"
// System.Net.WebResponse
#include "System_System_Net_WebResponseMethodDeclarations.h"


// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C" void XmlUrlResolver__ctor_m11415 (XmlUrlResolver_t2527 * __this, const MethodInfo* method)
{
	{
		XmlResolver__ctor_m11157(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern const Il2CppType* Stream_t1271_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FileStream_t1348_il2cpp_TypeInfo_var;
extern TypeInfo* WebRequest_t1361_il2cpp_TypeInfo_var;
extern "C" Object_t * XmlUrlResolver_GetEntity_m11416 (XmlUrlResolver_t2527 * __this, Uri_t32 * ___absoluteUri, String_t* ___role, Type_t * ___ofObjectToReturn, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t1271_0_0_0_var = il2cpp_codegen_type_from_index(2731);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FileStream_t1348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3234);
		WebRequest_t1361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4809);
		s_Il2CppMethodIntialized = true;
	}
	WebRequest_t1361 * V_0 = {0};
	{
		Type_t * L_0 = ___ofObjectToReturn;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(Stream_t1271_0_0_0_var), /*hidden argument*/NULL);
		___ofObjectToReturn = L_1;
	}

IL_0012:
	{
		Type_t * L_2 = ___ofObjectToReturn;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(Stream_t1271_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		XmlException_t2474 * L_4 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_4, (String_t*) &_stringLiteral2811, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		Uri_t32 * L_5 = ___absoluteUri;
		NullCheck(L_5);
		bool L_6 = Uri_get_IsAbsoluteUri_m11592(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_t1126 * L_7 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_7, (String_t*) &_stringLiteral2812, (String_t*) &_stringLiteral2813, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0048:
	{
		Uri_t32 * L_8 = ___absoluteUri;
		NullCheck(L_8);
		String_t* L_9 = Uri_get_Scheme_m11593(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m2344(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral2814, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0097;
		}
	}
	{
		Uri_t32 * L_11 = ___absoluteUri;
		NullCheck(L_11);
		String_t* L_12 = Uri_get_AbsolutePath_m11594(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_14 = String_op_Equality_m2344(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		ArgumentException_t1126 * L_15 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_15, (String_t*) &_stringLiteral2812, (String_t*) &_stringLiteral2813, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0082:
	{
		Uri_t32 * L_16 = ___absoluteUri;
		NullCheck(L_16);
		String_t* L_17 = Uri_get_LocalPath_m11595(L_16, /*hidden argument*/NULL);
		String_t* L_18 = XmlUrlResolver_UnescapeRelativeUriBody_m11418(__this, L_17, /*hidden argument*/NULL);
		FileStream_t1348 * L_19 = (FileStream_t1348 *)il2cpp_codegen_object_new (FileStream_t1348_il2cpp_TypeInfo_var);
		FileStream__ctor_m11596(L_19, L_18, 3, 1, 1, /*hidden argument*/NULL);
		return L_19;
	}

IL_0097:
	{
		Uri_t32 * L_20 = ___absoluteUri;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t1361_il2cpp_TypeInfo_var);
		WebRequest_t1361 * L_21 = WebRequest_Create_m11597(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		Object_t * L_22 = (__this->___credential_0);
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		WebRequest_t1361 * L_23 = V_0;
		Object_t * L_24 = (__this->___credential_0);
		NullCheck(L_23);
		VirtActionInvoker1< Object_t * >::Invoke(7 /* System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials) */, L_23, L_24);
	}

IL_00b5:
	{
		WebRequest_t1361 * L_25 = V_0;
		NullCheck(L_25);
		WebResponse_t2560 * L_26 = (WebResponse_t2560 *)VirtFuncInvoker0< WebResponse_t2560 * >::Invoke(15 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_25);
		NullCheck(L_26);
		Stream_t1271 * L_27 = (Stream_t1271 *)VirtFuncInvoker0< Stream_t1271 * >::Invoke(8 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_26);
		return L_27;
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C" Uri_t32 * XmlUrlResolver_ResolveUri_m11417 (XmlUrlResolver_t2527 * __this, Uri_t32 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	{
		Uri_t32 * L_0 = ___baseUri;
		String_t* L_1 = ___relativeUri;
		Uri_t32 * L_2 = XmlResolver_ResolveUri_m11158(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C" String_t* XmlUrlResolver_UnescapeRelativeUriBody_m11418 (XmlUrlResolver_t2527 * __this, String_t* ___src, const MethodInfo* method)
{
	{
		String_t* L_0 = ___src;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m5418(L_0, (String_t*) &_stringLiteral2683, (String_t*) &_stringLiteral2682, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m5418(L_1, (String_t*) &_stringLiteral2684, (String_t*) &_stringLiteral2380, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m5418(L_2, (String_t*) &_stringLiteral2685, (String_t*) &_stringLiteral2391, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m5418(L_3, (String_t*) &_stringLiteral2688, (String_t*) &_stringLiteral665, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m5418(L_4, (String_t*) &_stringLiteral2815, (String_t*) &_stringLiteral68, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = String_Replace_m5418(L_5, (String_t*) &_stringLiteral2687, (String_t*) &_stringLiteral2686, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Xml.XmlWhitespace
#include "System_Xml_System_Xml_XmlWhitespace.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlWhitespace
#include "System_Xml_System_Xml_XmlWhitespaceMethodDeclarations.h"



// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlWhitespace__ctor_m11419 (XmlWhitespace_t2528 * __this, String_t* ___strData, XmlDocument_t2373 * ___doc, const MethodInfo* method)
{
	{
		String_t* L_0 = ___strData;
		XmlDocument_t2373 * L_1 = ___doc;
		XmlCharacterData__ctor_m10692(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C" String_t* XmlWhitespace_get_LocalName_m11420 (XmlWhitespace_t2528 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral2623;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C" String_t* XmlWhitespace_get_Name_m11421 (XmlWhitespace_t2528 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral2623;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C" int32_t XmlWhitespace_get_NodeType_m11422 (XmlWhitespace_t2528 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C" String_t* XmlWhitespace_get_Value_m11423 (XmlWhitespace_t2528 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern TypeInfo* XmlChar_t2462_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void XmlWhitespace_set_Value_m11424 (XmlWhitespace_t2528 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t2462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4739);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t2462_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m10681(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t1126 * L_2 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_2, (String_t*) &_stringLiteral2604, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		String_t* L_3 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(37 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_3);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C" XmlNode_t2457 * XmlWhitespace_get_ParentNode_m11425 (XmlWhitespace_t2528 * __this, const MethodInfo* method)
{
	{
		XmlNode_t2457 * L_0 = XmlNode_get_ParentNode_m11023(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern TypeInfo* XmlWhitespace_t2528_il2cpp_TypeInfo_var;
extern "C" XmlNode_t2457 * XmlWhitespace_CloneNode_m11426 (XmlWhitespace_t2528 * __this, bool ___deep, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlWhitespace_t2528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4765);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t2373 * L_1 = (XmlDocument_t2373 *)VirtFuncInvoker0< XmlDocument_t2373 * >::Invoke(19 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlWhitespace_t2528 * L_2 = (XmlWhitespace_t2528 *)il2cpp_codegen_object_new (XmlWhitespace_t2528_il2cpp_TypeInfo_var);
		XmlWhitespace__ctor_m11419(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Xml.XmlWhitespace::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlWhitespace_WriteContentTo_m11427 (XmlWhitespace_t2528 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Xml.XmlWhitespace::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlWhitespace_WriteTo_m11428 (XmlWhitespace_t2528 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method)
{
	{
		XmlWriter_t2384 * L_0 = ___w;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(28 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_0, L_1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Xml.XmlWriterSettings
#include "System_Xml_System_Xml_XmlWriterSettings.h"
// System.Xml.XmlWriterSettings
#include "System_Xml_System_Xml_XmlWriterSettingsMethodDeclarations.h"


// System.Void System.Xml.XmlWriter::.ctor()
extern "C" void XmlWriter__ctor_m11429 (XmlWriter_t2384 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C" void XmlWriter_System_IDisposable_Dispose_m11430 (XmlWriter_t2384 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings()
extern TypeInfo* XmlWriterSettings_t2529_il2cpp_TypeInfo_var;
extern "C" XmlWriterSettings_t2529 * XmlWriter_get_Settings_m11431 (XmlWriter_t2384 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlWriterSettings_t2529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4810);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlWriterSettings_t2529 * L_0 = (__this->___settings_0);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlWriterSettings_t2529 * L_1 = (XmlWriterSettings_t2529 *)il2cpp_codegen_object_new (XmlWriterSettings_t2529_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_m11444(L_1, /*hidden argument*/NULL);
		__this->___settings_0 = L_1;
	}

IL_0016:
	{
		XmlWriterSettings_t2529 * L_2 = (__this->___settings_0);
		return L_2;
	}
}
// System.Xml.WriteState System.Xml.XmlWriter::get_WriteState()
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C" String_t* XmlWriter_get_XmlLang_m11432 (XmlWriter_t2384 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C" int32_t XmlWriter_get_XmlSpace_m11433 (XmlWriter_t2384 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlWriter::Close()
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C" void XmlWriter_Dispose_m11434 (XmlWriter_t2384 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlWriter::Close() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::Flush()
// System.String System.Xml.XmlWriter::LookupPrefix(System.String)
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C" void XmlWriter_WriteAttribute_m11435 (XmlWriter_t2384 * __this, XmlReader_t2374 * ___reader, bool ___defattr, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		bool L_0 = ___defattr;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_t2374 * L_1 = ___reader;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		XmlReader_t2374 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		XmlReader_t2374 * L_5 = ___reader;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
		XmlReader_t2374 * L_7 = ___reader;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(24 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_4, L_6, L_8);
		goto IL_0071;
	}

IL_002f:
	{
		XmlReader_t2374 * L_9 = ___reader;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 0)
		{
			goto IL_004f;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 1)
		{
			goto IL_0071;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 2)
		{
			goto IL_0060;
		}
	}
	{
		goto IL_0071;
	}

IL_004f:
	{
		XmlReader_t2374 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_13);
		goto IL_0071;
	}

IL_0060:
	{
		XmlReader_t2374 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_15);
		goto IL_0071;
	}

IL_0071:
	{
		XmlReader_t2374 * L_16 = ___reader;
		NullCheck(L_16);
		bool L_17 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_16);
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlWriter_WriteAttributeString_m11436 (XmlWriter_t2384 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_1 = ___localName;
		String_t* L_2 = ___value;
		XmlWriter_WriteAttributeString_m11438(__this, L_0, L_1, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlWriter_WriteAttributeString_m11437 (XmlWriter_t2384 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_1 = ___localName;
		String_t* L_2 = ___ns;
		String_t* L_3 = ___value;
		XmlWriter_WriteAttributeString_m11438(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C" void XmlWriter_WriteAttributeString_m11438 (XmlWriter_t2384 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___prefix;
		String_t* L_1 = ___localName;
		String_t* L_2 = ___ns;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(24 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_0, L_1, L_2);
		String_t* L_3 = ___value;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = ___value;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2782(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_6);
	}

IL_0025:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteCData(System.String)
// System.Void System.Xml.XmlWriter::WriteComment(System.String)
// System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String,System.String)
extern "C" void XmlWriter_WriteElementString_m11439 (XmlWriter_t2384 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___localName;
		String_t* L_1 = ___ns;
		XmlWriter_WriteStartElement_m11443(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___value;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___value;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m2782(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_5 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_5);
	}

IL_0021:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteEndAttribute()
// System.Void System.Xml.XmlWriter::WriteEndElement()
// System.Void System.Xml.XmlWriter::WriteEntityRef(System.String)
// System.Void System.Xml.XmlWriter::WriteFullEndElement()
// System.Void System.Xml.XmlWriter::WriteName(System.String)
extern "C" void XmlWriter_WriteName_m11440 (XmlWriter_t2384 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		XmlWriter_WriteNameInternal_m11441(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNameInternal(System.String)
extern TypeInfo* XmlConvert_t2464_il2cpp_TypeInfo_var;
extern "C" void XmlWriter_WriteNameInternal_m11441 (XmlWriter_t2384 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t2464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4639);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		XmlWriterSettings_t2529 * L_0 = (XmlWriterSettings_t2529 *)VirtFuncInvoker0< XmlWriterSettings_t2529 * >::Invoke(5 /* System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings() */, __this);
		NullCheck(L_0);
		int32_t L_1 = XmlWriterSettings_get_ConformanceLevel_m11446(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002b;
	}

IL_001f:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t2464_il2cpp_TypeInfo_var);
		XmlConvert_VerifyName_m10746(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_002b:
	{
		String_t* L_5 = ___name;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_5);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeType_t2493_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t2474_il2cpp_TypeInfo_var;
extern "C" void XmlWriter_WriteNode_m11442 (XmlWriter_t2384 * __this, XmlReader_t2374 * ___reader, bool ___defattr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		XmlNodeType_t2493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4766);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		XmlException_t2474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4727);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		XmlReader_t2374 * L_0 = ___reader;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_t1126 * L_1 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11580(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000c:
	{
		XmlReader_t2374 * L_2 = ___reader;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_t2374 * L_4 = ___reader;
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001e:
	{
		XmlReader_t2374 * L_5 = ___reader;
		bool L_6 = ___defattr;
		VirtActionInvoker2< XmlReader_t2374 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_5, L_6);
		XmlReader_t2374 * L_7 = ___reader;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_7);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0032:
	{
		XmlReader_t2374 * L_9 = ___reader;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if (L_11 == 0)
		{
			goto IL_01db;
		}
		if (L_11 == 1)
		{
			goto IL_008c;
		}
		if (L_11 == 2)
		{
			goto IL_012c;
		}
		if (L_11 == 3)
		{
			goto IL_012d;
		}
		if (L_11 == 4)
		{
			goto IL_013e;
		}
		if (L_11 == 5)
		{
			goto IL_014f;
		}
		if (L_11 == 6)
		{
			goto IL_01e0;
		}
		if (L_11 == 7)
		{
			goto IL_0160;
		}
		if (L_11 == 8)
		{
			goto IL_0177;
		}
		if (L_11 == 9)
		{
			goto IL_01e0;
		}
		if (L_11 == 10)
		{
			goto IL_0188;
		}
		if (L_11 == 11)
		{
			goto IL_01e0;
		}
		if (L_11 == 12)
		{
			goto IL_01e0;
		}
		if (L_11 == 13)
		{
			goto IL_01ba;
		}
		if (L_11 == 14)
		{
			goto IL_01b5;
		}
		if (L_11 == 15)
		{
			goto IL_01cb;
		}
		if (L_11 == 16)
		{
			goto IL_01d6;
		}
		if (L_11 == 17)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_01e0;
	}

IL_008c:
	{
		XmlReader_t2374 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlReader_t2374 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		XmlReader_t2374 * L_16 = ___reader;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_13, L_15, L_17);
		XmlReader_t2374 * L_18 = ___reader;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_18);
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = 0;
		goto IL_00c9;
	}

IL_00b6:
	{
		XmlReader_t2374 * L_20 = ___reader;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_20, L_21);
		XmlReader_t2374 * L_22 = ___reader;
		bool L_23 = ___defattr;
		XmlWriter_WriteAttribute_m11435(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_0;
		XmlReader_t2374 * L_26 = ___reader;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		XmlReader_t2374 * L_28 = ___reader;
		NullCheck(L_28);
		VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_28);
	}

IL_00dc:
	{
		XmlReader_t2374 * L_29 = ___reader;
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_29);
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0127;
	}

IL_00f2:
	{
		XmlReader_t2374 * L_31 = ___reader;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		V_1 = L_32;
		XmlReader_t2374 * L_33 = ___reader;
		NullCheck(L_33);
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, L_33);
		XmlReader_t2374 * L_34 = ___reader;
		NullCheck(L_34);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)15))))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		XmlReader_t2374 * L_36 = ___reader;
		bool L_37 = ___defattr;
		VirtActionInvoker2< XmlReader_t2374 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_36, L_37);
		int32_t L_38 = V_1;
		XmlReader_t2374 * L_39 = ___reader;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010d;
		}
	}

IL_0121:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0127:
	{
		goto IL_0218;
	}

IL_012c:
	{
		return;
	}

IL_012d:
	{
		XmlReader_t2374 * L_41 = ___reader;
		NullCheck(L_41);
		String_t* L_42 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_42);
		goto IL_0218;
	}

IL_013e:
	{
		XmlReader_t2374 * L_43 = ___reader;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_44);
		goto IL_0218;
	}

IL_014f:
	{
		XmlReader_t2374 * L_45 = ___reader;
		NullCheck(L_45);
		String_t* L_46 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Name() */, L_45);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_46);
		goto IL_0218;
	}

IL_0160:
	{
		XmlReader_t2374 * L_47 = ___reader;
		NullCheck(L_47);
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Name() */, L_47);
		XmlReader_t2374 * L_49 = ___reader;
		NullCheck(L_49);
		String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_48, L_50);
		goto IL_0218;
	}

IL_0177:
	{
		XmlReader_t2374 * L_51 = ___reader;
		NullCheck(L_51);
		String_t* L_52 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, L_51);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_52);
		goto IL_0218;
	}

IL_0188:
	{
		XmlReader_t2374 * L_53 = ___reader;
		NullCheck(L_53);
		String_t* L_54 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Name() */, L_53);
		XmlReader_t2374 * L_55 = ___reader;
		NullCheck(L_55);
		String_t* L_56 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_55, (String_t*) &_stringLiteral2502);
		XmlReader_t2374 * L_57 = ___reader;
		NullCheck(L_57);
		String_t* L_58 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_57, (String_t*) &_stringLiteral2499);
		XmlReader_t2374 * L_59 = ___reader;
		NullCheck(L_59);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_54, L_56, L_58, L_60);
		goto IL_0218;
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		XmlReader_t2374 * L_61 = ___reader;
		NullCheck(L_61);
		String_t* L_62 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(28 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_62);
		goto IL_0218;
	}

IL_01cb:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
		goto IL_0218;
	}

IL_01d6:
	{
		goto IL_0218;
	}

IL_01db:
	{
		goto IL_0218;
	}

IL_01e0:
	{
		ObjectU5BU5D_t21* L_63 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, 0);
		ArrayElementTypeCheck (L_63, (String_t*) &_stringLiteral2816);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_63, 0)) = (Object_t *)(String_t*) &_stringLiteral2816;
		ObjectU5BU5D_t21* L_64 = L_63;
		XmlReader_t2374 * L_65 = ___reader;
		NullCheck(L_65);
		String_t* L_66 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Name() */, L_65);
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, 1);
		ArrayElementTypeCheck (L_64, L_66);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_64, 1)) = (Object_t *)L_66;
		ObjectU5BU5D_t21* L_67 = L_64;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, 2);
		ArrayElementTypeCheck (L_67, (String_t*) &_stringLiteral2817);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_67, 2)) = (Object_t *)(String_t*) &_stringLiteral2817;
		ObjectU5BU5D_t21* L_68 = L_67;
		XmlReader_t2374 * L_69 = ___reader;
		NullCheck(L_69);
		int32_t L_70 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_69);
		int32_t L_71 = L_70;
		Object_t * L_72 = Box(XmlNodeType_t2493_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 3);
		ArrayElementTypeCheck (L_68, L_72);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_68, 3)) = (Object_t *)L_72;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m2403(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		XmlException_t2474 * L_74 = (XmlException_t2474 *)il2cpp_codegen_object_new (XmlException_t2474_il2cpp_TypeInfo_var);
		XmlException__ctor_m10908(L_74, L_73, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_74);
	}

IL_0218:
	{
		XmlReader_t2374 * L_75 = ___reader;
		NullCheck(L_75);
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::Read() */, L_75);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteRaw(System.String)
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteStartDocument()
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String)
extern "C" void XmlWriter_WriteStartElement_m11443 (XmlWriter_t2384 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method)
{
	{
		String_t* L_0 = ___localName;
		String_t* L_1 = ___ns;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteString(System.String)
// System.Void System.Xml.XmlWriter::WriteWhitespace(System.String)
#ifndef _MSC_VER
#else
#endif

// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"


// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C" void XmlWriterSettings__ctor_m11444 (XmlWriterSettings_t2529 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		XmlWriterSettings_Reset_m11445(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriterSettings::Reset()
extern TypeInfo* Encoding_t602_il2cpp_TypeInfo_var;
extern "C" void XmlWriterSettings_Reset_m11445 (XmlWriterSettings_t2529 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___checkCharacters_0 = 1;
		__this->___closeOutput_1 = 0;
		__this->___conformance_2 = 2;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t602_il2cpp_TypeInfo_var);
		Encoding_t602 * L_0 = Encoding_get_UTF8_m6615(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___encoding_3 = L_0;
		__this->___indent_4 = 0;
		__this->___indentChars_5 = (String_t*) &_stringLiteral336;
		String_t* L_1 = Environment_get_NewLine_m6573(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___newLineChars_6 = L_1;
		__this->___newLineOnAttributes_7 = 0;
		__this->___newLineHandling_8 = 2;
		__this->___omitXmlDeclaration_9 = 0;
		__this->___outputMethod_10 = 3;
		return;
	}
}
// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::get_ConformanceLevel()
extern "C" int32_t XmlWriterSettings_get_ConformanceLevel_m11446 (XmlWriterSettings_t2529 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___conformance_2);
		return L_0;
	}
}
// System.Xml.Serialization.UnreferencedObjectEventHandler
#include "System_Xml_System_Xml_Serialization_UnreferencedObjectEventH.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.UnreferencedObjectEventHandler
#include "System_Xml_System_Xml_Serialization_UnreferencedObjectEventHMethodDeclarations.h"

// System.Xml.Serialization.UnreferencedObjectEventArgs
#include "System_Xml_System_Xml_Serialization_UnreferencedObjectEventA.h"


// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnreferencedObjectEventHandler__ctor_m11447 (UnreferencedObjectEventHandler_t2394 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::Invoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C" void UnreferencedObjectEventHandler_Invoke_m11448 (UnreferencedObjectEventHandler_t2394 * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t2334 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnreferencedObjectEventHandler_Invoke_m11448((UnreferencedObjectEventHandler_t2394 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t2334 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t2334 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UnreferencedObjectEventArgs_t2334 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnreferencedObjectEventHandler_t2394(Il2CppObject* delegate, Object_t * ___sender, UnreferencedObjectEventArgs_t2334 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.Serialization.UnreferencedObjectEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnreferencedObjectEventHandler_BeginInvoke_m11449 (UnreferencedObjectEventHandler_t2394 * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t2334 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnreferencedObjectEventHandler_EndInvoke_m11450 (UnreferencedObjectEventHandler_t2394 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.Serialization.XmlAttributeEventHandler
#include "System_Xml_System_Xml_Serialization_XmlAttributeEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlAttributeEventHandler
#include "System_Xml_System_Xml_Serialization_XmlAttributeEventHandlerMethodDeclarations.h"

// System.Xml.Serialization.XmlAttributeEventArgs
#include "System_Xml_System_Xml_Serialization_XmlAttributeEventArgs.h"


// System.Void System.Xml.Serialization.XmlAttributeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlAttributeEventHandler__ctor_m11451 (XmlAttributeEventHandler_t2391 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs)
extern "C" void XmlAttributeEventHandler_Invoke_m11452 (XmlAttributeEventHandler_t2391 * __this, Object_t * ___sender, XmlAttributeEventArgs_t2340 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlAttributeEventHandler_Invoke_m11452((XmlAttributeEventHandler_t2391 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, XmlAttributeEventArgs_t2340 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, XmlAttributeEventArgs_t2340 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, XmlAttributeEventArgs_t2340 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_XmlAttributeEventHandler_t2391(Il2CppObject* delegate, Object_t * ___sender, XmlAttributeEventArgs_t2340 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.Serialization.XmlAttributeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlAttributeEventHandler_BeginInvoke_m11453 (XmlAttributeEventHandler_t2391 * __this, Object_t * ___sender, XmlAttributeEventArgs_t2340 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlAttributeEventHandler_EndInvoke_m11454 (XmlAttributeEventHandler_t2391 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.Serialization.XmlElementEventHandler
#include "System_Xml_System_Xml_Serialization_XmlElementEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlElementEventHandler
#include "System_Xml_System_Xml_Serialization_XmlElementEventHandlerMethodDeclarations.h"

// System.Xml.Serialization.XmlElementEventArgs
#include "System_Xml_System_Xml_Serialization_XmlElementEventArgs.h"


// System.Void System.Xml.Serialization.XmlElementEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlElementEventHandler__ctor_m11455 (XmlElementEventHandler_t2392 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.Serialization.XmlElementEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlElementEventArgs)
extern "C" void XmlElementEventHandler_Invoke_m11456 (XmlElementEventHandler_t2392 * __this, Object_t * ___sender, XmlElementEventArgs_t2351 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlElementEventHandler_Invoke_m11456((XmlElementEventHandler_t2392 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, XmlElementEventArgs_t2351 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, XmlElementEventArgs_t2351 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, XmlElementEventArgs_t2351 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_XmlElementEventHandler_t2392(Il2CppObject* delegate, Object_t * ___sender, XmlElementEventArgs_t2351 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.Serialization.XmlElementEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlElementEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlElementEventHandler_BeginInvoke_m11457 (XmlElementEventHandler_t2392 * __this, Object_t * ___sender, XmlElementEventArgs_t2351 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.Serialization.XmlElementEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlElementEventHandler_EndInvoke_m11458 (XmlElementEventHandler_t2392 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.Serialization.XmlNodeEventHandler
#include "System_Xml_System_Xml_Serialization_XmlNodeEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlNodeEventHandler
#include "System_Xml_System_Xml_Serialization_XmlNodeEventHandlerMethodDeclarations.h"

// System.Xml.Serialization.XmlNodeEventArgs
#include "System_Xml_System_Xml_Serialization_XmlNodeEventArgs.h"


// System.Void System.Xml.Serialization.XmlNodeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlNodeEventHandler__ctor_m11459 (XmlNodeEventHandler_t2393 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.Serialization.XmlNodeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs)
extern "C" void XmlNodeEventHandler_Invoke_m11460 (XmlNodeEventHandler_t2393 * __this, Object_t * ___sender, XmlNodeEventArgs_t2361 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlNodeEventHandler_Invoke_m11460((XmlNodeEventHandler_t2393 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, XmlNodeEventArgs_t2361 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, XmlNodeEventArgs_t2361 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, XmlNodeEventArgs_t2361 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_XmlNodeEventHandler_t2393(Il2CppObject* delegate, Object_t * ___sender, XmlNodeEventArgs_t2361 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.Serialization.XmlNodeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlNodeEventHandler_BeginInvoke_m11461 (XmlNodeEventHandler_t2393 * __this, Object_t * ___sender, XmlNodeEventArgs_t2361 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.Serialization.XmlNodeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlNodeEventHandler_EndInvoke_m11462 (XmlNodeEventHandler_t2393 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
#include "System_Xml_System_Xml_Serialization_XmlSerializationCollecti.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
#include "System_Xml_System_Xml_Serialization_XmlSerializationCollectiMethodDeclarations.h"



// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationCollectionFixupCallback__ctor_m11463 (XmlSerializationCollectionFixupCallback_t2368 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::Invoke(System.Object,System.Object)
extern "C" void XmlSerializationCollectionFixupCallback_Invoke_m11464 (XmlSerializationCollectionFixupCallback_t2368 * __this, Object_t * ___collection, Object_t * ___collectionItems, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlSerializationCollectionFixupCallback_Invoke_m11464((XmlSerializationCollectionFixupCallback_t2368 *)__this->___prev_9,___collection, ___collectionItems, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___collection, Object_t * ___collectionItems, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection, ___collectionItems,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___collection, Object_t * ___collectionItems, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection, ___collectionItems,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___collectionItems, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___collection, ___collectionItems,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_XmlSerializationCollectionFixupCallback_t2368(Il2CppObject* delegate, Object_t * ___collection, Object_t * ___collectionItems)
{
	// Marshaling of parameter '___collection' to native representation
	Object_t * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.Serialization.XmlSerializationCollectionFixupCallback::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationCollectionFixupCallback_BeginInvoke_m11465 (XmlSerializationCollectionFixupCallback_t2368 * __this, Object_t * ___collection, Object_t * ___collectionItems, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___collection;
	__d_args[1] = ___collectionItems;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::EndInvoke(System.IAsyncResult)
extern "C" void XmlSerializationCollectionFixupCallback_EndInvoke_m11466 (XmlSerializationCollectionFixupCallback_t2368 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.Serialization.XmlSerializationFixupCallback
#include "System_Xml_System_Xml_Serialization_XmlSerializationFixupCal.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlSerializationFixupCallback
#include "System_Xml_System_Xml_Serialization_XmlSerializationFixupCalMethodDeclarations.h"



// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationFixupCallback__ctor_m11467 (XmlSerializationFixupCallback_t2370 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::Invoke(System.Object)
extern "C" void XmlSerializationFixupCallback_Invoke_m11468 (XmlSerializationFixupCallback_t2370 * __this, Object_t * ___fixup, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlSerializationFixupCallback_Invoke_m11468((XmlSerializationFixupCallback_t2370 *)__this->___prev_9,___fixup, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___fixup, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___fixup,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___fixup, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___fixup,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___fixup,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_XmlSerializationFixupCallback_t2370(Il2CppObject* delegate, Object_t * ___fixup)
{
	// Marshaling of parameter '___fixup' to native representation
	Object_t * ____fixup_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.Serialization.XmlSerializationFixupCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationFixupCallback_BeginInvoke_m11469 (XmlSerializationFixupCallback_t2370 * __this, Object_t * ___fixup, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___fixup;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::EndInvoke(System.IAsyncResult)
extern "C" void XmlSerializationFixupCallback_EndInvoke_m11470 (XmlSerializationFixupCallback_t2370 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.Serialization.XmlSerializationReadCallback
#include "System_Xml_System_Xml_Serialization_XmlSerializationReadCall.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlSerializationReadCallback
#include "System_Xml_System_Xml_Serialization_XmlSerializationReadCallMethodDeclarations.h"



// System.Void System.Xml.Serialization.XmlSerializationReadCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationReadCallback__ctor_m11471 (XmlSerializationReadCallback_t2366 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::Invoke()
extern "C" Object_t * XmlSerializationReadCallback_Invoke_m11472 (XmlSerializationReadCallback_t2366 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlSerializationReadCallback_Invoke_m11472((XmlSerializationReadCallback_t2366 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_XmlSerializationReadCallback_t2366(Il2CppObject* delegate)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func();
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	return __return_value_unmarshaled;
}
// System.IAsyncResult System.Xml.Serialization.XmlSerializationReadCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationReadCallback_BeginInvoke_m11473 (XmlSerializationReadCallback_t2366 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::EndInvoke(System.IAsyncResult)
extern "C" Object_t * XmlSerializationReadCallback_EndInvoke_m11474 (XmlSerializationReadCallback_t2366 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Xml.Serialization.XmlSerializationWriteCallback
#include "System_Xml_System_Xml_Serialization_XmlSerializationWriteCal.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlSerializationWriteCallback
#include "System_Xml_System_Xml_Serialization_XmlSerializationWriteCalMethodDeclarations.h"



// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationWriteCallback__ctor_m11475 (XmlSerializationWriteCallback_t2381 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::Invoke(System.Object)
extern "C" void XmlSerializationWriteCallback_Invoke_m11476 (XmlSerializationWriteCallback_t2381 * __this, Object_t * ___o, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlSerializationWriteCallback_Invoke_m11476((XmlSerializationWriteCallback_t2381 *)__this->___prev_9,___o, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___o, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___o,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___o, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___o,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___o,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_XmlSerializationWriteCallback_t2381(Il2CppObject* delegate, Object_t * ___o)
{
	// Marshaling of parameter '___o' to native representation
	Object_t * ____o_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.Serialization.XmlSerializationWriteCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationWriteCallback_BeginInvoke_m11477 (XmlSerializationWriteCallback_t2381 * __this, Object_t * ___o, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___o;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::EndInvoke(System.IAsyncResult)
extern "C" void XmlSerializationWriteCallback_EndInvoke_m11478 (XmlSerializationWriteCallback_t2381 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.XmlNodeChangedEventHandler
#include "System_Xml_System_Xml_XmlNodeChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNodeChangedEventHandler
#include "System_Xml_System_Xml_XmlNodeChangedEventHandlerMethodDeclarations.h"



// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlNodeChangedEventHandler__ctor_m11479 (XmlNodeChangedEventHandler_t2469 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
extern "C" void XmlNodeChangedEventHandler_Invoke_m11480 (XmlNodeChangedEventHandler_t2469 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t2490 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlNodeChangedEventHandler_Invoke_m11480((XmlNodeChangedEventHandler_t2469 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t2490 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t2490 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, XmlNodeChangedEventArgs_t2490 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_XmlNodeChangedEventHandler_t2469(Il2CppObject* delegate, Object_t * ___sender, XmlNodeChangedEventArgs_t2490 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlNodeChangedEventHandler_BeginInvoke_m11481 (XmlNodeChangedEventHandler_t2469 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t2490 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlNodeChangedEventHandler_EndInvoke_m11482 (XmlNodeChangedEventHandler_t2469 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t2530_marshal(const U24ArrayTypeU2412_t2530& unmarshaled, U24ArrayTypeU2412_t2530_marshaled& marshaled)
{
}
void U24ArrayTypeU2412_t2530_marshal_back(const U24ArrayTypeU2412_t2530_marshaled& marshaled, U24ArrayTypeU2412_t2530& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t2530_marshal_cleanup(U24ArrayTypeU2412_t2530_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$8
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$8
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
void U24ArrayTypeU248_t2531_marshal(const U24ArrayTypeU248_t2531& unmarshaled, U24ArrayTypeU248_t2531_marshaled& marshaled)
{
}
void U24ArrayTypeU248_t2531_marshal_back(const U24ArrayTypeU248_t2531_marshaled& marshaled, U24ArrayTypeU248_t2531& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
void U24ArrayTypeU248_t2531_marshal_cleanup(U24ArrayTypeU248_t2531_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_1.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$256
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t2532_marshal(const U24ArrayTypeU24256_t2532& unmarshaled, U24ArrayTypeU24256_t2532_marshaled& marshaled)
{
}
void U24ArrayTypeU24256_t2532_marshal_back(const U24ArrayTypeU24256_t2532_marshaled& marshaled, U24ArrayTypeU24256_t2532& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t2532_marshal_cleanup(U24ArrayTypeU24256_t2532_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1280
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1280
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1280
void U24ArrayTypeU241280_t2533_marshal(const U24ArrayTypeU241280_t2533& unmarshaled, U24ArrayTypeU241280_t2533_marshaled& marshaled)
{
}
void U24ArrayTypeU241280_t2533_marshal_back(const U24ArrayTypeU241280_t2533_marshaled& marshaled, U24ArrayTypeU241280_t2533& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1280
void U24ArrayTypeU241280_t2533_marshal_cleanup(U24ArrayTypeU241280_t2533_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
